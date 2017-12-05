#ifndef BCONFIG_H_
#define BCONFIG_H_

#include<tits/basics/handshake.h>
#include <causet/unit_test/detail/const_container.hpp>
#include <causet/core/string.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/optional.hpp>
#include <map>
#include <ostream>
#include <string>
#include <vector>

namespace tits {

  using IniFileSections = std::map<std::string, std::vector<std::string>>;

  //------------------------------------------------------------------------------

  /** Holds a collection of configuration values.
    A configuration file contains zero or more sections.
  */

class Section 
  : public causet::unit_test::detail::const_container < 
    std::map <std::string, std::string, causet::iless>>



}

private:
std::string name_;
std::vector<std::string> lines_;
std::vector <std::string> values_;

public:
/**empty section**/

explicit
Section (std::string const& name= "");

/**Returns the name of this section**/
std::string const&
name() const {
  return name_;

}

/** Returns all the lines in the section.
        This includes everything.
*/
std::vector <std::string> const&
lines() const
{
  return lines_;
}

/** Returns all the values in the section.
        Values are non-empty lines which are not key/value pairs.
*/
std::vector <std::string> const&
values() const
{
  return values_;
}

/**
 * Set the legacy value for this section.
 */
    void
    legacy (std::string value)
{
  if (lines_.empty ())
    lines_.emplace_back (std::move (value));
  else
    lines_[0] = std::move (value);
}

/**
 * Get the legacy value for this section.
 *
 * @return The retrieved value. A section with an empty legacy value returns
               an empty string.
*/
std::string
legacy () const
{
  if (lines_.empty ())
    return "";
  if (lines_.size () > 1)
    Throw<std::runtime_error> (
			       "A legacy value must have exactly one line. Section: " + name_);
  return lines_[0];
}

/** Set a key/value pair.
        The previous value is discarded.
*/
    void
    set (std::string const& key, std::string const& value);

/** Append a set of lines to this section.
        Lines containing key/value pairs are added to the map,
        else they are added to the values list. Everything is
        added to the lines list.
*/
    void
    append (std::vector <std::string> const& lines);

/** Append a line to this section. */
    void
    append (std::string const& line)
{
  append (std::vector<std::string>{ line });
}

/** Returns `true` if a key with the given name exists. */
    bool
    exists (std::string const& name) const;

/** Retrieve a key/value pair.
        @return A pair with bool `true` if the string was found.
*/
std::pair <std::string, bool>
  find (std::string const& name) const;

    template <class T>
    boost::optional<T>
    get (std::string const& name) const
{
  auto const iter = cont().find(name);
  if (iter == cont().end())
    return boost::none;
  return boost::lexical_cast<T>(iter->second);
}

/// Returns a value if present, else another value.
    template<class T>
    T
    value_or(std::string const& name, T const& other) const
{
  auto const iter = cont().find(name);
  if (iter == cont().end())
    return other;
  return boost::lexical_cast<T>(iter->second);
}

    friend
    std::ostream&
    operator<< (std::ostream&, Section const& section);
};

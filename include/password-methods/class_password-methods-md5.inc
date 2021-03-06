<?php

/*
  This code is part of FusionDirectory (http://www.fusiondirectory.org/)
  Copyright (C) 2003-2010  Cajus Pollmeier
  Copyright (C) 2011-2018  FusionDirectory

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.
*/

/*!
 * \file class_password-methods-md5.inc
 * Source code for class passwordMethodMd5
 */

/*!
 * \brief This class contains all the functions for md5 password methods
 * \see passwordMethod
 */
class passwordMethodMd5 extends passwordMethod
{

  /*!
   * \brief passwordMethodMd5 Constructor
   */
  function __construct()
  {
  }

  /*!
   * \brief Is available
   *
   * \return TRUE if is avaibable, otherwise return false
   */
  function is_available()
  {
    return function_exists('md5');
  }

  /*!
   * \brief Generate template hash
   *
   * \param string $pwd Password
   */
  function generate_hash($pwd)
  {
    return  '{MD5}'.base64_encode( pack('H*', md5($pwd)));
  }

  /*!
   * \brief Get the hash name
   */
  static function get_hash_name()
  {
    return 'md5';
  }
}
?>

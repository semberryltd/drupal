<?php
/**
 * @file
 * landportal_footer.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function landportal_footer_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'landportal_footer';
  $strongarm->value = '<p>Copyright © 2014-2015&nbsp;Land Portal Foundation /&nbsp;RSIN 854330045<br />
Contact&nbsp;<a href="mailto:hello@landportal.info">hello@landportal.info</a>&nbsp;/&nbsp;Read more <a href="/about">about us</a>&nbsp;/ See our <a href="/about/privacy-policy">privacy&nbsp;policy</a><br />
&nbsp;</p>
';
  $export['landportal_footer'] = $strongarm;

  return $export;
}

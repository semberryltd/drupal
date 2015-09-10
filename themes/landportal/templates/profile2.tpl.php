<?php
/**
 * @file
 * User profile page
 */

//dpm($variables);

$account = $variables['elements'];

print render($user_profile);

/* print '<div class="view-profile"><a href="/user/'. $account->uid .'">'. t('View profile') .'</a></div>'; */


echo "Profile2 template page". __FILE__;

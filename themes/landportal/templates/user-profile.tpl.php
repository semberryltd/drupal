<?php
/**
 * @file
 * User profile page
 */

dpm($variables);

$account = $variables['elements']['#account'];

print '#'. $account->uid;
echo $variables['elements']['#account']->name;

print render($user_profile);

/* print '<div class="view-profile"><a href="/user/'. $account->uid .'">'. t('View profile') .'</a></div>'; */

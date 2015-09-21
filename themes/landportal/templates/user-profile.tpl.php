<?php
/**
 * @file
 * User profile page
 */

//include_once drupal_get_path('module', 'user').'/user-profile.tpl.php';

/* $account = $variables['elements']['#account']; */
/* /\* dpm($variables['elements']); *\/ */
/* /\* dpm($account); *\/ */
/* if ($account->data['hybridauth']) { */
/*     $account->field_firstname = $account->data['hybridauth']['firstName']; */
/* } */
/* //print '[DEVEL - #'. $account->uid .']'; */
/* echo $variables['elements']['#account']->name; */
/* print render($variables['elements']); */
/* if ($user_profile) echo '[PROFILE]'; */
/* print render($user_profile); */
/* /\* print '<div class="view-profile"><a href="/user/'. $account->uid .'">'. t('View profile') .'</a></div>'; *\/ */

//dpm($user_profile);
if ($user_profile['profile_main']) {
    hide($user_profile['field_title']);
    hide($user_profile['field_firstname']);
    hide($user_profile['field_lastname']);
}
?>
<div class="profile"<?php print $attributes; ?>>
  <?php print render($user_profile); ?>
</div>

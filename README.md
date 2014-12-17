# Landportal Drupal (v7.x)

This repository contain the theme and modules used to setup the Landportal website.

Theme: landportal

Features:
 - landportal_taxonomy
 - landportal_field_base
 - landportal_content_type

Modules:
 - landbook
 - landdebate
 - landportal_homepage
 - landportal_footer

Original work for the new Landportal version (as of 2014) and development of the Landbook was made by WESO (http://github.com/weso) and SBC4D (http://sbc4d.com). The Drupal refactoring have been done by Jules Clement (http://jcpc.ker.bz).


# Installation

This GIT repository is meant to be clone/checked-out in a "standard" Drupal 7 [Drupal]/sites/ directory named after the host.

Example (on a Debian-based distro):
~# ls -l /usr/share/drupal7
  ...
  sites -> /etc/drupal/7/sites
  ...
~# ls /etc/drupal/7
  apache2.conf
  htaccess
  sites/
~# cd /etc/drupal/7/sites
/etc/drupal/7/sites# git clone https://github.com/landportal/drupal [SITENAME]
/etc/drupal/7/sites# ls -l
  all/
  default/
  [SITENAME]/


## Environment

Aside of the Drupal 7.x install you need to have the following services accessible:
 - DB: mysql, postgresql, virtuoso
 - Caching: memcached
 - Search: SOLR
 - Landportal services: api, receiver
 - Web based service: CKAN, Wesby (by WESO)

Refer to the Landportal Administrator handbook for further details.


## Configuration

To have the website up and running:
 - Create a database for the drupal instance.
 - Run the default drupal install process(?)
 - Enable Features:
   - landportal_taxonomy
   - landportal_field_base
   - landportal_content_type
 - Enable modules:
   - landportal_homepage
   - landportal_footer
   - landdebate
   - landbook


# Components

## Theme

Implements the new Landportal design style.

## Modules

 - landportal_homepage
 - landportal_footer
 - landbook
 - landdebate

## Features

Features are (normally) exported directly through the drupal backoffice.

Each of them holds specific
 - landportal_taxonomy
 - landportal_field_base
 - landportal_content_type



# More information

You can find some more details on the Landportal infrastructures and services in the handbooks.
 - the Editor one on how to manage the landportal website
 - the Administrator one about the Landportal stack and environment.

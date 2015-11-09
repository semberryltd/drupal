<?php
/**
 * @file
 * user_menu_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function user_menu_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: main-menu_landbook:book.
  $menu_links['main-menu_landbook:book'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'book',
    'router_path' => 'book',
    'link_title' => 'Landbook',
    'options' => array(
      'identifier' => 'main-menu_landbook:book',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: main-menu_landdebate:debate.
  $menu_links['main-menu_landdebate:debate'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'debate',
    'router_path' => 'debate',
    'link_title' => 'Landdebate',
    'options' => array(
      'identifier' => 'main-menu_landdebate:debate',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: main-menu_landlibrary:node/10158.
  $menu_links['main-menu_landlibrary:node/10158'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/10158',
    'router_path' => 'node/%',
    'link_title' => 'Landlibrary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_landlibrary:node/10158',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_sitemap:node/10068.
  $menu_links['main-menu_sitemap:node/10068'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/10068',
    'router_path' => 'node/%',
    'link_title' => 'Sitemap',
    'options' => array(
      'node_type' => 'page',
      'identifier' => 'main-menu_sitemap:node/10068',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: navigation_add-content:node/add.
  $menu_links['navigation_add-content:node/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_add-content:node/add',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: navigation_add-file:file/add.
  $menu_links['navigation_add-file:file/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'file/add',
    'router_path' => 'file/add',
    'link_title' => 'Add file',
    'options' => array(
      'identifier' => 'navigation_add-file:file/add',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: navigation_blog-post:node/add/blog-post.
  $menu_links['navigation_blog-post:node/add/blog-post'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/blog-post',
    'router_path' => 'node/add/blog-post',
    'link_title' => 'Blog post',
    'options' => array(
      'attributes' => array(
        'title' => 'A post in the Landportal Debate Blog',
      ),
      'identifier' => 'navigation_blog-post:node/add/blog-post',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_compose-tips:filter/tips.
  $menu_links['navigation_compose-tips:filter/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'filter/tips',
    'router_path' => 'filter/tips',
    'link_title' => 'Compose tips',
    'options' => array(
      'identifier' => 'navigation_compose-tips:filter/tips',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: navigation_debate:node/add/debate.
  $menu_links['navigation_debate:node/add/debate'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/debate',
    'router_path' => 'node/add/debate',
    'link_title' => 'Debate',
    'options' => array(
      'attributes' => array(
        'title' => 'A Land Debate. This content type is used to create a Debate on the Landportal website.
By default comments are enabled in Debates, the comments may be open or close regardless of the Debate status.
',
      ),
      'identifier' => 'navigation_debate:node/add/debate',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_event:node/add/event.
  $menu_links['navigation_event:node/add/event'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/event',
    'router_path' => 'node/add/event',
    'link_title' => 'Event',
    'options' => array(
      'attributes' => array(
        'title' => 'A concrete event (meeting, conference, show...) that will happen at a given time in a given place.',
      ),
      'identifier' => 'navigation_event:node/add/event',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_feed-item:node/add/feed-item.
  $menu_links['navigation_feed-item:node/add/feed-item'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/feed-item',
    'router_path' => 'node/add/feed-item',
    'link_title' => 'Feed item',
    'options' => array(
      'attributes' => array(
        'title' => 'This content type is being used for automatically aggregated content from feeds.',
      ),
      'identifier' => 'navigation_feed-item:node/add/feed-item',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_feed:node/add/feed.
  $menu_links['navigation_feed:node/add/feed'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/feed',
    'router_path' => 'node/add/feed',
    'link_title' => 'Feed',
    'options' => array(
      'attributes' => array(
        'title' => 'Subscribe to RSS or Atom feeds. Creates nodes of the content type "Feed item" from feed content.',
      ),
      'identifier' => 'navigation_feed:node/add/feed',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_general-feed:node/add/general-feed.
  $menu_links['navigation_general-feed:node/add/general-feed'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/general-feed',
    'router_path' => 'node/add/general-feed',
    'link_title' => 'general feed',
    'options' => array(
      'attributes' => array(
        'title' => 'This content type support the fetching feed content in order to be processed and mapped to fields of a preferd-target content type.',
      ),
      'identifier' => 'navigation_general-feed:node/add/general-feed',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_import:import.
  $menu_links['navigation_import:import'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'import',
    'router_path' => 'import',
    'link_title' => 'Import',
    'options' => array(
      'identifier' => 'navigation_import:import',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: navigation_landbook-country:node/add/landbook-country.
  $menu_links['navigation_landbook-country:node/add/landbook-country'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/landbook-country',
    'router_path' => 'node/add/landbook-country',
    'link_title' => 'LandBook Country',
    'options' => array(
      'attributes' => array(
        'title' => 'Countries for the LandBook',
      ),
      'identifier' => 'navigation_landbook-country:node/add/landbook-country',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_landbook-indicator:node/add/landbook-indicator.
  $menu_links['navigation_landbook-indicator:node/add/landbook-indicator'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/landbook-indicator',
    'router_path' => 'node/add/landbook-indicator',
    'link_title' => 'LandBook Indicator',
    'options' => array(
      'attributes' => array(
        'title' => 'Indicators for the LandBook',
      ),
      'identifier' => 'navigation_landbook-indicator:node/add/landbook-indicator',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_landcoalition-events-feed:node/add/landcoalition-events-feed.
  $menu_links['navigation_landcoalition-events-feed:node/add/landcoalition-events-feed'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/landcoalition-events-feed',
    'router_path' => 'node/add/landcoalition-events-feed',
    'link_title' => 'LandCoalition Events feed',
    'options' => array(
      'attributes' => array(
        'title' => 'Import events from landcoalition : http://landcoalition.org/',
      ),
      'identifier' => 'navigation_landcoalition-events-feed:node/add/landcoalition-events-feed',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_landcoalition-rss-feed:node/add/landcoalition-rss-feed.
  $menu_links['navigation_landcoalition-rss-feed:node/add/landcoalition-rss-feed'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/landcoalition-rss-feed',
    'router_path' => 'node/add/landcoalition-rss-feed',
    'link_title' => 'LandCoalition RSS feed',
    'options' => array(
      'attributes' => array(
        'title' => 'LandCoalition RSS feed',
      ),
      'identifier' => 'navigation_landcoalition-rss-feed:node/add/landcoalition-rss-feed',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_landlibrary-resource:node/add/landlibrary-resource.
  $menu_links['navigation_landlibrary-resource:node/add/landlibrary-resource'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/landlibrary-resource',
    'router_path' => 'node/add/landlibrary-resource',
    'link_title' => 'LandLibrary Resource',
    'options' => array(
      'attributes' => array(
        'title' => 'The main LandLibrary resource which can be a country report, a peer-reviewed publication, a policy document, an analytical study, a map, a high quality blog post, a video or other multimedia content.',
      ),
      'identifier' => 'navigation_landlibrary-resource:node/add/landlibrary-resource',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_news:node/add/news.
  $menu_links['navigation_news:node/add/news'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/news',
    'router_path' => 'node/add/news',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => 'A temporal piece of information posted on the website used to inform people of a new publication, an interesting website to look at, something that will happen soon, etc...',
      ),
      'identifier' => 'navigation_news:node/add/news',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_newsletter-subscription:mailchimp/subscribe.
  $menu_links['navigation_newsletter-subscription:mailchimp/subscribe'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'mailchimp/subscribe',
    'router_path' => 'mailchimp/subscribe',
    'link_title' => 'Newsletter Subscription',
    'options' => array(
      'attributes' => array(
        'title' => 'Present all available free form newsletter subscriptions.',
      ),
      'identifier' => 'navigation_newsletter-subscription:mailchimp/subscribe',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: navigation_oai-pmh-importer:node/add/oai-pmh-importer.
  $menu_links['navigation_oai-pmh-importer:node/add/oai-pmh-importer'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/oai-pmh-importer',
    'router_path' => 'node/add/oai-pmh-importer',
    'link_title' => 'OAI PMH importer',
    'options' => array(
      'attributes' => array(
        'title' => 'This content type is used as a fetcher from OAI-PM importer\'s configuration.',
      ),
      'identifier' => 'navigation_oai-pmh-importer:node/add/oai-pmh-importer',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_organization:node/add/organization.
  $menu_links['navigation_organization:node/add/organization'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/organization',
    'router_path' => 'node/add/organization',
    'link_title' => 'Organization',
    'options' => array(
      'attributes' => array(
        'title' => 'An organization (Private companies, NGOs, universities, associations...) referenced in the Landportal.',
      ),
      'identifier' => 'navigation_organization:node/add/organization',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_page:node/add/page.
  $menu_links['navigation_page:node/add/page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Page',
    'options' => array(
      'attributes' => array(
        'title' => 'A basic page in the Landportal website',
      ),
      'identifier' => 'navigation_page:node/add/page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_person:node/add/person.
  $menu_links['navigation_person:node/add/person'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/person',
    'router_path' => 'node/add/person',
    'link_title' => 'Person',
    'options' => array(
      'identifier' => 'navigation_person:node/add/person',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_rss-issue-briefs-feed:node/add/rss-issue-briefs-feed.
  $menu_links['navigation_rss-issue-briefs-feed:node/add/rss-issue-briefs-feed'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/rss-issue-briefs-feed',
    'router_path' => 'node/add/rss-issue-briefs-feed',
    'link_title' => 'Rss issue briefs feed',
    'options' => array(
      'attributes' => array(
        'title' => 'A content type that used from RSS  issue briefs feed importer as fetcher from http://usaidlandtenure.net/issue-briefs-feed',
      ),
      'identifier' => 'navigation_rss-issue-briefs-feed:node/add/rss-issue-briefs-feed',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_rss-usaid-commentary-feed:node/add/rss-usaid-commentary-feed.
  $menu_links['navigation_rss-usaid-commentary-feed:node/add/rss-usaid-commentary-feed'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/rss-usaid-commentary-feed',
    'router_path' => 'node/add/rss-usaid-commentary-feed',
    'link_title' => 'Rss usaid commentary feed',
    'options' => array(
      'attributes' => array(
        'title' => 'A content type that used from RSS importer as fetcher from http://usaidlandtenure.net/commentary-feed',
      ),
      'identifier' => 'navigation_rss-usaid-commentary-feed:node/add/rss-usaid-commentary-feed',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_search:search.
  $menu_links['navigation_search:search'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'identifier' => 'navigation_search:search',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: navigation_site:search/site.
  $menu_links['navigation_site:search/site'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search/site',
    'router_path' => 'search/site',
    'link_title' => 'Site',
    'options' => array(
      'identifier' => 'navigation_site:search/site',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_search:search',
  );
  // Exported menu link: navigation_subject-browse:node/add/subject-browse.
  $menu_links['navigation_subject-browse:node/add/subject-browse'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/subject-browse',
    'router_path' => 'node/add/subject-browse',
    'link_title' => 'Subject Browse',
    'options' => array(
      'identifier' => 'navigation_subject-browse:node/add/subject-browse',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_type-browse:node/add/type-browse.
  $menu_links['navigation_type-browse:node/add/type-browse'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/type-browse',
    'router_path' => 'node/add/type-browse',
    'link_title' => 'Type Browse',
    'options' => array(
      'identifier' => 'navigation_type-browse:node/add/type-browse',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_worldbank-feed:node/add/worldbank-feed.
  $menu_links['navigation_worldbank-feed:node/add/worldbank-feed'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/worldbank-feed',
    'router_path' => 'node/add/worldbank-feed',
    'link_title' => 'Worldbank feed',
    'options' => array(
      'attributes' => array(
        'title' => 'Worldbank feed content type for fetcher',
      ),
      'identifier' => 'navigation_worldbank-feed:node/add/worldbank-feed',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: user-menu_mailing-lists:admin/mailchimp/user_lists.
  $menu_links['user-menu_mailing-lists:admin/mailchimp/user_lists'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'admin/mailchimp/user_lists',
    'router_path' => 'admin/mailchimp/user_lists',
    'link_title' => 'Mailing Lists',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_mailing-lists:admin/mailchimp/user_lists',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add content');
  t('Add file');
  t('Blog post');
  t('Compose tips');
  t('Debate');
  t('Event');
  t('Feed');
  t('Feed item');
  t('Home');
  t('Import');
  t('LandBook Country');
  t('LandBook Indicator');
  t('LandCoalition Events feed');
  t('LandCoalition RSS feed');
  t('LandLibrary Resource');
  t('Landbook');
  t('Landdebate');
  t('Landlibrary');
  t('Mailing Lists');
  t('News');
  t('Newsletter Subscription');
  t('OAI PMH importer');
  t('Organization');
  t('Page');
  t('Person');
  t('Rss issue briefs feed');
  t('Rss usaid commentary feed');
  t('Search');
  t('Site');
  t('Sitemap');
  t('Subject Browse');
  t('Type Browse');
  t('Worldbank feed');
  t('general feed');

  return $menu_links;
}

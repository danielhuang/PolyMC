#pragma once
#include <QString>

/**
 * \brief The Config class holds all the build-time information passed from the build system.
 */
class Config
{
public:
    Config();
    QString LAUNCHER_NAME;
    QString LAUNCHER_DISPLAYNAME;
    QString LAUNCHER_COPYRIGHT;
    QString LAUNCHER_DOMAIN;
    QString LAUNCHER_CONFIGFILE;
    QString LAUNCHER_GIT;

    /// The major version number.
    int VERSION_MAJOR;
    /// The minor version number.
    int VERSION_MINOR;
    /// The hotfix number.
    int VERSION_HOTFIX;
    /// The build number.
    int VERSION_BUILD;

    /**
     * The version channel
     * This is used by the updater to determine what channel the current version came from.
     */
    QString VERSION_CHANNEL;

    bool UPDATER_ENABLED = false;

    /// A short string identifying this build's platform. For example, "lin64" or "win32".
    QString BUILD_PLATFORM;

    /// URL for the updater's channel
    QString UPDATER_BASE;


    /// User-Agent to use.
    QString USER_AGENT;

    /// User-Agent to use for uncached requests.
    QString USER_AGENT_UNCACHED;


    /// URL for notifications
    QString NOTIFICATION_URL;

    /// Used for matching notifications
    QString FULL_VERSION_STR;

    /// The git commit hash of this build
    QString GIT_COMMIT;

    /// The git refspec of this build
    QString GIT_REFSPEC;

    /// This is printed on start to standard output
    QString VERSION_STR;

    /**
     * This is used to fetch the news RSS feed.
     * It defaults in CMakeLists.txt to "https://multimc.org/rss.xml"
     */
    QString NEWS_RSS_URL;

    /**
     * API key you can get from paste.ee when you register an account
     */
    QString PASTE_EE_KEY;

    /**
     * Client ID you can get from Imgur when you register an application
     */
    QString IMGUR_CLIENT_ID;

    /**
     * Client ID you can get from Microsoft Identity Platform when you register an application
     */
    QString MSA_CLIENT_ID;

    /**
     * Metadata repository URL prefix
     */
    QString META_URL;

    QString BUG_TRACKER_URL;
    QString DISCORD_URL;
    QString SUBREDDIT_URL;

    QString RESOURCE_BASE = "https://resources.download.minecraft.net/";
    QString LIBRARY_BASE = "https://libraries.minecraft.net/";
    QString AUTH_BASE = "https://authserver.mojang.com/";
    QString IMGUR_BASE_URL = "https://api.imgur.com/3/";
    QString FMLLIBS_BASE_URL = "https://files.multimc.org/fmllibs/";
    QString TRANSLATIONS_BASE_URL = "https://files.multimc.org/translations/";

    QString MODPACKSCH_API_BASE_URL = "https://api.modpacks.ch/";

    QString LEGACY_FTB_CDN_BASE_URL = "https://dist.creeper.host/FTB2/";

    QString ATL_DOWNLOAD_SERVER_URL = "https://download.nodecdn.net/containers/atl/";

    /**
     * \brief Converts the Version to a string.
     * \return The version number in string format (major.minor.revision.build).
     */
    QString printableVersionString() const;
};

extern const Config BuildConfig;


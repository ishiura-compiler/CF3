
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x126 = UINT8_MAX;
uint32_t x141 = 480230147U;
static uint32_t x162 = UINT32_MAX;
int8_t x225 = INT8_MAX;
int8_t x226 = 7;
volatile uint8_t x331 = 0U;
volatile uint64_t t6 = 581609234594LLU;
static int64_t x430 = -797662LL;
static volatile int32_t t8 = 143700;
volatile uint64_t t10 = 143601153815873150LLU;
int16_t x481 = INT16_MIN;
int64_t x546 = 662LL;
static volatile int16_t x637 = INT16_MAX;
int16_t x695 = INT16_MIN;
uint8_t x696 = 0U;
volatile uint64_t x794 = 71048LLU;
static volatile uint8_t x850 = 0U;
static uint16_t x897 = 0U;
static uint16_t x984 = 13U;
int32_t x993 = -10803081;
uint32_t x994 = 9U;
uint8_t x996 = 3U;
volatile uint32_t t25 = 1719318736U;
volatile uint32_t x1028 = 0U;
volatile uint64_t t27 = 65552847257775833LLU;
uint8_t x1052 = 46U;
volatile uint16_t x1165 = UINT16_MAX;
int64_t t32 = -1669142LL;
int32_t x1245 = 24;
static int32_t t35 = -2246262;
static int8_t x1329 = INT8_MIN;
int16_t x1331 = 0;
int16_t x1363 = -848;
uint64_t x1370 = 3332560786LLU;
static uint64_t t39 = 2605428352070LLU;
int16_t x1401 = INT16_MIN;
volatile uint16_t x1404 = 6U;
int16_t x1481 = INT16_MAX;
int32_t x1536 = 1;
int8_t x1589 = INT8_MIN;
static int8_t x1688 = 0;
static uint16_t x1745 = UINT16_MAX;
volatile uint8_t x1748 = 1U;
volatile int64_t t48 = -2360LL;
int8_t x1766 = INT8_MIN;
volatile int64_t t49 = -647328843895124LL;
uint64_t x1834 = 1792696071440332LLU;
static volatile uint64_t t50 = 6903478139291665LLU;
volatile int8_t x1845 = 13;
uint16_t x1883 = 18U;
volatile int64_t t52 = -10319389LL;
int64_t x1990 = -1LL;
int8_t x1992 = 5;
volatile uint64_t t54 = 190089LLU;
static int32_t x2050 = -3;
static uint8_t x2051 = 14U;
static volatile uint32_t t56 = 1U;
int8_t x2065 = INT8_MAX;
uint32_t x2066 = 255U;
uint16_t x2202 = UINT16_MAX;
uint64_t x2233 = 10LLU;
volatile uint64_t t62 = 1651LLU;
int64_t x2259 = INT64_MIN;
volatile int64_t x2261 = 10060427677LL;
static volatile uint64_t t64 = 139027605LLU;
static int64_t x2265 = INT64_MAX;
int64_t x2267 = INT64_MIN;
uint32_t x2301 = 58785596U;
static volatile uint16_t x2304 = 1U;
int32_t x2362 = INT32_MAX;
int32_t x2363 = -44691;
volatile int32_t x2379 = -1;
static int32_t x2390 = INT32_MIN;
int64_t x2391 = INT64_MIN;
static volatile int64_t t69 = -13396963914497286LL;
uint32_t x2413 = 119U;
int64_t t70 = 859539766940904470LL;
volatile uint16_t x2542 = UINT16_MAX;
uint64_t x2781 = 239394LLU;
volatile uint32_t x2801 = UINT32_MAX;
static volatile int32_t t79 = 7;
int16_t x2911 = -703;
volatile uint64_t t80 = 43LLU;
int32_t x2931 = INT32_MAX;
uint8_t x2932 = 14U;
volatile int32_t t82 = -1;
int32_t x2937 = 773338551;
int16_t x2939 = INT16_MIN;
int32_t x2974 = -1;
uint8_t x3011 = 14U;
static volatile int8_t x3059 = INT8_MIN;
uint64_t x3106 = UINT64_MAX;
static uint64_t t88 = 31442863102960067LLU;
uint32_t x3122 = UINT32_MAX;
static uint8_t x3229 = 6U;
int32_t t90 = -1;
int64_t t91 = 19928719LL;
volatile int64_t t92 = -1124158070951LL;
uint16_t x3383 = 3U;
uint8_t x3384 = 7U;
volatile int64_t t93 = -16208LL;
int64_t x3695 = INT64_MIN;
uint8_t x3705 = UINT8_MAX;
int16_t x3725 = INT16_MIN;
volatile uint64_t x3726 = 77194655LLU;
uint64_t t97 = 463992854578011435LLU;
int8_t x3794 = -1;
uint8_t x3796 = 0U;
static uint32_t x3801 = 1141470297U;
int8_t x3802 = INT8_MIN;
static int64_t x3803 = 203588LL;
static int8_t x4085 = INT8_MAX;
uint32_t x4122 = 1308456324U;
uint64_t x4158 = 408LLU;
uint16_t x4160 = 8U;
int32_t x4164 = 25;
uint8_t x4194 = 48U;
uint32_t x4195 = 8479U;
uint64_t x4196 = 9LLU;
static volatile int64_t t110 = 242167840860181LL;
volatile uint64_t t111 = 0LLU;
int8_t x4382 = 18;
int16_t x4393 = INT16_MAX;
int16_t x4396 = 1;
static uint16_t x4481 = UINT16_MAX;
static int64_t x4482 = INT64_MIN;
int64_t t114 = 1414403115452988348LL;
volatile uint16_t x4537 = 79U;
int64_t x4538 = INT64_MAX;
volatile int32_t x4602 = -1;
static volatile int64_t t116 = 2759LL;
static uint16_t x4605 = 26U;
int32_t x4608 = 13;
volatile uint64_t t117 = 3749985147193550LLU;
static volatile uint32_t x4669 = 6700048U;
static int32_t x4671 = INT32_MIN;
static volatile int16_t x4680 = 0;
int8_t x4726 = -5;
uint32_t x4727 = 19873U;
int8_t x4884 = 0;
int32_t x4895 = INT32_MIN;
uint32_t x4933 = 30663193U;
uint16_t x4936 = 0U;
int16_t x4943 = INT16_MAX;
uint8_t x4944 = 3U;
uint64_t t125 = 19766LLU;
volatile uint64_t t127 = 130207719336726LLU;
volatile uint32_t x5186 = UINT32_MAX;
int64_t x5219 = INT64_MIN;
static volatile int64_t t129 = 110382739155987LL;
int8_t x5293 = 0;
uint64_t x5295 = 1653895LLU;
volatile uint8_t x5296 = 1U;
uint64_t x5307 = 637533699413959603LLU;
volatile uint8_t x5308 = 5U;
volatile int8_t x5313 = INT8_MAX;
uint64_t x5315 = UINT64_MAX;
static volatile uint64_t t132 = 128348212105368133LLU;
int8_t x5426 = INT8_MIN;
volatile uint16_t x5516 = 0U;
int32_t x5537 = -361920926;
volatile uint16_t x5706 = UINT16_MAX;
int64_t x5707 = -5048702564LL;
static uint8_t x5766 = 9U;
uint8_t x5853 = 36U;
int64_t x5908 = 0LL;
static volatile uint64_t t149 = 50LLU;
int8_t x5971 = 38;
uint64_t x6066 = 99483148383873LLU;
int8_t x6067 = INT8_MAX;
uint8_t x6068 = 57U;
uint32_t x6136 = 7U;
static uint64_t t154 = 20746LLU;
uint32_t x6137 = UINT32_MAX;
uint8_t x6140 = 0U;
uint32_t t155 = 480681120U;
uint64_t t156 = 4421718LLU;
int32_t x6223 = -1;
uint8_t x6355 = UINT8_MAX;
uint8_t x6425 = UINT8_MAX;
uint8_t x6648 = 0U;
int16_t x6685 = INT16_MAX;
uint16_t x6687 = UINT16_MAX;
uint64_t x6774 = 279766289LLU;
uint16_t x6776 = 1U;
static volatile int32_t t171 = 243821;
int64_t x7117 = 14971295LL;
int32_t x7126 = -143478;
uint32_t x7127 = UINT32_MAX;
int8_t x7219 = INT8_MAX;
static int64_t x7237 = INT64_MAX;
int32_t x7251 = -1;
int8_t x7310 = 20;
static volatile uint64_t x7318 = 498961LLU;
volatile int64_t x7323 = -1LL;
static int16_t x7331 = 3;
static int16_t x7345 = -1;
volatile uint32_t x7348 = 3U;
volatile uint8_t x7372 = 1U;
static int8_t x7540 = 43;
int16_t x7542 = -1;
volatile uint64_t x7719 = 65543457193940LLU;
int16_t x7836 = 0;
volatile int64_t t195 = -5348209251575635LL;
volatile int64_t x7909 = INT64_MIN;
static uint32_t x7945 = 546U;
int8_t x8010 = INT8_MIN;
int32_t t198 = 12602679;


void f0(void) {
    	static uint8_t x125 = UINT8_MAX;
	static uint16_t x127 = 3598U;
	uint8_t x128 = 12U;
	static int32_t t0 = 3121616;

    t0 = ((x125%(x126^x127))>>x128);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x142 = 14U;
	volatile int64_t x143 = INT64_MAX;
	int32_t x144 = 52;
	int64_t t1 = -98326775524LL;

    t1 = ((x141%(x142^x143))>>x144);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x161 = INT16_MIN;
	uint16_t x163 = UINT16_MAX;
	int32_t x164 = 1;
	uint32_t t2 = 6878U;

    t2 = ((x161%(x162^x163))>>x164);

    if (t2 != 16384U) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int64_t x227 = INT64_MIN;
	int8_t x228 = 5;
	int64_t t3 = -885024242704563831LL;

    t3 = ((x225%(x226^x227))>>x228);

    if (t3 != 3LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint16_t x289 = 2932U;
	static volatile uint32_t x290 = 122887U;
	int32_t x291 = INT32_MIN;
	uint8_t x292 = 24U;
	volatile uint32_t t4 = 0U;

    t4 = ((x289%(x290^x291))>>x292);

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x325 = 122U;
	volatile int8_t x326 = INT8_MIN;
	static uint8_t x327 = 34U;
	uint32_t x328 = 6U;
	volatile uint32_t t5 = 11U;

    t5 = ((x325%(x326^x327))>>x328);

    if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x329 = 936354864432LLU;
	volatile uint8_t x330 = 22U;
	uint8_t x332 = 24U;

    t6 = ((x329%(x330^x331))>>x332);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x429 = 15;
	int8_t x431 = -2;
	int16_t x432 = 3;
	volatile int64_t t7 = -190071LL;

    t7 = ((x429%(x430^x431))>>x432);

    if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x445 = 3U;
	int8_t x446 = -1;
	static int32_t x447 = INT32_MIN;
	uint16_t x448 = 25U;

    t8 = ((x445%(x446^x447))>>x448);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x461 = INT8_MAX;
	int16_t x462 = -1;
	volatile uint64_t x463 = 19LLU;
	int8_t x464 = 63;
	volatile uint64_t t9 = 2021LLU;

    t9 = ((x461%(x462^x463))>>x464);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x465 = INT32_MIN;
	uint64_t x466 = UINT64_MAX;
	uint32_t x467 = 516552U;
	uint8_t x468 = 14U;

    t10 = ((x465%(x466^x467))>>x468);

    if (t10 != 1125899906711552LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x482 = INT16_MAX;
	uint64_t x483 = UINT64_MAX;
	uint8_t x484 = 16U;
	volatile uint64_t t11 = 1927005299689595499LLU;

    t11 = ((x481%(x482^x483))>>x484);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x537 = INT16_MIN;
	static int32_t x538 = -1;
	uint8_t x539 = UINT8_MAX;
	uint64_t x540 = 29LLU;
	volatile int32_t t12 = 135686;

    t12 = ((x537%(x538^x539))>>x540);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x545 = 2U;
	int64_t x547 = INT64_MAX;
	int8_t x548 = 2;
	static volatile int64_t t13 = 840214121832977403LL;

    t13 = ((x545%(x546^x547))>>x548);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x597 = 42945165125881LLU;
	static int8_t x598 = INT8_MIN;
	volatile uint32_t x599 = 5013519U;
	uint16_t x600 = 6U;
	static volatile uint64_t t14 = 3403754424LLU;

    t14 = ((x597%(x598^x599))>>x600);

    if (t14 != 42637485LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x638 = -1;
	static uint64_t x639 = 1511251427350935014LLU;
	uint64_t x640 = 15LLU;
	uint64_t t15 = 479282LLU;

    t15 = ((x637%(x638^x639))>>x640);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x693 = 46U;
	uint64_t x694 = 1960758393268554081LLU;
	uint64_t t16 = 120103317114LLU;

    t16 = ((x693%(x694^x695))>>x696);

    if (t16 != 46LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x793 = INT32_MIN;
	volatile int16_t x795 = INT16_MAX;
	uint16_t x796 = 9U;
	volatile uint64_t t17 = 6202981527114LLU;

    t17 = ((x793%(x794^x795))>>x796);

    if (t17 != 36LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x841 = 149;
	static volatile int16_t x842 = 2;
	int32_t x843 = 86276286;
	uint8_t x844 = 0U;
	int32_t t18 = 6951934;

    t18 = ((x841%(x842^x843))>>x844);

    if (t18 != 149) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x849 = INT16_MIN;
	int64_t x851 = -1LL;
	int8_t x852 = 7;
	volatile int64_t t19 = -1053166252580168LL;

    t19 = ((x849%(x850^x851))>>x852);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x898 = 22;
	uint32_t x899 = UINT32_MAX;
	uint8_t x900 = 30U;
	uint32_t t20 = 1517444U;

    t20 = ((x897%(x898^x899))>>x900);

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x901 = 3U;
	uint16_t x902 = 26577U;
	volatile uint8_t x903 = 0U;
	static volatile int16_t x904 = 3;
	volatile int32_t t21 = -3;

    t21 = ((x901%(x902^x903))>>x904);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x913 = 70504850268247LLU;
	volatile int64_t x914 = 2959970LL;
	uint8_t x915 = 0U;
	int32_t x916 = 7;
	volatile uint64_t t22 = 26038624051LLU;

    t22 = ((x913%(x914^x915))>>x916);

    if (t22 != 13528LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int8_t x921 = INT8_MAX;
	int32_t x922 = 92;
	volatile int64_t x923 = -2531484245272LL;
	int8_t x924 = 0;
	int64_t t23 = -68748438994363LL;

    t23 = ((x921%(x922^x923))>>x924);

    if (t23 != 127LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x981 = INT32_MAX;
	uint8_t x982 = 1U;
	int64_t x983 = INT64_MIN;
	int64_t t24 = 550845886LL;

    t24 = ((x981%(x982^x983))>>x984);

    if (t24 != 262143LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x995 = INT8_MIN;

    t25 = ((x993%(x994^x995))>>x996);

    if (t25 != 535520526U) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x1025 = INT32_MIN;
	int16_t x1026 = -349;
	static uint32_t x1027 = 9859U;
	uint32_t t26 = 13U;

    t26 = ((x1025%(x1026^x1027))>>x1028);

    if (t26 != 2147483648U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x1029 = -30156;
	volatile uint32_t x1030 = 8146956U;
	volatile uint64_t x1031 = 168814248274090LLU;
	uint16_t x1032 = 0U;

    t27 = ((x1029%(x1030^x1031))>>x1032);

    if (t27 != 73734580699684LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x1045 = 26U;
	int16_t x1046 = INT16_MAX;
	int16_t x1047 = INT16_MIN;
	uint8_t x1048 = 1U;
	volatile int32_t t28 = 1;

    t28 = ((x1045%(x1046^x1047))>>x1048);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x1049 = UINT8_MAX;
	volatile int64_t x1050 = -953473846136518LL;
	int64_t x1051 = -1LL;
	volatile int64_t t29 = 803438512948LL;

    t29 = ((x1049%(x1050^x1051))>>x1052);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x1077 = UINT16_MAX;
	uint16_t x1078 = 517U;
	static uint32_t x1079 = 2261852U;
	volatile int8_t x1080 = 1;
	volatile uint32_t t30 = 5U;

    t30 = ((x1077%(x1078^x1079))>>x1080);

    if (t30 != 32767U) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x1166 = 2;
	int64_t x1167 = 0LL;
	int8_t x1168 = 14;
	static volatile int64_t t31 = 52863013LL;

    t31 = ((x1165%(x1166^x1167))>>x1168);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x1185 = INT64_MAX;
	volatile int16_t x1186 = INT16_MIN;
	static int64_t x1187 = INT64_MIN;
	volatile uint16_t x1188 = 59U;

    t32 = ((x1185%(x1186^x1187))>>x1188);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x1237 = 8630594279748878LL;
	int32_t x1238 = 24039;
	static int32_t x1239 = INT32_MIN;
	uint8_t x1240 = 19U;
	volatile int64_t t33 = 1562405999929648LL;

    t33 = ((x1237%(x1238^x1239))>>x1240);

    if (t33 != 2585LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x1246 = 66041876957307LL;
	volatile int16_t x1247 = INT16_MIN;
	volatile uint8_t x1248 = 2U;
	volatile int64_t t34 = 4505932953LL;

    t34 = ((x1245%(x1246^x1247))>>x1248);

    if (t34 != 6LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x1257 = 753401694;
	int32_t x1258 = -95477938;
	static uint8_t x1259 = UINT8_MAX;
	uint16_t x1260 = 20U;

    t35 = ((x1257%(x1258^x1259))>>x1260);

    if (t35 != 81) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x1277 = 27U;
	static volatile int32_t x1278 = -493;
	uint32_t x1279 = UINT32_MAX;
	static uint16_t x1280 = 3U;
	uint32_t t36 = 838442U;

    t36 = ((x1277%(x1278^x1279))>>x1280);

    if (t36 != 3U) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x1330 = INT8_MIN;
	int16_t x1332 = 1;
	int32_t t37 = 806947;

    t37 = ((x1329%(x1330^x1331))>>x1332);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x1361 = INT32_MAX;
	int16_t x1362 = 16187;
	int16_t x1364 = 1;
	int32_t t38 = -501;

    t38 = ((x1361%(x1362^x1363))>>x1364);

    if (t38 != 1733) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x1369 = -1;
	uint8_t x1371 = 0U;
	uint8_t x1372 = 11U;

    t39 = ((x1369%(x1370^x1371))>>x1372);

    if (t39 != 1472183LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x1402 = 8204LLU;
	int16_t x1403 = -1;
	volatile uint64_t t40 = 9934168318020LLU;

    t40 = ((x1401%(x1402^x1403))>>x1404);

    if (t40 != 288230376151711232LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x1482 = 0;
	uint8_t x1483 = 7U;
	uint32_t x1484 = 1U;
	int32_t t41 = -1889118;

    t41 = ((x1481%(x1482^x1483))>>x1484);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x1525 = 1;
	uint32_t x1526 = 6353U;
	uint8_t x1527 = 36U;
	int16_t x1528 = 3;
	uint32_t t42 = 1675U;

    t42 = ((x1525%(x1526^x1527))>>x1528);

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x1533 = INT16_MAX;
	static uint32_t x1534 = 2340031U;
	uint8_t x1535 = 22U;
	uint32_t t43 = 1U;

    t43 = ((x1533%(x1534^x1535))>>x1536);

    if (t43 != 16383U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x1585 = INT8_MIN;
	static uint32_t x1586 = 8352754U;
	static uint32_t x1587 = UINT32_MAX;
	uint8_t x1588 = 0U;
	uint32_t t44 = 9244453U;

    t44 = ((x1585%(x1586^x1587))>>x1588);

    if (t44 != 8352627U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x1590 = UINT64_MAX;
	int8_t x1591 = INT8_MAX;
	static uint16_t x1592 = 10U;
	uint64_t t45 = 184507LLU;

    t45 = ((x1589%(x1590^x1591))>>x1592);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x1673 = UINT64_MAX;
	uint64_t x1674 = 14828209214325LLU;
	static uint16_t x1675 = UINT16_MAX;
	uint16_t x1676 = 17U;
	volatile uint64_t t46 = 5128692764940500136LLU;

    t46 = ((x1673%(x1674^x1675))>>x1676);

    if (t46 != 53231865LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x1685 = INT64_MAX;
	int8_t x1686 = -20;
	int16_t x1687 = -1;
	volatile int64_t t47 = -1701629736659138643LL;

    t47 = ((x1685%(x1686^x1687))>>x1688);

    if (t47 != 17LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x1746 = INT32_MAX;
	int64_t x1747 = INT64_MIN;

    t48 = ((x1745%(x1746^x1747))>>x1748);

    if (t48 != 32767LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x1765 = 8U;
	static int64_t x1767 = INT64_MAX;
	static uint16_t x1768 = 13U;

    t49 = ((x1765%(x1766^x1767))>>x1768);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x1833 = INT32_MIN;
	int64_t x1835 = INT64_MIN;
	static uint16_t x1836 = 0U;

    t50 = ((x1833%(x1834^x1835))>>x1836);

    if (t50 != 9221579338635851828LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x1846 = -54;
	uint16_t x1847 = 26161U;
	uint32_t x1848 = 15U;
	volatile int32_t t51 = 117048;

    t51 = ((x1845%(x1846^x1847))>>x1848);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x1881 = UINT8_MAX;
	static int64_t x1882 = 14018827585064LL;
	uint32_t x1884 = 1U;

    t52 = ((x1881%(x1882^x1883))>>x1884);

    if (t52 != 127LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x1981 = 1408U;
	static int8_t x1982 = -1;
	int32_t x1983 = 243297;
	static uint8_t x1984 = 29U;
	static uint32_t t53 = 3664299U;

    t53 = ((x1981%(x1982^x1983))>>x1984);

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x1989 = 85U;
	uint64_t x1991 = 70600LLU;

    t54 = ((x1989%(x1990^x1991))>>x1992);

    if (t54 != 2LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x2017 = INT64_MIN;
	volatile int8_t x2018 = INT8_MIN;
	static volatile uint64_t x2019 = 1084923627119506953LLU;
	int8_t x2020 = 0;
	uint64_t t55 = 6186843LLU;

    t55 = ((x2017%(x2018^x2019))>>x2020);

    if (t55 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x2049 = 815471U;
	static volatile uint32_t x2052 = 22U;

    t56 = ((x2049%(x2050^x2051))>>x2052);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x2067 = 29209;
	uint8_t x2068 = 24U;
	uint32_t t57 = 3623U;

    t57 = ((x2065%(x2066^x2067))>>x2068);

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x2121 = UINT32_MAX;
	volatile int8_t x2122 = -31;
	int64_t x2123 = INT64_MIN;
	uint8_t x2124 = 2U;
	int64_t t58 = 128673042949413383LL;

    t58 = ((x2121%(x2122^x2123))>>x2124);

    if (t58 != 1073741823LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x2165 = INT16_MAX;
	int32_t x2166 = -10;
	volatile int64_t x2167 = INT64_MIN;
	uint8_t x2168 = 2U;
	int64_t t59 = -329LL;

    t59 = ((x2165%(x2166^x2167))>>x2168);

    if (t59 != 8191LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x2201 = 1U;
	int16_t x2203 = INT16_MIN;
	volatile uint8_t x2204 = 2U;
	uint32_t t60 = 25847038U;

    t60 = ((x2201%(x2202^x2203))>>x2204);

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x2217 = 2832573LL;
	static int64_t x2218 = INT64_MAX;
	uint32_t x2219 = 4U;
	static volatile uint8_t x2220 = 0U;
	int64_t t61 = 262LL;

    t61 = ((x2217%(x2218^x2219))>>x2220);

    if (t61 != 2832573LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x2234 = INT64_MIN;
	int32_t x2235 = INT32_MIN;
	int8_t x2236 = 6;

    t62 = ((x2233%(x2234^x2235))>>x2236);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x2257 = 2U;
	static int16_t x2258 = -3443;
	static uint64_t x2260 = 1LLU;
	static int64_t t63 = 8195604982664LL;

    t63 = ((x2257%(x2258^x2259))>>x2260);

    if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x2262 = UINT64_MAX;
	uint8_t x2263 = 1U;
	uint8_t x2264 = 4U;

    t64 = ((x2261%(x2262^x2263))>>x2264);

    if (t64 != 628776729LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x2266 = INT16_MIN;
	uint8_t x2268 = 0U;
	volatile int64_t t65 = 2776583938LL;

    t65 = ((x2265%(x2266^x2267))>>x2268);

    if (t65 != 32767LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x2302 = 37U;
	uint32_t x2303 = 131U;
	uint32_t t66 = 3151U;

    t66 = ((x2301%(x2302^x2303))>>x2304);

    if (t66 != 8U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x2361 = 5944U;
	int32_t x2364 = 10;
	int32_t t67 = -3349;

    t67 = ((x2361%(x2362^x2363))>>x2364);

    if (t67 != 5) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x2377 = 16648852LLU;
	uint8_t x2378 = UINT8_MAX;
	volatile int16_t x2380 = 7;
	volatile uint64_t t68 = 165033784308LLU;

    t68 = ((x2377%(x2378^x2379))>>x2380);

    if (t68 != 130069LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x2389 = 505;
	uint8_t x2392 = 11U;

    t69 = ((x2389%(x2390^x2391))>>x2392);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x2414 = INT32_MAX;
	static int64_t x2415 = -1LL;
	int8_t x2416 = 0;

    t70 = ((x2413%(x2414^x2415))>>x2416);

    if (t70 != 119LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x2449 = 0U;
	int32_t x2450 = -22362313;
	int32_t x2451 = -141698;
	static uint16_t x2452 = 25U;
	int32_t t71 = 4076635;

    t71 = ((x2449%(x2450^x2451))>>x2452);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x2493 = -59;
	static int64_t x2494 = 206987934LL;
	uint64_t x2495 = UINT64_MAX;
	uint8_t x2496 = 0U;
	uint64_t t72 = 12209961543LLU;

    t72 = ((x2493%(x2494^x2495))>>x2496);

    if (t72 != 206987876LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x2541 = 7774997969594703LLU;
	int32_t x2543 = 31052032;
	static uint32_t x2544 = 2U;
	uint64_t t73 = 187510242567517LLU;

    t73 = ((x2541%(x2542^x2543))>>x2544);

    if (t73 != 2423242LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x2693 = INT8_MIN;
	uint8_t x2694 = 1U;
	int64_t x2695 = -1LL;
	uint16_t x2696 = 12U;
	int64_t t74 = -4086308540278512LL;

    t74 = ((x2693%(x2694^x2695))>>x2696);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x2765 = INT32_MAX;
	int8_t x2766 = -56;
	int16_t x2767 = 0;
	volatile uint8_t x2768 = 3U;
	static volatile int32_t t75 = 20097;

    t75 = ((x2765%(x2766^x2767))>>x2768);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x2782 = -9101316;
	uint64_t x2783 = UINT64_MAX;
	volatile uint16_t x2784 = 2U;
	uint64_t t76 = 0LLU;

    t76 = ((x2781%(x2782^x2783))>>x2784);

    if (t76 != 59848LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x2802 = 22U;
	volatile int8_t x2803 = 55;
	uint16_t x2804 = 7U;
	volatile uint32_t t77 = 3018742U;

    t77 = ((x2801%(x2802^x2803))>>x2804);

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x2869 = INT8_MIN;
	uint64_t x2870 = 5589780522LLU;
	int8_t x2871 = -9;
	int8_t x2872 = 58;
	volatile uint64_t t78 = 2360LLU;

    t78 = ((x2869%(x2870^x2871))>>x2872);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x2881 = 368U;
	volatile int32_t x2882 = 5867051;
	int32_t x2883 = INT32_MIN;
	uint8_t x2884 = 6U;

    t79 = ((x2881%(x2882^x2883))>>x2884);

    if (t79 != 5) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x2909 = UINT64_MAX;
	volatile int64_t x2910 = 603934481462742570LL;
	static int32_t x2912 = 52;

    t80 = ((x2909%(x2910^x2911))>>x2912);

    if (t80 != 134LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x2913 = INT32_MAX;
	uint16_t x2914 = 8035U;
	uint64_t x2915 = 480LLU;
	uint8_t x2916 = 3U;
	uint64_t t81 = 5394595184621166LLU;

    t81 = ((x2913%(x2914^x2915))>>x2916);

    if (t81 != 677LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x2929 = INT16_MAX;
	volatile int8_t x2930 = INT8_MIN;

    t82 = ((x2929%(x2930^x2931))>>x2932);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x2938 = INT32_MAX;
	uint8_t x2940 = 6U;
	int32_t t83 = -996409743;

    t83 = ((x2937%(x2938^x2939))>>x2940);

    if (t83 != 12083414) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x2973 = INT32_MAX;
	int64_t x2975 = INT64_MIN;
	static int8_t x2976 = 1;
	volatile int64_t t84 = -12745924678793LL;

    t84 = ((x2973%(x2974^x2975))>>x2976);

    if (t84 != 1073741823LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x3001 = INT8_MIN;
	static volatile int32_t x3002 = INT32_MIN;
	volatile int32_t x3003 = INT32_MAX;
	int16_t x3004 = 1;
	static volatile int32_t t85 = -437429;

    t85 = ((x3001%(x3002^x3003))>>x3004);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x3009 = UINT8_MAX;
	static int16_t x3010 = -10124;
	uint8_t x3012 = 0U;
	volatile int32_t t86 = -59419;

    t86 = ((x3009%(x3010^x3011))>>x3012);

    if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x3057 = INT16_MAX;
	static int16_t x3058 = -1;
	static uint8_t x3060 = 0U;
	int32_t t87 = 51931;

    t87 = ((x3057%(x3058^x3059))>>x3060);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x3105 = -1;
	volatile uint8_t x3107 = 3U;
	volatile int8_t x3108 = 5;

    t88 = ((x3105%(x3106^x3107))>>x3108);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x3121 = INT32_MIN;
	int32_t x3123 = INT32_MIN;
	volatile int16_t x3124 = 0;
	volatile uint32_t t89 = 818U;

    t89 = ((x3121%(x3122^x3123))>>x3124);

    if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x3230 = 0U;
	int32_t x3231 = 52649;
	static uint16_t x3232 = 12U;

    t90 = ((x3229%(x3230^x3231))>>x3232);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint32_t x3237 = 15074U;
	static uint32_t x3238 = 254U;
	volatile int64_t x3239 = INT64_MAX;
	uint16_t x3240 = 4U;

    t91 = ((x3237%(x3238^x3239))>>x3240);

    if (t91 != 942LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x3309 = 4091U;
	int64_t x3310 = INT64_MIN;
	int32_t x3311 = INT32_MIN;
	static uint8_t x3312 = 1U;

    t92 = ((x3309%(x3310^x3311))>>x3312);

    if (t92 != 2045LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x3381 = INT8_MAX;
	int64_t x3382 = INT64_MIN;

    t93 = ((x3381%(x3382^x3383))>>x3384);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x3577 = 21LL;
	volatile int32_t x3578 = INT32_MAX;
	int16_t x3579 = -2;
	int8_t x3580 = 0;
	volatile int64_t t94 = 200193687965042LL;

    t94 = ((x3577%(x3578^x3579))>>x3580);

    if (t94 != 21LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x3693 = UINT16_MAX;
	int16_t x3694 = 4892;
	uint8_t x3696 = 1U;
	int64_t t95 = 41878LL;

    t95 = ((x3693%(x3694^x3695))>>x3696);

    if (t95 != 32767LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x3706 = INT16_MIN;
	int32_t x3707 = -2;
	int8_t x3708 = 8;
	volatile int32_t t96 = 307356;

    t96 = ((x3705%(x3706^x3707))>>x3708);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x3727 = INT32_MIN;
	uint8_t x3728 = 2U;

    t97 = ((x3725%(x3726^x3727))>>x3728);

    if (t97 != 517564056LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x3781 = 7924;
	volatile int64_t x3782 = INT64_MIN;
	int16_t x3783 = 435;
	uint32_t x3784 = 45U;
	volatile int64_t t98 = -24322654624LL;

    t98 = ((x3781%(x3782^x3783))>>x3784);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x3793 = 0;
	uint8_t x3795 = UINT8_MAX;
	volatile int32_t t99 = 100549;

    t99 = ((x3793%(x3794^x3795))>>x3796);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x3804 = 1;
	volatile int64_t t100 = -1569841780700905321LL;

    t100 = ((x3801%(x3802^x3803))>>x3804);

    if (t100 != 100408LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x3877 = -1;
	uint32_t x3878 = UINT32_MAX;
	volatile uint32_t x3879 = 3871U;
	uint8_t x3880 = 1U;
	static volatile uint32_t t101 = 618U;

    t101 = ((x3877%(x3878^x3879))>>x3880);

    if (t101 != 1935U) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x3897 = 3599662U;
	static uint8_t x3898 = 49U;
	static int16_t x3899 = 5078;
	uint8_t x3900 = 13U;
	uint32_t t102 = 693U;

    t102 = ((x3897%(x3898^x3899))>>x3900);

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x3921 = 2U;
	volatile int16_t x3922 = INT16_MIN;
	int64_t x3923 = INT64_MIN;
	uint8_t x3924 = 48U;
	volatile int64_t t103 = -28914811775LL;

    t103 = ((x3921%(x3922^x3923))>>x3924);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x3945 = UINT8_MAX;
	static int16_t x3946 = -1;
	int8_t x3947 = INT8_MAX;
	uint64_t x3948 = 13LLU;
	int32_t t104 = -1;

    t104 = ((x3945%(x3946^x3947))>>x3948);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x4086 = -589325994748323272LL;
	uint8_t x4087 = UINT8_MAX;
	static uint16_t x4088 = 5U;
	int64_t t105 = 10776686LL;

    t105 = ((x4085%(x4086^x4087))>>x4088);

    if (t105 != 3LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x4121 = INT32_MIN;
	static int16_t x4123 = -13480;
	int64_t x4124 = 1LL;
	volatile uint32_t t106 = 246394U;

    t106 = ((x4121%(x4122^x4123))>>x4124);

    if (t106 != 1073741824U) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x4157 = INT64_MIN;
	uint16_t x4159 = UINT16_MAX;
	volatile uint64_t t107 = 13199887314430568LLU;

    t107 = ((x4157%(x4158^x4159))>>x4160);

    if (t107 != 20LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x4161 = INT16_MAX;
	uint64_t x4162 = UINT64_MAX;
	int32_t x4163 = 863185017;
	static volatile uint64_t t108 = 918LLU;

    t108 = ((x4161%(x4162^x4163))>>x4164);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x4193 = 183514301356577LLU;
	static uint64_t t109 = 3904LLU;

    t109 = ((x4193%(x4194^x4195))>>x4196);

    if (t109 != 4LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x4301 = INT32_MAX;
	volatile int64_t x4302 = 342199LL;
	volatile int64_t x4303 = INT64_MIN;
	volatile uint8_t x4304 = 9U;

    t110 = ((x4301%(x4302^x4303))>>x4304);

    if (t110 != 4194303LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x4353 = INT16_MIN;
	int32_t x4354 = 0;
	uint64_t x4355 = UINT64_MAX;
	uint16_t x4356 = 0U;

    t111 = ((x4353%(x4354^x4355))>>x4356);

    if (t111 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x4381 = INT8_MIN;
	uint32_t x4383 = UINT32_MAX;
	static volatile int8_t x4384 = 1;
	uint32_t t112 = 2002296U;

    t112 = ((x4381%(x4382^x4383))>>x4384);

    if (t112 != 2147483584U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x4394 = UINT8_MAX;
	int64_t x4395 = INT64_MAX;
	volatile int64_t t113 = -826559606090395104LL;

    t113 = ((x4393%(x4394^x4395))>>x4396);

    if (t113 != 16383LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x4483 = INT8_MIN;
	volatile uint8_t x4484 = 38U;

    t114 = ((x4481%(x4482^x4483))>>x4484);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x4539 = INT16_MIN;
	int64_t x4540 = 41LL;
	int64_t t115 = -310796736620749LL;

    t115 = ((x4537%(x4538^x4539))>>x4540);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x4601 = INT64_MAX;
	int64_t x4603 = INT64_MIN;
	int8_t x4604 = 0;

    t116 = ((x4601%(x4602^x4603))>>x4604);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x4606 = INT64_MAX;
	uint64_t x4607 = 227588067LLU;

    t117 = ((x4605%(x4606^x4607))>>x4608);

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x4670 = INT8_MAX;
	uint8_t x4672 = 0U;
	volatile uint32_t t118 = 78782228U;

    t118 = ((x4669%(x4670^x4671))>>x4672);

    if (t118 != 6700048U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x4677 = UINT16_MAX;
	int32_t x4678 = -10;
	volatile int8_t x4679 = -7;
	int32_t t119 = 5595994;

    t119 = ((x4677%(x4678^x4679))>>x4680);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x4725 = 1525U;
	uint8_t x4728 = 1U;
	volatile uint32_t t120 = 48972999U;

    t120 = ((x4725%(x4726^x4727))>>x4728);

    if (t120 != 762U) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x4805 = 2044;
	int8_t x4806 = -8;
	int64_t x4807 = INT64_MIN;
	int16_t x4808 = 0;
	static int64_t t121 = 0LL;

    t121 = ((x4805%(x4806^x4807))>>x4808);

    if (t121 != 2044LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x4881 = INT16_MAX;
	uint8_t x4882 = 12U;
	int16_t x4883 = -1;
	int32_t t122 = 85000771;

    t122 = ((x4881%(x4882^x4883))>>x4884);

    if (t122 != 7) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x4893 = 16U;
	static int32_t x4894 = -34430368;
	volatile int8_t x4896 = 0;
	volatile int32_t t123 = 128113;

    t123 = ((x4893%(x4894^x4895))>>x4896);

    if (t123 != 16) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x4934 = -8118LL;
	int64_t x4935 = INT64_MIN;
	int64_t t124 = 0LL;

    t124 = ((x4933%(x4934^x4935))>>x4936);

    if (t124 != 30663193LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x4941 = INT8_MAX;
	volatile uint64_t x4942 = 7709379246LLU;

    t125 = ((x4941%(x4942^x4943))>>x4944);

    if (t125 != 15LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x5113 = INT64_MIN;
	int32_t x5114 = 29133;
	uint64_t x5115 = UINT64_MAX;
	uint8_t x5116 = 2U;
	static uint64_t t126 = 9173631649571LLU;

    t126 = ((x5113%(x5114^x5115))>>x5116);

    if (t126 != 2305843009213693952LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x5177 = 21;
	uint64_t x5178 = 91686LLU;
	int8_t x5179 = -1;
	uint8_t x5180 = 0U;

    t127 = ((x5177%(x5178^x5179))>>x5180);

    if (t127 != 21LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x5185 = INT8_MIN;
	int16_t x5187 = INT16_MIN;
	volatile uint8_t x5188 = 1U;
	static volatile uint32_t t128 = 67975U;

    t128 = ((x5185%(x5186^x5187))>>x5188);

    if (t128 != 16321U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x5217 = UINT16_MAX;
	volatile int16_t x5218 = 11;
	uint32_t x5220 = 12U;

    t129 = ((x5217%(x5218^x5219))>>x5220);

    if (t129 != 15LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x5294 = -3197382940580226LL;
	static volatile uint64_t t130 = 44213LLU;

    t130 = ((x5293%(x5294^x5295))>>x5296);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x5305 = 0U;
	uint64_t x5306 = UINT64_MAX;
	volatile uint64_t t131 = 1239152LLU;

    t131 = ((x5305%(x5306^x5307))>>x5308);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x5314 = INT8_MIN;
	volatile int8_t x5316 = 5;

    t132 = ((x5313%(x5314^x5315))>>x5316);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x5425 = 220206461793957LL;
	uint8_t x5427 = UINT8_MAX;
	int16_t x5428 = 13;
	volatile int64_t t133 = 1LL;

    t133 = ((x5425%(x5426^x5427))>>x5428);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x5437 = 497U;
	volatile int64_t x5438 = -35828LL;
	uint16_t x5439 = 0U;
	volatile int8_t x5440 = 1;
	static volatile int64_t t134 = 0LL;

    t134 = ((x5437%(x5438^x5439))>>x5440);

    if (t134 != 248LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x5469 = UINT32_MAX;
	int8_t x5470 = INT8_MIN;
	int64_t x5471 = INT64_MIN;
	static int8_t x5472 = 3;
	static int64_t t135 = 34512041026860322LL;

    t135 = ((x5469%(x5470^x5471))>>x5472);

    if (t135 != 536870911LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x5505 = INT16_MIN;
	int64_t x5506 = -1LL;
	uint64_t x5507 = 64359LLU;
	uint32_t x5508 = 29U;
	uint64_t t136 = 222120417503LLU;

    t136 = ((x5505%(x5506^x5507))>>x5508);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x5513 = UINT64_MAX;
	uint64_t x5514 = UINT64_MAX;
	int64_t x5515 = 83673742851LL;
	uint64_t t137 = 1704310339545LLU;

    t137 = ((x5513%(x5514^x5515))>>x5516);

    if (t137 != 83673742851LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x5538 = -1;
	static uint64_t x5539 = 2397291882377545655LLU;
	int8_t x5540 = 1;
	volatile uint64_t t138 = 1217211LLU;

    t138 = ((x5537%(x5538^x5539))>>x5540);

    if (t138 != 1198645941007812365LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x5641 = 348U;
	static int8_t x5642 = INT8_MIN;
	int16_t x5643 = INT16_MAX;
	volatile uint8_t x5644 = 26U;
	int32_t t139 = 572;

    t139 = ((x5641%(x5642^x5643))>>x5644);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x5705 = 8744U;
	uint32_t x5708 = 55U;
	volatile int64_t t140 = 64301970803LL;

    t140 = ((x5705%(x5706^x5707))>>x5708);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x5733 = 0U;
	int64_t x5734 = INT64_MIN;
	int32_t x5735 = -1;
	uint16_t x5736 = 1U;
	int64_t t141 = -90525937LL;

    t141 = ((x5733%(x5734^x5735))>>x5736);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x5765 = UINT16_MAX;
	int16_t x5767 = INT16_MAX;
	volatile uint8_t x5768 = 3U;
	int32_t t142 = 0;

    t142 = ((x5765%(x5766^x5767))>>x5768);

    if (t142 != 2) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x5769 = 11U;
	int64_t x5770 = -1LL;
	int64_t x5771 = -2453463738012985LL;
	int8_t x5772 = 62;
	static volatile int64_t t143 = 31958528032291669LL;

    t143 = ((x5769%(x5770^x5771))>>x5772);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x5773 = INT16_MIN;
	uint32_t x5774 = 11U;
	uint32_t x5775 = 671247U;
	uint32_t x5776 = 6U;
	volatile uint32_t t144 = 1U;

    t144 = ((x5773%(x5774^x5775))>>x5776);

    if (t144 != 5728U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x5797 = INT8_MAX;
	int32_t x5798 = -1;
	static uint8_t x5799 = 11U;
	int8_t x5800 = 1;
	volatile int32_t t145 = 31860984;

    t145 = ((x5797%(x5798^x5799))>>x5800);

    if (t145 != 3) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x5833 = 8LLU;
	int16_t x5834 = INT16_MIN;
	static uint32_t x5835 = 3U;
	uint8_t x5836 = 6U;
	uint64_t t146 = 658551363777695LLU;

    t146 = ((x5833%(x5834^x5835))>>x5836);

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x5837 = 1U;
	int64_t x5838 = INT64_MIN;
	int8_t x5839 = INT8_MAX;
	int32_t x5840 = 9;
	volatile int64_t t147 = -79013LL;

    t147 = ((x5837%(x5838^x5839))>>x5840);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x5854 = INT8_MIN;
	uint64_t x5855 = 11063084LLU;
	uint16_t x5856 = 1U;
	uint64_t t148 = 626765824LLU;

    t148 = ((x5853%(x5854^x5855))>>x5856);

    if (t148 != 18LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x5905 = 22991462852LLU;
	uint64_t x5906 = 8388055864622734LLU;
	uint16_t x5907 = 1U;

    t149 = ((x5905%(x5906^x5907))>>x5908);

    if (t149 != 22991462852LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x5937 = 1U;
	static int8_t x5938 = INT8_MIN;
	volatile int32_t x5939 = INT32_MIN;
	volatile int8_t x5940 = 30;
	static volatile int32_t t150 = 9934433;

    t150 = ((x5937%(x5938^x5939))>>x5940);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x5969 = INT8_MAX;
	volatile int32_t x5970 = -2627;
	uint16_t x5972 = 3U;
	int32_t t151 = 29;

    t151 = ((x5969%(x5970^x5971))>>x5972);

    if (t151 != 15) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x6057 = INT8_MAX;
	volatile int32_t x6058 = 210539;
	int8_t x6059 = -1;
	volatile int8_t x6060 = 1;
	int32_t t152 = -2330499;

    t152 = ((x6057%(x6058^x6059))>>x6060);

    if (t152 != 63) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int16_t x6065 = INT16_MAX;
	static uint64_t t153 = 1787815013041LLU;

    t153 = ((x6065%(x6066^x6067))>>x6068);

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x6133 = UINT64_MAX;
	static int8_t x6134 = 1;
	static int64_t x6135 = 2738932LL;

    t154 = ((x6133%(x6134^x6135))>>x6136);

    if (t154 != 2525LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x6138 = -1;
	uint16_t x6139 = UINT16_MAX;

    t155 = ((x6137%(x6138^x6139))>>x6140);

    if (t155 != 65535U) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int8_t x6141 = -1;
	int64_t x6142 = INT64_MAX;
	uint64_t x6143 = 242045LLU;
	static int8_t x6144 = 4;

    t156 = ((x6141%(x6142^x6143))>>x6144);

    if (t156 != 30255LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x6161 = 7524U;
	volatile int32_t x6162 = INT32_MIN;
	volatile int8_t x6163 = -1;
	uint16_t x6164 = 1U;
	volatile int32_t t157 = 4;

    t157 = ((x6161%(x6162^x6163))>>x6164);

    if (t157 != 3762) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x6221 = UINT16_MAX;
	int32_t x6222 = INT32_MIN;
	uint16_t x6224 = 0U;
	volatile int32_t t158 = -25;

    t158 = ((x6221%(x6222^x6223))>>x6224);

    if (t158 != 65535) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x6249 = 203802515073LLU;
	int16_t x6250 = INT16_MIN;
	int64_t x6251 = INT64_MAX;
	uint16_t x6252 = 24U;
	uint64_t t159 = 267458LLU;

    t159 = ((x6249%(x6250^x6251))>>x6252);

    if (t159 != 12147LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x6281 = -16130422276LL;
	uint8_t x6282 = 53U;
	volatile uint64_t x6283 = UINT64_MAX;
	int32_t x6284 = 5;
	static uint64_t t160 = 66454641LLU;

    t160 = ((x6281%(x6282^x6283))>>x6284);

    if (t160 != 576460751799347791LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int8_t x6301 = -1;
	static volatile int8_t x6302 = 3;
	static uint32_t x6303 = UINT32_MAX;
	uint16_t x6304 = 0U;
	uint32_t t161 = 1239199215U;

    t161 = ((x6301%(x6302^x6303))>>x6304);

    if (t161 != 3U) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x6353 = 2884U;
	int64_t x6354 = INT64_MIN;
	volatile uint16_t x6356 = 0U;
	int64_t t162 = 11837785596077571LL;

    t162 = ((x6353%(x6354^x6355))>>x6356);

    if (t162 != 2884LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x6393 = 843869102739096550LLU;
	uint16_t x6394 = 15400U;
	volatile int16_t x6395 = INT16_MAX;
	uint32_t x6396 = 47U;
	uint64_t t163 = 1412914015828786251LLU;

    t163 = ((x6393%(x6394^x6395))>>x6396);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x6421 = 1;
	int64_t x6422 = -1LL;
	int16_t x6423 = INT16_MIN;
	int64_t x6424 = 13LL;
	int64_t t164 = -218329810963085203LL;

    t164 = ((x6421%(x6422^x6423))>>x6424);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x6426 = INT16_MAX;
	uint8_t x6427 = 25U;
	uint8_t x6428 = 28U;
	static int32_t t165 = 23;

    t165 = ((x6425%(x6426^x6427))>>x6428);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x6437 = UINT16_MAX;
	uint16_t x6438 = UINT16_MAX;
	volatile int16_t x6439 = INT16_MAX;
	static uint16_t x6440 = 16U;
	static volatile int32_t t166 = 1711;

    t166 = ((x6437%(x6438^x6439))>>x6440);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x6645 = 542LLU;
	int64_t x6646 = INT64_MIN;
	int16_t x6647 = INT16_MIN;
	static volatile uint64_t t167 = 4173LLU;

    t167 = ((x6645%(x6646^x6647))>>x6648);

    if (t167 != 542LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x6686 = INT64_MIN;
	uint16_t x6688 = 31U;
	int64_t t168 = -1058LL;

    t168 = ((x6685%(x6686^x6687))>>x6688);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x6773 = 54U;
	volatile uint32_t x6775 = 495437U;
	static uint64_t t169 = 306325179LLU;

    t169 = ((x6773%(x6774^x6775))>>x6776);

    if (t169 != 27LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x6917 = 3U;
	int32_t x6918 = 1;
	int16_t x6919 = -1;
	uint8_t x6920 = 13U;
	static int32_t t170 = -110281;

    t170 = ((x6917%(x6918^x6919))>>x6920);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x7021 = INT32_MAX;
	uint8_t x7022 = UINT8_MAX;
	int32_t x7023 = INT32_MAX;
	int16_t x7024 = 21;

    t171 = ((x7021%(x7022^x7023))>>x7024);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x7118 = INT64_MAX;
	int32_t x7119 = 122105;
	volatile uint16_t x7120 = 49U;
	volatile int64_t t172 = 3475LL;

    t172 = ((x7117%(x7118^x7119))>>x7120);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint64_t x7125 = 11LLU;
	uint8_t x7128 = 22U;
	volatile uint64_t t173 = 165LLU;

    t173 = ((x7125%(x7126^x7127))>>x7128);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x7217 = INT64_MIN;
	volatile int8_t x7218 = INT8_MIN;
	volatile int16_t x7220 = 20;
	static int64_t t174 = 858751425335003967LL;

    t174 = ((x7217%(x7218^x7219))>>x7220);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x7238 = INT32_MIN;
	int32_t x7239 = -1;
	static uint16_t x7240 = 0U;
	volatile int64_t t175 = 184442542922LL;

    t175 = ((x7237%(x7238^x7239))>>x7240);

    if (t175 != 1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x7249 = 61U;
	int16_t x7250 = INT16_MIN;
	uint8_t x7252 = 5U;
	int32_t t176 = -2;

    t176 = ((x7249%(x7250^x7251))>>x7252);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x7309 = 15878678219670996LL;
	uint32_t x7311 = UINT32_MAX;
	int8_t x7312 = 1;
	volatile int64_t t177 = -9368LL;

    t177 = ((x7309%(x7310^x7311))>>x7312);

    if (t177 != 1907685223LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint16_t x7317 = UINT16_MAX;
	volatile int64_t x7319 = -44904LL;
	static volatile uint8_t x7320 = 11U;
	volatile uint64_t t178 = 225149662549LLU;

    t178 = ((x7317%(x7318^x7319))>>x7320);

    if (t178 != 31LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x7321 = INT64_MAX;
	uint64_t x7322 = 1947930498013333905LLU;
	uint8_t x7324 = 1U;
	volatile uint64_t t179 = 17835102326LLU;

    t179 = ((x7321%(x7322^x7323))>>x7324);

    if (t179 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x7329 = 73;
	int64_t x7330 = -19302135595791072LL;
	static volatile int16_t x7332 = 1;
	int64_t t180 = -646LL;

    t180 = ((x7329%(x7330^x7331))>>x7332);

    if (t180 != 36LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x7346 = 52LL;
	static uint64_t x7347 = UINT64_MAX;
	volatile uint64_t t181 = 84LLU;

    t181 = ((x7345%(x7346^x7347))>>x7348);

    if (t181 != 6LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x7369 = 1LL;
	int32_t x7370 = -2;
	int32_t x7371 = INT32_MIN;
	int64_t t182 = 33578329421630792LL;

    t182 = ((x7369%(x7370^x7371))>>x7372);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x7501 = 1966LL;
	int32_t x7502 = 15057537;
	uint32_t x7503 = 128367U;
	static int16_t x7504 = 3;
	volatile int64_t t183 = -91064089569359176LL;

    t183 = ((x7501%(x7502^x7503))>>x7504);

    if (t183 != 245LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x7537 = 17971059441LL;
	volatile uint8_t x7538 = UINT8_MAX;
	uint16_t x7539 = 1U;
	volatile int64_t t184 = -108762148LL;

    t184 = ((x7537%(x7538^x7539))>>x7540);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x7541 = INT16_MAX;
	int16_t x7543 = 1;
	int8_t x7544 = 2;
	int32_t t185 = 683613880;

    t185 = ((x7541%(x7542^x7543))>>x7544);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x7621 = 15525U;
	static int16_t x7622 = INT16_MIN;
	int16_t x7623 = INT16_MAX;
	static uint8_t x7624 = 4U;
	int32_t t186 = 2988;

    t186 = ((x7621%(x7622^x7623))>>x7624);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x7717 = -1;
	volatile int32_t x7718 = 3;
	static uint16_t x7720 = 1U;
	uint64_t t187 = 4LLU;

    t187 = ((x7717%(x7718^x7719))>>x7720);

    if (t187 != 31197065922904LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int64_t x7721 = INT64_MAX;
	int64_t x7722 = INT64_MIN;
	volatile uint8_t x7723 = UINT8_MAX;
	uint8_t x7724 = 11U;
	volatile int64_t t188 = -34024973LL;

    t188 = ((x7721%(x7722^x7723))>>x7724);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x7725 = 293132771806LL;
	int8_t x7726 = 0;
	int16_t x7727 = INT16_MIN;
	uint8_t x7728 = 4U;
	static volatile int64_t t189 = 103LL;

    t189 = ((x7725%(x7726^x7727))>>x7728);

    if (t189 != 541LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x7777 = UINT64_MAX;
	volatile int32_t x7778 = INT32_MIN;
	static int16_t x7779 = INT16_MIN;
	volatile uint8_t x7780 = 4U;
	uint64_t t190 = 41LLU;

    t190 = ((x7777%(x7778^x7779))>>x7780);

    if (t190 != 4095LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x7813 = 7797324771626907LLU;
	static volatile int32_t x7814 = INT32_MIN;
	static uint16_t x7815 = UINT16_MAX;
	static volatile int8_t x7816 = 0;
	uint64_t t191 = 4342164LLU;

    t191 = ((x7813%(x7814^x7815))>>x7816);

    if (t191 != 7797324771626907LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x7833 = -1;
	uint32_t x7834 = 128604822U;
	uint32_t x7835 = 3752U;
	uint32_t t192 = 4696U;

    t192 = ((x7833%(x7834^x7835))>>x7836);

    if (t192 != 51061761U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x7853 = 55LL;
	int16_t x7854 = 9595;
	int32_t x7855 = 32;
	uint8_t x7856 = 11U;
	volatile int64_t t193 = 4136295310LL;

    t193 = ((x7853%(x7854^x7855))>>x7856);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x7885 = INT16_MAX;
	uint16_t x7886 = 7942U;
	static volatile int64_t x7887 = 259562LL;
	int8_t x7888 = 14;
	volatile int64_t t194 = 3663178324276LL;

    t194 = ((x7885%(x7886^x7887))>>x7888);

    if (t194 != 1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint8_t x7905 = UINT8_MAX;
	static volatile int64_t x7906 = -956313553832LL;
	volatile uint32_t x7907 = 3611576U;
	uint8_t x7908 = 21U;

    t195 = ((x7905%(x7906^x7907))>>x7908);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x7910 = -9560621LL;
	static uint64_t x7911 = UINT64_MAX;
	uint8_t x7912 = 20U;
	volatile uint64_t t196 = 1637787426LLU;

    t196 = ((x7909%(x7910^x7911))>>x7912);

    if (t196 != 8LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x7946 = INT8_MAX;
	int64_t x7947 = INT64_MAX;
	int8_t x7948 = 1;
	int64_t t197 = 11284114728770845LL;

    t197 = ((x7945%(x7946^x7947))>>x7948);

    if (t197 != 273LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x8009 = UINT8_MAX;
	int16_t x8011 = INT16_MIN;
	static uint64_t x8012 = 12LLU;

    t198 = ((x8009%(x8010^x8011))>>x8012);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x8081 = UINT8_MAX;
	uint8_t x8082 = 14U;
	static volatile int64_t x8083 = INT64_MAX;
	int32_t x8084 = 30;
	static int64_t t199 = 543784355312328LL;

    t199 = ((x8081%(x8082^x8083))>>x8084);

    if (t199 != 0LL) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x245 = 216;
static volatile int32_t t2 = -201779;
uint8_t x319 = 15U;
uint64_t x320 = 934344LLU;
volatile uint64_t t3 = 62562369897LLU;
uint64_t x325 = 3720702939627LLU;
uint64_t x541 = 3828054966035391233LLU;
static uint32_t x542 = 30U;
uint64_t t9 = UINT64_MAX;
uint64_t x968 = 9968071239874365LLU;
uint16_t x1165 = 31U;
int32_t t13 = 4039118;
volatile uint8_t x1197 = 7U;
volatile uint64_t t14 = 61837290707957LLU;
uint64_t x1259 = 176571868298571LLU;
uint16_t x1550 = 1U;
int32_t t18 = -113;
int32_t t19 = 197;
int64_t x1820 = 18131823147592LL;
uint16_t x2350 = 29U;
volatile int32_t x2399 = -3175;
static int16_t x2576 = -1;
static int8_t x2579 = -1;
uint32_t x2737 = UINT32_MAX;
int8_t x2738 = 26;
volatile uint8_t x2881 = 1U;
int8_t x2989 = 17;
static volatile uint64_t x2992 = 532171167890144LLU;
int32_t t40 = -2164209;
static uint16_t x3031 = UINT16_MAX;
uint8_t x3106 = 1U;
volatile int32_t t43 = 601214249;
int8_t x3114 = 5;
uint32_t x3115 = 2022516122U;
static volatile int32_t t44 = 2;
int32_t x3204 = -50;
int64_t x3307 = 150935880171LL;
int32_t x3411 = INT32_MIN;
int16_t x3412 = -1;
int8_t x3602 = 32;
static volatile int8_t x3662 = 2;
volatile uint32_t x3663 = 157U;
uint32_t x3664 = 193U;
uint8_t x3741 = 12U;
uint8_t x3742 = 2U;
static int16_t x3830 = 0;
int32_t t59 = 1405;
volatile int8_t x4283 = INT8_MIN;
volatile int64_t t61 = INT64_MAX;
uint8_t x4382 = 0U;
int8_t x4404 = INT8_MIN;
static int8_t x4409 = 1;
uint64_t x4460 = UINT64_MAX;
int32_t x4521 = 1;
volatile uint32_t x4523 = UINT32_MAX;
int64_t t70 = 931LL;
int32_t x4744 = INT32_MIN;
uint8_t x4770 = 0U;
uint64_t x5060 = UINT64_MAX;
int32_t x5073 = 19584440;
int64_t x5110 = 12LL;
uint8_t x5177 = 2U;
int32_t t80 = 95846;
int64_t t81 = 240849177336546233LL;
int16_t x5446 = 0;
int64_t t82 = -127879892LL;
uint8_t x5733 = 0U;
static int8_t x5734 = 1;
static volatile uint32_t t84 = 2069U;
uint32_t x5818 = 1U;
static volatile uint8_t x5839 = UINT8_MAX;
uint32_t x5840 = UINT32_MAX;
uint16_t x5901 = 2U;
volatile uint8_t x5903 = 9U;
int32_t t87 = -2996;
static uint16_t x6017 = UINT16_MAX;
uint8_t x6018 = 0U;
int64_t x6020 = INT64_MIN;
static uint64_t x6157 = UINT64_MAX;
int8_t x6158 = 1;
volatile int8_t x6259 = INT8_MAX;
int16_t x6260 = 0;
volatile int32_t t93 = 15721;
int8_t x6457 = INT8_MAX;
volatile int32_t x6460 = INT32_MAX;
static int32_t t95 = INT32_MAX;
volatile int64_t x6546 = 1LL;
static int16_t x6547 = 53;
int32_t x6548 = INT32_MIN;
static volatile int32_t t97 = INT32_MIN;
static int64_t x6767 = 19987LL;
int32_t t98 = -375;
static uint32_t x6894 = 6U;


void f0(void) {
	uint32_t x53 = 13142U;
	static uint8_t x54 = 7U;
	uint16_t x55 = UINT16_MAX;
	int16_t x56 = -1;
	int32_t t0 = -729539985;

	t0 = (((x53<<x54)<x55)|x56);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x101 = 457343U;
	int8_t x102 = 0;
	int8_t x103 = -1;
	int64_t x104 = INT64_MIN;
	volatile int64_t t1 = -1246401176LL;

	t1 = (((x101<<x102)<x103)|x104);

	if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x246 = 1U;
	int8_t x247 = -1;
	uint16_t x248 = 3666U;

	t2 = (((x245<<x246)<x247)|x248);

	if (t2 != 3666) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x317 = 705901258LLU;
	static uint16_t x318 = 0U;

	t3 = (((x317<<x318)<x319)|x320);

	if (t3 != 934344LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x326 = 36;
	int64_t x327 = INT64_MIN;
	int16_t x328 = 47;
	static int32_t t4 = -847330;

	t4 = (((x325<<x326)<x327)|x328);

	if (t4 != 47) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x461 = UINT16_MAX;
	volatile uint8_t x462 = 2U;
	int64_t x463 = INT64_MIN;
	uint8_t x464 = 127U;
	int32_t t5 = -2282046;

	t5 = (((x461<<x462)<x463)|x464);

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x485 = 6598LL;
	int32_t x486 = 13;
	int16_t x487 = -1;
	int16_t x488 = -1;
	volatile int32_t t6 = -35820418;

	t6 = (((x485<<x486)<x487)|x488);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x543 = 21U;
	static int64_t x544 = INT64_MAX;
	volatile int64_t t7 = INT64_MAX;

	t7 = (((x541<<x542)<x543)|x544);

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x745 = UINT8_MAX;
	uint32_t x746 = 16U;
	int16_t x747 = INT16_MIN;
	static volatile uint64_t x748 = 47513769785LLU;
	volatile uint64_t t8 = 51024312379696295LLU;

	t8 = (((x745<<x746)<x747)|x748);

	if (t8 != 47513769785LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x869 = 1U;
	volatile uint16_t x870 = 0U;
	int16_t x871 = 91;
	uint64_t x872 = UINT64_MAX;

	t9 = (((x869<<x870)<x871)|x872);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x965 = UINT16_MAX;
	static volatile uint8_t x966 = 4U;
	volatile int32_t x967 = INT32_MAX;
	uint64_t t10 = 20114529LLU;

	t10 = (((x965<<x966)<x967)|x968);

	if (t10 != 9968071239874365LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x1065 = 688298919429978LL;
	static volatile uint32_t x1066 = 2U;
	volatile uint8_t x1067 = 76U;
	int32_t x1068 = 16527;
	static int32_t t11 = 8;

	t11 = (((x1065<<x1066)<x1067)|x1068);

	if (t11 != 16527) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x1166 = 1;
	volatile int8_t x1167 = -30;
	int8_t x1168 = INT8_MIN;
	volatile int32_t t12 = 75019035;

	t12 = (((x1165<<x1166)<x1167)|x1168);

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x1169 = 2626001409812973398LLU;
	int16_t x1170 = 1;
	uint16_t x1171 = 97U;
	uint8_t x1172 = 4U;

	t13 = (((x1169<<x1170)<x1171)|x1172);

	if (t13 != 4) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x1198 = 1;
	int16_t x1199 = 1474;
	static uint64_t x1200 = 7675767LLU;

	t14 = (((x1197<<x1198)<x1199)|x1200);

	if (t14 != 7675767LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x1257 = UINT32_MAX;
	volatile int32_t x1258 = 1;
	volatile uint32_t x1260 = 56U;
	uint32_t t15 = 3371189U;

	t15 = (((x1257<<x1258)<x1259)|x1260);

	if (t15 != 57U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1425 = 16782552387104683LL;
	int8_t x1426 = 7;
	uint64_t x1427 = 0LLU;
	int32_t x1428 = INT32_MIN;
	int32_t t16 = INT32_MIN;

	t16 = (((x1425<<x1426)<x1427)|x1428);

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1493 = 368242943U;
	uint8_t x1494 = 1U;
	int64_t x1495 = INT64_MIN;
	int32_t x1496 = 0;
	int32_t t17 = -670;

	t17 = (((x1493<<x1494)<x1495)|x1496);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x1549 = UINT8_MAX;
	volatile int16_t x1551 = INT16_MIN;
	int32_t x1552 = -150;

	t18 = (((x1549<<x1550)<x1551)|x1552);

	if (t18 != -150) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1729 = 272U;
	static uint16_t x1730 = 1U;
	uint64_t x1731 = UINT64_MAX;
	int8_t x1732 = 26;

	t19 = (((x1729<<x1730)<x1731)|x1732);

	if (t19 != 27) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1817 = INT16_MAX;
	uint32_t x1818 = 0U;
	int32_t x1819 = INT32_MIN;
	volatile int64_t t20 = 66170558189957LL;

	t20 = (((x1817<<x1818)<x1819)|x1820);

	if (t20 != 18131823147592LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x1853 = 8383561LLU;
	int16_t x1854 = 37;
	int32_t x1855 = INT32_MAX;
	int8_t x1856 = -1;
	volatile int32_t t21 = -27842;

	t21 = (((x1853<<x1854)<x1855)|x1856);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x2005 = 967866LLU;
	int8_t x2006 = 25;
	static int16_t x2007 = INT16_MIN;
	uint8_t x2008 = 12U;
	int32_t t22 = -4479;

	t22 = (((x2005<<x2006)<x2007)|x2008);

	if (t22 != 13) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x2089 = 6142636U;
	int32_t x2090 = 1;
	static volatile int8_t x2091 = INT8_MAX;
	volatile uint32_t x2092 = 242632446U;
	uint32_t t23 = 31544979U;

	t23 = (((x2089<<x2090)<x2091)|x2092);

	if (t23 != 242632446U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x2209 = 2U;
	int16_t x2210 = 5;
	uint16_t x2211 = 148U;
	volatile int32_t x2212 = -407;
	int32_t t24 = -43;

	t24 = (((x2209<<x2210)<x2211)|x2212);

	if (t24 != -407) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x2349 = 0;
	uint32_t x2351 = UINT32_MAX;
	volatile uint8_t x2352 = 9U;
	int32_t t25 = 25156;

	t25 = (((x2349<<x2350)<x2351)|x2352);

	if (t25 != 9) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x2361 = UINT8_MAX;
	uint8_t x2362 = 7U;
	uint32_t x2363 = 589828U;
	int64_t x2364 = 27422153958060LL;
	static int64_t t26 = 837307508960LL;

	t26 = (((x2361<<x2362)<x2363)|x2364);

	if (t26 != 27422153958061LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x2397 = 25;
	uint8_t x2398 = 19U;
	static uint8_t x2400 = 9U;
	int32_t t27 = -11548;

	t27 = (((x2397<<x2398)<x2399)|x2400);

	if (t27 != 9) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x2461 = 15808;
	static volatile int8_t x2462 = 3;
	static int8_t x2463 = -1;
	uint32_t x2464 = UINT32_MAX;
	volatile uint32_t t28 = UINT32_MAX;

	t28 = (((x2461<<x2462)<x2463)|x2464);

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x2481 = 0;
	uint8_t x2482 = 14U;
	uint32_t x2483 = 161677461U;
	int16_t x2484 = -15;
	volatile int32_t t29 = -128466172;

	t29 = (((x2481<<x2482)<x2483)|x2484);

	if (t29 != -15) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x2573 = 24;
	uint16_t x2574 = 0U;
	int64_t x2575 = INT64_MIN;
	int32_t t30 = -319;

	t30 = (((x2573<<x2574)<x2575)|x2576);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x2577 = 5U;
	static volatile uint8_t x2578 = 18U;
	int8_t x2580 = -1;
	volatile int32_t t31 = -4866432;

	t31 = (((x2577<<x2578)<x2579)|x2580);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x2581 = 3440U;
	int8_t x2582 = 0;
	int64_t x2583 = 530587750250697LL;
	uint16_t x2584 = 2U;
	static int32_t t32 = 5;

	t32 = (((x2581<<x2582)<x2583)|x2584);

	if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x2597 = 1219358U;
	uint8_t x2598 = 28U;
	static int32_t x2599 = INT32_MIN;
	int8_t x2600 = 0;
	int32_t t33 = 0;

	t33 = (((x2597<<x2598)<x2599)|x2600);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x2701 = INT32_MAX;
	static uint16_t x2702 = 0U;
	int64_t x2703 = 487036151799LL;
	int64_t x2704 = INT64_MAX;
	volatile int64_t t34 = INT64_MAX;

	t34 = (((x2701<<x2702)<x2703)|x2704);

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2739 = INT64_MAX;
	uint8_t x2740 = UINT8_MAX;
	int32_t t35 = 36;

	t35 = (((x2737<<x2738)<x2739)|x2740);

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x2882 = 1U;
	int64_t x2883 = INT64_MIN;
	volatile int16_t x2884 = INT16_MIN;
	volatile int32_t t36 = 467746;

	t36 = (((x2881<<x2882)<x2883)|x2884);

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2885 = 83U;
	static int8_t x2886 = 1;
	int32_t x2887 = -10;
	uint32_t x2888 = 3U;
	volatile uint32_t t37 = 1415459773U;

	t37 = (((x2885<<x2886)<x2887)|x2888);

	if (t37 != 3U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x2897 = 51U;
	uint16_t x2898 = 11U;
	uint8_t x2899 = 73U;
	int64_t x2900 = INT64_MIN;
	volatile int64_t t38 = INT64_MIN;

	t38 = (((x2897<<x2898)<x2899)|x2900);

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x2990 = 2U;
	static int64_t x2991 = -1LL;
	volatile uint64_t t39 = 981186869101LLU;

	t39 = (((x2989<<x2990)<x2991)|x2992);

	if (t39 != 532171167890144LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2997 = 604U;
	uint16_t x2998 = 7U;
	uint32_t x2999 = 186508910U;
	int16_t x3000 = INT16_MAX;

	t40 = (((x2997<<x2998)<x2999)|x3000);

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint16_t x3025 = 22850U;
	uint16_t x3026 = 7U;
	volatile int32_t x3027 = INT32_MAX;
	int8_t x3028 = -63;
	volatile int32_t t41 = -15952458;

	t41 = (((x3025<<x3026)<x3027)|x3028);

	if (t41 != -63) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x3029 = 1U;
	uint16_t x3030 = 3U;
	int8_t x3032 = INT8_MAX;
	volatile int32_t t42 = 3;

	t42 = (((x3029<<x3030)<x3031)|x3032);

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x3105 = 19LLU;
	int32_t x3107 = 4365105;
	static int8_t x3108 = INT8_MIN;

	t43 = (((x3105<<x3106)<x3107)|x3108);

	if (t43 != -127) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x3113 = UINT32_MAX;
	static int16_t x3116 = 1;

	t44 = (((x3113<<x3114)<x3115)|x3116);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x3201 = 10888;
	static volatile uint8_t x3202 = 4U;
	int8_t x3203 = INT8_MIN;
	static int32_t t45 = -4;

	t45 = (((x3201<<x3202)<x3203)|x3204);

	if (t45 != -50) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x3221 = 167;
	uint8_t x3222 = 9U;
	static uint8_t x3223 = 12U;
	uint32_t x3224 = UINT32_MAX;
	volatile uint32_t t46 = UINT32_MAX;

	t46 = (((x3221<<x3222)<x3223)|x3224);

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x3305 = UINT64_MAX;
	uint32_t x3306 = 7U;
	int64_t x3308 = -1LL;
	volatile int64_t t47 = -13690467142703636LL;

	t47 = (((x3305<<x3306)<x3307)|x3308);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x3321 = 56260951LLU;
	int32_t x3322 = 12;
	uint8_t x3323 = UINT8_MAX;
	int32_t x3324 = 39;
	int32_t t48 = 42885;

	t48 = (((x3321<<x3322)<x3323)|x3324);

	if (t48 != 39) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x3409 = 1;
	uint16_t x3410 = 0U;
	int32_t t49 = -450207082;

	t49 = (((x3409<<x3410)<x3411)|x3412);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x3453 = 39;
	uint8_t x3454 = 0U;
	uint16_t x3455 = UINT16_MAX;
	int32_t x3456 = -1;
	int32_t t50 = 0;

	t50 = (((x3453<<x3454)<x3455)|x3456);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3545 = 35877U;
	uint8_t x3546 = 2U;
	uint8_t x3547 = UINT8_MAX;
	volatile uint8_t x3548 = 109U;
	volatile int32_t t51 = 170;

	t51 = (((x3545<<x3546)<x3547)|x3548);

	if (t51 != 109) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3601 = 6593LLU;
	int64_t x3603 = INT64_MIN;
	uint32_t x3604 = 1282150U;
	uint32_t t52 = 2071U;

	t52 = (((x3601<<x3602)<x3603)|x3604);

	if (t52 != 1282151U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x3641 = 861U;
	volatile int8_t x3642 = 3;
	int8_t x3643 = INT8_MIN;
	volatile uint64_t x3644 = 2144452123LLU;
	uint64_t t53 = 61035067787309639LLU;

	t53 = (((x3641<<x3642)<x3643)|x3644);

	if (t53 != 2144452123LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3653 = INT8_MAX;
	int16_t x3654 = 1;
	int8_t x3655 = -1;
	int64_t x3656 = INT64_MAX;
	int64_t t54 = INT64_MAX;

	t54 = (((x3653<<x3654)<x3655)|x3656);

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x3661 = 18U;
	volatile uint32_t t55 = 671119070U;

	t55 = (((x3661<<x3662)<x3663)|x3664);

	if (t55 != 193U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x3713 = 7U;
	int16_t x3714 = 6;
	uint64_t x3715 = 26620LLU;
	uint16_t x3716 = 6105U;
	int32_t t56 = 142497;

	t56 = (((x3713<<x3714)<x3715)|x3716);

	if (t56 != 6105) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3743 = -1LL;
	int8_t x3744 = -22;
	int32_t t57 = -6483;

	t57 = (((x3741<<x3742)<x3743)|x3744);

	if (t57 != -22) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3829 = UINT64_MAX;
	int8_t x3831 = INT8_MAX;
	static uint64_t x3832 = 55480LLU;
	volatile uint64_t t58 = 2297211892LLU;

	t58 = (((x3829<<x3830)<x3831)|x3832);

	if (t58 != 55480LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x4129 = 3U;
	volatile uint8_t x4130 = 6U;
	uint64_t x4131 = UINT64_MAX;
	volatile int8_t x4132 = -2;

	t59 = (((x4129<<x4130)<x4131)|x4132);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x4189 = 4U;
	uint8_t x4190 = 1U;
	volatile int8_t x4191 = -1;
	uint32_t x4192 = 1137U;
	uint32_t t60 = 11U;

	t60 = (((x4189<<x4190)<x4191)|x4192);

	if (t60 != 1137U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x4281 = 170377794856907707LL;
	volatile uint8_t x4282 = 0U;
	int64_t x4284 = INT64_MAX;

	t61 = (((x4281<<x4282)<x4283)|x4284);

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x4285 = 15U;
	int32_t x4286 = 7;
	int8_t x4287 = INT8_MAX;
	volatile int8_t x4288 = INT8_MIN;
	volatile int32_t t62 = 128;

	t62 = (((x4285<<x4286)<x4287)|x4288);

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x4321 = 1491312664LLU;
	static uint16_t x4322 = 53U;
	uint16_t x4323 = 11U;
	static int8_t x4324 = INT8_MIN;
	static int32_t t63 = 1;

	t63 = (((x4321<<x4322)<x4323)|x4324);

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x4381 = UINT8_MAX;
	int64_t x4383 = INT64_MIN;
	uint32_t x4384 = 60580764U;
	volatile uint32_t t64 = 21245203U;

	t64 = (((x4381<<x4382)<x4383)|x4384);

	if (t64 != 60580764U) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x4401 = 28;
	uint8_t x4402 = 1U;
	int16_t x4403 = -1;
	int32_t t65 = -1668634;

	t65 = (((x4401<<x4402)<x4403)|x4404);

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x4410 = 6U;
	volatile int64_t x4411 = INT64_MIN;
	uint8_t x4412 = UINT8_MAX;
	volatile int32_t t66 = -56;

	t66 = (((x4409<<x4410)<x4411)|x4412);

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x4457 = 1LLU;
	uint32_t x4458 = 6U;
	int64_t x4459 = INT64_MIN;
	uint64_t t67 = UINT64_MAX;

	t67 = (((x4457<<x4458)<x4459)|x4460);

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x4485 = 72744LLU;
	int64_t x4486 = 0LL;
	uint16_t x4487 = UINT16_MAX;
	volatile int64_t x4488 = 18912531LL;
	volatile int64_t t68 = 70359092LL;

	t68 = (((x4485<<x4486)<x4487)|x4488);

	if (t68 != 18912531LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x4522 = 1U;
	uint16_t x4524 = 692U;
	static volatile int32_t t69 = -153;

	t69 = (((x4521<<x4522)<x4523)|x4524);

	if (t69 != 693) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4713 = 30863406574087964LLU;
	static int8_t x4714 = 1;
	uint16_t x4715 = UINT16_MAX;
	static int64_t x4716 = 22534258857LL;

	t70 = (((x4713<<x4714)<x4715)|x4716);

	if (t70 != 22534258857LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x4729 = 0U;
	uint8_t x4730 = 11U;
	volatile int32_t x4731 = INT32_MIN;
	volatile int16_t x4732 = INT16_MIN;
	volatile int32_t t71 = -501;

	t71 = (((x4729<<x4730)<x4731)|x4732);

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x4741 = 605996986058579LL;
	int8_t x4742 = 2;
	uint32_t x4743 = UINT32_MAX;
	int32_t t72 = INT32_MIN;

	t72 = (((x4741<<x4742)<x4743)|x4744);

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x4769 = 298883036;
	int8_t x4771 = -10;
	static int64_t x4772 = -46LL;
	static int64_t t73 = 58748LL;

	t73 = (((x4769<<x4770)<x4771)|x4772);

	if (t73 != -46LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x4909 = INT8_MAX;
	int32_t x4910 = 1;
	int8_t x4911 = -1;
	int16_t x4912 = INT16_MAX;
	volatile int32_t t74 = -33407517;

	t74 = (((x4909<<x4910)<x4911)|x4912);

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x5057 = INT64_MAX;
	volatile int8_t x5058 = 0;
	static uint64_t x5059 = UINT64_MAX;
	uint64_t t75 = UINT64_MAX;

	t75 = (((x5057<<x5058)<x5059)|x5060);

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x5074 = 0;
	int8_t x5075 = INT8_MIN;
	volatile int64_t x5076 = INT64_MIN;
	int64_t t76 = INT64_MIN;

	t76 = (((x5073<<x5074)<x5075)|x5076);

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x5109 = UINT16_MAX;
	int32_t x5111 = INT32_MIN;
	uint16_t x5112 = 525U;
	int32_t t77 = -7186;

	t77 = (((x5109<<x5110)<x5111)|x5112);

	if (t77 != 525) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x5178 = 3U;
	volatile int8_t x5179 = INT8_MIN;
	static int32_t x5180 = INT32_MAX;
	static volatile int32_t t78 = INT32_MAX;

	t78 = (((x5177<<x5178)<x5179)|x5180);

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x5245 = 0;
	int64_t x5246 = 0LL;
	int32_t x5247 = INT32_MIN;
	int64_t x5248 = INT64_MIN;
	static volatile int64_t t79 = INT64_MIN;

	t79 = (((x5245<<x5246)<x5247)|x5248);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5333 = UINT64_MAX;
	int64_t x5334 = 0LL;
	volatile uint64_t x5335 = 17877896461LLU;
	uint8_t x5336 = 4U;

	t80 = (((x5333<<x5334)<x5335)|x5336);

	if (t80 != 4) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x5373 = 7832LLU;
	uint8_t x5374 = 45U;
	static volatile int64_t x5375 = -1LL;
	static int64_t x5376 = INT64_MIN;

	t81 = (((x5373<<x5374)<x5375)|x5376);

	if (t81 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x5445 = 238;
	uint32_t x5447 = UINT32_MAX;
	static volatile int64_t x5448 = 12963LL;

	t82 = (((x5445<<x5446)<x5447)|x5448);

	if (t82 != 12963LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x5573 = 207U;
	int64_t x5574 = 1LL;
	uint64_t x5575 = UINT64_MAX;
	int64_t x5576 = INT64_MIN;
	volatile int64_t t83 = 797LL;

	t83 = (((x5573<<x5574)<x5575)|x5576);

	if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x5735 = UINT16_MAX;
	uint32_t x5736 = 16912244U;

	t84 = (((x5733<<x5734)<x5735)|x5736);

	if (t84 != 16912245U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x5817 = 237U;
	uint64_t x5819 = 17LLU;
	static int32_t x5820 = INT32_MIN;
	int32_t t85 = INT32_MIN;

	t85 = (((x5817<<x5818)<x5819)|x5820);

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x5837 = UINT64_MAX;
	uint16_t x5838 = 33U;
	volatile uint32_t t86 = UINT32_MAX;

	t86 = (((x5837<<x5838)<x5839)|x5840);

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x5902 = 2LL;
	int16_t x5904 = -174;

	t87 = (((x5901<<x5902)<x5903)|x5904);

	if (t87 != -173) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x6019 = INT32_MIN;
	int64_t t88 = INT64_MIN;

	t88 = (((x6017<<x6018)<x6019)|x6020);

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x6159 = -1;
	int64_t x6160 = 14LL;
	static volatile int64_t t89 = -3LL;

	t89 = (((x6157<<x6158)<x6159)|x6160);

	if (t89 != 15LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x6177 = INT8_MAX;
	int16_t x6178 = 6;
	int64_t x6179 = INT64_MIN;
	uint64_t x6180 = UINT64_MAX;
	volatile uint64_t t90 = UINT64_MAX;

	t90 = (((x6177<<x6178)<x6179)|x6180);

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x6229 = 1112U;
	uint8_t x6230 = 19U;
	volatile int16_t x6231 = INT16_MAX;
	uint8_t x6232 = 3U;
	volatile int32_t t91 = 75403495;

	t91 = (((x6229<<x6230)<x6231)|x6232);

	if (t91 != 3) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x6253 = UINT64_MAX;
	volatile int8_t x6254 = 1;
	volatile uint32_t x6255 = 27514168U;
	int32_t x6256 = INT32_MIN;
	int32_t t92 = INT32_MIN;

	t92 = (((x6253<<x6254)<x6255)|x6256);

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x6257 = 24587U;
	static volatile uint8_t x6258 = 7U;

	t93 = (((x6257<<x6258)<x6259)|x6260);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x6401 = 4U;
	int8_t x6402 = 0;
	uint32_t x6403 = UINT32_MAX;
	static uint16_t x6404 = 119U;
	int32_t t94 = 343164472;

	t94 = (((x6401<<x6402)<x6403)|x6404);

	if (t94 != 119) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x6458 = 2U;
	static uint16_t x6459 = 2177U;

	t95 = (((x6457<<x6458)<x6459)|x6460);

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x6533 = UINT16_MAX;
	static uint32_t x6534 = 5U;
	volatile uint32_t x6535 = UINT32_MAX;
	volatile int32_t x6536 = 3;
	volatile int32_t t96 = -134;

	t96 = (((x6533<<x6534)<x6535)|x6536);

	if (t96 != 3) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x6545 = 823U;

	t97 = (((x6545<<x6546)<x6547)|x6548);

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x6765 = 1650552U;
	int32_t x6766 = 0;
	volatile int8_t x6768 = 0;

	t98 = (((x6765<<x6766)<x6767)|x6768);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x6893 = 0;
	uint32_t x6895 = 306U;
	int64_t x6896 = INT64_MIN;
	static volatile int64_t t99 = 31LL;

	t99 = (((x6893<<x6894)<x6895)|x6896);

	if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
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


    return 0;
}


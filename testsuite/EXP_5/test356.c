#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -1LL;
volatile uint32_t x4 = UINT32_MAX;
int8_t x19 = INT8_MAX;
int64_t x21 = INT64_MIN;
int16_t x22 = 751;
static uint64_t t3 = 1467047866LLU;
uint64_t x33 = UINT64_MAX;
volatile uint16_t x35 = 63U;
int16_t x40 = INT16_MAX;
volatile int32_t t5 = -1;
volatile int64_t x46 = -1LL;
int32_t x48 = 1019237;
int64_t t6 = -30433973201050185LL;
static int8_t x56 = -1;
uint64_t t8 = 7LLU;
uint64_t x61 = UINT64_MAX;
volatile uint8_t x64 = 0U;
uint8_t x85 = UINT8_MAX;
static volatile uint64_t t13 = 2246003417651426LLU;
static uint64_t t14 = 13884203208218LLU;
static volatile uint8_t x93 = 48U;
volatile uint64_t x126 = 6303157978LLU;
uint64_t x127 = UINT64_MAX;
volatile int64_t x135 = 3498219401594LL;
uint32_t x146 = UINT32_MAX;
int32_t x147 = INT32_MIN;
uint64_t t29 = 8473807285857LLU;
int16_t x158 = INT16_MIN;
volatile int64_t x179 = -37350131021476660LL;
volatile uint16_t x199 = UINT16_MAX;
uint32_t x212 = 2309517U;
uint64_t t35 = 19771899063LLU;
uint8_t x213 = UINT8_MAX;
int32_t x232 = INT32_MIN;
uint8_t x247 = 38U;
static volatile uint32_t x262 = UINT32_MAX;
int8_t x264 = -1;
volatile uint32_t x273 = UINT32_MAX;
int8_t x275 = INT8_MAX;
uint32_t t43 = 10U;
int64_t x278 = -1LL;
static volatile uint16_t x281 = 4U;
int32_t x283 = -1;
static volatile int16_t x285 = 273;
int8_t x291 = INT8_MIN;
volatile int32_t t47 = -978805503;
uint8_t x298 = 3U;
volatile int8_t x301 = INT8_MIN;
volatile int32_t t50 = 1967495;
int16_t x308 = INT16_MAX;
static volatile uint64_t t52 = 428416LLU;
static int8_t x322 = INT8_MIN;
static int64_t t53 = -48LL;
volatile int8_t x330 = INT8_MIN;
int8_t x341 = -2;
uint32_t x357 = 16618U;
int64_t x358 = 511021729LL;
static volatile uint64_t x360 = 225068111518LLU;
int32_t x367 = INT32_MAX;
static uint64_t t60 = 707908897483992874LLU;
static uint64_t x370 = UINT64_MAX;
uint8_t x381 = 3U;
static int8_t x387 = INT8_MIN;
static volatile int32_t t64 = 27;
int64_t x389 = INT64_MIN;
int16_t x403 = INT16_MIN;
uint32_t x409 = 5985U;
static uint8_t x410 = 126U;
volatile int16_t x412 = INT16_MAX;
static int8_t x422 = INT8_MIN;
int16_t x430 = INT16_MIN;
int8_t x435 = INT8_MAX;
uint32_t t73 = 0U;
static int32_t x438 = 3;
uint8_t x447 = 0U;
static uint32_t t76 = 410465U;
int8_t x454 = -1;
static int32_t x456 = 29396;
volatile int64_t t77 = 82101LL;
volatile uint64_t x460 = 12383814LLU;
static volatile uint64_t t78 = 11LLU;
int8_t x477 = -1;
volatile uint16_t x478 = 1829U;
volatile int32_t x480 = -1388800;
volatile int64_t x482 = 42LL;
static int16_t x483 = -1;
uint32_t x489 = 28U;
int64_t x493 = -16150356383231079LL;
int8_t x509 = 4;
static int8_t x510 = 1;
int16_t x516 = -1;
uint64_t t90 = 338045962705LLU;
static uint32_t x517 = UINT32_MAX;
volatile uint32_t t91 = 744U;
int16_t x534 = INT16_MIN;
uint64_t x554 = 2063865LLU;
volatile uint64_t t96 = 19122823131LLU;


void f0(void) {
	volatile int32_t x1 = INT32_MAX;
	int16_t x3 = INT16_MAX;
	int64_t t0 = -172192634730910316LL;

	t0 = (x1%((x2*x3)-x4));

	if (t0 != 2147483647LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x17 = UINT16_MAX;
	uint16_t x18 = 40U;
	uint16_t x20 = 2077U;
	int32_t t1 = -7335232;

	t1 = (x17%((x18*x19)-x20));

	if (t1 != 2472) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x23 = INT8_MAX;
	int8_t x24 = 25;
	int64_t t2 = -1402703644291901349LL;

	t2 = (x21%((x22*x23)-x24));

	if (t2 != -11264LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x29 = 7LLU;
	int8_t x30 = INT8_MAX;
	int16_t x31 = 778;
	uint32_t x32 = UINT32_MAX;

	t3 = (x29%((x30*x31)-x32));

	if (t3 != 7LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x34 = UINT64_MAX;
	int64_t x36 = -1LL;
	volatile uint64_t t4 = 117971LLU;

	t4 = (x33%((x34*x35)-x36));

	if (t4 != 61LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x37 = -1;
	int32_t x38 = -1;
	int8_t x39 = -1;

	t5 = (x37%((x38*x39)-x40));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x45 = INT16_MAX;
	int16_t x47 = 11236;

	t6 = (x45%((x46*x47)-x48));

	if (t6 != 32767LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x49 = -1;
	int8_t x50 = -19;
	volatile int16_t x51 = INT16_MAX;
	volatile uint8_t x52 = 2U;
	int32_t t7 = 14127;

	t7 = (x49%((x50*x51)-x52));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x53 = 2597392362915134641LLU;
	volatile int8_t x54 = 0;
	volatile int8_t x55 = INT8_MAX;

	t8 = (x53%((x54*x55)-x56));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x57 = INT8_MAX;
	static int8_t x58 = -1;
	int8_t x59 = 0;
	int64_t x60 = 1799141056204LL;
	int64_t t9 = 49497930602905239LL;

	t9 = (x57%((x58*x59)-x60));

	if (t9 != 127LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x62 = -3585LL;
	static volatile int16_t x63 = INT16_MAX;
	uint64_t t10 = 942808751LLU;

	t10 = (x61%((x62*x63)-x64));

	if (t10 != 117469694LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x73 = INT16_MIN;
	int16_t x74 = 1;
	static uint64_t x75 = 2904446163814382820LLU;
	int16_t x76 = -1;
	volatile uint64_t t11 = 26LLU;

	t11 = (x73%((x74*x75)-x76));

	if (t11 != 1020067090823221922LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x81 = 495U;
	static uint8_t x82 = 8U;
	int8_t x83 = -1;
	int8_t x84 = INT8_MIN;
	int32_t t12 = -442977;

	t12 = (x81%((x82*x83)-x84));

	if (t12 != 15) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x86 = UINT64_MAX;
	int32_t x87 = 567943;
	uint64_t x88 = 1869603000568092228LLU;

	t13 = (x85%((x86*x87)-x88));

	if (t13 != 255LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x89 = INT64_MAX;
	uint32_t x90 = 79111U;
	uint64_t x91 = UINT64_MAX;
	int64_t x92 = 253797943130LL;

	t14 = (x89%((x90*x91)-x92));

	if (t14 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x94 = INT16_MAX;
	volatile uint32_t x95 = UINT32_MAX;
	int8_t x96 = -1;
	uint32_t t15 = 439223889U;

	t15 = (x93%((x94*x95)-x96));

	if (t15 != 48U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x97 = -10147928571558058LL;
	static uint32_t x98 = 237580U;
	int8_t x99 = INT8_MIN;
	static int8_t x100 = -42;
	int64_t t16 = -62063247401745LL;

	t16 = (x97%((x98*x99)-x100));

	if (t16 != -1294828552LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x101 = UINT64_MAX;
	int8_t x102 = 1;
	int8_t x103 = -4;
	uint32_t x104 = UINT32_MAX;
	volatile uint64_t t17 = 1971949258120441925LLU;

	t17 = (x101%((x102*x103)-x104));

	if (t17 != 8LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x105 = -3;
	int16_t x106 = -226;
	uint64_t x107 = 32174757366LLU;
	static int64_t x108 = INT64_MAX;
	uint64_t t18 = 30LLU;

	t18 = (x105%((x106*x107)-x108));

	if (t18 != 14542990329427LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x109 = 3779118701LLU;
	static volatile int16_t x110 = -2497;
	uint32_t x111 = 58U;
	uint16_t x112 = 2795U;
	uint64_t t19 = 56142415LLU;

	t19 = (x109%((x110*x111)-x112));

	if (t19 != 3779118701LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x113 = 3U;
	int32_t x114 = INT32_MIN;
	int64_t x115 = -1LL;
	volatile int32_t x116 = INT32_MIN;
	volatile int64_t t20 = 24784526496794569LL;

	t20 = (x113%((x114*x115)-x116));

	if (t20 != 3LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x117 = -2;
	volatile int16_t x118 = INT16_MIN;
	volatile uint64_t x119 = 51420299LLU;
	uint32_t x120 = 981U;
	uint64_t t21 = 296734131435333821LLU;

	t21 = (x117%((x118*x119)-x120));

	if (t21 != 1684940358611LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x121 = -1;
	int8_t x122 = INT8_MIN;
	int8_t x123 = INT8_MAX;
	int64_t x124 = -1LL;
	int64_t t22 = 501802436846410457LL;

	t22 = (x121%((x122*x123)-x124));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x125 = -31;
	int8_t x128 = INT8_MIN;
	uint64_t t23 = 719064222505LLU;

	t23 = (x125%((x126*x127)-x128));

	if (t23 != 6303157819LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x129 = 80607549086LLU;
	uint16_t x130 = 33U;
	volatile int16_t x131 = INT16_MIN;
	uint8_t x132 = 1U;
	volatile uint64_t t24 = 78LLU;

	t24 = (x129%((x130*x131)-x132));

	if (t24 != 80607549086LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x133 = INT8_MAX;
	static uint32_t x134 = 1072143U;
	static volatile uint32_t x136 = UINT32_MAX;
	static volatile int64_t t25 = -501305660349LL;

	t25 = (x133%((x134*x135)-x136));

	if (t25 != 127LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x137 = 9U;
	volatile int32_t x138 = INT32_MIN;
	uint32_t x139 = UINT32_MAX;
	volatile int8_t x140 = -2;
	static uint32_t t26 = 1U;

	t26 = (x137%((x138*x139)-x140));

	if (t26 != 9U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x141 = -16;
	uint16_t x142 = 1U;
	int32_t x143 = 570673501;
	static int8_t x144 = INT8_MIN;
	volatile int32_t t27 = 1;

	t27 = (x141%((x142*x143)-x144));

	if (t27 != -16) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x145 = UINT64_MAX;
	int32_t x148 = 11016;
	static uint64_t t28 = 2LLU;

	t28 = (x145%((x146*x147)-x148));

	if (t28 != 485409023LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x153 = 8U;
	int16_t x154 = INT16_MIN;
	int8_t x155 = -1;
	uint64_t x156 = 225443908948066LLU;

	t29 = (x153%((x154*x155)-x156));

	if (t29 != 8LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x157 = 314802U;
	uint16_t x159 = 5786U;
	static uint16_t x160 = 17917U;
	volatile uint32_t t30 = 71U;

	t30 = (x157%((x158*x159)-x160));

	if (t30 != 314802U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x177 = 0U;
	uint16_t x178 = 0U;
	volatile uint64_t x180 = 1463073343501045721LLU;
	volatile uint64_t t31 = 9558LLU;

	t31 = (x177%((x178*x179)-x180));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x181 = 320U;
	uint32_t x182 = 1556260328U;
	static int8_t x183 = 11;
	volatile uint64_t x184 = 0LLU;
	static volatile uint64_t t32 = 1482978LLU;

	t32 = (x181%((x182*x183)-x184));

	if (t32 != 320LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x189 = INT32_MIN;
	static int8_t x190 = -1;
	int16_t x191 = 30;
	int16_t x192 = INT16_MIN;
	int32_t t33 = 0;

	t33 = (x189%((x190*x191)-x192));

	if (t33 != -1800) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x197 = INT16_MAX;
	int16_t x198 = INT16_MAX;
	static int32_t x200 = -1;
	int32_t t34 = 404882016;

	t34 = (x197%((x198*x199)-x200));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x209 = 8136553990LLU;
	uint8_t x210 = UINT8_MAX;
	int64_t x211 = -228383LL;

	t35 = (x209%((x210*x211)-x212));

	if (t35 != 8136553990LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x214 = 8656LL;
	static int32_t x215 = INT32_MIN;
	volatile int16_t x216 = INT16_MAX;
	volatile int64_t t36 = 22212236254LL;

	t36 = (x213%((x214*x215)-x216));

	if (t36 != 255LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x229 = 7U;
	volatile int16_t x230 = INT16_MIN;
	int64_t x231 = -5LL;
	int64_t t37 = -93470509628318282LL;

	t37 = (x229%((x230*x231)-x232));

	if (t37 != 7LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x233 = -1LL;
	volatile int32_t x234 = -1;
	uint16_t x235 = UINT16_MAX;
	static uint16_t x236 = 6U;
	volatile int64_t t38 = -123LL;

	t38 = (x233%((x234*x235)-x236));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x237 = 7U;
	volatile int16_t x238 = -1;
	volatile uint64_t x239 = 384606LLU;
	int8_t x240 = INT8_MIN;
	static volatile uint64_t t39 = 796392085448554800LLU;

	t39 = (x237%((x238*x239)-x240));

	if (t39 != 7LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x245 = 1U;
	uint64_t x246 = 5328LLU;
	int16_t x248 = -1;
	uint64_t t40 = 22LLU;

	t40 = (x245%((x246*x247)-x248));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x257 = INT32_MIN;
	uint32_t x258 = 6341178U;
	int64_t x259 = -1LL;
	volatile uint32_t x260 = 0U;
	volatile int64_t t41 = 3297LL;

	t41 = (x257%((x258*x259)-x260));

	if (t41 != -4165484LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x261 = 8551056350547LLU;
	uint64_t x263 = UINT64_MAX;
	uint64_t t42 = 5966194LLU;

	t42 = (x261%((x262*x263)-x264));

	if (t42 != 8551056350547LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x274 = 1802;
	volatile uint8_t x276 = UINT8_MAX;

	t43 = (x273%((x274*x275)-x276));

	if (t43 != 49283U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x277 = INT16_MAX;
	uint64_t x279 = 1031396LLU;
	static volatile uint8_t x280 = 1U;
	volatile uint64_t t44 = 4480875912148374LLU;

	t44 = (x277%((x278*x279)-x280));

	if (t44 != 32767LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x282 = 2U;
	volatile uint64_t x284 = 24551LLU;
	uint64_t t45 = 38992693643LLU;

	t45 = (x281%((x282*x283)-x284));

	if (t45 != 4LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x286 = 63999LLU;
	int16_t x287 = -1;
	uint8_t x288 = UINT8_MAX;
	uint64_t t46 = 3609376236398LLU;

	t46 = (x285%((x286*x287)-x288));

	if (t46 != 273LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x289 = INT8_MIN;
	int8_t x290 = 20;
	volatile int16_t x292 = INT16_MAX;

	t47 = (x289%((x290*x291)-x292));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x293 = 0;
	int8_t x294 = INT8_MIN;
	static volatile int16_t x295 = -10134;
	int64_t x296 = -613415LL;
	volatile int64_t t48 = -2203178967LL;

	t48 = (x293%((x294*x295)-x296));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x297 = 47;
	static int64_t x299 = -1LL;
	volatile int32_t x300 = -1;
	volatile int64_t t49 = 749581174663524LL;

	t49 = (x297%((x298*x299)-x300));

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x302 = 3600;
	int8_t x303 = INT8_MAX;
	int16_t x304 = INT16_MIN;

	t50 = (x301%((x302*x303)-x304));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x305 = INT8_MAX;
	static int16_t x306 = -7;
	uint16_t x307 = 1U;
	int32_t t51 = -7291979;

	t51 = (x305%((x306*x307)-x308));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x309 = -64;
	volatile uint16_t x310 = UINT16_MAX;
	uint64_t x311 = UINT64_MAX;
	int32_t x312 = -1;

	t52 = (x309%((x310*x311)-x312));

	if (t52 != 65470LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x321 = 4005727;
	uint16_t x323 = 14U;
	int64_t x324 = -1LL;

	t53 = (x321%((x322*x323)-x324));

	if (t53 != 1051LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x325 = INT8_MIN;
	int32_t x326 = -1;
	int16_t x327 = -11745;
	uint8_t x328 = 3U;
	volatile int32_t t54 = 28731;

	t54 = (x325%((x326*x327)-x328));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x329 = INT16_MIN;
	uint16_t x331 = 1729U;
	int8_t x332 = INT8_MIN;
	static int32_t t55 = 721;

	t55 = (x329%((x330*x331)-x332));

	if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x342 = UINT8_MAX;
	static int64_t x343 = -1LL;
	uint8_t x344 = UINT8_MAX;
	volatile int64_t t56 = -26LL;

	t56 = (x341%((x342*x343)-x344));

	if (t56 != -2LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x349 = INT32_MAX;
	int16_t x350 = -4;
	uint16_t x351 = 29523U;
	uint16_t x352 = 8U;
	static volatile int32_t t57 = -1003;

	t57 = (x349%((x350*x351)-x352));

	if (t57 != 71347) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x359 = 1;
	volatile uint64_t t58 = 274278864566341555LLU;

	t58 = (x357%((x358*x359)-x360));

	if (t58 != 16618LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x361 = -4970LL;
	int16_t x362 = INT16_MAX;
	uint16_t x363 = 185U;
	int16_t x364 = INT16_MIN;
	int64_t t59 = -441LL;

	t59 = (x361%((x362*x363)-x364));

	if (t59 != -4970LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x365 = 87U;
	static int32_t x366 = -1;
	uint64_t x368 = UINT64_MAX;

	t60 = (x365%((x366*x367)-x368));

	if (t60 != 87LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x369 = 746LLU;
	volatile uint8_t x371 = UINT8_MAX;
	static int64_t x372 = INT64_MIN;
	static uint64_t t61 = 513845200681813416LLU;

	t61 = (x369%((x370*x371)-x372));

	if (t61 != 746LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x377 = UINT32_MAX;
	static int16_t x378 = -1;
	int64_t x379 = -1LL;
	int8_t x380 = -1;
	int64_t t62 = -6339094626541LL;

	t62 = (x377%((x378*x379)-x380));

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x382 = 1;
	volatile int64_t x383 = 281437065996188673LL;
	uint64_t x384 = 40973062137871LLU;
	uint64_t t63 = 38LLU;

	t63 = (x381%((x382*x383)-x384));

	if (t63 != 3LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x385 = INT16_MAX;
	static int32_t x386 = 929524;
	static int8_t x388 = -2;

	t64 = (x385%((x386*x387)-x388));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x390 = 256974;
	uint8_t x391 = 59U;
	static int8_t x392 = 2;
	int64_t t65 = 4158739828LL;

	t65 = (x389%((x390*x391)-x392));

	if (t65 != -8652344LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x397 = INT16_MAX;
	int16_t x398 = INT16_MIN;
	uint8_t x399 = 6U;
	int32_t x400 = 3922235;
	int32_t t66 = 35184670;

	t66 = (x397%((x398*x399)-x400));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x401 = -120;
	uint8_t x402 = 15U;
	uint16_t x404 = UINT16_MAX;
	volatile int32_t t67 = 25477557;

	t67 = (x401%((x402*x403)-x404));

	if (t67 != -120) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x405 = 71197U;
	int64_t x406 = -1LL;
	uint16_t x407 = 115U;
	volatile uint64_t x408 = UINT64_MAX;
	uint64_t t68 = 538700598609607LLU;

	t68 = (x405%((x406*x407)-x408));

	if (t68 != 71197LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x411 = -1113;
	volatile uint32_t t69 = 22538U;

	t69 = (x409%((x410*x411)-x412));

	if (t69 != 5985U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x413 = INT8_MIN;
	static int64_t x414 = 11LL;
	int64_t x415 = 233466124788269LL;
	int32_t x416 = -1;
	int64_t t70 = -1251153LL;

	t70 = (x413%((x414*x415)-x416));

	if (t70 != -128LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x421 = INT32_MIN;
	static int32_t x423 = -1;
	int8_t x424 = -1;
	static int32_t t71 = -1503168;

	t71 = (x421%((x422*x423)-x424));

	if (t71 != -8) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x429 = 18U;
	static uint64_t x431 = 902LLU;
	static volatile int64_t x432 = INT64_MIN;
	volatile uint64_t t72 = 220977397962653LLU;

	t72 = (x429%((x430*x431)-x432));

	if (t72 != 18LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x433 = -3;
	static uint8_t x434 = 9U;
	static uint32_t x436 = UINT32_MAX;

	t73 = (x433%((x434*x435)-x436));

	if (t73 != 45U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x437 = 252U;
	int32_t x439 = 416588635;
	int16_t x440 = INT16_MIN;
	volatile int32_t t74 = -366035;

	t74 = (x437%((x438*x439)-x440));

	if (t74 != 252) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x441 = 13U;
	static volatile uint32_t x442 = 342U;
	static int32_t x443 = 5117;
	int8_t x444 = INT8_MAX;
	volatile uint32_t t75 = 346848U;

	t75 = (x441%((x442*x443)-x444));

	if (t75 != 13U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x445 = INT32_MAX;
	volatile uint32_t x446 = 12311U;
	static int16_t x448 = -1;

	t76 = (x445%((x446*x447)-x448));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x453 = 1681391336823821419LL;
	volatile int8_t x455 = INT8_MAX;

	t77 = (x453%((x454*x455)-x456));

	if (t77 != 11392LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x457 = INT64_MIN;
	int16_t x458 = INT16_MAX;
	uint32_t x459 = UINT32_MAX;

	t78 = (x457%((x458*x459)-x460));

	if (t78 != 1970270138LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x465 = INT64_MAX;
	uint8_t x466 = UINT8_MAX;
	uint32_t x467 = 772414U;
	static int32_t x468 = INT32_MIN;
	int64_t t79 = 325LL;

	t79 = (x465%((x466*x467)-x468));

	if (t79 != 47331629LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x469 = UINT16_MAX;
	uint64_t x470 = 1089435548709946693LLU;
	volatile int64_t x471 = INT64_MIN;
	uint64_t x472 = 1947418106LLU;
	uint64_t t80 = 239400569612004430LLU;

	t80 = (x469%((x470*x471)-x472));

	if (t80 != 65535LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x473 = 207;
	int16_t x474 = INT16_MIN;
	uint8_t x475 = UINT8_MAX;
	static int8_t x476 = INT8_MIN;
	int32_t t81 = 36;

	t81 = (x473%((x474*x475)-x476));

	if (t81 != 207) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x479 = INT8_MIN;
	volatile int32_t t82 = 785;

	t82 = (x477%((x478*x479)-x480));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x481 = UINT8_MAX;
	volatile uint64_t x484 = UINT64_MAX;
	static volatile uint64_t t83 = 38LLU;

	t83 = (x481%((x482*x483)-x484));

	if (t83 != 255LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x485 = -6716596329LL;
	static volatile int8_t x486 = INT8_MIN;
	uint32_t x487 = 16210U;
	uint64_t x488 = 13944LLU;
	uint64_t t84 = 89391996215958LLU;

	t84 = (x485%((x486*x487)-x488));

	if (t84 != 3490336039LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x490 = UINT64_MAX;
	volatile uint16_t x491 = 3U;
	uint32_t x492 = 44385U;
	uint64_t t85 = 535637130996LLU;

	t85 = (x489%((x490*x491)-x492));

	if (t85 != 28LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x494 = INT16_MAX;
	int16_t x495 = INT16_MIN;
	volatile uint32_t x496 = 190805860U;
	static int64_t t86 = -15307004618LL;

	t86 = (x493%((x494*x495)-x496));

	if (t86 != -2870068559LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x497 = UINT16_MAX;
	static int8_t x498 = -2;
	int8_t x499 = -20;
	int16_t x500 = INT16_MIN;
	int32_t t87 = -346;

	t87 = (x497%((x498*x499)-x500));

	if (t87 != 32727) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x505 = -5804;
	int8_t x506 = -1;
	static uint32_t x507 = UINT32_MAX;
	uint16_t x508 = 3657U;
	uint32_t t88 = 1007083713U;

	t88 = (x505%((x506*x507)-x508));

	if (t88 != 4294961492U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x511 = 114U;
	volatile uint16_t x512 = 31168U;
	volatile int32_t t89 = 9007269;

	t89 = (x509%((x510*x511)-x512));

	if (t89 != 4) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x513 = INT16_MIN;
	uint8_t x514 = UINT8_MAX;
	static uint64_t x515 = 311514830736LLU;

	t90 = (x513%((x514*x515)-x516));

	if (t90 != 50705363237028LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x518 = UINT16_MAX;
	int16_t x519 = INT16_MAX;
	int8_t x520 = -1;

	t91 = (x517%((x518*x519)-x520));

	if (t91 != 196603U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x521 = INT32_MIN;
	uint32_t x522 = 25054U;
	int8_t x523 = 1;
	volatile int8_t x524 = 63;
	volatile uint32_t t92 = 938U;

	t92 = (x521%((x522*x523)-x524));

	if (t92 != 7018U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x533 = -1LL;
	static uint32_t x535 = 92U;
	int16_t x536 = INT16_MAX;
	int64_t t93 = -637560015402987LL;

	t93 = (x533%((x534*x535)-x536));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x549 = 1;
	static uint8_t x550 = 2U;
	uint8_t x551 = 1U;
	static uint8_t x552 = UINT8_MAX;
	volatile int32_t t94 = -1048010;

	t94 = (x549%((x550*x551)-x552));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x553 = 1U;
	uint16_t x555 = UINT16_MAX;
	uint32_t x556 = UINT32_MAX;
	static volatile uint64_t t95 = 395533726626628703LLU;

	t95 = (x553%((x554*x555)-x556));

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x557 = 80U;
	static int32_t x558 = INT32_MAX;
	static volatile uint64_t x559 = UINT64_MAX;
	static int8_t x560 = -14;

	t96 = (x557%((x558*x559)-x560));

	if (t96 != 80LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x561 = 2431149660013LLU;
	int16_t x562 = -1;
	uint32_t x563 = UINT32_MAX;
	volatile uint8_t x564 = 25U;
	uint64_t t97 = 39977359LLU;

	t97 = (x561%((x562*x563)-x564));

	if (t97 != 198184061LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x565 = INT32_MIN;
	int8_t x566 = 3;
	int8_t x567 = INT8_MAX;
	volatile int64_t x568 = INT64_MAX;
	int64_t t98 = -136438843LL;

	t98 = (x565%((x566*x567)-x568));

	if (t98 != -2147483648LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x569 = INT16_MAX;
	volatile int32_t x570 = -833333;
	static int16_t x571 = 214;
	uint32_t x572 = 28990965U;
	uint32_t t99 = 239700U;

	t99 = (x569%((x570*x571)-x572));

	if (t99 != 32767U) { NG(); } else { ; }
	
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


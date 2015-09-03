#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MIN;
volatile int8_t x9 = INT8_MIN;
int8_t x15 = INT8_MIN;
static volatile uint64_t t2 = 45791263549LLU;
uint64_t x28 = 3558901LLU;
int64_t x31 = 2626207723514270183LL;
int64_t t7 = 68146985048LL;
uint8_t x39 = UINT8_MAX;
static volatile int8_t x40 = -1;
volatile uint64_t x44 = 3LLU;
static volatile uint64_t t9 = 4985199726524621827LLU;
volatile int8_t x49 = INT8_MIN;
static volatile uint32_t x50 = 2502U;
uint64_t x56 = 1671837861765914LLU;
volatile int16_t x58 = 0;
volatile uint16_t x60 = 2U;
static int8_t x64 = -2;
uint16_t x66 = UINT16_MAX;
static int16_t x68 = 3;
int8_t x69 = INT8_MIN;
volatile uint32_t t16 = 6677U;
int8_t x73 = INT8_MIN;
int64_t x75 = INT64_MAX;
static uint32_t t19 = 2U;
uint32_t x86 = 2032689U;
uint32_t t21 = 3993489U;
static int8_t x99 = INT8_MAX;
uint32_t x105 = UINT32_MAX;
static int16_t x107 = INT16_MIN;
static int32_t x108 = INT32_MAX;
int8_t x110 = INT8_MAX;
int8_t x111 = 16;
static volatile int8_t x119 = 1;
uint16_t x129 = UINT16_MAX;
int32_t x131 = -13;
int32_t t30 = 190;
int16_t x133 = 3;
uint16_t x134 = 307U;
static int16_t x155 = INT16_MIN;
uint32_t x165 = UINT32_MAX;
static uint8_t x167 = 35U;
static int16_t x174 = 13234;
int32_t x175 = 51540;
volatile int8_t x180 = INT8_MAX;
int16_t x183 = INT16_MIN;
volatile uint32_t t40 = 69102919U;
uint32_t x186 = 21664929U;
static volatile int64_t x187 = 5388217965LL;
uint16_t x188 = UINT16_MAX;
uint8_t x193 = UINT8_MAX;
uint16_t x204 = UINT16_MAX;
uint8_t x208 = UINT8_MAX;
int64_t x212 = -1LL;
volatile uint64_t x217 = UINT64_MAX;
int8_t x223 = INT8_MIN;
int8_t x224 = 5;
volatile int8_t x232 = INT8_MAX;
static volatile int64_t x234 = -1LL;
int32_t x244 = -1;
volatile int64_t t52 = -107858845882206LL;
uint16_t x248 = 17U;
volatile uint16_t x257 = 3U;
static uint8_t x260 = 1U;
static int8_t x269 = INT8_MAX;
static int64_t t58 = -127LL;
int64_t x281 = INT64_MIN;
volatile int64_t t60 = -559786LL;
int64_t x290 = INT64_MIN;
int16_t x291 = INT16_MIN;
int64_t x292 = INT64_MIN;
volatile uint16_t x299 = UINT16_MAX;
volatile int16_t x300 = INT16_MAX;
static int64_t x301 = INT64_MAX;
uint16_t x304 = 117U;
volatile int32_t t65 = 1;
uint16_t x314 = 1494U;
int8_t x320 = -3;
volatile uint8_t x322 = 10U;
uint8_t x323 = UINT8_MAX;
int8_t x337 = 11;
uint64_t x341 = 87473LLU;
uint64_t t71 = 59131899428LLU;
int64_t x362 = INT64_MIN;
volatile int64_t t80 = 1152483509241671407LL;
static int64_t x393 = INT64_MIN;
static volatile uint64_t x398 = 366155LLU;
int32_t x401 = INT32_MIN;
volatile uint64_t x406 = 481027LLU;
int32_t x409 = INT32_MIN;
static volatile uint64_t x412 = 32LLU;
uint32_t x413 = UINT32_MAX;
int16_t x414 = INT16_MIN;
uint16_t x422 = 13983U;
uint32_t x428 = 0U;
uint32_t t88 = 69U;
uint8_t x437 = 0U;
uint8_t x439 = 25U;
int32_t x440 = -10;
int32_t x445 = -1;
volatile int16_t x450 = INT16_MIN;
static int32_t x453 = INT32_MIN;
volatile int64_t x454 = -137186LL;
volatile int64_t t95 = -29003669LL;
static int64_t x464 = INT64_MIN;
int8_t x465 = 6;
uint64_t x471 = 1218412846916LLU;
uint16_t x473 = UINT16_MAX;
static int16_t x476 = INT16_MIN;
uint32_t t99 = 112U;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int8_t x2 = INT8_MAX;
	volatile uint8_t x4 = 107U;
	uint64_t t0 = 134894424009218175LLU;

	t0 = (((x1^x2)-x3)+x4);

	if (t0 != 9223372036854775787LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x10 = 28181714952LLU;
	int32_t x11 = -259366365;
	volatile int32_t x12 = 101811261;
	uint64_t t1 = 373932307523LLU;

	t1 = (((x9^x10)-x11)+x12);

	if (t1 != 18446744045889014178LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 9U;
	uint16_t x14 = 1746U;
	uint64_t x16 = UINT64_MAX;

	t2 = (((x13^x14)-x15)+x16);

	if (t2 != 1882LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x17 = 33LL;
	static volatile uint16_t x18 = 1542U;
	static int64_t x19 = 165LL;
	int16_t x20 = -5;
	volatile int64_t t3 = 75620LL;

	t3 = (((x17^x18)-x19)+x20);

	if (t3 != 1405LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 3116416U;
	int32_t x22 = -1;
	static uint32_t x23 = 817U;
	int8_t x24 = INT8_MIN;
	uint32_t t4 = 15U;

	t4 = (((x21^x22)-x23)+x24);

	if (t4 != 4291849934U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 10011U;
	uint32_t x26 = UINT32_MAX;
	int32_t x27 = INT32_MIN;
	uint64_t t5 = 1669964922LLU;

	t5 = (((x25^x26)-x27)+x28);

	if (t5 != 2151032537LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x29 = -49;
	volatile uint64_t x30 = 651315545LLU;
	static uint8_t x32 = 1U;
	uint64_t t6 = 4147212485796435982LLU;

	t6 = (((x29^x30)-x31)+x32);

	if (t6 != 15820536349543965872LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -3523118LL;
	int64_t x34 = -18723166LL;
	int8_t x35 = 1;
	uint8_t x36 = UINT8_MAX;

	t7 = (((x33^x34)-x35)+x36);

	if (t7 != 19428462LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x37 = UINT32_MAX;
	int16_t x38 = -274;
	static volatile uint32_t t8 = 926804834U;

	t8 = (((x37^x38)-x39)+x40);

	if (t8 != 17U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = 2342277;
	int8_t x42 = -1;
	int8_t x43 = INT8_MAX;

	t9 = (((x41^x42)-x43)+x44);

	if (t9 != 18446744073707209214LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = 732;
	uint16_t x46 = 1069U;
	int32_t x47 = 16;
	int8_t x48 = INT8_MIN;
	volatile int32_t t10 = -2334;

	t10 = (((x45^x46)-x47)+x48);

	if (t10 != 1633) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x51 = INT16_MIN;
	static int32_t x52 = -1;
	static volatile uint32_t t11 = 288U;

	t11 = (((x49^x50)-x51)+x52);

	if (t11 != 30277U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = UINT32_MAX;
	volatile int16_t x54 = -1;
	uint16_t x55 = 15U;
	uint64_t t12 = 1428318534127612LLU;

	t12 = (((x53^x54)-x55)+x56);

	if (t12 != 1671842156733195LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = -177;
	uint32_t x59 = UINT32_MAX;
	uint32_t t13 = 62U;

	t13 = (((x57^x58)-x59)+x60);

	if (t13 != 4294967122U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x61 = 7126680236288417387LLU;
	int64_t x62 = -1LL;
	int16_t x63 = INT16_MIN;
	static uint64_t t14 = 476390577158084398LLU;

	t14 = (((x61^x62)-x63)+x64);

	if (t14 != 11320063837421166994LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x65 = -26;
	int16_t x67 = INT16_MIN;
	int32_t t15 = 710254709;

	t15 = (((x65^x66)-x67)+x68);

	if (t15 != -32740) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x70 = INT32_MIN;
	int32_t x71 = 30;
	volatile uint32_t x72 = 22479366U;

	t16 = (((x69^x70)-x71)+x72);

	if (t16 != 2169962856U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x74 = -101LL;
	uint32_t x76 = 6U;
	volatile int64_t t17 = -1337LL;

	t17 = (((x73^x74)-x75)+x76);

	if (t17 != -9223372036854775774LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = 1;
	int8_t x78 = INT8_MIN;
	uint8_t x79 = 118U;
	static uint8_t x80 = UINT8_MAX;
	volatile int32_t t18 = 216162883;

	t18 = (((x77^x78)-x79)+x80);

	if (t18 != 10) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = 20421U;
	int32_t x82 = INT32_MAX;
	int8_t x83 = 12;
	static int32_t x84 = INT32_MIN;

	t19 = (((x81^x82)-x83)+x84);

	if (t19 != 4294946862U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MIN;
	int16_t x87 = INT16_MAX;
	volatile uint32_t x88 = 335609970U;
	static int64_t t20 = -191516044LL;

	t20 = (((x85^x86)-x87)+x88);

	if (t20 != -9223372036517165916LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = -1;
	int16_t x90 = INT16_MAX;
	uint32_t x91 = 8335U;
	int8_t x92 = 60;

	t21 = (((x89^x90)-x91)+x92);

	if (t21 != 4294926253U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = 1;
	int16_t x94 = 490;
	static uint32_t x95 = UINT32_MAX;
	uint16_t x96 = 9111U;
	static uint32_t t22 = 318041218U;

	t22 = (((x93^x94)-x95)+x96);

	if (t22 != 9603U) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x97 = 147;
	static int64_t x98 = INT64_MIN;
	volatile int64_t x100 = INT64_MAX;
	volatile int64_t t23 = -6LL;

	t23 = (((x97^x98)-x99)+x100);

	if (t23 != 19LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = -11607812LL;
	static int16_t x102 = -16302;
	int16_t x103 = INT16_MIN;
	uint8_t x104 = UINT8_MAX;
	int64_t t24 = 5477LL;

	t24 = (((x101^x102)-x103)+x104);

	if (t24 != 11641261LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x106 = 37U;
	uint32_t t25 = 5609212U;

	t25 = (((x105^x106)-x107)+x108);

	if (t25 != 2147516377U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = -1;
	int8_t x112 = 7;
	static volatile int32_t t26 = 138817782;

	t26 = (((x109^x110)-x111)+x112);

	if (t26 != -137) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = UINT8_MAX;
	int32_t x114 = -1;
	volatile uint16_t x115 = 6U;
	static int8_t x116 = INT8_MIN;
	volatile int32_t t27 = 225;

	t27 = (((x113^x114)-x115)+x116);

	if (t27 != -390) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x117 = 11U;
	int32_t x118 = INT32_MIN;
	volatile int8_t x120 = 63;
	int32_t t28 = 454671812;

	t28 = (((x117^x118)-x119)+x120);

	if (t28 != -2147483575) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = -1;
	static volatile int32_t x122 = INT32_MAX;
	int64_t x123 = 3874364483410932885LL;
	int16_t x124 = INT16_MIN;
	static int64_t t29 = -966776LL;

	t29 = (((x121^x122)-x123)+x124);

	if (t29 != -3874364485558449301LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x130 = 8398U;
	static int8_t x132 = -35;

	t30 = (((x129^x130)-x131)+x132);

	if (t30 != 57115) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x135 = -19;
	static int64_t x136 = 38626351651LL;
	int64_t t31 = -9249426LL;

	t31 = (((x133^x134)-x135)+x136);

	if (t31 != 38626351974LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x141 = INT32_MIN;
	uint8_t x142 = UINT8_MAX;
	int8_t x143 = INT8_MAX;
	uint32_t x144 = UINT32_MAX;
	static volatile uint32_t t32 = 2U;

	t32 = (((x141^x142)-x143)+x144);

	if (t32 != 2147483775U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = 1;
	static volatile int16_t x146 = INT16_MIN;
	uint64_t x147 = 4241LLU;
	volatile int32_t x148 = -1;
	uint64_t t33 = 46779843LLU;

	t33 = (((x145^x146)-x147)+x148);

	if (t33 != 18446744073709514607LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = 16838277;
	uint32_t x154 = 1239336U;
	int16_t x156 = INT16_MIN;
	volatile uint32_t t34 = 4659U;

	t34 = (((x153^x154)-x155)+x156);

	if (t34 != 17958829U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x157 = INT16_MIN;
	uint8_t x158 = UINT8_MAX;
	int32_t x159 = -60710258;
	int8_t x160 = -1;
	volatile int32_t t35 = 80551;

	t35 = (((x157^x158)-x159)+x160);

	if (t35 != 60677744) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x166 = INT32_MAX;
	uint32_t x168 = 518600441U;
	uint32_t t36 = 14U;

	t36 = (((x165^x166)-x167)+x168);

	if (t36 != 2666084054U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x169 = UINT32_MAX;
	int32_t x170 = -1;
	uint32_t x171 = UINT32_MAX;
	int64_t x172 = -1LL;
	volatile int64_t t37 = -107LL;

	t37 = (((x169^x170)-x171)+x172);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x173 = 2146788900U;
	volatile uint64_t x176 = 160874030LLU;
	uint64_t t38 = 192300875462LLU;

	t38 = (((x173^x174)-x175)+x176);

	if (t38 != 2307607152LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = INT64_MAX;
	uint32_t x178 = UINT32_MAX;
	uint16_t x179 = UINT16_MAX;
	static int64_t t39 = -12841018057LL;

	t39 = (((x177^x178)-x179)+x180);

	if (t39 != 9223372032559743104LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x181 = 1321454U;
	volatile int16_t x182 = -1;
	volatile int32_t x184 = INT32_MAX;

	t40 = (((x181^x182)-x183)+x184);

	if (t40 != 2146194960U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x185 = UINT32_MAX;
	volatile int64_t t41 = 5465025704798LL;

	t41 = (((x185^x186)-x187)+x188);

	if (t41 != -1114850064LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x189 = -113;
	int64_t x190 = INT64_MIN;
	uint64_t x191 = 341686LLU;
	uint8_t x192 = UINT8_MAX;
	uint64_t t42 = 127163188202LLU;

	t42 = (((x189^x190)-x191)+x192);

	if (t42 != 9223372036854434264LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x194 = 6695;
	int8_t x195 = 0;
	int8_t x196 = -1;
	int32_t t43 = -7407;

	t43 = (((x193^x194)-x195)+x196);

	if (t43 != 6871) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x201 = 1U;
	int32_t x202 = -1;
	static int32_t x203 = INT32_MAX;
	uint32_t t44 = 25U;

	t44 = (((x201^x202)-x203)+x204);

	if (t44 != 2147549182U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x205 = 28567U;
	volatile int32_t x206 = INT32_MIN;
	uint64_t x207 = UINT64_MAX;
	volatile uint64_t t45 = 6LLU;

	t45 = (((x205^x206)-x207)+x208);

	if (t45 != 18446744071562096791LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x209 = 14152549LLU;
	uint32_t x210 = UINT32_MAX;
	uint16_t x211 = UINT16_MAX;
	volatile uint64_t t46 = 763477104018LLU;

	t46 = (((x209^x210)-x211)+x212);

	if (t46 != 4280749210LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x213 = INT8_MAX;
	volatile uint32_t x214 = UINT32_MAX;
	int32_t x215 = 3193458;
	volatile uint16_t x216 = 4U;
	static volatile uint32_t t47 = 6U;

	t47 = (((x213^x214)-x215)+x216);

	if (t47 != 4291773714U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x218 = UINT16_MAX;
	uint8_t x219 = UINT8_MAX;
	int64_t x220 = INT64_MAX;
	uint64_t t48 = 32626673945298864LLU;

	t48 = (((x217^x218)-x219)+x220);

	if (t48 != 9223372036854710016LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x221 = INT8_MIN;
	int32_t x222 = -5928917;
	static volatile int32_t t49 = -571028;

	t49 = (((x221^x222)-x223)+x224);

	if (t49 != 5929008) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x229 = 2211227306688791785LLU;
	int64_t x230 = -1LL;
	static uint32_t x231 = 11U;
	uint64_t t50 = 207219595LLU;

	t50 = (((x229^x230)-x231)+x232);

	if (t50 != 16235516767020759946LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x233 = UINT64_MAX;
	uint32_t x235 = UINT32_MAX;
	static int64_t x236 = INT64_MIN;
	volatile uint64_t t51 = 1825869351203523LLU;

	t51 = (((x233^x234)-x235)+x236);

	if (t51 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x241 = INT8_MIN;
	volatile int64_t x242 = INT64_MAX;
	int8_t x243 = 0;

	t52 = (((x241^x242)-x243)+x244);

	if (t52 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x245 = INT16_MAX;
	static uint16_t x246 = UINT16_MAX;
	uint64_t x247 = 53491LLU;
	volatile uint64_t t53 = 111080027682047LLU;

	t53 = (((x245^x246)-x247)+x248);

	if (t53 != 18446744073709530910LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x253 = 464U;
	int16_t x254 = -1;
	int32_t x255 = -1;
	uint16_t x256 = 50U;
	volatile int32_t t54 = -13278;

	t54 = (((x253^x254)-x255)+x256);

	if (t54 != -414) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x258 = UINT32_MAX;
	int16_t x259 = INT16_MIN;
	static uint32_t t55 = 2624U;

	t55 = (((x257^x258)-x259)+x260);

	if (t55 != 32765U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x265 = INT64_MAX;
	int16_t x266 = INT16_MAX;
	uint64_t x267 = UINT64_MAX;
	volatile uint32_t x268 = 11257965U;
	volatile uint64_t t56 = 214442121439497311LLU;

	t56 = (((x265^x266)-x267)+x268);

	if (t56 != 9223372036866001006LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x270 = INT64_MAX;
	static int8_t x271 = 45;
	static int16_t x272 = -1;
	static int64_t t57 = -3793700LL;

	t57 = (((x269^x270)-x271)+x272);

	if (t57 != 9223372036854775634LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x273 = INT32_MAX;
	uint16_t x274 = 5939U;
	volatile int8_t x275 = 3;
	int64_t x276 = -31189785150LL;

	t58 = (((x273^x274)-x275)+x276);

	if (t58 != -29042307445LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x277 = INT64_MAX;
	volatile int32_t x278 = INT32_MIN;
	uint16_t x279 = UINT16_MAX;
	static volatile uint8_t x280 = 0U;
	int64_t t59 = -1986LL;

	t59 = (((x277^x278)-x279)+x280);

	if (t59 != -9223372034707357696LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x282 = -1LL;
	uint32_t x283 = 102U;
	uint8_t x284 = 0U;

	t60 = (((x281^x282)-x283)+x284);

	if (t60 != 9223372036854775705LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x289 = -183849LL;
	volatile int64_t t61 = -398729875942LL;

	t61 = (((x289^x290)-x291)+x292);

	if (t61 != -151081LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x297 = UINT16_MAX;
	int8_t x298 = 0;
	static int32_t t62 = -16130612;

	t62 = (((x297^x298)-x299)+x300);

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x302 = INT16_MIN;
	int64_t x303 = -19744LL;
	static volatile int64_t t63 = 5579504LL;

	t63 = (((x301^x302)-x303)+x304);

	if (t63 != -9223372036854723180LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x305 = 0;
	int32_t x306 = -953;
	int64_t x307 = 3061375731767303336LL;
	volatile int16_t x308 = -67;
	static int64_t t64 = -15260302290441870LL;

	t64 = (((x305^x306)-x307)+x308);

	if (t64 != -3061375731767304356LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x309 = UINT16_MAX;
	uint8_t x310 = 0U;
	uint16_t x311 = 25758U;
	int16_t x312 = INT16_MAX;

	t65 = (((x309^x310)-x311)+x312);

	if (t65 != 72544) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x313 = 1;
	int16_t x315 = INT16_MIN;
	static uint64_t x316 = UINT64_MAX;
	volatile uint64_t t66 = 1857972546477LLU;

	t66 = (((x313^x314)-x315)+x316);

	if (t66 != 34262LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x317 = 1;
	volatile uint32_t x318 = 1926702U;
	static int16_t x319 = INT16_MIN;
	uint32_t t67 = 3282U;

	t67 = (((x317^x318)-x319)+x320);

	if (t67 != 1959468U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x321 = 4U;
	volatile uint64_t x324 = 203815350381707LLU;
	uint64_t t68 = 146813LLU;

	t68 = (((x321^x322)-x323)+x324);

	if (t68 != 203815350381466LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x333 = INT32_MAX;
	static int64_t x334 = INT64_MIN;
	int32_t x335 = -1;
	int32_t x336 = -60;
	static int64_t t69 = 1732739642776879293LL;

	t69 = (((x333^x334)-x335)+x336);

	if (t69 != -9223372034707292220LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x338 = INT8_MAX;
	static uint8_t x339 = UINT8_MAX;
	int64_t x340 = -1LL;
	int64_t t70 = -26439789811582101LL;

	t70 = (((x337^x338)-x339)+x340);

	if (t70 != -140LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x342 = INT16_MAX;
	int32_t x343 = INT32_MIN;
	int8_t x344 = INT8_MIN;

	t71 = (((x341^x342)-x343)+x344);

	if (t71 != 2147559886LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x345 = 7U;
	int64_t x346 = -2850146LL;
	static uint8_t x347 = 8U;
	uint64_t x348 = 1387LLU;
	uint64_t t72 = 171463867855LLU;

	t72 = (((x345^x346)-x347)+x348);

	if (t72 != 18446744073706702844LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x349 = 1296U;
	int64_t x350 = INT64_MIN;
	static int16_t x351 = INT16_MIN;
	static int16_t x352 = INT16_MIN;
	int64_t t73 = 89905101769LL;

	t73 = (((x349^x350)-x351)+x352);

	if (t73 != -9223372036854774512LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x353 = 1773U;
	uint64_t x354 = 76816012LLU;
	volatile int16_t x355 = -1;
	volatile int8_t x356 = -1;
	volatile uint64_t t74 = 6LLU;

	t74 = (((x353^x354)-x355)+x356);

	if (t74 != 76814433LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x361 = -1;
	int8_t x363 = 1;
	uint64_t x364 = UINT64_MAX;
	static volatile uint64_t t75 = 2179285966385LLU;

	t75 = (((x361^x362)-x363)+x364);

	if (t75 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x365 = -1LL;
	uint16_t x366 = 110U;
	uint16_t x367 = 1092U;
	static volatile int8_t x368 = INT8_MIN;
	volatile int64_t t76 = -3607727385849915LL;

	t76 = (((x365^x366)-x367)+x368);

	if (t76 != -1331LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x369 = INT32_MIN;
	volatile int32_t x370 = INT32_MIN;
	int16_t x371 = -1;
	uint8_t x372 = 82U;
	volatile int32_t t77 = 24228704;

	t77 = (((x369^x370)-x371)+x372);

	if (t77 != 83) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x377 = -1;
	int8_t x378 = -1;
	int8_t x379 = 33;
	static int16_t x380 = -1;
	volatile int32_t t78 = 863965247;

	t78 = (((x377^x378)-x379)+x380);

	if (t78 != -34) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x381 = -1;
	uint32_t x382 = UINT32_MAX;
	static int8_t x383 = 38;
	int8_t x384 = 3;
	volatile uint32_t t79 = 84481482U;

	t79 = (((x381^x382)-x383)+x384);

	if (t79 != 4294967261U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x385 = INT32_MAX;
	int64_t x386 = -1088318LL;
	int32_t x387 = INT32_MIN;
	uint32_t x388 = 2074496U;

	t80 = (((x385^x386)-x387)+x388);

	if (t80 != 3162813LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x394 = 29;
	int16_t x395 = 3;
	uint64_t x396 = 1734167818111971911LLU;
	volatile uint64_t t81 = 2171479877210399227LLU;

	t81 = (((x393^x394)-x395)+x396);

	if (t81 != 10957539854966747745LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x397 = UINT8_MAX;
	int16_t x399 = -1;
	static uint8_t x400 = UINT8_MAX;
	static uint64_t t82 = 110324521LLU;

	t82 = (((x397^x398)-x399)+x400);

	if (t82 != 366516LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x402 = -615277;
	uint8_t x403 = 29U;
	uint8_t x404 = 0U;
	int32_t t83 = 462;

	t83 = (((x401^x402)-x403)+x404);

	if (t83 != 2146868342) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x405 = -1;
	uint8_t x407 = 3U;
	static int32_t x408 = 22749;
	volatile uint64_t t84 = 328166LLU;

	t84 = (((x405^x406)-x407)+x408);

	if (t84 != 18446744073709093334LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x410 = 220831095781LLU;
	int16_t x411 = INT16_MIN;
	uint64_t t85 = 7906092166LLU;

	t85 = (((x409^x410)-x411)+x412);

	if (t85 != 18446743854306532357LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x415 = 93U;
	int64_t x416 = -2887495085050648215LL;
	int64_t t86 = -847792720747970006LL;

	t86 = (((x413^x414)-x415)+x416);

	if (t86 != -2887495085050615541LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x421 = UINT32_MAX;
	volatile uint32_t x423 = 21496345U;
	volatile uint16_t x424 = 256U;
	volatile uint32_t t87 = 7887U;

	t87 = (((x421^x422)-x423)+x424);

	if (t87 != 4273457223U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x425 = 5850;
	int32_t x426 = INT32_MIN;
	static uint8_t x427 = 33U;

	t88 = (((x425^x426)-x427)+x428);

	if (t88 != 2147489465U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x429 = UINT16_MAX;
	static volatile int8_t x430 = INT8_MAX;
	int64_t x431 = INT64_MAX;
	int32_t x432 = INT32_MAX;
	int64_t t89 = 35726773LL;

	t89 = (((x429^x430)-x431)+x432);

	if (t89 != -9223372034707226752LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x433 = -1;
	volatile uint32_t x434 = 21976U;
	int16_t x435 = INT16_MIN;
	uint64_t x436 = 97479738653153LLU;
	static volatile uint64_t t90 = 203635641033792LLU;

	t90 = (((x433^x434)-x435)+x436);

	if (t90 != 97479738663944LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint32_t x438 = 8U;
	uint32_t t91 = 9U;

	t91 = (((x437^x438)-x439)+x440);

	if (t91 != 4294967269U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x441 = -1;
	uint64_t x442 = 440153269665LLU;
	int8_t x443 = 6;
	uint8_t x444 = UINT8_MAX;
	volatile uint64_t t92 = 88689376LLU;

	t92 = (((x441^x442)-x443)+x444);

	if (t92 != 18446743633556282199LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x446 = UINT16_MAX;
	volatile uint8_t x447 = 20U;
	uint16_t x448 = UINT16_MAX;
	int32_t t93 = -3;

	t93 = (((x445^x446)-x447)+x448);

	if (t93 != -21) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x449 = INT8_MAX;
	volatile uint64_t x451 = UINT64_MAX;
	static uint64_t x452 = 322020215517863978LLU;
	uint64_t t94 = 7LLU;

	t94 = (((x449^x450)-x451)+x452);

	if (t94 != 322020215517831338LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x455 = -1LL;
	int16_t x456 = INT16_MAX;

	t95 = (((x453^x454)-x455)+x456);

	if (t95 != 2147379230LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x461 = UINT32_MAX;
	static uint16_t x462 = UINT16_MAX;
	uint8_t x463 = 6U;
	int64_t t96 = -90711LL;

	t96 = (((x461^x462)-x463)+x464);

	if (t96 != -9223372032559874054LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x466 = 55U;
	int16_t x467 = INT16_MIN;
	uint64_t x468 = UINT64_MAX;
	uint64_t t97 = 21475801LLU;

	t97 = (((x465^x466)-x467)+x468);

	if (t97 != 32816LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x469 = -1LL;
	int32_t x470 = -1;
	int8_t x472 = 3;
	uint64_t t98 = 11LLU;

	t98 = (((x469^x470)-x471)+x472);

	if (t98 != 18446742855296704703LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x474 = UINT32_MAX;
	uint32_t x475 = 101620847U;

	t99 = (((x473^x474)-x475)+x476);

	if (t99 != 4193248145U) { NG(); } else { ; }
	
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


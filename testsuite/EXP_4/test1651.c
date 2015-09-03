#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x3 = 0;
uint8_t x7 = 0U;
static uint16_t x8 = UINT16_MAX;
volatile int32_t t1 = 873927;
static uint32_t x11 = 1014230U;
volatile uint8_t x14 = 70U;
int8_t x15 = 21;
static int32_t t4 = 23827079;
int64_t t5 = 178943514711614227LL;
int16_t x25 = INT16_MAX;
volatile int32_t t6 = 3;
static int32_t x43 = INT32_MIN;
uint64_t t10 = 91862746LLU;
int8_t x48 = INT8_MAX;
static volatile int64_t x62 = INT64_MIN;
int64_t x69 = -1960437606319LL;
int64_t t17 = -337329186LL;
int64_t x73 = INT64_MAX;
int16_t x75 = 14174;
volatile int8_t x96 = INT8_MAX;
int8_t x101 = -1;
int64_t x104 = INT64_MAX;
static int32_t t25 = -6105;
int32_t t26 = -20906347;
volatile uint32_t x121 = 3506011U;
int8_t x123 = INT8_MIN;
uint64_t x125 = 5723073317LLU;
volatile uint64_t t31 = 81LLU;
volatile int16_t x141 = INT16_MIN;
static int32_t x143 = -15088;
static int8_t x145 = INT8_MIN;
volatile uint64_t x147 = UINT64_MAX;
volatile int8_t x150 = INT8_MIN;
volatile int32_t t37 = -31;
uint8_t x153 = 124U;
uint16_t x155 = 1024U;
volatile uint32_t x157 = 52433058U;
int32_t x175 = -3262542;
int8_t x176 = -1;
int32_t x180 = INT32_MIN;
int32_t x181 = -2220;
volatile int64_t x186 = -81569945LL;
int32_t x189 = -1;
int64_t x192 = -51512682592102LL;
int8_t x193 = -30;
volatile int32_t t48 = -375965;
volatile uint16_t x199 = UINT16_MAX;
int64_t x201 = INT64_MIN;
int8_t x209 = -5;
int32_t x218 = 961;
static int16_t x222 = INT16_MIN;
int16_t x232 = -1;
static int32_t x238 = INT32_MAX;
int64_t t60 = -44367727201395LL;
volatile int32_t x246 = INT32_MIN;
uint64_t t61 = 124392794013LLU;
int16_t x253 = 6;
int8_t x257 = 1;
uint32_t x261 = 4650959U;
int32_t x262 = -12722;
int32_t x264 = 4739;
int16_t x265 = -1;
int8_t x267 = -1;
int32_t t67 = 15;
static int64_t x274 = -1LL;
int64_t x282 = -1LL;
static int16_t x288 = INT16_MIN;
volatile int64_t x289 = -22LL;
uint16_t x291 = 108U;
volatile int64_t t72 = 0LL;
static uint64_t x297 = UINT64_MAX;
static uint32_t x310 = UINT32_MAX;
int32_t x317 = -31697431;
volatile int64_t x319 = 1621782734877LL;
uint16_t x329 = 5U;
volatile int32_t t82 = -1;
static int32_t x333 = INT32_MAX;
uint16_t x341 = 19969U;
int64_t x344 = INT64_MAX;
volatile int8_t x350 = INT8_MIN;
static volatile int16_t x351 = -1;
volatile int32_t t88 = -2491;
uint8_t x357 = UINT8_MAX;
volatile uint64_t x360 = 14867325699285LLU;
static volatile uint64_t t90 = 27927475903LLU;
uint64_t x367 = UINT64_MAX;
volatile uint64_t x368 = UINT64_MAX;
uint32_t t92 = 224520U;
uint8_t x380 = 5U;
static int64_t x385 = 360559LL;
int32_t x388 = INT32_MIN;
int64_t t96 = 363115LL;
static int32_t x397 = INT32_MAX;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int16_t x2 = -1;
	static volatile uint32_t x4 = 56U;
	volatile uint32_t t0 = 411U;

	t0 = (x1^(x2<=(x3<=x4)));

	if (t0 != 4294967294U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int32_t x6 = -950860631;

	t1 = (x5^(x6<=(x7<=x8)));

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -1LL;
	int64_t x10 = -81649396619LL;
	uint8_t x12 = UINT8_MAX;
	static volatile int64_t t2 = 545171088614LL;

	t2 = (x9^(x10<=(x11<=x12)));

	if (t2 != -2LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	int32_t x16 = 170364727;
	int32_t t3 = 2271791;

	t3 = (x13^(x14<=(x15<=x16)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 0U;
	uint64_t x18 = UINT64_MAX;
	int8_t x19 = INT8_MIN;
	volatile uint16_t x20 = UINT16_MAX;

	t4 = (x17^(x18<=(x19<=x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MIN;
	int16_t x22 = -2112;
	volatile int16_t x23 = INT16_MIN;
	int16_t x24 = -1;

	t5 = (x21^(x22<=(x23<=x24)));

	if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x26 = UINT64_MAX;
	static volatile int16_t x27 = INT16_MAX;
	int8_t x28 = 0;

	t6 = (x25^(x26<=(x27<=x28)));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	volatile int16_t x30 = INT16_MAX;
	int16_t x31 = -15606;
	int64_t x32 = INT64_MIN;
	int32_t t7 = -194866277;

	t7 = (x29^(x30<=(x31<=x32)));

	if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int64_t x34 = INT64_MIN;
	int16_t x35 = INT16_MIN;
	volatile uint64_t x36 = UINT64_MAX;
	volatile int32_t t8 = -242036698;

	t8 = (x33^(x34<=(x35<=x36)));

	if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	volatile uint32_t x38 = 2U;
	int16_t x39 = -17;
	static uint8_t x40 = 15U;
	volatile int32_t t9 = 4063;

	t9 = (x37^(x38<=(x39<=x40)));

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = 24671019644LLU;
	int8_t x42 = INT8_MAX;
	volatile int16_t x44 = -93;

	t10 = (x41^(x42<=(x43<=x44)));

	if (t10 != 24671019644LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	static volatile int8_t x46 = INT8_MIN;
	int8_t x47 = 40;
	static int32_t t11 = 32086;

	t11 = (x45^(x46<=(x47<=x48)));

	if (t11 != 2147483646) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 53LL;
	static int32_t x50 = INT32_MAX;
	int32_t x51 = -1453;
	int64_t x52 = 824443712LL;
	static volatile int64_t t12 = -666014243875LL;

	t12 = (x49^(x50<=(x51<=x52)));

	if (t12 != 53LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x53 = 120229044224385LLU;
	volatile uint16_t x54 = 7U;
	volatile int32_t x55 = INT32_MIN;
	static volatile int32_t x56 = 142672;
	uint64_t t13 = 2739631495483LLU;

	t13 = (x53^(x54<=(x55<=x56)));

	if (t13 != 120229044224385LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = -1;
	int8_t x58 = INT8_MAX;
	int64_t x59 = INT64_MAX;
	static uint16_t x60 = 1851U;
	int32_t t14 = -737909714;

	t14 = (x57^(x58<=(x59<=x60)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	int8_t x63 = INT8_MAX;
	static volatile int64_t x64 = 3893LL;
	int32_t t15 = -379433090;

	t15 = (x61^(x62<=(x63<=x64)));

	if (t15 != 126) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	int16_t x66 = -7102;
	int32_t x67 = INT32_MIN;
	volatile int16_t x68 = INT16_MIN;
	int32_t t16 = -1;

	t16 = (x65^(x66<=(x67<=x68)));

	if (t16 != -2147483647) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = -1;
	int32_t x71 = -79836554;
	static uint8_t x72 = UINT8_MAX;

	t17 = (x69^(x70<=(x71<=x72)));

	if (t17 != -1960437606320LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = -1;
	int8_t x76 = -1;
	int64_t t18 = -3086923745858LL;

	t18 = (x73^(x74<=(x75<=x76)));

	if (t18 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = INT32_MIN;
	int32_t x78 = INT32_MAX;
	int64_t x79 = 810845225LL;
	volatile int32_t x80 = -1;
	int32_t t19 = INT32_MIN;

	t19 = (x77^(x78<=(x79<=x80)));

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int32_t x82 = INT32_MIN;
	static int64_t x83 = INT64_MIN;
	uint32_t x84 = 60164U;
	int64_t t20 = 439981523LL;

	t20 = (x81^(x82<=(x83<=x84)));

	if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x85 = 24178235904LLU;
	volatile uint16_t x86 = UINT16_MAX;
	int8_t x87 = 1;
	volatile int32_t x88 = 771610;
	static volatile uint64_t t21 = 875298LLU;

	t21 = (x85^(x86<=(x87<=x88)));

	if (t21 != 24178235904LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 1111749735U;
	uint64_t x90 = UINT64_MAX;
	int8_t x91 = INT8_MIN;
	int32_t x92 = INT32_MAX;
	uint32_t t22 = 2034749524U;

	t22 = (x89^(x90<=(x91<=x92)));

	if (t22 != 1111749735U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = -1;
	int32_t x94 = INT32_MIN;
	static uint16_t x95 = 39U;
	int32_t t23 = -55207782;

	t23 = (x93^(x94<=(x95<=x96)));

	if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x97 = INT8_MAX;
	int32_t x98 = INT32_MIN;
	int8_t x99 = INT8_MIN;
	int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -17;

	t24 = (x97^(x98<=(x99<=x100)));

	if (t24 != 126) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x102 = -1LL;
	static int32_t x103 = -1;

	t25 = (x101^(x102<=(x103<=x104)));

	if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	int16_t x106 = 12007;
	volatile uint8_t x107 = 6U;
	int64_t x108 = INT64_MIN;

	t26 = (x105^(x106<=(x107<=x108)));

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	int64_t x110 = INT64_MIN;
	static int8_t x111 = 0;
	int16_t x112 = 7;
	volatile int64_t t27 = -16068LL;

	t27 = (x109^(x110<=(x111<=x112)));

	if (t27 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x113 = 5U;
	volatile int32_t x114 = -1;
	static uint64_t x115 = UINT64_MAX;
	static volatile uint64_t x116 = 150819859185232LLU;
	int32_t t28 = 88;

	t28 = (x113^(x114<=(x115<=x116)));

	if (t28 != 4) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	static int8_t x118 = 27;
	static int16_t x119 = INT16_MIN;
	uint8_t x120 = 125U;
	int32_t t29 = 53945335;

	t29 = (x117^(x118<=(x119<=x120)));

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x122 = -1LL;
	volatile int64_t x124 = INT64_MIN;
	static uint32_t t30 = 144U;

	t30 = (x121^(x122<=(x123<=x124)));

	if (t30 != 3506010U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = -31;
	static volatile int16_t x127 = INT16_MIN;
	uint16_t x128 = UINT16_MAX;

	t31 = (x125^(x126<=(x127<=x128)));

	if (t31 != 5723073316LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = 30;
	int64_t x130 = 96946860LL;
	static int16_t x131 = INT16_MIN;
	static int16_t x132 = -7046;
	volatile int32_t t32 = -8;

	t32 = (x129^(x130<=(x131<=x132)));

	if (t32 != 30) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 0LLU;
	static int32_t x134 = INT32_MIN;
	int64_t x135 = 45333156566LL;
	int32_t x136 = INT32_MIN;
	static volatile uint64_t t33 = 998386305589375276LLU;

	t33 = (x133^(x134<=(x135<=x136)));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MIN;
	static int64_t x138 = 6284748057885572LL;
	int16_t x139 = 13850;
	int64_t x140 = -1874213LL;
	static volatile int64_t t34 = INT64_MIN;

	t34 = (x137^(x138<=(x139<=x140)));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = INT32_MAX;
	static uint8_t x144 = UINT8_MAX;
	static int32_t t35 = -1;

	t35 = (x141^(x142<=(x143<=x144)));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x146 = 925LLU;
	uint16_t x148 = UINT16_MAX;
	volatile int32_t t36 = -5320942;

	t36 = (x145^(x146<=(x147<=x148)));

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -5;
	static uint8_t x151 = 124U;
	int16_t x152 = -1;

	t37 = (x149^(x150<=(x151<=x152)));

	if (t37 != -6) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x154 = 52;
	int16_t x156 = 2155;
	int32_t t38 = 24;

	t38 = (x153^(x154<=(x155<=x156)));

	if (t38 != 124) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = 30998;
	int64_t x159 = -1LL;
	volatile uint64_t x160 = UINT64_MAX;
	static volatile uint32_t t39 = 1353U;

	t39 = (x157^(x158<=(x159<=x160)));

	if (t39 != 52433058U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = 1;
	int64_t x162 = INT64_MIN;
	int32_t x163 = INT32_MAX;
	static int32_t x164 = INT32_MIN;
	static volatile int32_t t40 = 720623808;

	t40 = (x161^(x162<=(x163<=x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 2496077U;
	int8_t x166 = 0;
	uint8_t x167 = 1U;
	int16_t x168 = 1610;
	static volatile uint32_t t41 = 6U;

	t41 = (x165^(x166<=(x167<=x168)));

	if (t41 != 2496076U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -1400234177LL;
	uint16_t x170 = 327U;
	uint64_t x171 = 903524949888089507LLU;
	static uint32_t x172 = 56594U;
	volatile int64_t t42 = 288LL;

	t42 = (x169^(x170<=(x171<=x172)));

	if (t42 != -1400234177LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 24U;
	volatile int32_t x174 = INT32_MIN;
	volatile int32_t t43 = 280807;

	t43 = (x173^(x174<=(x175<=x176)));

	if (t43 != 25) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = 2;
	int16_t x178 = 8;
	uint32_t x179 = 173U;
	volatile int32_t t44 = 0;

	t44 = (x177^(x178<=(x179<=x180)));

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x182 = -5444;
	static int32_t x183 = INT32_MIN;
	int16_t x184 = 3;
	static int32_t t45 = -7;

	t45 = (x181^(x182<=(x183<=x184)));

	if (t45 != -2219) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	int16_t x187 = -318;
	volatile int8_t x188 = INT8_MAX;
	static volatile int32_t t46 = -12247;

	t46 = (x185^(x186<=(x187<=x188)));

	if (t46 != -2) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x190 = 3U;
	uint32_t x191 = UINT32_MAX;
	int32_t t47 = -116;

	t47 = (x189^(x190<=(x191<=x192)));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x194 = 1;
	static uint64_t x195 = UINT64_MAX;
	int8_t x196 = -1;

	t48 = (x193^(x194<=(x195<=x196)));

	if (t48 != -29) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MAX;
	int16_t x198 = INT16_MAX;
	uint32_t x200 = UINT32_MAX;
	volatile int64_t t49 = INT64_MAX;

	t49 = (x197^(x198<=(x199<=x200)));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x202 = 82LLU;
	volatile int8_t x203 = -14;
	static uint16_t x204 = 27697U;
	volatile int64_t t50 = INT64_MIN;

	t50 = (x201^(x202<=(x203<=x204)));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	int32_t x206 = INT32_MIN;
	static volatile int8_t x207 = -1;
	uint16_t x208 = UINT16_MAX;
	volatile int32_t t51 = -1035718;

	t51 = (x205^(x206<=(x207<=x208)));

	if (t51 != -2) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x210 = UINT16_MAX;
	volatile uint16_t x211 = 1U;
	int16_t x212 = -1;
	int32_t t52 = -150854;

	t52 = (x209^(x210<=(x211<=x212)));

	if (t52 != -5) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x213 = 29128U;
	static volatile uint8_t x214 = 6U;
	static int64_t x215 = INT64_MIN;
	static uint64_t x216 = UINT64_MAX;
	volatile int32_t t53 = 9;

	t53 = (x213^(x214<=(x215<=x216)));

	if (t53 != 29128) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 12039U;
	uint8_t x219 = 77U;
	int64_t x220 = INT64_MAX;
	static volatile int32_t t54 = 4480;

	t54 = (x217^(x218<=(x219<=x220)));

	if (t54 != 12039) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 3382660U;
	volatile int16_t x223 = -7629;
	volatile int16_t x224 = INT16_MAX;
	uint32_t t55 = 222U;

	t55 = (x221^(x222<=(x223<=x224)));

	if (t55 != 3382661U) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = INT32_MIN;
	uint16_t x226 = UINT16_MAX;
	uint64_t x227 = UINT64_MAX;
	int16_t x228 = INT16_MIN;
	static volatile int32_t t56 = INT32_MIN;

	t56 = (x225^(x226<=(x227<=x228)));

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x229 = INT16_MIN;
	int64_t x230 = 21502460903LL;
	int8_t x231 = -1;
	int32_t t57 = 47051;

	t57 = (x229^(x230<=(x231<=x232)));

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = -7;
	uint8_t x234 = 1U;
	volatile int16_t x235 = 5;
	int8_t x236 = INT8_MIN;
	volatile int32_t t58 = 1;

	t58 = (x233^(x234<=(x235<=x236)));

	if (t58 != -7) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	static int8_t x239 = 29;
	static int64_t x240 = INT64_MAX;
	static int32_t t59 = INT32_MIN;

	t59 = (x237^(x238<=(x239<=x240)));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = 23664562LL;
	int32_t x242 = -642724;
	int64_t x243 = -2730599189829608183LL;
	int64_t x244 = INT64_MAX;

	t60 = (x241^(x242<=(x243<=x244)));

	if (t60 != 23664563LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = UINT64_MAX;
	int64_t x247 = -1LL;
	static uint16_t x248 = UINT16_MAX;

	t61 = (x245^(x246<=(x247<=x248)));

	if (t61 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = INT32_MIN;
	uint32_t x250 = 2431192U;
	uint32_t x251 = 4770263U;
	volatile int64_t x252 = 2823653LL;
	int32_t t62 = INT32_MIN;

	t62 = (x249^(x250<=(x251<=x252)));

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = INT32_MIN;
	int32_t x255 = -1;
	uint32_t x256 = 3737233U;
	volatile int32_t t63 = -22;

	t63 = (x253^(x254<=(x255<=x256)));

	if (t63 != 7) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x258 = 0;
	uint64_t x259 = 31LLU;
	volatile int8_t x260 = 23;
	volatile int32_t t64 = -238;

	t64 = (x257^(x258<=(x259<=x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x263 = INT16_MAX;
	uint32_t t65 = 2273U;

	t65 = (x261^(x262<=(x263<=x264)));

	if (t65 != 4650958U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = -1;
	int16_t x268 = 2042;
	static int32_t t66 = 13212;

	t66 = (x265^(x266<=(x267<=x268)));

	if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -1;
	uint8_t x270 = UINT8_MAX;
	volatile int64_t x271 = 9143340895030396LL;
	uint64_t x272 = UINT64_MAX;

	t67 = (x269^(x270<=(x271<=x272)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = -1;
	int16_t x275 = -1;
	int32_t x276 = -1;
	int32_t t68 = -1;

	t68 = (x273^(x274<=(x275<=x276)));

	if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	int64_t x278 = INT64_MAX;
	uint32_t x279 = 42U;
	int16_t x280 = INT16_MIN;
	volatile uint32_t t69 = UINT32_MAX;

	t69 = (x277^(x278<=(x279<=x280)));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 4388U;
	volatile uint32_t x283 = UINT32_MAX;
	uint8_t x284 = UINT8_MAX;
	int32_t t70 = -10574414;

	t70 = (x281^(x282<=(x283<=x284)));

	if (t70 != 4389) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -1;
	int32_t x286 = INT32_MIN;
	uint32_t x287 = 221571806U;
	static int32_t t71 = -6;

	t71 = (x285^(x286<=(x287<=x288)));

	if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x290 = 14571U;
	int32_t x292 = 1;

	t72 = (x289^(x290<=(x291<=x292)));

	if (t72 != -22LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = 1;
	int32_t x294 = INT32_MIN;
	static int8_t x295 = INT8_MAX;
	int64_t x296 = -1595521527275752LL;
	int32_t t73 = -8401;

	t73 = (x293^(x294<=(x295<=x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x298 = UINT16_MAX;
	int8_t x299 = INT8_MIN;
	int32_t x300 = -1;
	uint64_t t74 = UINT64_MAX;

	t74 = (x297^(x298<=(x299<=x300)));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x301 = INT32_MIN;
	volatile int32_t x302 = -134502008;
	volatile int16_t x303 = INT16_MAX;
	int8_t x304 = -1;
	static int32_t t75 = 64712;

	t75 = (x301^(x302<=(x303<=x304)));

	if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	int16_t x306 = -6329;
	static uint8_t x307 = 0U;
	int64_t x308 = INT64_MAX;
	int32_t t76 = 0;

	t76 = (x305^(x306<=(x307<=x308)));

	if (t76 != -2) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 56U;
	int16_t x311 = INT16_MAX;
	int32_t x312 = INT32_MIN;
	static volatile int32_t t77 = -18019;

	t77 = (x309^(x310<=(x311<=x312)));

	if (t77 != 56) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = -27;
	uint16_t x314 = 222U;
	uint64_t x315 = 2619154764990483LLU;
	uint32_t x316 = UINT32_MAX;
	int32_t t78 = -1940194;

	t78 = (x313^(x314<=(x315<=x316)));

	if (t78 != -27) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x318 = -121933301LL;
	int16_t x320 = INT16_MIN;
	int32_t t79 = -4426;

	t79 = (x317^(x318<=(x319<=x320)));

	if (t79 != -31697432) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	uint32_t x322 = 58860538U;
	volatile int32_t x323 = INT32_MIN;
	int8_t x324 = 2;
	static int64_t t80 = INT64_MIN;

	t80 = (x321^(x322<=(x323<=x324)));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	int64_t x326 = 5637241405LL;
	uint8_t x327 = 118U;
	int32_t x328 = 0;
	volatile int32_t t81 = INT32_MIN;

	t81 = (x325^(x326<=(x327<=x328)));

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x330 = INT8_MAX;
	static int8_t x331 = -1;
	int32_t x332 = INT32_MAX;

	t82 = (x329^(x330<=(x331<=x332)));

	if (t82 != 5) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x334 = 2016014571LLU;
	static int64_t x335 = INT64_MAX;
	int64_t x336 = -1LL;
	volatile int32_t t83 = INT32_MAX;

	t83 = (x333^(x334<=(x335<=x336)));

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 6546771U;
	int64_t x338 = 33513797082078086LL;
	uint64_t x339 = 4694LLU;
	int8_t x340 = INT8_MIN;
	uint32_t t84 = 1763542U;

	t84 = (x337^(x338<=(x339<=x340)));

	if (t84 != 6546771U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x342 = -2LL;
	uint8_t x343 = 7U;
	int32_t t85 = 25;

	t85 = (x341^(x342<=(x343<=x344)));

	if (t85 != 19968) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MAX;
	static int16_t x346 = INT16_MAX;
	uint16_t x347 = 4102U;
	int8_t x348 = -48;
	int64_t t86 = INT64_MAX;

	t86 = (x345^(x346<=(x347<=x348)));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = 31765LL;
	volatile int32_t x352 = INT32_MIN;
	int64_t t87 = -1116810162LL;

	t87 = (x349^(x350<=(x351<=x352)));

	if (t87 != 31764LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x353 = UINT16_MAX;
	int64_t x354 = -1248318097280LL;
	uint8_t x355 = UINT8_MAX;
	uint64_t x356 = UINT64_MAX;

	t88 = (x353^(x354<=(x355<=x356)));

	if (t88 != 65534) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x358 = UINT8_MAX;
	volatile uint64_t x359 = 819087LLU;
	volatile int32_t t89 = 2;

	t89 = (x357^(x358<=(x359<=x360)));

	if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 5LLU;
	volatile uint64_t x362 = UINT64_MAX;
	volatile uint16_t x363 = 3U;
	int32_t x364 = -226;

	t90 = (x361^(x362<=(x363<=x364)));

	if (t90 != 5LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = UINT8_MAX;
	int8_t x366 = INT8_MIN;
	volatile int32_t t91 = 384;

	t91 = (x365^(x366<=(x367<=x368)));

	if (t91 != 254) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x369 = UINT32_MAX;
	int64_t x370 = INT64_MIN;
	uint16_t x371 = UINT16_MAX;
	int32_t x372 = INT32_MIN;

	t92 = (x369^(x370<=(x371<=x372)));

	if (t92 != 4294967294U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -1;
	int64_t x374 = 12LL;
	int32_t x375 = -1;
	uint64_t x376 = 1088227LLU;
	volatile int32_t t93 = -67283245;

	t93 = (x373^(x374<=(x375<=x376)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x377 = 447U;
	static uint32_t x378 = 117525872U;
	int8_t x379 = -1;
	volatile int32_t t94 = 258107;

	t94 = (x377^(x378<=(x379<=x380)));

	if (t94 != 447) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MAX;
	int8_t x382 = INT8_MIN;
	int64_t x383 = INT64_MIN;
	static int64_t x384 = -1LL;
	static volatile int32_t t95 = -1997118;

	t95 = (x381^(x382<=(x383<=x384)));

	if (t95 != 2147483646) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x386 = 3994291LLU;
	int8_t x387 = INT8_MIN;

	t96 = (x385^(x386<=(x387<=x388)));

	if (t96 != 360559LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x389 = 1784578U;
	uint16_t x390 = 639U;
	int64_t x391 = 744394477497LL;
	int16_t x392 = -4;
	volatile uint32_t t97 = 679307U;

	t97 = (x389^(x390<=(x391<=x392)));

	if (t97 != 1784578U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	int32_t x394 = INT32_MIN;
	uint8_t x395 = 1U;
	static uint16_t x396 = 29U;
	volatile int64_t t98 = 165740297937LL;

	t98 = (x393^(x394<=(x395<=x396)));

	if (t98 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x398 = -320095722;
	static int8_t x399 = INT8_MAX;
	int8_t x400 = INT8_MIN;
	int32_t t99 = 596114;

	t99 = (x397^(x398<=(x399<=x400)));

	if (t99 != 2147483646) { NG(); } else { ; }
	
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


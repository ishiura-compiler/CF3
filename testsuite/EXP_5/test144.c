#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
static int16_t x7 = INT16_MIN;
int64_t x10 = -1LL;
int32_t x13 = INT32_MAX;
volatile uint32_t x15 = 452881436U;
uint32_t t3 = 17160190U;
volatile int64_t t4 = 24781165134226LL;
static volatile uint64_t t6 = 738731691LLU;
uint64_t x43 = UINT64_MAX;
uint8_t x44 = UINT8_MAX;
uint64_t x57 = UINT64_MAX;
static int32_t x61 = -120;
volatile int16_t x64 = INT16_MAX;
uint64_t x72 = 187017377709159LLU;
uint8_t x79 = UINT8_MAX;
volatile int64_t x85 = -1LL;
uint64_t x86 = 3734LLU;
volatile uint64_t t15 = 10977351751LLU;
int8_t x91 = INT8_MIN;
int64_t x92 = INT64_MIN;
int32_t x101 = -232;
static int64_t x103 = INT64_MIN;
int16_t x116 = INT16_MAX;
int64_t x123 = 9481157649LL;
volatile uint64_t t22 = 8721404182027639324LLU;
int16_t x129 = INT16_MIN;
int16_t x135 = INT16_MIN;
volatile uint64_t t25 = 91376884315LLU;
int8_t x145 = -1;
uint64_t t26 = 259197848299LLU;
int16_t x149 = INT16_MIN;
uint64_t x150 = UINT64_MAX;
uint8_t x151 = 5U;
volatile uint64_t t27 = UINT64_MAX;
uint64_t t28 = 57827534464LLU;
uint64_t t30 = 680572378LLU;
uint16_t x166 = 61U;
int64_t x171 = -854LL;
uint32_t x178 = 3U;
volatile int64_t t34 = -110580927085LL;
static int64_t x183 = -1LL;
uint8_t x186 = 60U;
static int8_t x188 = INT8_MIN;
static int64_t x197 = INT64_MIN;
volatile int32_t x198 = -1;
int8_t x200 = INT8_MIN;
uint16_t x214 = 5303U;
uint8_t x224 = 3U;
uint8_t x225 = UINT8_MAX;
uint64_t t43 = 8059665LLU;
static uint8_t x233 = 85U;
static uint32_t x237 = 48U;
static volatile uint64_t t47 = 5429033966LLU;
int32_t x246 = 9;
volatile int64_t x250 = 1652482438233649LL;
static int32_t x254 = 2265829;
static int32_t x257 = -1;
int64_t t52 = 49810747572LL;
static uint8_t x270 = 42U;
int32_t x271 = 139383160;
volatile uint16_t x272 = 1U;
int16_t x275 = INT16_MAX;
volatile uint64_t t54 = 1LLU;
static uint16_t x282 = 0U;
int16_t x283 = INT16_MAX;
volatile int32_t x285 = -49;
volatile int64_t x293 = -1LL;
volatile uint32_t x304 = UINT32_MAX;
int8_t x305 = INT8_MIN;
int32_t x312 = -1;
int32_t x322 = -22943081;
uint16_t x341 = 297U;
int8_t x343 = INT8_MIN;
volatile int32_t x356 = 2618;
uint32_t t69 = 143560185U;
volatile uint32_t x374 = 14764U;
static volatile int32_t t72 = 46695108;
uint32_t x381 = 403113U;
uint8_t x389 = 1U;
int64_t x391 = -1LL;
static volatile int64_t t74 = -2LL;
static int32_t x393 = -6863;
int32_t x397 = -1;
uint16_t x398 = UINT16_MAX;
volatile int64_t t76 = 30576LL;
int32_t x404 = 18555701;
int16_t x408 = INT16_MAX;
uint16_t x410 = 22U;
int16_t x421 = INT16_MAX;
int8_t x443 = 1;
static volatile int32_t t88 = -22632;
int32_t x458 = -4108;
static uint64_t x462 = 6047LLU;
static int16_t x467 = INT16_MAX;
int32_t x475 = -1;
int8_t x478 = INT8_MIN;
uint16_t x487 = 783U;
int8_t x497 = INT8_MIN;
int16_t x502 = 11;
static volatile uint16_t x503 = UINT16_MAX;
volatile int64_t x504 = -1LL;
int8_t x512 = INT8_MAX;
int8_t x523 = -1;
int16_t x524 = -1;
int64_t t99 = 14592798LL;


void f0(void) {
	int64_t x2 = 3736576LL;
	int64_t x3 = INT64_MIN;
	int8_t x4 = INT8_MIN;
	int64_t t0 = -2719753429159405502LL;

	t0 = (x1+((x2+x3)|x4));

	if (t0 != 32639LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 58;
	static uint32_t x6 = 279717U;
	uint8_t x8 = 27U;
	volatile uint32_t t1 = 15949407U;

	t1 = (x5+((x6+x7)|x8));

	if (t1 != 247033U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -875LL;
	int64_t x11 = 333703LL;
	int16_t x12 = -101;
	static int64_t t2 = 600967515LL;

	t2 = (x9+((x10+x11)|x12));

	if (t2 != -972LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x14 = -1;
	static int16_t x16 = -2;

	t3 = (x13+((x14+x15)|x16));

	if (t3 != 2147483646U) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x25 = 23498045;
	volatile int64_t x26 = INT64_MIN;
	uint8_t x27 = 56U;
	int16_t x28 = -1;

	t4 = (x25+((x26+x27)|x28));

	if (t4 != 23498044LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x29 = INT8_MAX;
	int8_t x30 = 1;
	int64_t x31 = INT64_MIN;
	int32_t x32 = INT32_MAX;
	volatile int64_t t5 = 13769LL;

	t5 = (x29+((x30+x31)|x32));

	if (t5 != -9223372034707292034LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = INT8_MIN;
	volatile uint16_t x34 = UINT16_MAX;
	uint16_t x35 = 8U;
	static uint64_t x36 = 13594003080309168LLU;

	t6 = (x33+((x34+x35)|x36));

	if (t6 != 13594003080309047LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = INT32_MAX;
	uint32_t x42 = 1399702116U;
	uint64_t t7 = 210491996LLU;

	t7 = (x41+((x42+x43)|x44));

	if (t7 != 3547185918LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = INT8_MIN;
	static uint32_t x50 = 22U;
	int32_t x51 = INT32_MIN;
	uint16_t x52 = 10U;
	volatile uint32_t t8 = 12830067U;

	t8 = (x49+((x50+x51)|x52));

	if (t8 != 2147483550U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x58 = 74839354LL;
	int8_t x59 = -1;
	uint8_t x60 = UINT8_MAX;
	volatile uint64_t t9 = 1057LLU;

	t9 = (x57+((x58+x59)|x60));

	if (t9 != 74839550LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x62 = UINT8_MAX;
	static int16_t x63 = -1;
	int32_t t10 = 54184032;

	t10 = (x61+((x62+x63)|x64));

	if (t10 != 32647) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x65 = 207181LLU;
	int16_t x66 = 217;
	uint8_t x67 = 2U;
	int64_t x68 = INT64_MIN;
	uint64_t t11 = 95894345707864244LLU;

	t11 = (x65+((x66+x67)|x68));

	if (t11 != 9223372036854983208LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x69 = INT8_MIN;
	volatile int16_t x70 = INT16_MIN;
	uint16_t x71 = UINT16_MAX;
	static uint64_t t12 = 2012693350LLU;

	t12 = (x69+((x70+x71)|x72));

	if (t12 != 187017377709951LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x77 = INT8_MAX;
	int8_t x78 = 0;
	uint8_t x80 = UINT8_MAX;
	int32_t t13 = -218;

	t13 = (x77+((x78+x79)|x80));

	if (t13 != 382) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x81 = UINT64_MAX;
	int8_t x82 = INT8_MIN;
	int16_t x83 = -1;
	int64_t x84 = -32560759489306LL;
	volatile uint64_t t14 = 570438439510LLU;

	t14 = (x81+((x82+x83)|x84));

	if (t14 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x87 = 142;
	int64_t x88 = -8138LL;

	t15 = (x85+((x86+x87)|x88));

	if (t15 != 18446744073709547317LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x89 = INT8_MIN;
	int64_t x90 = 650LL;
	int64_t t16 = 120388596830374536LL;

	t16 = (x89+((x90+x91)|x92));

	if (t16 != -9223372036854775414LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x93 = 95U;
	uint16_t x94 = 10895U;
	volatile int8_t x95 = INT8_MIN;
	volatile uint32_t x96 = UINT32_MAX;
	uint32_t t17 = 334980492U;

	t17 = (x93+((x94+x95)|x96));

	if (t17 != 94U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x102 = 1U;
	uint32_t x104 = 630347166U;
	int64_t t18 = 8288826795142LL;

	t18 = (x101+((x102+x103)|x104));

	if (t18 != -9223372036224428873LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x105 = 112U;
	uint32_t x106 = 457583U;
	volatile int64_t x107 = 15LL;
	int64_t x108 = INT64_MIN;
	int64_t t19 = -126LL;

	t19 = (x105+((x106+x107)|x108));

	if (t19 != -9223372036854318098LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x113 = 23709960374160014LLU;
	int16_t x114 = INT16_MIN;
	int64_t x115 = 19185558725LL;
	static uint64_t t20 = 249807364868370654LLU;

	t20 = (x113+((x114+x115)|x116));

	if (t20 != 23709979559692941LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x117 = 9U;
	int32_t x118 = INT32_MIN;
	uint8_t x119 = 0U;
	int32_t x120 = -75;
	volatile int32_t t21 = 1477244;

	t21 = (x117+((x118+x119)|x120));

	if (t21 != -66) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x121 = UINT16_MAX;
	volatile uint64_t x122 = 3622420054599596LLU;
	int16_t x124 = INT16_MIN;

	t22 = (x121+((x122+x123)|x124));

	if (t22 != 58300LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x125 = INT32_MAX;
	volatile uint16_t x126 = UINT16_MAX;
	int8_t x127 = -1;
	uint32_t x128 = 635U;
	uint32_t t23 = 10307U;

	t23 = (x125+((x126+x127)|x128));

	if (t23 != 2147549182U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x130 = -1711;
	int64_t x131 = 13185LL;
	static uint8_t x132 = UINT8_MAX;
	static int64_t t24 = -35894576447294478LL;

	t24 = (x129+((x130+x131)|x132));

	if (t24 != -21249LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x133 = 56610560LLU;
	static int32_t x134 = -1;
	int64_t x136 = INT64_MIN;

	t25 = (x133+((x134+x135)|x136));

	if (t25 != 56577791LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x146 = -1;
	static uint64_t x147 = 39LLU;
	uint16_t x148 = 11984U;

	t26 = (x145+((x146+x147)|x148));

	if (t26 != 12021LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x152 = INT16_MAX;

	t27 = (x149+((x150+x151)|x152));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x153 = UINT64_MAX;
	uint32_t x154 = UINT32_MAX;
	uint32_t x155 = 44359034U;
	int16_t x156 = INT16_MIN;

	t28 = (x153+((x154+x155)|x156));

	if (t28 != 4294958456LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x157 = INT16_MAX;
	int8_t x158 = INT8_MAX;
	static volatile int8_t x159 = INT8_MAX;
	static int64_t x160 = 642826859981383203LL;
	int64_t t29 = 2138385837LL;

	t29 = (x157+((x158+x159)|x160));

	if (t29 != 642826859981416190LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x161 = -191693243;
	uint64_t x162 = 333766443947LLU;
	int32_t x163 = -1;
	static int16_t x164 = INT16_MIN;

	t30 = (x161+((x162+x163)|x164));

	if (t30 != 18446744073517842927LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x165 = 19893018304LL;
	static int64_t x167 = 210676476428430LL;
	uint32_t x168 = UINT32_MAX;
	volatile int64_t t31 = -2962219LL;

	t31 = (x165+((x166+x167)|x168));

	if (t31 != 210696628821695LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x169 = 1026172;
	int16_t x170 = -3190;
	int32_t x172 = INT32_MIN;
	volatile int64_t t32 = 611431780264LL;

	t32 = (x169+((x170+x171)|x172));

	if (t32 != 1022128LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x173 = 1;
	int8_t x174 = -9;
	int16_t x175 = 86;
	static int32_t x176 = INT32_MIN;
	int32_t t33 = -417328135;

	t33 = (x173+((x174+x175)|x176));

	if (t33 != -2147483570) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x177 = 936;
	int32_t x179 = 3;
	int64_t x180 = INT64_MIN;

	t34 = (x177+((x178+x179)|x180));

	if (t34 != -9223372036854774866LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x181 = 10402;
	static uint16_t x182 = UINT16_MAX;
	uint64_t x184 = 53517310228LLU;
	static uint64_t t35 = 53LLU;

	t35 = (x181+((x182+x183)|x184));

	if (t35 != 53517363360LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x185 = UINT8_MAX;
	uint64_t x187 = UINT64_MAX;
	static volatile uint64_t t36 = 24216LLU;

	t36 = (x185+((x186+x187)|x188));

	if (t36 != 186LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x189 = UINT16_MAX;
	int32_t x190 = INT32_MIN;
	volatile int16_t x191 = 2309;
	int32_t x192 = -1;
	int32_t t37 = -3;

	t37 = (x189+((x190+x191)|x192));

	if (t37 != 65534) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x199 = 2846LLU;
	static uint64_t t38 = 143801701671559277LLU;

	t38 = (x197+((x198+x199)|x200));

	if (t38 != 9223372036854775709LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x201 = UINT8_MAX;
	int64_t x202 = 97573743843532979LL;
	static int64_t x203 = 2335163913LL;
	int16_t x204 = INT16_MIN;
	static volatile int64_t t39 = 694719307904032LL;

	t39 = (x201+((x202+x203)|x204));

	if (t39 != -22597LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x213 = 61;
	int8_t x215 = INT8_MIN;
	uint16_t x216 = UINT16_MAX;
	volatile int32_t t40 = -5601;

	t40 = (x213+((x214+x215)|x216));

	if (t40 != 65596) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x217 = 3500U;
	volatile int8_t x218 = INT8_MIN;
	uint32_t x219 = 0U;
	int16_t x220 = 39;
	volatile uint32_t t41 = 3026836U;

	t41 = (x217+((x218+x219)|x220));

	if (t41 != 3411U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x221 = 13;
	int16_t x222 = INT16_MAX;
	int8_t x223 = INT8_MIN;
	static int32_t t42 = 81153;

	t42 = (x221+((x222+x223)|x224));

	if (t42 != 32652) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x226 = INT16_MIN;
	int32_t x227 = -109027203;
	uint64_t x228 = 1497884007249LLU;

	t43 = (x225+((x226+x227)|x228));

	if (t43 != 18446744073608887420LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x229 = 22U;
	int16_t x230 = INT16_MAX;
	static uint64_t x231 = 141675LLU;
	int16_t x232 = INT16_MIN;
	volatile uint64_t t44 = 4606962706588LLU;

	t44 = (x229+((x230+x231)|x232));

	if (t44 != 18446744073709529472LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x234 = 268LLU;
	volatile int16_t x235 = -337;
	int64_t x236 = INT64_MIN;
	uint64_t t45 = 8936567LLU;

	t45 = (x233+((x234+x235)|x236));

	if (t45 != 16LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x238 = INT16_MIN;
	int8_t x239 = INT8_MIN;
	uint32_t x240 = UINT32_MAX;
	volatile uint32_t t46 = 402U;

	t46 = (x237+((x238+x239)|x240));

	if (t46 != 47U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x241 = INT16_MIN;
	uint16_t x242 = UINT16_MAX;
	int16_t x243 = INT16_MIN;
	volatile uint64_t x244 = UINT64_MAX;

	t47 = (x241+((x242+x243)|x244));

	if (t47 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x245 = UINT32_MAX;
	uint32_t x247 = UINT32_MAX;
	uint32_t x248 = UINT32_MAX;
	static uint32_t t48 = 15939U;

	t48 = (x245+((x246+x247)|x248));

	if (t48 != 4294967294U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x249 = -1;
	int32_t x251 = INT32_MIN;
	int64_t x252 = INT64_MIN;
	int64_t t49 = -1013705LL;

	t49 = (x249+((x250+x251)|x252));

	if (t49 != -9221719556564025808LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x253 = 0U;
	int8_t x255 = INT8_MIN;
	static volatile int64_t x256 = INT64_MIN;
	static volatile int64_t t50 = -70579306961586LL;

	t50 = (x253+((x254+x255)|x256));

	if (t50 != -9223372036852510107LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x258 = INT64_MAX;
	static int8_t x259 = INT8_MIN;
	volatile int8_t x260 = -1;
	static volatile int64_t t51 = 881023964765669LL;

	t51 = (x257+((x258+x259)|x260));

	if (t51 != -2LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x265 = INT8_MIN;
	int64_t x266 = -7084237LL;
	static uint32_t x267 = 3629230U;
	uint8_t x268 = 5U;

	t52 = (x265+((x266+x267)|x268));

	if (t52 != -3455131LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x269 = 3U;
	volatile int32_t t53 = -22948032;

	t53 = (x269+((x270+x271)|x272));

	if (t53 != 139383206) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x273 = UINT32_MAX;
	volatile uint64_t x274 = 34144089500816628LLU;
	volatile int64_t x276 = INT64_MAX;

	t54 = (x273+((x274+x275)|x276));

	if (t54 != 9223372041149743102LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x281 = 28874;
	uint32_t x284 = 10U;
	volatile uint32_t t55 = 260455U;

	t55 = (x281+((x282+x283)|x284));

	if (t55 != 61641U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x286 = INT16_MIN;
	uint32_t x287 = 9304U;
	int64_t x288 = -1LL;
	volatile int64_t t56 = 69LL;

	t56 = (x285+((x286+x287)|x288));

	if (t56 != -50LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x289 = INT16_MIN;
	volatile uint8_t x290 = 19U;
	uint16_t x291 = 10597U;
	int32_t x292 = -91090758;
	int32_t t57 = 373307;

	t57 = (x289+((x290+x291)|x292));

	if (t57 != -91112966) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x294 = INT16_MAX;
	int8_t x295 = INT8_MIN;
	volatile uint8_t x296 = 6U;
	volatile int64_t t58 = -422LL;

	t58 = (x293+((x294+x295)|x296));

	if (t58 != 32638LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x301 = UINT32_MAX;
	int32_t x302 = INT32_MIN;
	int64_t x303 = -1LL;
	volatile int64_t t59 = -602119234882179LL;

	t59 = (x301+((x302+x303)|x304));

	if (t59 != 4294967294LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x306 = INT16_MAX;
	static int64_t x307 = -1LL;
	int8_t x308 = INT8_MAX;
	volatile int64_t t60 = -1LL;

	t60 = (x305+((x306+x307)|x308));

	if (t60 != 32639LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x309 = INT32_MAX;
	static int8_t x310 = 1;
	volatile int16_t x311 = INT16_MIN;
	static volatile int32_t t61 = 669985994;

	t61 = (x309+((x310+x311)|x312));

	if (t61 != 2147483646) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x313 = INT8_MIN;
	int8_t x314 = 62;
	uint32_t x315 = 393U;
	volatile int32_t x316 = -767938;
	volatile uint32_t t62 = 16261364U;

	t62 = (x313+((x314+x315)|x316));

	if (t62 != 4294199679U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x317 = 2055699LLU;
	int16_t x318 = 4060;
	volatile uint32_t x319 = UINT32_MAX;
	uint32_t x320 = 16734027U;
	uint64_t t63 = 291101LLU;

	t63 = (x317+((x318+x319)|x320));

	if (t63 != 18791918LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x321 = 1569LLU;
	uint8_t x323 = 43U;
	int32_t x324 = INT32_MIN;
	volatile uint64_t t64 = 919528143727704559LLU;

	t64 = (x321+((x322+x323)|x324));

	if (t64 != 18446744073686610147LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x329 = INT8_MIN;
	uint16_t x330 = 444U;
	static uint32_t x331 = 13323184U;
	static int16_t x332 = -15688;
	volatile uint32_t t65 = 11339561U;

	t65 = (x329+((x330+x331)|x332));

	if (t65 != 4294954876U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x333 = 16586;
	int8_t x334 = INT8_MIN;
	volatile int64_t x335 = -1052254990147LL;
	static uint32_t x336 = 0U;
	volatile int64_t t66 = 2226135894320798560LL;

	t66 = (x333+((x334+x335)|x336));

	if (t66 != -1052254973689LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x342 = 67U;
	volatile int64_t x344 = 26LL;
	int64_t t67 = -157LL;

	t67 = (x341+((x342+x343)|x344));

	if (t67 != 260LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x345 = 2629436U;
	int64_t x346 = -1LL;
	static int16_t x347 = 1719;
	uint8_t x348 = UINT8_MAX;
	volatile int64_t t68 = 1375289LL;

	t68 = (x345+((x346+x347)|x348));

	if (t68 != 2631227LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x353 = 49139373U;
	int32_t x354 = -57535;
	int32_t x355 = -51;

	t69 = (x353+((x354+x355)|x356));

	if (t69 != 49081835U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x365 = 11593;
	int8_t x366 = INT8_MAX;
	static int64_t x367 = INT64_MIN;
	int64_t x368 = INT64_MAX;
	int64_t t70 = -107LL;

	t70 = (x365+((x366+x367)|x368));

	if (t70 != 11592LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x373 = UINT64_MAX;
	static int32_t x375 = INT32_MIN;
	int16_t x376 = -1;
	volatile uint64_t t71 = 295067668697LLU;

	t71 = (x373+((x374+x375)|x376));

	if (t71 != 4294967294LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x377 = INT8_MAX;
	volatile int8_t x378 = -5;
	int8_t x379 = INT8_MIN;
	int16_t x380 = -1;

	t72 = (x377+((x378+x379)|x380));

	if (t72 != 126) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x382 = INT32_MIN;
	volatile uint64_t x383 = 843925064LLU;
	uint32_t x384 = 15U;
	volatile uint64_t t73 = 2448307589635556LLU;

	t73 = (x381+((x382+x383)|x384));

	if (t73 != 18446744072406396152LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x390 = 3U;
	int16_t x392 = -1;

	t74 = (x389+((x390+x391)|x392));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x394 = 3U;
	int8_t x395 = INT8_MIN;
	int32_t x396 = INT32_MIN;
	volatile uint32_t t75 = 1U;

	t75 = (x393+((x394+x395)|x396));

	if (t75 != 4294960308U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x399 = INT64_MIN;
	static int8_t x400 = INT8_MAX;

	t76 = (x397+((x398+x399)|x400));

	if (t76 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x401 = INT64_MAX;
	int64_t x402 = -1LL;
	volatile int32_t x403 = INT32_MIN;
	int64_t t77 = 4319535066151225LL;

	t77 = (x401+((x402+x403)|x404));

	if (t77 != 9223372034707292158LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x405 = -1;
	int32_t x406 = -1;
	int16_t x407 = INT16_MIN;
	volatile int32_t t78 = -18117;

	t78 = (x405+((x406+x407)|x408));

	if (t78 != -32770) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x409 = 1419838591LLU;
	uint8_t x411 = 15U;
	static int16_t x412 = -3;
	uint64_t t79 = 3525823498722767971LLU;

	t79 = (x409+((x410+x411)|x412));

	if (t79 != 1419838588LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x413 = 2671U;
	volatile uint32_t x414 = 150U;
	static volatile int32_t x415 = 7356;
	static volatile int64_t x416 = INT64_MIN;
	int64_t t80 = -233956091LL;

	t80 = (x413+((x414+x415)|x416));

	if (t80 != -9223372036854765631LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x417 = INT32_MIN;
	uint64_t x418 = 42663LLU;
	volatile int16_t x419 = INT16_MIN;
	uint8_t x420 = 0U;
	uint64_t t81 = 50543127LLU;

	t81 = (x417+((x418+x419)|x420));

	if (t81 != 18446744071562077863LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x422 = 5126922U;
	volatile uint64_t x423 = 844504565277LLU;
	volatile uint16_t x424 = UINT16_MAX;
	uint64_t t82 = 871244071LLU;

	t82 = (x421+((x422+x423)|x424));

	if (t82 != 844509773822LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x425 = 12275110LL;
	static uint8_t x426 = 21U;
	int8_t x427 = INT8_MIN;
	int32_t x428 = INT32_MIN;
	int64_t t83 = 2765057LL;

	t83 = (x425+((x426+x427)|x428));

	if (t83 != 12275003LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x429 = 11831772LLU;
	int64_t x430 = -1LL;
	volatile int16_t x431 = INT16_MIN;
	static uint64_t x432 = 5012LLU;
	uint64_t t84 = 2LLU;

	t84 = (x429+((x430+x431)|x432));

	if (t84 != 11799003LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x433 = 22225913LLU;
	static int32_t x434 = -720782;
	int8_t x435 = -51;
	static int32_t x436 = 15333;
	uint64_t t85 = 6024262998LLU;

	t85 = (x433+((x434+x435)|x436));

	if (t85 != 21520376LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x441 = UINT32_MAX;
	int8_t x442 = INT8_MIN;
	int8_t x444 = -1;
	volatile uint32_t t86 = 0U;

	t86 = (x441+((x442+x443)|x444));

	if (t86 != 4294967294U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x445 = -16017;
	int16_t x446 = -1;
	int16_t x447 = 5174;
	uint64_t x448 = UINT64_MAX;
	uint64_t t87 = 41898332050664559LLU;

	t87 = (x445+((x446+x447)|x448));

	if (t87 != 18446744073709535598LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x449 = -1;
	int32_t x450 = INT32_MIN;
	volatile uint8_t x451 = UINT8_MAX;
	int16_t x452 = INT16_MIN;

	t88 = (x449+((x450+x451)|x452));

	if (t88 != -32514) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x457 = 1;
	int8_t x459 = -1;
	int32_t x460 = 454;
	static volatile int32_t t89 = -1;

	t89 = (x457+((x458+x459)|x460));

	if (t89 != -4104) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x461 = INT16_MIN;
	static int64_t x463 = INT64_MAX;
	int8_t x464 = INT8_MIN;
	volatile uint64_t t90 = 2516924572970718262LLU;

	t90 = (x461+((x462+x463)|x464));

	if (t90 != 18446744073709518750LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x465 = 491436419671973LLU;
	uint16_t x466 = UINT16_MAX;
	int32_t x468 = -1;
	uint64_t t91 = 19179611576521LLU;

	t91 = (x465+((x466+x467)|x468));

	if (t91 != 491436419671972LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x473 = INT8_MIN;
	uint64_t x474 = UINT64_MAX;
	uint8_t x476 = 3U;
	static uint64_t t92 = 31488LLU;

	t92 = (x473+((x474+x475)|x476));

	if (t92 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x477 = 34;
	int8_t x479 = INT8_MIN;
	int16_t x480 = INT16_MAX;
	static int32_t t93 = -313199;

	t93 = (x477+((x478+x479)|x480));

	if (t93 != 33) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x485 = 2515203U;
	int64_t x486 = -1176418LL;
	int64_t x488 = -2494426105362LL;
	int64_t t94 = -38274LL;

	t94 = (x485+((x486+x487)|x488));

	if (t94 != 2400498LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x489 = INT8_MIN;
	int16_t x490 = INT16_MIN;
	uint8_t x491 = 1U;
	int8_t x492 = -1;
	volatile int32_t t95 = -59601923;

	t95 = (x489+((x490+x491)|x492));

	if (t95 != -129) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x498 = -49598LL;
	volatile uint8_t x499 = UINT8_MAX;
	uint8_t x500 = 37U;
	volatile int64_t t96 = 19950476012LL;

	t96 = (x497+((x498+x499)|x500));

	if (t96 != -49435LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x501 = 249512U;
	volatile int64_t t97 = 15362667400102LL;

	t97 = (x501+((x502+x503)|x504));

	if (t97 != 249511LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x509 = INT16_MIN;
	static int16_t x510 = INT16_MIN;
	static uint64_t x511 = UINT64_MAX;
	uint64_t t98 = 49451152LLU;

	t98 = (x509+((x510+x511)|x512));

	if (t98 != 18446744073709486079LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x521 = -1LL;
	volatile int32_t x522 = -25;

	t99 = (x521+((x522+x523)|x524));

	if (t99 != -2LL) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x8 = INT16_MIN;
uint64_t x12 = 18861675599231LLU;
int64_t x25 = 998408LL;
int32_t x28 = INT32_MIN;
int8_t x29 = -1;
int8_t x33 = -28;
int16_t x37 = 207;
int8_t x38 = INT8_MAX;
volatile int64_t x39 = -262138LL;
int8_t x48 = -1;
volatile int32_t t9 = 61549293;
int16_t x49 = INT16_MIN;
int32_t x56 = 475554;
int32_t t11 = 922;
int32_t x58 = 27205792;
static int16_t x67 = INT16_MIN;
volatile int32_t t14 = 4;
int64_t x73 = -1LL;
static uint8_t x86 = 23U;
static int8_t x89 = -1;
int8_t x92 = INT8_MAX;
static int16_t x95 = 7;
int32_t t21 = -100336195;
static int8_t x99 = -1;
volatile int64_t x102 = INT64_MIN;
static int16_t x103 = INT16_MIN;
uint64_t t24 = 3027971862216745452LLU;
volatile int32_t x110 = INT32_MIN;
static uint16_t x112 = 353U;
uint64_t x123 = 53799312787LLU;
int32_t t28 = -4;
int16_t x129 = INT16_MIN;
uint64_t x139 = UINT64_MAX;
volatile uint64_t x140 = 89592872906120702LLU;
static int16_t x147 = INT16_MAX;
int32_t x149 = INT32_MIN;
int64_t x150 = -19825496LL;
volatile uint32_t t34 = 6600162U;
static uint64_t t36 = 1497220618675LLU;
static int8_t x166 = INT8_MAX;
int8_t x169 = -1;
int8_t x172 = INT8_MIN;
volatile uint64_t x175 = 23269513923812309LLU;
int32_t x180 = -720125905;
volatile uint32_t x181 = 338475U;
static int8_t x182 = INT8_MIN;
volatile int16_t x183 = INT16_MAX;
static int64_t x192 = 57LL;
uint8_t x194 = 3U;
int16_t x198 = -27;
int32_t x201 = INT32_MIN;
volatile int8_t x204 = INT8_MAX;
volatile int32_t t46 = -634648;
volatile uint8_t x206 = 76U;
int64_t x209 = -1LL;
volatile int16_t x212 = -1;
static volatile int64_t x214 = INT64_MIN;
static int16_t x215 = -1;
int16_t x218 = -1;
volatile int64_t t50 = -442827LL;
uint8_t x225 = 15U;
uint64_t x226 = 2803LLU;
static uint32_t x228 = 5208726U;
uint32_t t52 = 4U;
uint8_t x231 = 0U;
uint64_t x232 = 89864627856197753LLU;
volatile uint64_t t53 = 27049470033567404LLU;
uint16_t x233 = 0U;
uint8_t x236 = 8U;
static int32_t x240 = INT32_MIN;
int8_t x258 = INT8_MIN;
uint32_t t59 = 2184645U;
volatile int16_t x262 = -1;
uint64_t t60 = 259088LLU;
int16_t x270 = INT16_MAX;
uint16_t x281 = 409U;
static int32_t x284 = -1067275;
static volatile uint32_t t66 = 12927U;
volatile int32_t x292 = INT32_MIN;
int32_t t67 = -42541534;
static volatile int32_t x312 = INT32_MAX;
volatile int16_t x313 = -1;
int8_t x315 = 0;
static int16_t x334 = 1;
int64_t x337 = INT64_MIN;
uint32_t x342 = 4059U;
int32_t x346 = INT32_MAX;
int8_t x352 = 53;
volatile int32_t x365 = 1;
uint64_t x371 = 3464570762021045596LLU;
static int32_t x373 = -1;
static volatile int64_t x377 = INT64_MIN;
int64_t x380 = -56380169288116LL;
volatile uint32_t x387 = 1468074634U;
int16_t x388 = -1;
uint32_t t87 = 56970U;
int32_t x393 = -426697599;
volatile uint64_t t89 = 57309489LLU;
static volatile uint64_t t92 = 154LLU;
uint32_t x415 = 41613U;
uint64_t t93 = 237777674601648LLU;
int64_t x425 = INT64_MAX;
int16_t x427 = -14;
uint32_t x441 = 2U;
uint16_t x442 = 42U;


void f0(void) {
	uint8_t x5 = 1U;
	uint16_t x6 = 16326U;
	int32_t x7 = -1;
	volatile int32_t t0 = -301;

	t0 = (((x5<x6)-x7)/x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x9 = 48005391U;
	int16_t x10 = INT16_MIN;
	int16_t x11 = INT16_MIN;
	static volatile uint64_t t1 = 529561580245847436LLU;

	t1 = (((x9<x10)-x11)/x12);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x13 = -1LL;
	int32_t x14 = -433686;
	volatile int16_t x15 = INT16_MIN;
	static int8_t x16 = 13;
	int32_t t2 = 2;

	t2 = (((x13<x14)-x15)/x16);

	if (t2 != 2520) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x17 = 1LL;
	int16_t x18 = INT16_MIN;
	int8_t x19 = INT8_MIN;
	int64_t x20 = 436LL;
	int64_t t3 = -4094611753066665LL;

	t3 = (((x17<x18)-x19)/x20);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = -1;
	static int64_t x22 = 15609539196LL;
	volatile int8_t x23 = INT8_MIN;
	int64_t x24 = -831900LL;
	volatile int64_t t4 = 3259323678590926LL;

	t4 = (((x21<x22)-x23)/x24);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x26 = INT16_MIN;
	int16_t x27 = -6366;
	int32_t t5 = 8732;

	t5 = (((x25<x26)-x27)/x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x30 = 1990U;
	int16_t x31 = -927;
	volatile int64_t x32 = -1LL;
	int64_t t6 = -1208447480352286416LL;

	t6 = (((x29<x30)-x31)/x32);

	if (t6 != -927LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x34 = INT32_MAX;
	int8_t x35 = INT8_MAX;
	static int64_t x36 = INT64_MIN;
	int64_t t7 = -601914037LL;

	t7 = (((x33<x34)-x35)/x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x40 = 220295461;
	static volatile int64_t t8 = -353251359LL;

	t8 = (((x37<x38)-x39)/x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = 161128257U;
	int32_t x46 = -1;
	int8_t x47 = INT8_MIN;

	t9 = (((x45<x46)-x47)/x48);

	if (t9 != -129) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x50 = 178063580259LLU;
	uint64_t x51 = UINT64_MAX;
	uint64_t x52 = UINT64_MAX;
	volatile uint64_t t10 = 18LLU;

	t10 = (((x49<x50)-x51)/x52);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = INT64_MIN;
	static int64_t x54 = INT64_MIN;
	int8_t x55 = INT8_MIN;

	t11 = (((x53<x54)-x55)/x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = UINT32_MAX;
	volatile int16_t x59 = INT16_MAX;
	uint64_t x60 = 66014LLU;
	uint64_t t12 = 68568830976568LLU;

	t12 = (((x57<x58)-x59)/x60);

	if (t12 != 279436847846055LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = UINT32_MAX;
	static int16_t x62 = INT16_MIN;
	int16_t x63 = 1815;
	int64_t x64 = INT64_MIN;
	volatile int64_t t13 = 8859215416566LL;

	t13 = (((x61<x62)-x63)/x64);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x65 = 1761478U;
	uint64_t x66 = UINT64_MAX;
	int16_t x68 = INT16_MAX;

	t14 = (((x65<x66)-x67)/x68);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = UINT16_MAX;
	uint16_t x70 = 214U;
	static volatile uint16_t x71 = 13U;
	int64_t x72 = INT64_MIN;
	volatile int64_t t15 = -39754555LL;

	t15 = (((x69<x70)-x71)/x72);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x74 = 34U;
	int64_t x75 = 27120193434483LL;
	int8_t x76 = -1;
	int64_t t16 = -856458997671LL;

	t16 = (((x73<x74)-x75)/x76);

	if (t16 != 27120193434482LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	uint8_t x78 = UINT8_MAX;
	uint64_t x79 = 453250689511LLU;
	int64_t x80 = -161491LL;
	uint64_t t17 = 73800818285LLU;

	t17 = (((x77<x78)-x79)/x80);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = INT32_MIN;
	int8_t x82 = INT8_MIN;
	uint16_t x83 = UINT16_MAX;
	static int32_t x84 = INT32_MAX;
	volatile int32_t t18 = -959;

	t18 = (((x81<x82)-x83)/x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x85 = INT32_MIN;
	uint8_t x87 = 1U;
	int16_t x88 = INT16_MIN;
	volatile int32_t t19 = -7625564;

	t19 = (((x85<x86)-x87)/x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x90 = INT16_MIN;
	volatile int8_t x91 = -1;
	volatile int32_t t20 = -1451;

	t20 = (((x89<x90)-x91)/x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MIN;
	uint8_t x94 = UINT8_MAX;
	int16_t x96 = 23;

	t21 = (((x93<x94)-x95)/x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = 1;
	static int64_t x98 = 1021912902LL;
	int32_t x100 = INT32_MIN;
	volatile int32_t t22 = -4;

	t22 = (((x97<x98)-x99)/x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x101 = 1389618U;
	volatile uint64_t x104 = 11450LLU;
	volatile uint64_t t23 = 115389262LLU;

	t23 = (((x101<x102)-x103)/x104);

	if (t23 != 2LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x105 = 529373721723LL;
	static int64_t x106 = INT64_MIN;
	volatile uint64_t x107 = UINT64_MAX;
	int16_t x108 = INT16_MAX;

	t24 = (((x105<x106)-x107)/x108);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x109 = 1782U;
	volatile uint16_t x111 = 15U;
	int32_t t25 = 81437191;

	t25 = (((x109<x110)-x111)/x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x113 = 8U;
	int16_t x114 = INT16_MIN;
	int64_t x115 = 633031111361745442LL;
	static int64_t x116 = -117901LL;
	volatile int64_t t26 = -858334898067245634LL;

	t26 = (((x113<x114)-x115)/x116);

	if (t26 != 5369175082159LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = 7537593141LL;
	int64_t x122 = INT64_MIN;
	uint64_t x124 = 1587809099463392LLU;
	volatile uint64_t t27 = 442370LLU;

	t27 = (((x121<x122)-x123)/x124);

	if (t27 != 11617LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x125 = 7866U;
	static int64_t x126 = INT64_MIN;
	int32_t x127 = -2749;
	int16_t x128 = INT16_MIN;

	t28 = (((x125<x126)-x127)/x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x130 = INT8_MIN;
	int8_t x131 = -1;
	static uint32_t x132 = 64427536U;
	uint32_t t29 = 3164U;

	t29 = (((x129<x130)-x131)/x132);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x137 = UINT64_MAX;
	int64_t x138 = -61LL;
	volatile uint64_t t30 = 18507810LLU;

	t30 = (((x137<x138)-x139)/x140);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = 27595U;
	int8_t x142 = -1;
	static int8_t x143 = INT8_MIN;
	uint8_t x144 = UINT8_MAX;
	int32_t t31 = -30204739;

	t31 = (((x141<x142)-x143)/x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = -100011338608011440LL;
	static int32_t x146 = INT32_MIN;
	volatile int32_t x148 = 63717878;
	int32_t t32 = 1601;

	t32 = (((x145<x146)-x147)/x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x151 = 1313803866519LLU;
	int64_t x152 = -2029376072LL;
	uint64_t t33 = 7LLU;

	t33 = (((x149<x150)-x151)/x152);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x153 = 7129784440692LLU;
	int16_t x154 = -1585;
	static int8_t x155 = INT8_MIN;
	uint32_t x156 = 41725755U;

	t34 = (((x153<x154)-x155)/x156);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x157 = -1LL;
	static int64_t x158 = INT64_MAX;
	volatile int64_t x159 = -1LL;
	uint32_t x160 = 1807061121U;
	static volatile int64_t t35 = -7LL;

	t35 = (((x157<x158)-x159)/x160);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x161 = 20;
	static int32_t x162 = INT32_MIN;
	static uint64_t x163 = 39084699087LLU;
	int8_t x164 = -58;

	t36 = (((x161<x162)-x163)/x164);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = 130117083835329625LL;
	static int32_t x167 = 14258896;
	int8_t x168 = 7;
	int32_t t37 = 3372;

	t37 = (((x165<x166)-x167)/x168);

	if (t37 != -2036985) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x170 = INT64_MAX;
	uint32_t x171 = 275500437U;
	volatile uint32_t t38 = 238039643U;

	t38 = (((x169<x170)-x171)/x172);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x173 = INT8_MIN;
	int64_t x174 = INT64_MIN;
	int16_t x176 = INT16_MIN;
	uint64_t t39 = 768LLU;

	t39 = (((x173<x174)-x175)/x176);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = -1;
	volatile uint8_t x178 = 0U;
	static uint8_t x179 = 22U;
	int32_t t40 = 319294;

	t40 = (((x177<x178)-x179)/x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x184 = 1764375094642594222LLU;
	uint64_t t41 = 686102LLU;

	t41 = (((x181<x182)-x183)/x184);

	if (t41 != 10LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x185 = 7U;
	int8_t x186 = 1;
	int16_t x187 = -215;
	static int32_t x188 = INT32_MIN;
	static int32_t t42 = -149235749;

	t42 = (((x185<x186)-x187)/x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x189 = 0U;
	int16_t x190 = -1;
	int16_t x191 = INT16_MIN;
	static int64_t t43 = 3408355820LL;

	t43 = (((x189<x190)-x191)/x192);

	if (t43 != 574LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x193 = UINT16_MAX;
	int8_t x195 = INT8_MAX;
	uint16_t x196 = 6U;
	static int32_t t44 = 4278;

	t44 = (((x193<x194)-x195)/x196);

	if (t44 != -21) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x197 = -1;
	int8_t x199 = -1;
	int8_t x200 = INT8_MIN;
	static volatile int32_t t45 = 6827;

	t45 = (((x197<x198)-x199)/x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x202 = 1LLU;
	volatile uint16_t x203 = 11468U;

	t46 = (((x201<x202)-x203)/x204);

	if (t46 != -90) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = 3;
	int8_t x207 = -3;
	int64_t x208 = INT64_MAX;
	int64_t t47 = -14143LL;

	t47 = (((x205<x206)-x207)/x208);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x210 = -1913724383628119LL;
	int8_t x211 = -3;
	volatile int32_t t48 = 2;

	t48 = (((x209<x210)-x211)/x212);

	if (t48 != -3) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = 2730;
	int32_t x216 = INT32_MIN;
	volatile int32_t t49 = 1123953;

	t49 = (((x213<x214)-x215)/x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x217 = INT16_MAX;
	static uint16_t x219 = 5048U;
	int64_t x220 = 27301279LL;

	t50 = (((x217<x218)-x219)/x220);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x221 = -4350511826884LL;
	uint8_t x222 = 2U;
	int16_t x223 = INT16_MAX;
	volatile int64_t x224 = -1LL;
	int64_t t51 = -111973921038LL;

	t51 = (((x221<x222)-x223)/x224);

	if (t51 != 32766LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x227 = UINT16_MAX;

	t52 = (((x225<x226)-x227)/x228);

	if (t52 != 824U) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x229 = INT32_MIN;
	uint32_t x230 = 28744U;

	t53 = (((x229<x230)-x231)/x232);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x234 = INT8_MAX;
	volatile uint16_t x235 = 29263U;
	static volatile int32_t t54 = -266538;

	t54 = (((x233<x234)-x235)/x236);

	if (t54 != -3657) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x237 = 3371135U;
	int16_t x238 = -1;
	int64_t x239 = INT64_MAX;
	volatile int64_t t55 = 30LL;

	t55 = (((x237<x238)-x239)/x240);

	if (t55 != 4294967295LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x241 = 27U;
	int8_t x242 = INT8_MAX;
	uint8_t x243 = 39U;
	int8_t x244 = INT8_MAX;
	int32_t t56 = 58050852;

	t56 = (((x241<x242)-x243)/x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x249 = UINT32_MAX;
	int32_t x250 = INT32_MIN;
	static uint64_t x251 = 3598177150614067LLU;
	int32_t x252 = INT32_MIN;
	static volatile uint64_t t57 = 57LLU;

	t57 = (((x249<x250)-x251)/x252);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x253 = -783468LL;
	uint16_t x254 = UINT16_MAX;
	int8_t x255 = -1;
	volatile uint8_t x256 = UINT8_MAX;
	volatile int32_t t58 = 9982;

	t58 = (((x253<x254)-x255)/x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x257 = -1;
	static volatile int8_t x259 = -1;
	uint32_t x260 = UINT32_MAX;

	t59 = (((x257<x258)-x259)/x260);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = -1;
	uint64_t x263 = 26179LLU;
	uint8_t x264 = UINT8_MAX;

	t60 = (((x261<x262)-x263)/x264);

	if (t60 != 72340172838076570LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x265 = 0;
	int32_t x266 = 14340209;
	uint64_t x267 = 4190668388032LLU;
	int8_t x268 = INT8_MAX;
	uint64_t t61 = 12483588864274LLU;

	t61 = (((x265<x266)-x267)/x268);

	if (t61 != 145249920338906799LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x269 = 2541U;
	volatile uint32_t x271 = UINT32_MAX;
	int16_t x272 = INT16_MIN;
	uint32_t t62 = 7078567U;

	t62 = (((x269<x270)-x271)/x272);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x273 = INT32_MAX;
	static int8_t x274 = INT8_MIN;
	static uint32_t x275 = 27072U;
	int8_t x276 = -9;
	uint32_t t63 = 3963642U;

	t63 = (((x273<x274)-x275)/x276);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x277 = 6100;
	static volatile uint32_t x278 = 1U;
	int64_t x279 = INT64_MAX;
	volatile int32_t x280 = INT32_MIN;
	int64_t t64 = -31883101212208857LL;

	t64 = (((x277<x278)-x279)/x280);

	if (t64 != 4294967295LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x282 = -10;
	int32_t x283 = 16219688;
	int32_t t65 = 139352;

	t65 = (((x281<x282)-x283)/x284);

	if (t65 != 15) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x285 = INT8_MIN;
	static int16_t x286 = -828;
	int8_t x287 = -1;
	uint32_t x288 = 11U;

	t66 = (((x285<x286)-x287)/x288);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x289 = -1;
	volatile uint16_t x290 = 14264U;
	uint16_t x291 = UINT16_MAX;

	t67 = (((x289<x290)-x291)/x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x297 = -1;
	int32_t x298 = -1056144603;
	int8_t x299 = -3;
	volatile uint8_t x300 = UINT8_MAX;
	int32_t t68 = -1714825;

	t68 = (((x297<x298)-x299)/x300);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x301 = INT8_MIN;
	uint32_t x302 = 30U;
	static int32_t x303 = INT32_MAX;
	static volatile int16_t x304 = INT16_MAX;
	int32_t t69 = -4;

	t69 = (((x301<x302)-x303)/x304);

	if (t69 != -65538) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x305 = INT64_MIN;
	volatile uint8_t x306 = UINT8_MAX;
	uint32_t x307 = 17528U;
	int64_t x308 = 211373720562959LL;
	volatile int64_t t70 = 23LL;

	t70 = (((x305<x306)-x307)/x308);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x309 = INT64_MAX;
	int16_t x310 = -1;
	volatile uint64_t x311 = 11341LLU;
	uint64_t t71 = 8465751716984030330LLU;

	t71 = (((x309<x310)-x311)/x312);

	if (t71 != 8589934595LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x314 = 7U;
	int8_t x316 = INT8_MAX;
	volatile int32_t t72 = -4722020;

	t72 = (((x313<x314)-x315)/x316);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x325 = INT8_MAX;
	uint16_t x326 = 277U;
	static uint64_t x327 = UINT64_MAX;
	static uint16_t x328 = UINT16_MAX;
	static volatile uint64_t t73 = 992777535356069945LLU;

	t73 = (((x325<x326)-x327)/x328);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x329 = INT64_MAX;
	volatile uint16_t x330 = 6848U;
	static int8_t x331 = INT8_MAX;
	int32_t x332 = INT32_MIN;
	volatile int32_t t74 = 9556905;

	t74 = (((x329<x330)-x331)/x332);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x333 = 610788341U;
	int16_t x335 = INT16_MIN;
	uint8_t x336 = 22U;
	int32_t t75 = -2739247;

	t75 = (((x333<x334)-x335)/x336);

	if (t75 != 1489) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x338 = INT64_MIN;
	int16_t x339 = 0;
	static int32_t x340 = INT32_MIN;
	int32_t t76 = -706805;

	t76 = (((x337<x338)-x339)/x340);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x341 = -1;
	volatile int64_t x343 = -83578142LL;
	static int8_t x344 = -27;
	volatile int64_t t77 = -288194LL;

	t77 = (((x341<x342)-x343)/x344);

	if (t77 != -3095486LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x345 = UINT32_MAX;
	int16_t x347 = -725;
	int16_t x348 = -952;
	int32_t t78 = 1;

	t78 = (((x345<x346)-x347)/x348);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x349 = INT64_MIN;
	volatile uint8_t x350 = UINT8_MAX;
	int8_t x351 = INT8_MIN;
	int32_t t79 = 1032071;

	t79 = (((x349<x350)-x351)/x352);

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x353 = INT16_MIN;
	int64_t x354 = INT64_MAX;
	static int32_t x355 = 2115279;
	volatile int16_t x356 = -1;
	static volatile int32_t t80 = -47516073;

	t80 = (((x353<x354)-x355)/x356);

	if (t80 != 2115278) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x361 = -9;
	static int32_t x362 = -139988;
	int64_t x363 = -1LL;
	int16_t x364 = INT16_MIN;
	volatile int64_t t81 = 0LL;

	t81 = (((x361<x362)-x363)/x364);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x366 = -59;
	volatile int16_t x367 = 1;
	static int32_t x368 = 1;
	volatile int32_t t82 = 1823;

	t82 = (((x365<x366)-x367)/x368);

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x369 = INT16_MIN;
	int32_t x370 = 28;
	int8_t x372 = INT8_MIN;
	uint64_t t83 = 1LLU;

	t83 = (((x369<x370)-x371)/x372);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x374 = 0U;
	int64_t x375 = INT64_MAX;
	static uint32_t x376 = 58406U;
	int64_t t84 = -6025862064LL;

	t84 = (((x373<x374)-x375)/x376);

	if (t84 != -157918228210368LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x378 = 2;
	int8_t x379 = INT8_MAX;
	volatile int64_t t85 = -1092590146907LL;

	t85 = (((x377<x378)-x379)/x380);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x381 = -1;
	int16_t x382 = INT16_MAX;
	int8_t x383 = INT8_MIN;
	int32_t x384 = INT32_MIN;
	volatile int32_t t86 = 969432;

	t86 = (((x381<x382)-x383)/x384);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x385 = INT64_MIN;
	uint8_t x386 = 0U;

	t87 = (((x385<x386)-x387)/x388);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x389 = INT64_MAX;
	int32_t x390 = INT32_MIN;
	int16_t x391 = INT16_MIN;
	int16_t x392 = -54;
	volatile int32_t t88 = -22777;

	t88 = (((x389<x390)-x391)/x392);

	if (t88 != -606) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x394 = INT16_MIN;
	int64_t x395 = -331150100333341LL;
	uint64_t x396 = 48107539816LLU;

	t89 = (((x393<x394)-x395)/x396);

	if (t89 != 6883LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x397 = 63LLU;
	uint32_t x398 = 13U;
	uint64_t x399 = UINT64_MAX;
	static uint8_t x400 = 61U;
	volatile uint64_t t90 = 102392451645LLU;

	t90 = (((x397<x398)-x399)/x400);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x401 = INT16_MAX;
	uint32_t x402 = 757165689U;
	static uint64_t x403 = UINT64_MAX;
	int8_t x404 = INT8_MAX;
	volatile uint64_t t91 = 1LLU;

	t91 = (((x401<x402)-x403)/x404);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x409 = INT64_MAX;
	int64_t x410 = -1LL;
	volatile uint32_t x411 = UINT32_MAX;
	volatile uint64_t x412 = 3181982925763LLU;

	t92 = (((x409<x410)-x411)/x412);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x413 = -1;
	int32_t x414 = INT32_MIN;
	uint64_t x416 = UINT64_MAX;

	t93 = (((x413<x414)-x415)/x416);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x417 = INT32_MIN;
	volatile int8_t x418 = -1;
	static uint8_t x419 = 3U;
	int32_t x420 = INT32_MIN;
	static int32_t t94 = -1414;

	t94 = (((x417<x418)-x419)/x420);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x421 = -1;
	uint16_t x422 = 10U;
	uint16_t x423 = UINT16_MAX;
	uint64_t x424 = UINT64_MAX;
	volatile uint64_t t95 = 173326208470647LLU;

	t95 = (((x421<x422)-x423)/x424);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x426 = 2U;
	int32_t x428 = -26;
	static int32_t t96 = 1;

	t96 = (((x425<x426)-x427)/x428);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x433 = INT32_MAX;
	uint16_t x434 = 15667U;
	static int16_t x435 = -1;
	int16_t x436 = INT16_MIN;
	int32_t t97 = 9;

	t97 = (((x433<x434)-x435)/x436);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x437 = INT16_MIN;
	uint8_t x438 = 1U;
	volatile int64_t x439 = INT64_MAX;
	int8_t x440 = INT8_MIN;
	volatile int64_t t98 = -1551387070704300504LL;

	t98 = (((x437<x438)-x439)/x440);

	if (t98 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x443 = -36;
	uint16_t x444 = 58U;
	static volatile int32_t t99 = 2;

	t99 = (((x441<x442)-x443)/x444);

	if (t99 != 0) { NG(); } else { ; }
	
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


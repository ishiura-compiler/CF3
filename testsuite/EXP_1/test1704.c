#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = UINT32_MAX;
static uint8_t x3 = 0U;
volatile int16_t x4 = INT16_MIN;
uint32_t x5 = 99321U;
uint32_t t1 = 31048742U;
int16_t x9 = -120;
static uint8_t x32 = UINT8_MAX;
static uint32_t x33 = UINT32_MAX;
int16_t x56 = INT16_MIN;
static uint16_t x59 = 0U;
volatile int16_t x60 = INT16_MAX;
static volatile int32_t t12 = 12;
volatile uint32_t t13 = 18906776U;
uint16_t x65 = 9U;
uint8_t x67 = 26U;
uint8_t x73 = UINT8_MAX;
static volatile int16_t x78 = -6;
static volatile uint64_t t19 = 369839796595810671LLU;
uint8_t x89 = UINT8_MAX;
static volatile int16_t x95 = INT16_MIN;
volatile uint32_t t21 = 9839837U;
static volatile int64_t x103 = INT64_MAX;
uint8_t x104 = 5U;
uint64_t t23 = 841LLU;
static volatile uint16_t x114 = 1412U;
static int8_t x121 = INT8_MIN;
int64_t x130 = INT64_MIN;
static int32_t t29 = 759118596;
uint32_t x140 = 171854466U;
static uint64_t x142 = 711174LLU;
volatile int8_t x144 = INT8_MIN;
int8_t x150 = INT8_MIN;
uint64_t x156 = 483053499948324LLU;
volatile int8_t x163 = INT8_MIN;
volatile uint64_t t36 = 22LLU;
int8_t x168 = 13;
uint16_t x171 = UINT16_MAX;
int32_t x176 = INT32_MAX;
volatile int16_t x182 = 1729;
static uint16_t x184 = UINT16_MAX;
uint64_t t40 = 51102LLU;
uint64_t x192 = 125270415LLU;
uint64_t x200 = UINT64_MAX;
volatile int8_t x201 = -1;
int64_t t46 = -210179395556LL;
static uint32_t x216 = UINT32_MAX;
uint64_t t48 = 3254915522LLU;
int32_t x229 = INT32_MIN;
int32_t x230 = INT32_MIN;
static uint16_t x233 = 115U;
int32_t x235 = INT32_MIN;
volatile uint32_t t52 = 6U;
uint32_t x238 = 4859418U;
int32_t x240 = 73992;
uint64_t x246 = UINT64_MAX;
int8_t x247 = INT8_MIN;
volatile int8_t x262 = INT8_MIN;
uint32_t x268 = 6U;
uint64_t x271 = 3668083221LLU;
uint8_t x277 = 101U;
volatile uint32_t x292 = UINT32_MAX;
static int8_t x298 = -1;
int32_t x306 = -5;
static volatile int8_t x310 = INT8_MIN;
static uint64_t x314 = 915224034078330989LLU;
int64_t x316 = INT64_MAX;
static volatile int32_t t73 = -430965796;
int64_t x337 = 28636720517706689LL;
uint64_t x342 = 33164480LLU;
static int8_t x343 = 1;
int64_t x344 = -411359LL;
int64_t x350 = -1LL;
int64_t t77 = -4007442LL;
int16_t x358 = -1;
volatile uint64_t t78 = 2232509LLU;
int16_t x363 = INT16_MAX;
volatile int32_t x373 = -618985307;
int32_t x375 = 9951133;
volatile int32_t t82 = -26157;
int32_t x377 = INT32_MAX;
int16_t x378 = INT16_MAX;
volatile uint64_t x384 = 1038525851669LLU;
uint64_t x386 = 219699128299LLU;
int32_t x401 = -151027;
int32_t x407 = -383541260;
int32_t x408 = -1;
volatile int32_t t89 = 321771563;
int16_t x411 = 29;
volatile int64_t t90 = 30LL;
int8_t x418 = INT8_MIN;
int16_t x423 = INT16_MIN;
int16_t x427 = 0;
static volatile uint64_t x428 = 6592780815051LLU;
static volatile uint16_t x441 = 7069U;
volatile uint16_t x453 = UINT16_MAX;
int64_t x456 = INT64_MIN;


void f0(void) {
	uint64_t x1 = 434184650376873854LLU;
	volatile uint64_t t0 = 27LLU;

	t0 = (((x1&x2)-x3)+x4);

	if (t0 != 2627962750LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = -1;
	uint8_t x7 = 3U;
	static int32_t x8 = 536170930;

	t1 = (((x5&x6)-x7)+x8);

	if (t1 != 536270248U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MAX;
	uint16_t x11 = UINT16_MAX;
	int8_t x12 = 1;
	int32_t t2 = -14300948;

	t2 = (((x9&x10)-x11)+x12);

	if (t2 != -32886) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = 2811801379LL;
	uint8_t x14 = UINT8_MAX;
	volatile int32_t x15 = INT32_MAX;
	int8_t x16 = INT8_MIN;
	volatile int64_t t3 = -27601796301642LL;

	t3 = (((x13&x14)-x15)+x16);

	if (t3 != -2147483740LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = 1;
	int64_t x22 = 414608661LL;
	int8_t x23 = INT8_MIN;
	static int8_t x24 = -1;
	int64_t t4 = -4713773899LL;

	t4 = (((x21&x22)-x23)+x24);

	if (t4 != 128LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x29 = 382LL;
	int64_t x30 = -1LL;
	static int16_t x31 = INT16_MIN;
	volatile int64_t t5 = -1708LL;

	t5 = (((x29&x30)-x31)+x32);

	if (t5 != 33405LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x34 = -15439;
	static int16_t x35 = INT16_MAX;
	volatile int16_t x36 = -11;
	static uint32_t t6 = 2U;

	t6 = (((x33&x34)-x35)+x36);

	if (t6 != 4294919079U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x37 = 535974678LLU;
	volatile int16_t x38 = INT16_MAX;
	static uint16_t x39 = UINT16_MAX;
	int64_t x40 = INT64_MIN;
	uint64_t t7 = 152057LLU;

	t7 = (((x37&x38)-x39)+x40);

	if (t7 != 9223372036854731543LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = 96U;
	volatile int8_t x42 = INT8_MIN;
	volatile uint64_t x43 = 149915LLU;
	int32_t x44 = -87814;
	volatile uint64_t t8 = 199616785282046LLU;

	t8 = (((x41&x42)-x43)+x44);

	if (t8 != 18446744073709313887LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x45 = -484;
	static uint32_t x46 = 120067U;
	static int32_t x47 = INT32_MAX;
	uint64_t x48 = 787098767166LLU;
	uint64_t t9 = 2LLU;

	t9 = (((x45&x46)-x47)+x48);

	if (t9 != 789246370623LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -1;
	int64_t x50 = 5LL;
	int32_t x51 = -12;
	int16_t x52 = INT16_MIN;
	int64_t t10 = -86LL;

	t10 = (((x49&x50)-x51)+x52);

	if (t10 != -32751LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x53 = INT16_MIN;
	int64_t x54 = 19LL;
	int16_t x55 = INT16_MAX;
	static int64_t t11 = -264603959756604LL;

	t11 = (((x53&x54)-x55)+x56);

	if (t11 != -65535LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MIN;
	int32_t x58 = -43970010;

	t12 = (((x57&x58)-x59)+x60);

	if (t12 != -43937281) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x61 = 1U;
	int8_t x62 = -23;
	uint16_t x63 = 297U;
	uint32_t x64 = UINT32_MAX;

	t13 = (((x61&x62)-x63)+x64);

	if (t13 != 4294966999U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x66 = INT32_MAX;
	int8_t x68 = INT8_MIN;
	volatile int32_t t14 = 7;

	t14 = (((x65&x66)-x67)+x68);

	if (t14 != -145) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x69 = -1;
	uint64_t x70 = 7274180006LLU;
	static int8_t x71 = -29;
	volatile int8_t x72 = INT8_MAX;
	static uint64_t t15 = 2317171LLU;

	t15 = (((x69&x70)-x71)+x72);

	if (t15 != 7274180162LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x74 = INT32_MAX;
	volatile uint64_t x75 = 10374927253508353LLU;
	uint16_t x76 = 30U;
	uint64_t t16 = 60017507998886LLU;

	t16 = (((x73&x74)-x75)+x76);

	if (t16 != 18436369146456043548LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x77 = INT8_MAX;
	int8_t x79 = -1;
	volatile int8_t x80 = INT8_MIN;
	volatile int32_t t17 = 2;

	t17 = (((x77&x78)-x79)+x80);

	if (t17 != -5) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MAX;
	static int16_t x82 = -457;
	volatile int16_t x83 = INT16_MIN;
	static uint64_t x84 = 3239772402401363761LLU;
	uint64_t t18 = 2LLU;

	t18 = (((x81&x82)-x83)+x84);

	if (t18 != 3239772402401396584LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = 1;
	int64_t x86 = INT64_MAX;
	volatile uint64_t x87 = 17220015808LLU;
	uint32_t x88 = UINT32_MAX;

	t19 = (((x85&x86)-x87)+x88);

	if (t19 != 18446744060784503104LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x90 = INT32_MIN;
	int8_t x91 = 2;
	int32_t x92 = -1;
	static int32_t t20 = 0;

	t20 = (((x89&x90)-x91)+x92);

	if (t20 != -3) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x93 = INT16_MIN;
	uint32_t x94 = 112U;
	static volatile uint32_t x96 = 2U;

	t21 = (((x93&x94)-x95)+x96);

	if (t21 != 32770U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x97 = 1U;
	int32_t x98 = 1919;
	int8_t x99 = INT8_MAX;
	int8_t x100 = 12;
	static int32_t t22 = 1;

	t22 = (((x97&x98)-x99)+x100);

	if (t22 != -114) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = 39740069552LLU;
	uint16_t x102 = 58U;

	t23 = (((x101&x102)-x103)+x104);

	if (t23 != 9223372036854775862LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = 3660008;
	int8_t x115 = -1;
	volatile int16_t x116 = INT16_MAX;
	volatile int32_t t24 = -8855;

	t24 = (((x113&x114)-x115)+x116);

	if (t24 != 32896) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x117 = -1;
	int32_t x118 = -936950;
	int64_t x119 = INT64_MIN;
	static int8_t x120 = -46;
	volatile int64_t t25 = -1803142LL;

	t25 = (((x117&x118)-x119)+x120);

	if (t25 != 9223372036853838812LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x122 = 106U;
	uint64_t x123 = UINT64_MAX;
	uint64_t x124 = 143381045046488029LLU;
	uint64_t t26 = 8960579LLU;

	t26 = (((x121&x122)-x123)+x124);

	if (t26 != 143381045046488030LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x125 = UINT32_MAX;
	int8_t x126 = -1;
	int8_t x127 = -1;
	volatile uint16_t x128 = UINT16_MAX;
	uint32_t t27 = 49U;

	t27 = (((x125&x126)-x127)+x128);

	if (t27 != 65535U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = -1;
	static volatile int64_t x131 = INT64_MIN;
	int32_t x132 = INT32_MIN;
	static int64_t t28 = -19LL;

	t28 = (((x129&x130)-x131)+x132);

	if (t28 != -2147483648LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x133 = INT16_MAX;
	uint8_t x134 = UINT8_MAX;
	uint16_t x135 = 586U;
	int16_t x136 = 0;

	t29 = (((x133&x134)-x135)+x136);

	if (t29 != -331) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x137 = UINT16_MAX;
	int32_t x138 = 0;
	static volatile int32_t x139 = -1;
	static volatile uint32_t t30 = 367301U;

	t30 = (((x137&x138)-x139)+x140);

	if (t30 != 171854467U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = -1LL;
	int64_t x143 = -1LL;
	static volatile uint64_t t31 = 3318247LLU;

	t31 = (((x141&x142)-x143)+x144);

	if (t31 != 711047LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = INT64_MIN;
	volatile uint64_t x146 = 44097817920173LLU;
	static uint32_t x147 = UINT32_MAX;
	static uint32_t x148 = UINT32_MAX;
	volatile uint64_t t32 = 32747753864LLU;

	t32 = (((x145&x146)-x147)+x148);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x149 = INT8_MIN;
	static int16_t x151 = INT16_MIN;
	int16_t x152 = INT16_MAX;
	volatile int32_t t33 = -98;

	t33 = (((x149&x150)-x151)+x152);

	if (t33 != 65407) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = -34;
	uint8_t x154 = 4U;
	int8_t x155 = INT8_MIN;
	static volatile uint64_t t34 = 5985443030069110LLU;

	t34 = (((x153&x154)-x155)+x156);

	if (t34 != 483053499948456LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x157 = UINT32_MAX;
	uint64_t x158 = 222104021064LLU;
	int8_t x159 = -40;
	uint16_t x160 = 4206U;
	uint64_t t35 = 49429LLU;

	t35 = (((x157&x158)-x159)+x160);

	if (t35 != 3060693214LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x161 = 42U;
	uint64_t x162 = 502994734393922LLU;
	int64_t x164 = INT64_MAX;

	t36 = (((x161&x162)-x163)+x164);

	if (t36 != 9223372036854775937LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = -17;
	volatile int64_t x166 = 130140990895654LL;
	volatile int16_t x167 = -1;
	int64_t t37 = -31783024873624244LL;

	t37 = (((x165&x166)-x167)+x168);

	if (t37 != 130140990895668LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x169 = 1U;
	volatile uint16_t x170 = 494U;
	int64_t x172 = INT64_MAX;
	volatile int64_t t38 = 3410LL;

	t38 = (((x169&x170)-x171)+x172);

	if (t38 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x173 = 1;
	uint64_t x174 = UINT64_MAX;
	static volatile uint32_t x175 = UINT32_MAX;
	static volatile uint64_t t39 = 248871772280883LLU;

	t39 = (((x173&x174)-x175)+x176);

	if (t39 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x181 = -1LL;
	uint64_t x183 = 23024325LLU;

	t40 = (((x181&x182)-x183)+x184);

	if (t40 != 18446744073686594555LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x189 = 247249639U;
	int32_t x190 = -36082642;
	int8_t x191 = 56;
	static uint64_t t41 = 5495207394029920LLU;

	t41 = (((x189&x190)-x191)+x192);

	if (t41 != 336568701LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x193 = 53271914LLU;
	int64_t x194 = INT64_MIN;
	int32_t x195 = INT32_MIN;
	volatile int32_t x196 = -1;
	volatile uint64_t t42 = 4884LLU;

	t42 = (((x193&x194)-x195)+x196);

	if (t42 != 2147483647LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x197 = INT16_MAX;
	volatile uint16_t x198 = 43U;
	uint8_t x199 = 1U;
	static uint64_t t43 = 2201339135678695LLU;

	t43 = (((x197&x198)-x199)+x200);

	if (t43 != 41LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x202 = 2LLU;
	static int8_t x203 = 5;
	uint32_t x204 = 4574096U;
	static volatile uint64_t t44 = 56LLU;

	t44 = (((x201&x202)-x203)+x204);

	if (t44 != 4574093LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x205 = -30360448;
	volatile int8_t x206 = -1;
	static int8_t x207 = INT8_MIN;
	uint32_t x208 = 62153443U;
	uint32_t t45 = 4091U;

	t45 = (((x205&x206)-x207)+x208);

	if (t45 != 31793123U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = INT8_MIN;
	int8_t x210 = -18;
	uint32_t x211 = 7705425U;
	int64_t x212 = 14739747925909025LL;

	t46 = (((x209&x210)-x211)+x212);

	if (t46 != 14739752213170768LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x213 = UINT32_MAX;
	static volatile int8_t x214 = INT8_MIN;
	int16_t x215 = -1;
	static volatile uint32_t t47 = 2495U;

	t47 = (((x213&x214)-x215)+x216);

	if (t47 != 4294967168U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = -1;
	int8_t x218 = INT8_MIN;
	uint64_t x219 = 646851LLU;
	int8_t x220 = INT8_MIN;

	t48 = (((x217&x218)-x219)+x220);

	if (t48 != 18446744073708904509LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x221 = -1;
	uint64_t x222 = 1050761360712723535LLU;
	static int32_t x223 = INT32_MAX;
	volatile uint16_t x224 = 688U;
	uint64_t t49 = 2226LLU;

	t49 = (((x221&x222)-x223)+x224);

	if (t49 != 1050761358565240576LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x225 = -1;
	volatile int16_t x226 = -1;
	int64_t x227 = -2150159058849259LL;
	int32_t x228 = -2776;
	volatile int64_t t50 = 11938260864529304LL;

	t50 = (((x225&x226)-x227)+x228);

	if (t50 != 2150159058846482LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x231 = 102LLU;
	volatile int32_t x232 = -160277;
	static uint64_t t51 = 1509LLU;

	t51 = (((x229&x230)-x231)+x232);

	if (t51 != 18446744071561907589LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x234 = 294251191U;
	int8_t x236 = INT8_MIN;

	t52 = (((x233&x234)-x235)+x236);

	if (t52 != 2147483571U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x237 = INT16_MIN;
	volatile uint8_t x239 = 28U;
	volatile uint32_t t53 = 312790574U;

	t53 = (((x237&x238)-x239)+x240);

	if (t53 != 4923628U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x245 = -626;
	volatile uint64_t x248 = 19LLU;
	volatile uint64_t t54 = 3186543822138167LLU;

	t54 = (((x245&x246)-x247)+x248);

	if (t54 != 18446744073709551137LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x249 = -1;
	int64_t x250 = -2LL;
	static uint64_t x251 = 2061LLU;
	int64_t x252 = 120LL;
	uint64_t t55 = 12298LLU;

	t55 = (((x249&x250)-x251)+x252);

	if (t55 != 18446744073709549673LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = -1LL;
	volatile int8_t x258 = INT8_MIN;
	uint64_t x259 = 3186040181860233LLU;
	uint64_t x260 = 6802LLU;
	volatile uint64_t t56 = 811708931019778731LLU;

	t56 = (((x257&x258)-x259)+x260);

	if (t56 != 18443558033527698057LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x261 = 15U;
	uint8_t x263 = UINT8_MAX;
	uint16_t x264 = 3U;
	int32_t t57 = 673;

	t57 = (((x261&x262)-x263)+x264);

	if (t57 != -252) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x265 = INT64_MIN;
	int64_t x266 = INT64_MAX;
	uint64_t x267 = UINT64_MAX;
	volatile uint64_t t58 = 168555013786LLU;

	t58 = (((x265&x266)-x267)+x268);

	if (t58 != 7LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x269 = INT32_MAX;
	int64_t x270 = -1LL;
	uint32_t x272 = UINT32_MAX;
	uint64_t t59 = 1432143290609386861LLU;

	t59 = (((x269&x270)-x271)+x272);

	if (t59 != 2774367721LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x273 = INT64_MIN;
	volatile int64_t x274 = 254590348366LL;
	volatile uint32_t x275 = UINT32_MAX;
	static uint32_t x276 = 1U;
	volatile int64_t t60 = 1LL;

	t60 = (((x273&x274)-x275)+x276);

	if (t60 != -4294967294LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x278 = INT8_MIN;
	int16_t x279 = INT16_MIN;
	volatile int8_t x280 = 0;
	volatile int32_t t61 = -397511;

	t61 = (((x277&x278)-x279)+x280);

	if (t61 != 32768) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x281 = -3;
	int32_t x282 = INT32_MAX;
	static uint32_t x283 = 7U;
	uint64_t x284 = UINT64_MAX;
	uint64_t t62 = 101227LLU;

	t62 = (((x281&x282)-x283)+x284);

	if (t62 != 2147483637LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x289 = UINT64_MAX;
	int16_t x290 = -1;
	volatile uint64_t x291 = UINT64_MAX;
	volatile uint64_t t63 = 1075063642108294943LLU;

	t63 = (((x289&x290)-x291)+x292);

	if (t63 != 4294967295LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x293 = 960089129U;
	int64_t x294 = -164673684LL;
	volatile int16_t x295 = -163;
	int8_t x296 = INT8_MIN;
	volatile int64_t t64 = -241LL;

	t64 = (((x293&x294)-x295)+x296);

	if (t64 != 808010827LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x297 = 0U;
	uint64_t x299 = 2612349342228165838LLU;
	static int64_t x300 = -96152363850124248LL;
	uint64_t t65 = 2LLU;

	t65 = (((x297&x298)-x299)+x300);

	if (t65 != 15738242367631261530LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x301 = INT16_MAX;
	uint8_t x302 = 124U;
	static int8_t x303 = INT8_MIN;
	volatile uint16_t x304 = 2010U;
	int32_t t66 = -728521452;

	t66 = (((x301&x302)-x303)+x304);

	if (t66 != 2262) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x305 = 15773U;
	uint32_t x307 = UINT32_MAX;
	uint32_t x308 = 2188U;
	volatile uint32_t t67 = 16U;

	t67 = (((x305&x306)-x307)+x308);

	if (t67 != 17958U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x309 = UINT16_MAX;
	static uint64_t x311 = 82226356LLU;
	uint8_t x312 = 47U;
	static uint64_t t68 = 21970543439LLU;

	t68 = (((x309&x310)-x311)+x312);

	if (t68 != 18446744073627390715LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x313 = INT64_MIN;
	volatile int32_t x315 = -4785;
	volatile uint64_t t69 = 436285LLU;

	t69 = (((x313&x314)-x315)+x316);

	if (t69 != 9223372036854780592LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x321 = INT64_MIN;
	static volatile uint32_t x322 = UINT32_MAX;
	volatile uint8_t x323 = 14U;
	int16_t x324 = -15;
	volatile int64_t t70 = 228027087979LL;

	t70 = (((x321&x322)-x323)+x324);

	if (t70 != -29LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x325 = 7;
	int64_t x326 = -123890686126731925LL;
	static int32_t x327 = 36673;
	static int32_t x328 = INT32_MIN;
	volatile int64_t t71 = 26LL;

	t71 = (((x325&x326)-x327)+x328);

	if (t71 != -2147520318LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x329 = -1;
	int8_t x330 = INT8_MAX;
	int32_t x331 = 149804;
	static volatile int8_t x332 = INT8_MIN;
	static volatile int32_t t72 = 1893953;

	t72 = (((x329&x330)-x331)+x332);

	if (t72 != -149805) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x333 = 1365;
	int8_t x334 = 8;
	int16_t x335 = INT16_MAX;
	uint8_t x336 = UINT8_MAX;

	t73 = (((x333&x334)-x335)+x336);

	if (t73 != -32512) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x338 = 89650234;
	uint32_t x339 = 29345073U;
	static int8_t x340 = 36;
	int64_t t74 = 8180LL;

	t74 = (((x337&x338)-x339)+x340);

	if (t74 != -6968589LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x341 = 1U;
	volatile uint64_t t75 = 102028504258574081LLU;

	t75 = (((x341&x342)-x343)+x344);

	if (t75 != 18446744073709140256LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x345 = UINT16_MAX;
	volatile int32_t x346 = INT32_MAX;
	uint16_t x347 = UINT16_MAX;
	int16_t x348 = INT16_MIN;
	volatile int32_t t76 = -1;

	t76 = (((x345&x346)-x347)+x348);

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x349 = UINT16_MAX;
	int8_t x351 = INT8_MIN;
	volatile int64_t x352 = INT64_MIN;

	t77 = (((x349&x350)-x351)+x352);

	if (t77 != -9223372036854710145LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x357 = -13350952;
	uint64_t x359 = UINT64_MAX;
	int64_t x360 = INT64_MIN;

	t78 = (((x357&x358)-x359)+x360);

	if (t78 != 9223372036841424857LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x361 = 4004607772912207303LLU;
	static int16_t x362 = INT16_MIN;
	int64_t x364 = 972LL;
	static uint64_t t79 = 21274276433944206LLU;

	t79 = (((x361&x362)-x363)+x364);

	if (t79 != 4004607772912157645LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x365 = UINT8_MAX;
	uint8_t x366 = UINT8_MAX;
	int32_t x367 = 3719;
	uint16_t x368 = 9U;
	int32_t t80 = -7401956;

	t80 = (((x365&x366)-x367)+x368);

	if (t80 != -3455) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x369 = INT32_MIN;
	uint16_t x370 = 807U;
	volatile int64_t x371 = INT64_MAX;
	int16_t x372 = -1;
	int64_t t81 = INT64_MIN;

	t81 = (((x369&x370)-x371)+x372);

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x374 = 1928U;
	int16_t x376 = -1;

	t82 = (((x373&x374)-x375)+x376);

	if (t82 != -9951006) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x379 = INT16_MAX;
	uint16_t x380 = 3U;
	static int32_t t83 = 5;

	t83 = (((x377&x378)-x379)+x380);

	if (t83 != 3) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x381 = UINT64_MAX;
	uint64_t x382 = 357779LLU;
	volatile int8_t x383 = INT8_MAX;
	volatile uint64_t t84 = 17472LLU;

	t84 = (((x381&x382)-x383)+x384);

	if (t84 != 1038526209321LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x385 = 10;
	int64_t x387 = -1LL;
	static int8_t x388 = -1;
	uint64_t t85 = 10277157739321LLU;

	t85 = (((x385&x386)-x387)+x388);

	if (t85 != 10LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x389 = UINT32_MAX;
	static uint32_t x390 = 380290U;
	int64_t x391 = 388801303LL;
	volatile int64_t x392 = INT64_MAX;
	int64_t t86 = 197LL;

	t86 = (((x389&x390)-x391)+x392);

	if (t86 != 9223372036466354794LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x397 = INT16_MIN;
	int64_t x398 = INT64_MIN;
	uint64_t x399 = UINT64_MAX;
	static int8_t x400 = -4;
	uint64_t t87 = 180618889LLU;

	t87 = (((x397&x398)-x399)+x400);

	if (t87 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x402 = INT8_MIN;
	int32_t x403 = -1;
	uint64_t x404 = 14995LLU;
	static uint64_t t88 = 8577LLU;

	t88 = (((x401&x402)-x403)+x404);

	if (t88 != 18446744073709415572LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x405 = 1;
	volatile int8_t x406 = -39;

	t89 = (((x405&x406)-x407)+x408);

	if (t89 != 383541260) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x409 = -1;
	int64_t x410 = 8LL;
	volatile uint16_t x412 = 15U;

	t90 = (((x409&x410)-x411)+x412);

	if (t90 != -6LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x413 = 112LLU;
	int16_t x414 = INT16_MIN;
	int64_t x415 = INT64_MAX;
	static int16_t x416 = -137;
	volatile uint64_t t91 = 2LLU;

	t91 = (((x413&x414)-x415)+x416);

	if (t91 != 9223372036854775672LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x417 = INT64_MIN;
	int8_t x419 = INT8_MIN;
	int8_t x420 = INT8_MIN;
	static volatile int64_t t92 = INT64_MIN;

	t92 = (((x417&x418)-x419)+x420);

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x421 = -1;
	volatile int16_t x422 = 0;
	int32_t x424 = INT32_MIN;
	volatile int32_t t93 = 1;

	t93 = (((x421&x422)-x423)+x424);

	if (t93 != -2147450880) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x425 = 243;
	int8_t x426 = -8;
	volatile uint64_t t94 = 1345508122663LLU;

	t94 = (((x425&x426)-x427)+x428);

	if (t94 != 6592780815291LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x429 = 45U;
	int32_t x430 = -1;
	int16_t x431 = -12160;
	static int64_t x432 = INT64_MIN;
	static int64_t t95 = -59204549344049LL;

	t95 = (((x429&x430)-x431)+x432);

	if (t95 != -9223372036854763603LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x442 = 71;
	volatile uint16_t x443 = 438U;
	uint64_t x444 = 2850030LLU;
	volatile uint64_t t96 = 1LLU;

	t96 = (((x441&x442)-x443)+x444);

	if (t96 != 2849597LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x449 = 46U;
	int16_t x450 = -427;
	uint8_t x451 = 28U;
	int16_t x452 = -1;
	volatile int32_t t97 = -8410;

	t97 = (((x449&x450)-x451)+x452);

	if (t97 != -25) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x454 = -1LL;
	volatile uint8_t x455 = 48U;
	int64_t t98 = -2235963421367344326LL;

	t98 = (((x453&x454)-x455)+x456);

	if (t98 != -9223372036854710321LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x461 = INT8_MIN;
	int8_t x462 = -1;
	uint64_t x463 = 68699687059907578LLU;
	int32_t x464 = -1;
	volatile uint64_t t99 = 59017407556LLU;

	t99 = (((x461&x462)-x463)+x464);

	if (t99 != 18378044386649643909LLU) { NG(); } else { ; }
	
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


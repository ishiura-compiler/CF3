#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = INT64_MIN;
int32_t x13 = 30755294;
int8_t x14 = -23;
int64_t x18 = 13520291LL;
static uint64_t x22 = UINT64_MAX;
uint64_t x26 = 14LLU;
int32_t x31 = 249827;
int32_t t7 = 201;
uint16_t x50 = 19U;
int64_t x55 = INT64_MIN;
uint32_t x56 = 1153U;
uint16_t x58 = UINT16_MAX;
int32_t t11 = 7;
int32_t x63 = INT32_MIN;
static int8_t x64 = -1;
int16_t x70 = 1;
int16_t x72 = -1;
uint64_t x79 = 3739602001LLU;
static volatile int16_t x80 = INT16_MAX;
static int16_t x95 = 0;
static int8_t x111 = 1;
int8_t x113 = -1;
volatile int32_t x120 = INT32_MIN;
volatile int32_t x122 = 786919476;
uint8_t x126 = 59U;
volatile uint16_t x127 = 8U;
uint64_t x134 = UINT64_MAX;
int8_t x135 = INT8_MIN;
static int8_t x143 = -1;
int32_t x145 = -1;
int64_t x147 = INT64_MIN;
int32_t t31 = -820192027;
volatile uint64_t x165 = UINT64_MAX;
int16_t x167 = INT16_MIN;
uint64_t x168 = UINT64_MAX;
uint64_t x176 = UINT64_MAX;
int64_t x177 = -25LL;
volatile int16_t x184 = INT16_MIN;
int32_t t38 = -5;
volatile int8_t x189 = -1;
int32_t x195 = INT32_MIN;
static int8_t x196 = -1;
uint32_t x224 = 520677U;
int32_t t47 = 468335579;
int16_t x232 = 1;
int64_t x233 = 8787860810642668LL;
int16_t x235 = INT16_MIN;
static volatile int32_t x240 = INT32_MIN;
volatile int32_t t51 = 441588;
int32_t t52 = 963;
int32_t t53 = -13955;
uint8_t x253 = 15U;
int8_t x254 = INT8_MIN;
int8_t x255 = 1;
int64_t x259 = INT64_MIN;
int8_t x269 = 4;
int64_t x273 = -3938130092350470403LL;
volatile uint8_t x275 = 85U;
uint16_t x276 = 18U;
uint8_t x279 = UINT8_MAX;
uint8_t x285 = 1U;
int64_t x290 = INT64_MIN;
uint64_t x297 = 1LLU;
int8_t x300 = -1;
int64_t x301 = 635738411891709381LL;
static int32_t t67 = 147880559;
int8_t x320 = INT8_MAX;
int8_t x327 = -1;
int32_t x334 = -1;
static int8_t x336 = INT8_MIN;
int32_t x339 = 193471552;
static uint64_t x341 = UINT64_MAX;
static volatile int32_t t75 = 21;
uint32_t x349 = UINT32_MAX;
int16_t x355 = -1;
volatile int32_t t78 = -1;
int32_t x361 = INT32_MAX;
uint16_t x375 = UINT16_MAX;
volatile int16_t x381 = INT16_MIN;
static uint16_t x391 = UINT16_MAX;
int16_t x397 = 2;
uint8_t x400 = UINT8_MAX;
volatile int32_t t90 = 55654;
int64_t x417 = INT64_MIN;
uint16_t x418 = 12U;
int16_t x421 = 94;
uint32_t x424 = UINT32_MAX;
int64_t x425 = -1LL;
int64_t x434 = INT64_MAX;
int32_t t94 = 15;
volatile uint16_t x442 = UINT16_MAX;
volatile uint32_t x443 = 520608892U;
int64_t x449 = INT64_MIN;
volatile uint16_t x450 = 1U;
int32_t t98 = -485;
static volatile uint64_t x454 = 17264957LLU;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint16_t x2 = UINT16_MAX;
	volatile int16_t x3 = -1742;
	int32_t t0 = -37820;

	t0 = ((x1+x2)==(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x15 = INT8_MAX;
	static int16_t x16 = INT16_MIN;
	int32_t t1 = 42100;

	t1 = ((x13+x14)==(x15<=x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = -9129;
	uint8_t x19 = UINT8_MAX;
	uint8_t x20 = UINT8_MAX;
	int32_t t2 = -1931;

	t2 = ((x17+x18)==(x19<=x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = -1;
	int16_t x23 = -342;
	static int32_t x24 = 37509;
	volatile int32_t t3 = -62367;

	t3 = ((x21+x22)==(x23<=x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x25 = UINT8_MAX;
	int8_t x27 = 3;
	static volatile int32_t x28 = INT32_MIN;
	static int32_t t4 = -3210986;

	t4 = ((x25+x26)==(x27<=x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = 15480276247LL;
	int16_t x30 = -1;
	volatile int32_t x32 = -9481;
	static int32_t t5 = 83782535;

	t5 = ((x29+x30)==(x31<=x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = -1;
	volatile int8_t x38 = 1;
	uint16_t x39 = 0U;
	volatile int64_t x40 = 41111707467738LL;
	volatile int32_t t6 = 2012341;

	t6 = ((x37+x38)==(x39<=x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = INT32_MIN;
	uint8_t x42 = UINT8_MAX;
	static uint8_t x43 = 109U;
	volatile int16_t x44 = -1091;

	t7 = ((x41+x42)==(x43<=x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x45 = 3939U;
	uint32_t x46 = 3U;
	int8_t x47 = 0;
	int32_t x48 = INT32_MIN;
	volatile int32_t t8 = -42;

	t8 = ((x45+x46)==(x47<=x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = UINT64_MAX;
	int64_t x51 = -1LL;
	int16_t x52 = -1;
	int32_t t9 = -369678;

	t9 = ((x49+x50)==(x51<=x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = 6041;
	uint32_t x54 = UINT32_MAX;
	volatile int32_t t10 = -383070924;

	t10 = ((x53+x54)==(x55<=x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x57 = -21;
	int16_t x59 = INT16_MAX;
	uint16_t x60 = 31U;

	t11 = ((x57+x58)==(x59<=x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x61 = 1737U;
	int32_t x62 = -1;
	volatile int32_t t12 = 875327;

	t12 = ((x61+x62)==(x63<=x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x69 = UINT64_MAX;
	int8_t x71 = INT8_MIN;
	volatile int32_t t13 = 283802838;

	t13 = ((x69+x70)==(x71<=x72));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = -1LL;
	volatile uint8_t x74 = UINT8_MAX;
	int64_t x75 = INT64_MAX;
	uint64_t x76 = 1994665LLU;
	volatile int32_t t14 = 1958;

	t14 = ((x73+x74)==(x75<=x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = -8317130;
	uint8_t x78 = 68U;
	static volatile int32_t t15 = 2;

	t15 = ((x77+x78)==(x79<=x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = -255124LL;
	uint8_t x86 = UINT8_MAX;
	int32_t x87 = -1;
	int64_t x88 = -1LL;
	int32_t t16 = -1628284;

	t16 = ((x85+x86)==(x87<=x88));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x89 = -1;
	int32_t x90 = 550474474;
	int16_t x91 = INT16_MIN;
	int32_t x92 = 250448;
	int32_t t17 = 126138818;

	t17 = ((x89+x90)==(x91<=x92));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x93 = -1LL;
	static volatile int32_t x94 = INT32_MIN;
	static uint64_t x96 = 121895996LLU;
	int32_t t18 = 1;

	t18 = ((x93+x94)==(x95<=x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = INT8_MAX;
	int64_t x98 = INT64_MIN;
	int32_t x99 = -1;
	int8_t x100 = INT8_MAX;
	int32_t t19 = -3;

	t19 = ((x97+x98)==(x99<=x100));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x101 = INT32_MIN;
	int64_t x102 = -707375741757601214LL;
	volatile int64_t x103 = INT64_MAX;
	int16_t x104 = -1;
	volatile int32_t t20 = -611;

	t20 = ((x101+x102)==(x103<=x104));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = -38;
	int64_t x106 = -1LL;
	uint64_t x107 = UINT64_MAX;
	uint16_t x108 = 644U;
	int32_t t21 = 65021594;

	t21 = ((x105+x106)==(x107<=x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x109 = INT32_MIN;
	int8_t x110 = INT8_MAX;
	volatile int64_t x112 = -13776LL;
	volatile int32_t t22 = -1632;

	t22 = ((x109+x110)==(x111<=x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x114 = 55LL;
	uint8_t x115 = 0U;
	int32_t x116 = -242933848;
	static int32_t t23 = -13;

	t23 = ((x113+x114)==(x115<=x116));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x117 = INT16_MIN;
	uint16_t x118 = 31812U;
	int64_t x119 = INT64_MIN;
	static int32_t t24 = -116;

	t24 = ((x117+x118)==(x119<=x120));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x121 = 31;
	volatile int64_t x123 = -1LL;
	int16_t x124 = INT16_MAX;
	volatile int32_t t25 = -5;

	t25 = ((x121+x122)==(x123<=x124));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = INT16_MIN;
	static int8_t x128 = INT8_MIN;
	static int32_t t26 = -249418474;

	t26 = ((x125+x126)==(x127<=x128));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x129 = INT8_MIN;
	volatile int32_t x130 = 66680890;
	static int16_t x131 = -1;
	volatile uint8_t x132 = 3U;
	int32_t t27 = 808899211;

	t27 = ((x129+x130)==(x131<=x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = -439874LL;
	static int8_t x136 = INT8_MIN;
	int32_t t28 = -271131;

	t28 = ((x133+x134)==(x135<=x136));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x137 = 0U;
	int32_t x138 = -1;
	uint64_t x139 = 966600LLU;
	int16_t x140 = -1;
	int32_t t29 = -120475049;

	t29 = ((x137+x138)==(x139<=x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x141 = 1U;
	uint8_t x142 = UINT8_MAX;
	int8_t x144 = INT8_MIN;
	volatile int32_t t30 = -4053652;

	t30 = ((x141+x142)==(x143<=x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x146 = 27U;
	uint8_t x148 = UINT8_MAX;

	t31 = ((x145+x146)==(x147<=x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x153 = 96LLU;
	int16_t x154 = INT16_MAX;
	int32_t x155 = 0;
	volatile uint8_t x156 = UINT8_MAX;
	volatile int32_t t32 = -5534;

	t32 = ((x153+x154)==(x155<=x156));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x161 = INT16_MAX;
	uint8_t x162 = 1U;
	int16_t x163 = INT16_MIN;
	volatile int8_t x164 = -2;
	int32_t t33 = 819905;

	t33 = ((x161+x162)==(x163<=x164));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x166 = 1;
	static volatile int32_t t34 = 2248203;

	t34 = ((x165+x166)==(x167<=x168));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x169 = INT16_MIN;
	int8_t x170 = -1;
	int32_t x171 = INT32_MIN;
	uint64_t x172 = 2834948145878950388LLU;
	static volatile int32_t t35 = -333;

	t35 = ((x169+x170)==(x171<=x172));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x173 = INT32_MIN;
	volatile uint32_t x174 = UINT32_MAX;
	uint16_t x175 = 139U;
	volatile int32_t t36 = -20037;

	t36 = ((x173+x174)==(x175<=x176));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x178 = -1;
	uint32_t x179 = 72790U;
	int8_t x180 = INT8_MIN;
	static volatile int32_t t37 = 1;

	t37 = ((x177+x178)==(x179<=x180));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x181 = 5U;
	volatile uint16_t x182 = 7U;
	volatile int8_t x183 = INT8_MIN;

	t38 = ((x181+x182)==(x183<=x184));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x185 = INT64_MIN;
	volatile int64_t x186 = INT64_MAX;
	uint32_t x187 = 54066U;
	static int8_t x188 = -13;
	static int32_t t39 = 38846876;

	t39 = ((x185+x186)==(x187<=x188));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x190 = UINT64_MAX;
	volatile int32_t x191 = INT32_MIN;
	uint32_t x192 = UINT32_MAX;
	volatile int32_t t40 = 7077092;

	t40 = ((x189+x190)==(x191<=x192));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x193 = 57U;
	int32_t x194 = -1;
	static volatile int32_t t41 = 101;

	t41 = ((x193+x194)==(x195<=x196));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x197 = -8;
	int16_t x198 = 7;
	int32_t x199 = INT32_MIN;
	int64_t x200 = -1LL;
	volatile int32_t t42 = -242895786;

	t42 = ((x197+x198)==(x199<=x200));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x201 = INT32_MAX;
	static uint64_t x202 = 21569339LLU;
	static int8_t x203 = -1;
	int16_t x204 = INT16_MIN;
	volatile int32_t t43 = 61083;

	t43 = ((x201+x202)==(x203<=x204));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x205 = UINT64_MAX;
	int64_t x206 = INT64_MAX;
	static uint32_t x207 = 470148U;
	int32_t x208 = -1;
	volatile int32_t t44 = 10;

	t44 = ((x205+x206)==(x207<=x208));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x213 = INT16_MIN;
	static int16_t x214 = -1;
	static uint32_t x215 = 0U;
	uint32_t x216 = UINT32_MAX;
	int32_t t45 = 1845;

	t45 = ((x213+x214)==(x215<=x216));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x217 = 7932U;
	int16_t x218 = INT16_MIN;
	volatile int32_t x219 = -193;
	int64_t x220 = 31192LL;
	static volatile int32_t t46 = 415;

	t46 = ((x217+x218)==(x219<=x220));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x221 = 2U;
	static volatile int16_t x222 = -1;
	volatile uint32_t x223 = UINT32_MAX;

	t47 = ((x221+x222)==(x223<=x224));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x225 = INT32_MAX;
	static uint64_t x226 = UINT64_MAX;
	uint64_t x227 = 9LLU;
	uint16_t x228 = UINT16_MAX;
	int32_t t48 = 4;

	t48 = ((x225+x226)==(x227<=x228));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x229 = -1;
	int16_t x230 = INT16_MAX;
	int16_t x231 = INT16_MIN;
	volatile int32_t t49 = 3231;

	t49 = ((x229+x230)==(x231<=x232));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x234 = INT8_MIN;
	int32_t x236 = -1;
	int32_t t50 = -1240970;

	t50 = ((x233+x234)==(x235<=x236));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x237 = INT8_MAX;
	uint8_t x238 = UINT8_MAX;
	static int32_t x239 = -61331;

	t51 = ((x237+x238)==(x239<=x240));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x241 = -52;
	int16_t x242 = -2;
	uint16_t x243 = 242U;
	int64_t x244 = -1LL;

	t52 = ((x241+x242)==(x243<=x244));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x245 = -65364673348974805LL;
	uint16_t x246 = 5U;
	uint8_t x247 = 3U;
	int32_t x248 = -794137;

	t53 = ((x245+x246)==(x247<=x248));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x249 = INT8_MIN;
	uint16_t x250 = 16386U;
	int8_t x251 = 1;
	int64_t x252 = -1LL;
	int32_t t54 = 4051;

	t54 = ((x249+x250)==(x251<=x252));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x256 = UINT32_MAX;
	int32_t t55 = 163273;

	t55 = ((x253+x254)==(x255<=x256));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x257 = UINT64_MAX;
	uint8_t x258 = UINT8_MAX;
	int8_t x260 = -1;
	int32_t t56 = 520;

	t56 = ((x257+x258)==(x259<=x260));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x261 = INT32_MIN;
	int64_t x262 = 2036678405451150633LL;
	int8_t x263 = -1;
	int8_t x264 = -1;
	int32_t t57 = -102;

	t57 = ((x261+x262)==(x263<=x264));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x265 = 132044350788941884LL;
	int32_t x266 = -1;
	volatile int64_t x267 = INT64_MAX;
	uint32_t x268 = UINT32_MAX;
	static volatile int32_t t58 = 0;

	t58 = ((x265+x266)==(x267<=x268));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x270 = INT8_MIN;
	uint8_t x271 = 1U;
	int64_t x272 = INT64_MAX;
	volatile int32_t t59 = -3773176;

	t59 = ((x269+x270)==(x271<=x272));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x274 = -181242294;
	volatile int32_t t60 = 693106;

	t60 = ((x273+x274)==(x275<=x276));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x277 = 3;
	int16_t x278 = INT16_MIN;
	int8_t x280 = -1;
	int32_t t61 = -7405232;

	t61 = ((x277+x278)==(x279<=x280));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x281 = UINT8_MAX;
	int64_t x282 = 1661728516317LL;
	int64_t x283 = 5062LL;
	int8_t x284 = 3;
	volatile int32_t t62 = -30;

	t62 = ((x281+x282)==(x283<=x284));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x286 = 4U;
	volatile int8_t x287 = INT8_MIN;
	static volatile int16_t x288 = INT16_MIN;
	volatile int32_t t63 = -1;

	t63 = ((x285+x286)==(x287<=x288));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x289 = 0U;
	uint16_t x291 = UINT16_MAX;
	int32_t x292 = -2;
	int32_t t64 = 73465427;

	t64 = ((x289+x290)==(x291<=x292));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x298 = UINT16_MAX;
	static int64_t x299 = -3728LL;
	static volatile int32_t t65 = 25592089;

	t65 = ((x297+x298)==(x299<=x300));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x302 = INT8_MAX;
	int8_t x303 = INT8_MAX;
	int32_t x304 = INT32_MIN;
	volatile int32_t t66 = 81;

	t66 = ((x301+x302)==(x303<=x304));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x305 = -336445275LL;
	static int16_t x306 = -1;
	int32_t x307 = -1;
	int16_t x308 = INT16_MIN;

	t67 = ((x305+x306)==(x307<=x308));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x309 = 2883358034901805LLU;
	uint16_t x310 = 3883U;
	volatile uint64_t x311 = UINT64_MAX;
	int16_t x312 = INT16_MIN;
	volatile int32_t t68 = 0;

	t68 = ((x309+x310)==(x311<=x312));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x317 = 5063205399LLU;
	int32_t x318 = 2;
	uint64_t x319 = 218721921942LLU;
	volatile int32_t t69 = -1;

	t69 = ((x317+x318)==(x319<=x320));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x321 = INT16_MAX;
	uint64_t x322 = UINT64_MAX;
	int64_t x323 = -1LL;
	int8_t x324 = -3;
	static int32_t t70 = 171;

	t70 = ((x321+x322)==(x323<=x324));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x325 = INT8_MIN;
	uint32_t x326 = UINT32_MAX;
	int64_t x328 = INT64_MAX;
	int32_t t71 = -6293;

	t71 = ((x325+x326)==(x327<=x328));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x329 = 967833567741103LLU;
	uint64_t x330 = 2197556817915284430LLU;
	int64_t x331 = -10331059535LL;
	static int32_t x332 = -1;
	volatile int32_t t72 = 2149962;

	t72 = ((x329+x330)==(x331<=x332));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x333 = INT16_MIN;
	uint64_t x335 = UINT64_MAX;
	volatile int32_t t73 = -1991746;

	t73 = ((x333+x334)==(x335<=x336));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x337 = 3U;
	static int8_t x338 = 3;
	uint32_t x340 = 21596435U;
	volatile int32_t t74 = 19;

	t74 = ((x337+x338)==(x339<=x340));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x342 = 8404U;
	volatile int32_t x343 = INT32_MIN;
	uint64_t x344 = UINT64_MAX;

	t75 = ((x341+x342)==(x343<=x344));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x345 = INT64_MIN;
	volatile uint32_t x346 = 1325002U;
	static int32_t x347 = -1;
	uint16_t x348 = 11840U;
	int32_t t76 = -730;

	t76 = ((x345+x346)==(x347<=x348));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x350 = UINT8_MAX;
	int16_t x351 = INT16_MAX;
	int8_t x352 = 10;
	static volatile int32_t t77 = 3;

	t77 = ((x349+x350)==(x351<=x352));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x353 = -1LL;
	int64_t x354 = 124487154992785LL;
	int32_t x356 = 47839559;

	t78 = ((x353+x354)==(x355<=x356));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x357 = 69LLU;
	static int32_t x358 = -1;
	volatile int8_t x359 = INT8_MIN;
	uint64_t x360 = UINT64_MAX;
	int32_t t79 = -60013;

	t79 = ((x357+x358)==(x359<=x360));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x362 = INT32_MIN;
	volatile int64_t x363 = -182LL;
	int16_t x364 = -1;
	int32_t t80 = -2079188;

	t80 = ((x361+x362)==(x363<=x364));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x369 = -15;
	int8_t x370 = INT8_MIN;
	uint16_t x371 = UINT16_MAX;
	static volatile int64_t x372 = INT64_MIN;
	static volatile int32_t t81 = -553199357;

	t81 = ((x369+x370)==(x371<=x372));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x373 = 207U;
	volatile int64_t x374 = INT64_MIN;
	int8_t x376 = INT8_MIN;
	int32_t t82 = 0;

	t82 = ((x373+x374)==(x375<=x376));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x377 = 33U;
	static uint64_t x378 = UINT64_MAX;
	int64_t x379 = INT64_MIN;
	static volatile int16_t x380 = -103;
	volatile int32_t t83 = -51391332;

	t83 = ((x377+x378)==(x379<=x380));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x382 = 1U;
	int16_t x383 = INT16_MIN;
	uint16_t x384 = 721U;
	static volatile int32_t t84 = 717;

	t84 = ((x381+x382)==(x383<=x384));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x385 = 3524U;
	uint16_t x386 = 59U;
	int16_t x387 = -1246;
	volatile int16_t x388 = -1;
	int32_t t85 = -129849309;

	t85 = ((x385+x386)==(x387<=x388));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x389 = INT8_MIN;
	int32_t x390 = -1;
	int32_t x392 = -1;
	static int32_t t86 = -843;

	t86 = ((x389+x390)==(x391<=x392));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x393 = 0;
	volatile uint64_t x394 = 101797937177LLU;
	uint16_t x395 = 30U;
	int32_t x396 = -1;
	int32_t t87 = 7453;

	t87 = ((x393+x394)==(x395<=x396));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x398 = INT8_MIN;
	int32_t x399 = -1;
	static volatile int32_t t88 = -54;

	t88 = ((x397+x398)==(x399<=x400));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x409 = INT8_MIN;
	uint64_t x410 = 249710794460LLU;
	static uint64_t x411 = 281589645LLU;
	static int64_t x412 = INT64_MIN;
	volatile int32_t t89 = 27;

	t89 = ((x409+x410)==(x411<=x412));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x413 = INT8_MIN;
	int32_t x414 = -1;
	static uint32_t x415 = UINT32_MAX;
	int64_t x416 = -1LL;

	t90 = ((x413+x414)==(x415<=x416));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x419 = UINT16_MAX;
	int32_t x420 = INT32_MIN;
	volatile int32_t t91 = 73;

	t91 = ((x417+x418)==(x419<=x420));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x422 = -16209476LL;
	uint32_t x423 = 2U;
	volatile int32_t t92 = -1118777;

	t92 = ((x421+x422)==(x423<=x424));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x426 = INT16_MAX;
	uint32_t x427 = UINT32_MAX;
	int8_t x428 = INT8_MAX;
	int32_t t93 = -14312;

	t93 = ((x425+x426)==(x427<=x428));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x433 = -1LL;
	int8_t x435 = INT8_MIN;
	static uint32_t x436 = 968U;

	t94 = ((x433+x434)==(x435<=x436));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x437 = 0;
	volatile int64_t x438 = INT64_MAX;
	int64_t x439 = INT64_MIN;
	uint8_t x440 = UINT8_MAX;
	int32_t t95 = -3903005;

	t95 = ((x437+x438)==(x439<=x440));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x441 = -31;
	int8_t x444 = INT8_MIN;
	static volatile int32_t t96 = -27374832;

	t96 = ((x441+x442)==(x443<=x444));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x445 = -117LL;
	int16_t x446 = INT16_MAX;
	int16_t x447 = -1;
	int32_t x448 = INT32_MIN;
	int32_t t97 = 240933409;

	t97 = ((x445+x446)==(x447<=x448));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x451 = 50U;
	volatile int8_t x452 = INT8_MIN;

	t98 = ((x449+x450)==(x451<=x452));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x453 = 0LLU;
	volatile uint32_t x455 = 3996395U;
	static uint32_t x456 = UINT32_MAX;
	static volatile int32_t t99 = 113686261;

	t99 = ((x453+x454)==(x455<=x456));

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


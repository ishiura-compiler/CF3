#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = 1626293861LL;
int16_t x8 = -1;
volatile uint32_t x10 = UINT32_MAX;
int16_t x13 = -5715;
volatile int32_t t3 = 16343237;
uint64_t x18 = UINT64_MAX;
int32_t t4 = 1;
int16_t x24 = INT16_MIN;
int32_t t5 = 1522449;
volatile int64_t x26 = 292082LL;
int8_t x30 = -6;
volatile int32_t t7 = 7;
static volatile int32_t t8 = 1146;
int8_t x37 = -1;
volatile uint64_t x42 = UINT64_MAX;
uint8_t x48 = UINT8_MAX;
volatile int32_t t11 = -195;
static int8_t x49 = -1;
int32_t x55 = INT32_MIN;
volatile int32_t t14 = -2081995;
int8_t x61 = -1;
volatile int32_t x66 = -1;
int64_t x70 = -27750530632468066LL;
static int32_t t17 = -44340;
static int32_t t20 = -13741266;
int8_t x94 = INT8_MIN;
uint64_t x97 = 287LLU;
volatile int32_t t22 = -254673898;
int32_t t23 = 57405976;
uint32_t x113 = 0U;
uint8_t x121 = 10U;
static uint32_t x123 = UINT32_MAX;
static volatile int64_t x127 = -33813552620776LL;
int64_t x138 = -1LL;
uint32_t x144 = 15U;
uint64_t x147 = 12945266799440434LLU;
static uint16_t x158 = 1U;
uint64_t x163 = 1887083704LLU;
volatile uint32_t x171 = 34U;
uint64_t x172 = 2251420160LLU;
static volatile int32_t t40 = 1;
int32_t x182 = -1;
static int32_t t42 = 16025684;
int64_t x186 = INT64_MIN;
int64_t x190 = -1LL;
volatile int16_t x191 = 518;
volatile uint32_t x193 = 117373419U;
int16_t x194 = -1;
int8_t x198 = INT8_MIN;
int32_t t48 = 1;
static int8_t x221 = -1;
int64_t x226 = -85LL;
int32_t x233 = INT32_MAX;
int32_t x237 = 3312;
volatile uint8_t x238 = UINT8_MAX;
uint16_t x239 = UINT16_MAX;
int32_t t56 = 2135335;
static int16_t x248 = 13536;
uint16_t x252 = UINT16_MAX;
volatile int16_t x262 = INT16_MIN;
int32_t x270 = INT32_MIN;
static int64_t x296 = -636106503514105625LL;
volatile uint32_t x308 = 3886U;
static uint8_t x311 = 13U;
static int32_t x319 = -619666498;
static uint8_t x321 = 36U;
int32_t x340 = INT32_MIN;
static int8_t x346 = -1;
volatile int16_t x352 = INT16_MAX;
int16_t x355 = -1;
uint32_t x359 = UINT32_MAX;
uint8_t x363 = 1U;
static volatile int32_t x367 = 1251;
uint64_t x368 = UINT64_MAX;
int64_t x392 = INT64_MIN;
int16_t x393 = -3271;
int8_t x395 = INT8_MIN;
int64_t x397 = INT64_MIN;
volatile uint64_t x399 = 18107666206099LLU;
int32_t x401 = -364077;
int16_t x403 = INT16_MAX;
uint16_t x406 = UINT16_MAX;
int32_t x418 = 410953943;
int32_t x419 = -103600162;
static int16_t x420 = INT16_MIN;
int16_t x422 = INT16_MAX;
static int32_t x424 = INT32_MAX;


void f0(void) {
	uint8_t x1 = 83U;
	int16_t x3 = INT16_MAX;
	uint16_t x4 = 2869U;
	int32_t t0 = 0;

	t0 = ((x1<=x2)==(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	volatile int16_t x6 = -4;
	static uint8_t x7 = 24U;
	static int32_t t1 = -822841;

	t1 = ((x5<=x6)==(x7/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 40037592992LLU;
	int64_t x11 = INT64_MAX;
	int8_t x12 = -6;
	volatile int32_t t2 = 1229;

	t2 = ((x9<=x10)==(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = -1;
	int16_t x15 = INT16_MIN;
	static uint32_t x16 = 54306829U;

	t3 = ((x13<=x14)==(x15/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int8_t x19 = INT8_MIN;
	volatile int16_t x20 = -5;

	t4 = ((x17<=x18)==(x19/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	static volatile int16_t x22 = -1;
	int32_t x23 = -1;

	t5 = ((x21<=x22)==(x23/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = 30;
	static volatile uint8_t x27 = 31U;
	int16_t x28 = INT16_MAX;
	volatile int32_t t6 = 0;

	t6 = ((x25<=x26)==(x27/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	volatile int16_t x31 = INT16_MAX;
	volatile uint8_t x32 = 109U;

	t7 = ((x29<=x30)==(x31/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 191128819U;
	int8_t x34 = INT8_MIN;
	uint16_t x35 = UINT16_MAX;
	volatile int8_t x36 = INT8_MIN;

	t8 = ((x33<=x34)==(x35/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x38 = INT32_MIN;
	static int16_t x39 = INT16_MAX;
	uint8_t x40 = UINT8_MAX;
	volatile int32_t t9 = -3103;

	t9 = ((x37<=x38)==(x39/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = -1;
	static int8_t x43 = INT8_MIN;
	uint8_t x44 = UINT8_MAX;
	int32_t t10 = 0;

	t10 = ((x41<=x42)==(x43/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 3;
	int64_t x46 = -2046097LL;
	int32_t x47 = -449635222;

	t11 = ((x45<=x46)==(x47/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x50 = UINT32_MAX;
	int64_t x51 = -8176LL;
	volatile uint32_t x52 = 848U;
	volatile int32_t t12 = -19885;

	t12 = ((x49<=x50)==(x51/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x53 = 4807U;
	volatile int16_t x54 = 4;
	volatile int16_t x56 = 64;
	volatile int32_t t13 = 902405;

	t13 = ((x53<=x54)==(x55/x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = -38;
	volatile int8_t x58 = -1;
	uint64_t x59 = 937249LLU;
	int8_t x60 = -2;

	t14 = ((x57<=x58)==(x59/x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x62 = 21;
	static int16_t x63 = -43;
	int16_t x64 = -1567;
	static volatile int32_t t15 = 14370905;

	t15 = ((x61<=x62)==(x63/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 0;
	volatile int32_t x67 = -1;
	int32_t x68 = INT32_MAX;
	volatile int32_t t16 = -106;

	t16 = ((x65<=x66)==(x67/x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = 1;
	int8_t x71 = 1;
	static int32_t x72 = INT32_MIN;

	t17 = ((x69<=x70)==(x71/x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -22;
	int16_t x74 = INT16_MAX;
	volatile int16_t x75 = -1;
	int32_t x76 = -1;
	static volatile int32_t t18 = -2003;

	t18 = ((x73<=x74)==(x75/x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x81 = INT8_MAX;
	int8_t x82 = INT8_MIN;
	volatile int16_t x83 = 3482;
	int32_t x84 = INT32_MAX;
	volatile int32_t t19 = -253379;

	t19 = ((x81<=x82)==(x83/x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x89 = INT64_MIN;
	int8_t x90 = INT8_MIN;
	uint64_t x91 = UINT64_MAX;
	static uint8_t x92 = 3U;

	t20 = ((x89<=x90)==(x91/x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MIN;
	int64_t x95 = -2395606149313LL;
	int64_t x96 = -1LL;
	volatile int32_t t21 = -192598402;

	t21 = ((x93<=x94)==(x95/x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x98 = 0U;
	uint64_t x99 = 1132331028794LLU;
	volatile int32_t x100 = INT32_MAX;

	t22 = ((x97<=x98)==(x99/x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MIN;
	int8_t x102 = -9;
	uint16_t x103 = 0U;
	int32_t x104 = INT32_MAX;

	t23 = ((x101<=x102)==(x103/x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = -139;
	volatile uint32_t x106 = 189502U;
	static int32_t x107 = -1;
	static volatile int32_t x108 = INT32_MIN;
	int32_t t24 = -3784222;

	t24 = ((x105<=x106)==(x107/x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = 57U;
	static uint16_t x110 = UINT16_MAX;
	volatile int16_t x111 = 101;
	volatile int16_t x112 = -1;
	volatile int32_t t25 = -1;

	t25 = ((x109<=x110)==(x111/x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x114 = 15308508LL;
	volatile int32_t x115 = INT32_MIN;
	volatile int64_t x116 = INT64_MAX;
	static int32_t t26 = 176666937;

	t26 = ((x113<=x114)==(x115/x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x117 = 74U;
	int16_t x118 = -1;
	static uint8_t x119 = 6U;
	int16_t x120 = -11347;
	int32_t t27 = -71;

	t27 = ((x117<=x118)==(x119/x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x122 = INT64_MIN;
	uint8_t x124 = UINT8_MAX;
	volatile int32_t t28 = 28;

	t28 = ((x121<=x122)==(x123/x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x125 = 11U;
	static int16_t x126 = 11;
	static volatile int64_t x128 = INT64_MIN;
	int32_t t29 = 386260;

	t29 = ((x125<=x126)==(x127/x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x133 = 4386838319298379823LLU;
	volatile int8_t x134 = INT8_MIN;
	uint8_t x135 = 0U;
	int32_t x136 = -24;
	volatile int32_t t30 = 19;

	t30 = ((x133<=x134)==(x135/x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x137 = -2;
	uint32_t x139 = 68359233U;
	uint32_t x140 = 31826918U;
	int32_t t31 = -26;

	t31 = ((x137<=x138)==(x139/x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = INT16_MAX;
	int64_t x142 = INT64_MIN;
	volatile int8_t x143 = INT8_MIN;
	volatile int32_t t32 = 545059;

	t32 = ((x141<=x142)==(x143/x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x145 = 1U;
	static uint64_t x146 = 21534LLU;
	uint32_t x148 = 14U;
	volatile int32_t t33 = 3166;

	t33 = ((x145<=x146)==(x147/x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x149 = INT16_MIN;
	static int16_t x150 = INT16_MIN;
	int64_t x151 = -1LL;
	int64_t x152 = INT64_MIN;
	volatile int32_t t34 = 74;

	t34 = ((x149<=x150)==(x151/x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = -279;
	volatile int8_t x154 = INT8_MIN;
	static volatile int32_t x155 = -1;
	int64_t x156 = -2120446782LL;
	int32_t t35 = -383704120;

	t35 = ((x153<=x154)==(x155/x156));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x157 = INT32_MAX;
	uint32_t x159 = UINT32_MAX;
	int64_t x160 = -1LL;
	static volatile int32_t t36 = -3;

	t36 = ((x157<=x158)==(x159/x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = -2566;
	int32_t x162 = INT32_MAX;
	volatile int8_t x164 = INT8_MIN;
	volatile int32_t t37 = -4;

	t37 = ((x161<=x162)==(x163/x164));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x165 = 1U;
	static volatile int64_t x166 = -1LL;
	int8_t x167 = INT8_MIN;
	volatile int8_t x168 = INT8_MIN;
	volatile int32_t t38 = -346656440;

	t38 = ((x165<=x166)==(x167/x168));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x169 = INT8_MAX;
	int32_t x170 = INT32_MIN;
	int32_t t39 = 0;

	t39 = ((x169<=x170)==(x171/x172));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x173 = -386;
	uint32_t x174 = 5517014U;
	static int8_t x175 = -1;
	static int64_t x176 = -5389LL;

	t40 = ((x173<=x174)==(x175/x176));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = 302;
	uint16_t x178 = 161U;
	static int16_t x179 = -1;
	uint8_t x180 = 46U;
	int32_t t41 = 504;

	t41 = ((x177<=x178)==(x179/x180));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = INT16_MIN;
	volatile int16_t x183 = 700;
	static int32_t x184 = -3838786;

	t42 = ((x181<=x182)==(x183/x184));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = -533;
	volatile int8_t x187 = INT8_MIN;
	uint32_t x188 = 412U;
	int32_t t43 = -1844;

	t43 = ((x185<=x186)==(x187/x188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x189 = 1U;
	int16_t x192 = INT16_MAX;
	volatile int32_t t44 = 11088628;

	t44 = ((x189<=x190)==(x191/x192));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x195 = 103U;
	uint16_t x196 = 83U;
	int32_t t45 = -1;

	t45 = ((x193<=x194)==(x195/x196));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x197 = INT16_MIN;
	volatile uint16_t x199 = 27U;
	int32_t x200 = -393;
	int32_t t46 = -867534155;

	t46 = ((x197<=x198)==(x199/x200));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = 0;
	volatile int64_t x202 = -1LL;
	volatile int16_t x203 = -1;
	volatile int16_t x204 = INT16_MIN;
	int32_t t47 = -45385;

	t47 = ((x201<=x202)==(x203/x204));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x205 = -1;
	int32_t x206 = 365775685;
	volatile int32_t x207 = INT32_MIN;
	uint32_t x208 = 451U;

	t48 = ((x205<=x206)==(x207/x208));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x209 = 1364U;
	int8_t x210 = 1;
	static volatile uint64_t x211 = 44LLU;
	int8_t x212 = -1;
	int32_t t49 = -485271833;

	t49 = ((x209<=x210)==(x211/x212));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = -1;
	int16_t x214 = INT16_MIN;
	int8_t x215 = -1;
	int32_t x216 = INT32_MAX;
	int32_t t50 = -2322312;

	t50 = ((x213<=x214)==(x215/x216));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = -1LL;
	static int8_t x218 = 0;
	static uint32_t x219 = UINT32_MAX;
	int32_t x220 = 316458922;
	int32_t t51 = -50;

	t51 = ((x217<=x218)==(x219/x220));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x222 = 0;
	int64_t x223 = -7LL;
	static volatile int8_t x224 = 32;
	int32_t t52 = -58567911;

	t52 = ((x221<=x222)==(x223/x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x225 = UINT8_MAX;
	static volatile uint16_t x227 = 10U;
	static int64_t x228 = -12899LL;
	volatile int32_t t53 = -19308725;

	t53 = ((x225<=x226)==(x227/x228));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x229 = INT32_MIN;
	uint8_t x230 = UINT8_MAX;
	uint16_t x231 = 3717U;
	int16_t x232 = INT16_MIN;
	volatile int32_t t54 = -244390534;

	t54 = ((x229<=x230)==(x231/x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x234 = -1LL;
	int16_t x235 = INT16_MAX;
	volatile int64_t x236 = -1LL;
	volatile int32_t t55 = -634777527;

	t55 = ((x233<=x234)==(x235/x236));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x240 = UINT32_MAX;

	t56 = ((x237<=x238)==(x239/x240));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x241 = 7130U;
	uint16_t x242 = 4976U;
	int32_t x243 = 774358659;
	int8_t x244 = INT8_MIN;
	volatile int32_t t57 = 0;

	t57 = ((x241<=x242)==(x243/x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x245 = 0LLU;
	int64_t x246 = INT64_MIN;
	int16_t x247 = -7884;
	int32_t t58 = 32;

	t58 = ((x245<=x246)==(x247/x248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x249 = INT8_MIN;
	uint8_t x250 = 4U;
	static int64_t x251 = -1LL;
	int32_t t59 = -32649;

	t59 = ((x249<=x250)==(x251/x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x253 = 29U;
	int16_t x254 = INT16_MAX;
	volatile int64_t x255 = -2078LL;
	int32_t x256 = INT32_MAX;
	static volatile int32_t t60 = 30833297;

	t60 = ((x253<=x254)==(x255/x256));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x257 = -68404949181129370LL;
	uint32_t x258 = 5U;
	static int64_t x259 = INT64_MIN;
	uint32_t x260 = 438797554U;
	volatile int32_t t61 = 32;

	t61 = ((x257<=x258)==(x259/x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x261 = 35089462160552964LL;
	int64_t x263 = INT64_MAX;
	int64_t x264 = -2515598287138LL;
	volatile int32_t t62 = -2;

	t62 = ((x261<=x262)==(x263/x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = INT64_MIN;
	uint32_t x271 = 249206U;
	int8_t x272 = -1;
	int32_t t63 = 4;

	t63 = ((x269<=x270)==(x271/x272));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x273 = 20U;
	volatile int64_t x274 = -1LL;
	int64_t x275 = -1798589090659101LL;
	volatile int8_t x276 = INT8_MIN;
	static volatile int32_t t64 = -30652;

	t64 = ((x273<=x274)==(x275/x276));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x277 = 60;
	uint32_t x278 = 11U;
	int8_t x279 = INT8_MAX;
	volatile int8_t x280 = 12;
	int32_t t65 = 15696;

	t65 = ((x277<=x278)==(x279/x280));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x281 = INT8_MAX;
	volatile int16_t x282 = INT16_MIN;
	static volatile uint16_t x283 = 1322U;
	uint16_t x284 = 1510U;
	volatile int32_t t66 = 490427351;

	t66 = ((x281<=x282)==(x283/x284));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x285 = INT32_MIN;
	volatile int32_t x286 = INT32_MIN;
	volatile int8_t x287 = -10;
	volatile int8_t x288 = -1;
	volatile int32_t t67 = 1;

	t67 = ((x285<=x286)==(x287/x288));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x289 = INT16_MIN;
	volatile uint32_t x290 = 0U;
	int64_t x291 = -57114LL;
	int8_t x292 = INT8_MAX;
	static int32_t t68 = 145;

	t68 = ((x289<=x290)==(x291/x292));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x293 = 7U;
	static uint8_t x294 = UINT8_MAX;
	int64_t x295 = -398032150555LL;
	volatile int32_t t69 = 17526;

	t69 = ((x293<=x294)==(x295/x296));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = 1;
	static volatile int8_t x298 = 0;
	int8_t x299 = INT8_MIN;
	int16_t x300 = -55;
	int32_t t70 = -2;

	t70 = ((x297<=x298)==(x299/x300));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x305 = INT8_MIN;
	uint16_t x306 = UINT16_MAX;
	volatile int32_t x307 = 677817997;
	volatile int32_t t71 = -17669;

	t71 = ((x305<=x306)==(x307/x308));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x309 = 376U;
	volatile int16_t x310 = INT16_MIN;
	int64_t x312 = -1LL;
	static volatile int32_t t72 = -50;

	t72 = ((x309<=x310)==(x311/x312));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x313 = -1;
	int8_t x314 = INT8_MIN;
	int32_t x315 = -1;
	volatile int64_t x316 = -12LL;
	int32_t t73 = 257783747;

	t73 = ((x313<=x314)==(x315/x316));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x317 = -1;
	volatile uint16_t x318 = 8U;
	static int32_t x320 = -116865493;
	volatile int32_t t74 = -1;

	t74 = ((x317<=x318)==(x319/x320));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x322 = INT32_MIN;
	static int16_t x323 = INT16_MIN;
	uint8_t x324 = 45U;
	volatile int32_t t75 = -7570;

	t75 = ((x321<=x322)==(x323/x324));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = INT8_MIN;
	int16_t x326 = INT16_MIN;
	int64_t x327 = -118789459495160LL;
	int8_t x328 = INT8_MAX;
	volatile int32_t t76 = 1237520;

	t76 = ((x325<=x326)==(x327/x328));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x329 = -1;
	uint32_t x330 = 330193U;
	int16_t x331 = -191;
	int32_t x332 = INT32_MAX;
	int32_t t77 = 435;

	t77 = ((x329<=x330)==(x331/x332));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x333 = UINT64_MAX;
	int32_t x334 = INT32_MIN;
	static int16_t x335 = INT16_MIN;
	int8_t x336 = INT8_MIN;
	volatile int32_t t78 = 21;

	t78 = ((x333<=x334)==(x335/x336));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x337 = 15U;
	volatile int8_t x338 = INT8_MAX;
	static uint32_t x339 = UINT32_MAX;
	int32_t t79 = 60413;

	t79 = ((x337<=x338)==(x339/x340));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x341 = 11U;
	static int16_t x342 = 1603;
	uint64_t x343 = UINT64_MAX;
	uint8_t x344 = 9U;
	volatile int32_t t80 = 87260;

	t80 = ((x341<=x342)==(x343/x344));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x345 = 25847081169LLU;
	int32_t x347 = 115156972;
	volatile int8_t x348 = -1;
	static volatile int32_t t81 = -448801184;

	t81 = ((x345<=x346)==(x347/x348));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x349 = INT8_MIN;
	static uint8_t x350 = UINT8_MAX;
	uint8_t x351 = 15U;
	int32_t t82 = 30959;

	t82 = ((x349<=x350)==(x351/x352));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x353 = 1;
	static int64_t x354 = 1415223064010209916LL;
	static int64_t x356 = INT64_MAX;
	static volatile int32_t t83 = 1;

	t83 = ((x353<=x354)==(x355/x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x357 = 2569U;
	static int16_t x358 = -1;
	int32_t x360 = INT32_MIN;
	int32_t t84 = -10389367;

	t84 = ((x357<=x358)==(x359/x360));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x361 = 302LL;
	volatile int8_t x362 = INT8_MIN;
	int64_t x364 = -3040140018825447136LL;
	static int32_t t85 = -14193879;

	t85 = ((x361<=x362)==(x363/x364));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x365 = INT32_MAX;
	uint8_t x366 = 4U;
	volatile int32_t t86 = -44;

	t86 = ((x365<=x366)==(x367/x368));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x373 = 709006113U;
	int8_t x374 = INT8_MIN;
	uint8_t x375 = 17U;
	static int8_t x376 = INT8_MAX;
	volatile int32_t t87 = -2404150;

	t87 = ((x373<=x374)==(x375/x376));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x377 = INT8_MIN;
	int64_t x378 = INT64_MAX;
	volatile uint64_t x379 = UINT64_MAX;
	int64_t x380 = INT64_MIN;
	volatile int32_t t88 = 3;

	t88 = ((x377<=x378)==(x379/x380));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x381 = 797114U;
	volatile int64_t x382 = -1LL;
	int16_t x383 = INT16_MAX;
	int64_t x384 = INT64_MAX;
	volatile int32_t t89 = 410569432;

	t89 = ((x381<=x382)==(x383/x384));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x385 = UINT8_MAX;
	int16_t x386 = INT16_MIN;
	int64_t x387 = INT64_MAX;
	uint32_t x388 = 6799U;
	int32_t t90 = -396874;

	t90 = ((x385<=x386)==(x387/x388));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x389 = 359;
	int32_t x390 = INT32_MIN;
	int8_t x391 = INT8_MIN;
	volatile int32_t t91 = 136;

	t91 = ((x389<=x390)==(x391/x392));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x394 = INT32_MIN;
	uint32_t x396 = UINT32_MAX;
	volatile int32_t t92 = -122572;

	t92 = ((x393<=x394)==(x395/x396));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x398 = INT8_MIN;
	int16_t x400 = INT16_MIN;
	int32_t t93 = 80;

	t93 = ((x397<=x398)==(x399/x400));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x402 = UINT16_MAX;
	static volatile int32_t x404 = -16287384;
	int32_t t94 = -16097;

	t94 = ((x401<=x402)==(x403/x404));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x405 = 11503668U;
	volatile int32_t x407 = 7177;
	volatile int64_t x408 = INT64_MIN;
	int32_t t95 = 1535972;

	t95 = ((x405<=x406)==(x407/x408));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x409 = UINT8_MAX;
	uint64_t x410 = UINT64_MAX;
	int32_t x411 = 78;
	int32_t x412 = -1;
	static int32_t t96 = -1214;

	t96 = ((x409<=x410)==(x411/x412));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x413 = UINT16_MAX;
	int8_t x414 = -1;
	static volatile int32_t x415 = 677690174;
	int16_t x416 = -12;
	volatile int32_t t97 = 182454;

	t97 = ((x413<=x414)==(x415/x416));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x417 = 1U;
	int32_t t98 = -837;

	t98 = ((x417<=x418)==(x419/x420));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x421 = INT8_MIN;
	int16_t x423 = INT16_MIN;
	int32_t t99 = -1892;

	t99 = ((x421<=x422)==(x423/x424));

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


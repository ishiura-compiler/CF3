#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
uint32_t x4 = UINT32_MAX;
int32_t t0 = -47450040;
uint32_t x7 = 6474596U;
static volatile int32_t x22 = INT32_MAX;
static volatile int32_t t5 = 1;
int16_t x25 = -1;
volatile int32_t x26 = 54;
static int64_t x27 = INT64_MIN;
static volatile uint8_t x31 = 56U;
static uint16_t x32 = 13U;
uint32_t x35 = 23U;
int8_t x36 = -13;
static int8_t x37 = INT8_MIN;
int32_t x38 = INT32_MAX;
uint16_t x40 = 2U;
int8_t x41 = -1;
int64_t x48 = 19163638LL;
int64_t x49 = 64LL;
volatile int16_t x71 = -1;
int8_t x86 = INT8_MIN;
int16_t x89 = -105;
uint16_t x91 = UINT16_MAX;
int8_t x94 = 0;
int32_t x100 = 0;
volatile uint64_t x124 = 1784772941916412LLU;
volatile int32_t t33 = -2089;
uint64_t x137 = 3813504476108507465LLU;
static int16_t x140 = 1960;
static int32_t t34 = 22;
volatile int32_t t35 = -649;
int64_t x146 = 3559171941LL;
volatile int32_t t36 = 59215138;
static uint16_t x152 = 15292U;
volatile int32_t t37 = -11;
uint8_t x155 = UINT8_MAX;
int16_t x159 = 1;
int16_t x162 = -1;
int64_t x163 = INT64_MIN;
volatile int8_t x164 = INT8_MIN;
int16_t x166 = INT16_MAX;
volatile int32_t t41 = -13423;
uint64_t x169 = UINT64_MAX;
int32_t x174 = -34;
static int32_t t43 = -957;
static uint16_t x182 = 11494U;
static int8_t x183 = INT8_MIN;
int64_t x184 = INT64_MIN;
uint32_t x187 = UINT32_MAX;
uint16_t x194 = 255U;
int32_t x196 = -1;
int64_t x203 = INT64_MIN;
int16_t x211 = 4;
int64_t x212 = 1289448LL;
volatile int32_t t52 = 1;
int32_t x223 = INT32_MIN;
static int64_t x225 = -12239LL;
static int64_t x226 = 0LL;
static uint16_t x230 = 30U;
int8_t x232 = 2;
int32_t x237 = 1;
volatile int32_t t60 = -1;
uint16_t x245 = 25558U;
int64_t x246 = INT64_MAX;
uint8_t x247 = 8U;
static uint64_t x248 = 3733937158321372220LLU;
static uint16_t x250 = UINT16_MAX;
int32_t x251 = 0;
int16_t x263 = 0;
uint32_t x264 = 21107U;
int32_t t65 = -246;
volatile int32_t x268 = INT32_MAX;
int32_t t66 = -6196;
int8_t x275 = -3;
uint8_t x276 = 38U;
int32_t x277 = INT32_MAX;
int8_t x282 = INT8_MAX;
static int32_t x284 = 0;
int16_t x290 = -31;
uint64_t x295 = 11646389011065LLU;
static uint32_t x306 = UINT32_MAX;
uint8_t x308 = UINT8_MAX;
int16_t x312 = 0;
volatile int8_t x315 = -1;
volatile int32_t t78 = -22274;
volatile int32_t t79 = 15296542;
static int16_t x325 = 8;
static int64_t x328 = 3120041LL;
volatile int32_t t81 = -1937;
volatile int8_t x329 = INT8_MIN;
int64_t x334 = INT64_MIN;
static int8_t x335 = INT8_MAX;
int8_t x341 = 1;
int64_t x344 = -1LL;
int32_t x347 = -1;
uint16_t x354 = UINT16_MAX;
static uint8_t x358 = 100U;
int16_t x361 = INT16_MIN;
int16_t x364 = -1;
int32_t x366 = -1;
uint32_t x372 = 77189U;
uint8_t x375 = UINT8_MAX;
uint8_t x380 = UINT8_MAX;
int64_t x384 = INT64_MIN;
int8_t x389 = -13;
int64_t x390 = INT64_MAX;
uint16_t x391 = 1U;
static int32_t x394 = -1;
int32_t t99 = -286;


void f0(void) {
	static int8_t x1 = 46;
	static uint8_t x3 = 17U;

	t0 = ((x1==x2)==(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	static int8_t x6 = INT8_MIN;
	static volatile uint8_t x8 = UINT8_MAX;
	static volatile int32_t t1 = -205;

	t1 = ((x5==x6)==(x7<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	static int64_t x10 = 131683204005378LL;
	static int8_t x11 = INT8_MIN;
	static int64_t x12 = INT64_MIN;
	volatile int32_t t2 = -7;

	t2 = ((x9==x10)==(x11<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	volatile int64_t x14 = -111LL;
	int32_t x15 = INT32_MIN;
	volatile uint32_t x16 = UINT32_MAX;
	int32_t t3 = -386258815;

	t3 = ((x13==x14)==(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = 129134944233LL;
	static int64_t x18 = INT64_MIN;
	static volatile uint8_t x19 = 45U;
	static uint64_t x20 = UINT64_MAX;
	static int32_t t4 = -114;

	t4 = ((x17==x18)==(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 17866322LLU;
	volatile int16_t x23 = -127;
	int8_t x24 = INT8_MIN;

	t5 = ((x21==x22)==(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x28 = -1LL;
	static int32_t t6 = -6;

	t6 = ((x25==x26)==(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = 26728LLU;
	int32_t x30 = -1;
	volatile int32_t t7 = -253307;

	t7 = ((x29==x30)==(x31<=x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 7061997U;
	int16_t x34 = 197;
	int32_t t8 = 851739;

	t8 = ((x33==x34)==(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x39 = UINT16_MAX;
	int32_t t9 = -31;

	t9 = ((x37==x38)==(x39<=x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x42 = -1LL;
	static volatile uint16_t x43 = 1738U;
	static volatile int64_t x44 = -497LL;
	static volatile int32_t t10 = 6721428;

	t10 = ((x41==x42)==(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	int16_t x46 = INT16_MAX;
	int32_t x47 = INT32_MIN;
	volatile int32_t t11 = -3510;

	t11 = ((x45==x46)==(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = INT32_MAX;
	static uint32_t x51 = UINT32_MAX;
	volatile uint16_t x52 = UINT16_MAX;
	int32_t t12 = 2164;

	t12 = ((x49==x50)==(x51<=x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -206281743LL;
	int8_t x54 = INT8_MIN;
	static int32_t x55 = INT32_MIN;
	static int16_t x56 = -1;
	int32_t t13 = -481565173;

	t13 = ((x53==x54)==(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	int64_t x58 = INT64_MIN;
	int64_t x59 = INT64_MIN;
	volatile int32_t x60 = -1;
	int32_t t14 = -79274;

	t14 = ((x57==x58)==(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	int8_t x62 = INT8_MAX;
	int64_t x63 = -1284707515LL;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t15 = 46;

	t15 = ((x61==x62)==(x63<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = INT16_MAX;
	uint32_t x66 = 22667669U;
	volatile int8_t x67 = INT8_MAX;
	volatile int8_t x68 = INT8_MIN;
	volatile int32_t t16 = 34933;

	t16 = ((x65==x66)==(x67<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = 0;
	static uint8_t x70 = UINT8_MAX;
	int8_t x72 = -1;
	int32_t t17 = -11;

	t17 = ((x69==x70)==(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x73 = UINT32_MAX;
	uint8_t x74 = 11U;
	int32_t x75 = -1;
	static uint32_t x76 = 143U;
	volatile int32_t t18 = -49;

	t18 = ((x73==x74)==(x75<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	volatile int64_t x78 = 333LL;
	int16_t x79 = 1;
	int16_t x80 = INT16_MAX;
	volatile int32_t t19 = -744529224;

	t19 = ((x77==x78)==(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = INT16_MIN;
	int16_t x82 = INT16_MAX;
	int8_t x83 = -1;
	volatile int64_t x84 = INT64_MIN;
	int32_t t20 = 4624;

	t20 = ((x81==x82)==(x83<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = 15LL;
	volatile int8_t x87 = INT8_MIN;
	int32_t x88 = INT32_MIN;
	volatile int32_t t21 = 96;

	t21 = ((x85==x86)==(x87<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = INT8_MIN;
	static uint32_t x92 = UINT32_MAX;
	int32_t t22 = 704;

	t22 = ((x89==x90)==(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -2171;
	uint64_t x95 = 382LLU;
	volatile int32_t x96 = INT32_MIN;
	volatile int32_t t23 = -8839013;

	t23 = ((x93==x94)==(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -53;
	int16_t x98 = 0;
	int32_t x99 = INT32_MIN;
	int32_t t24 = -16;

	t24 = ((x97==x98)==(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = INT64_MIN;
	volatile uint16_t x102 = UINT16_MAX;
	int32_t x103 = INT32_MIN;
	uint32_t x104 = 8361U;
	int32_t t25 = -5;

	t25 = ((x101==x102)==(x103<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MAX;
	int8_t x106 = INT8_MAX;
	volatile int64_t x107 = -1LL;
	uint16_t x108 = 7430U;
	volatile int32_t t26 = 0;

	t26 = ((x105==x106)==(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = INT32_MIN;
	int32_t x110 = INT32_MAX;
	static uint64_t x111 = 1LLU;
	volatile uint8_t x112 = 19U;
	volatile int32_t t27 = -5016;

	t27 = ((x109==x110)==(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x113 = INT32_MAX;
	volatile int8_t x114 = 34;
	volatile uint32_t x115 = 12544879U;
	uint16_t x116 = 13867U;
	volatile int32_t t28 = 64281;

	t28 = ((x113==x114)==(x115<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	int16_t x118 = INT16_MIN;
	uint8_t x119 = 7U;
	uint64_t x120 = 925456LLU;
	int32_t t29 = -37454;

	t29 = ((x117==x118)==(x119<=x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	static int64_t x122 = INT64_MAX;
	uint32_t x123 = UINT32_MAX;
	volatile int32_t t30 = -9765771;

	t30 = ((x121==x122)==(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = UINT64_MAX;
	int8_t x126 = -1;
	uint8_t x127 = 1U;
	int32_t x128 = 385300;
	volatile int32_t t31 = -108728973;

	t31 = ((x125==x126)==(x127<=x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 452U;
	uint64_t x130 = 60301333LLU;
	uint8_t x131 = 55U;
	volatile int64_t x132 = INT64_MIN;
	static volatile int32_t t32 = -36619;

	t32 = ((x129==x130)==(x131<=x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x133 = INT16_MIN;
	uint64_t x134 = UINT64_MAX;
	int32_t x135 = 62839901;
	uint32_t x136 = 2U;

	t33 = ((x133==x134)==(x135<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x138 = -1;
	int32_t x139 = 217147855;

	t34 = ((x137==x138)==(x139<=x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MAX;
	static volatile int16_t x142 = 20;
	int16_t x143 = -1;
	static int64_t x144 = INT64_MIN;

	t35 = ((x141==x142)==(x143<=x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	volatile uint64_t x147 = UINT64_MAX;
	int32_t x148 = -7;

	t36 = ((x145==x146)==(x147<=x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x149 = UINT32_MAX;
	static int16_t x150 = -1;
	int64_t x151 = INT64_MIN;

	t37 = ((x149==x150)==(x151<=x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 1697U;
	static int8_t x154 = 0;
	uint8_t x156 = UINT8_MAX;
	volatile int32_t t38 = -106480263;

	t38 = ((x153==x154)==(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint8_t x157 = 1U;
	int16_t x158 = -1;
	uint64_t x160 = 33229LLU;
	int32_t t39 = -1970489;

	t39 = ((x157==x158)==(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MAX;
	int32_t t40 = 21895351;

	t40 = ((x161==x162)==(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MAX;
	static int32_t x167 = INT32_MIN;
	uint16_t x168 = UINT16_MAX;

	t41 = ((x165==x166)==(x167<=x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x170 = 2100053;
	static uint32_t x171 = 240U;
	int64_t x172 = INT64_MAX;
	static volatile int32_t t42 = -15864;

	t42 = ((x169==x170)==(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = INT16_MAX;
	int64_t x175 = INT64_MIN;
	static uint32_t x176 = 5070248U;

	t43 = ((x173==x174)==(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 2215U;
	int16_t x178 = INT16_MIN;
	int8_t x179 = INT8_MIN;
	static uint16_t x180 = 81U;
	volatile int32_t t44 = -46045;

	t44 = ((x177==x178)==(x179<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = INT64_MAX;
	volatile int32_t t45 = 1944596;

	t45 = ((x181==x182)==(x183<=x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	int64_t x186 = -1930821LL;
	int16_t x188 = 8716;
	int32_t t46 = -3;

	t46 = ((x185==x186)==(x187<=x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MAX;
	uint64_t x190 = 10570308350744350LLU;
	int16_t x191 = -1;
	int8_t x192 = INT8_MAX;
	int32_t t47 = -90;

	t47 = ((x189==x190)==(x191<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x193 = UINT32_MAX;
	uint16_t x195 = 8851U;
	volatile int32_t t48 = -271088911;

	t48 = ((x193==x194)==(x195<=x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	uint32_t x198 = 44937U;
	int16_t x199 = -1;
	uint16_t x200 = 0U;
	volatile int32_t t49 = 16731070;

	t49 = ((x197==x198)==(x199<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = INT64_MIN;
	int16_t x202 = INT16_MAX;
	int16_t x204 = INT16_MIN;
	volatile int32_t t50 = 7560583;

	t50 = ((x201==x202)==(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -31516031532040LL;
	int64_t x206 = 50642410662073996LL;
	static int32_t x207 = -1;
	volatile int8_t x208 = -1;
	volatile int32_t t51 = 634019;

	t51 = ((x205==x206)==(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x209 = UINT8_MAX;
	int32_t x210 = INT32_MIN;

	t52 = ((x209==x210)==(x211<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	static int8_t x214 = 2;
	volatile int64_t x215 = INT64_MIN;
	volatile int16_t x216 = INT16_MIN;
	int32_t t53 = 24;

	t53 = ((x213==x214)==(x215<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x217 = INT64_MIN;
	int64_t x218 = INT64_MAX;
	int16_t x219 = -169;
	static int64_t x220 = INT64_MIN;
	volatile int32_t t54 = -427444607;

	t54 = ((x217==x218)==(x219<=x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	static int16_t x222 = INT16_MIN;
	volatile uint8_t x224 = 2U;
	volatile int32_t t55 = 120688263;

	t55 = ((x221==x222)==(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x227 = INT32_MAX;
	int16_t x228 = -1;
	volatile int32_t t56 = 118608305;

	t56 = ((x225==x226)==(x227<=x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	uint32_t x231 = 222014013U;
	static volatile int32_t t57 = 197;

	t57 = ((x229==x230)==(x231<=x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x233 = UINT16_MAX;
	static volatile int32_t x234 = 259093865;
	static int8_t x235 = -1;
	static int16_t x236 = -1;
	volatile int32_t t58 = 24840793;

	t58 = ((x233==x234)==(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x238 = INT64_MIN;
	int32_t x239 = 3255603;
	int64_t x240 = INT64_MAX;
	int32_t t59 = -159644;

	t59 = ((x237==x238)==(x239<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -24;
	static int8_t x242 = INT8_MAX;
	static int32_t x243 = INT32_MAX;
	static int32_t x244 = INT32_MIN;

	t60 = ((x241==x242)==(x243<=x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t t61 = -18006025;

	t61 = ((x245==x246)==(x247<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x249 = 800U;
	int16_t x252 = -1;
	volatile int32_t t62 = -840899976;

	t62 = ((x249==x250)==(x251<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -1;
	int8_t x254 = -1;
	int32_t x255 = 92134796;
	volatile uint64_t x256 = 35398227LLU;
	volatile int32_t t63 = 134;

	t63 = ((x253==x254)==(x255<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = 206332137LL;
	int16_t x258 = -555;
	volatile int16_t x259 = -113;
	uint16_t x260 = 1242U;
	int32_t t64 = -330;

	t64 = ((x257==x258)==(x259<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -1484;
	int32_t x262 = 1319;

	t65 = ((x261==x262)==(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x265 = 25U;
	uint16_t x266 = 15182U;
	static uint16_t x267 = 507U;

	t66 = ((x265==x266)==(x267<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = INT64_MIN;
	int8_t x270 = 8;
	volatile int16_t x271 = -12064;
	uint16_t x272 = 8616U;
	volatile int32_t t67 = -424439;

	t67 = ((x269==x270)==(x271<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = 57947;
	int16_t x274 = -5967;
	static volatile int32_t t68 = -7262146;

	t68 = ((x273==x274)==(x275<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x278 = 208;
	static volatile int64_t x279 = -1LL;
	volatile uint8_t x280 = UINT8_MAX;
	volatile int32_t t69 = 105554;

	t69 = ((x277==x278)==(x279<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MAX;
	uint16_t x283 = 279U;
	volatile int32_t t70 = -789247935;

	t70 = ((x281==x282)==(x283<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	volatile int16_t x286 = -1;
	uint64_t x287 = UINT64_MAX;
	int16_t x288 = 6525;
	static volatile int32_t t71 = 3;

	t71 = ((x285==x286)==(x287<=x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	uint64_t x291 = 19555871770LLU;
	static int32_t x292 = INT32_MAX;
	volatile int32_t t72 = 158238658;

	t72 = ((x289==x290)==(x291<=x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1LL;
	int32_t x294 = -1;
	volatile int8_t x296 = INT8_MIN;
	static int32_t t73 = 13;

	t73 = ((x293==x294)==(x295<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = -1;
	uint32_t x298 = 13U;
	volatile int16_t x299 = INT16_MAX;
	int8_t x300 = INT8_MAX;
	int32_t t74 = 43;

	t74 = ((x297==x298)==(x299<=x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = 968886;
	uint8_t x302 = 18U;
	uint16_t x303 = 8U;
	int16_t x304 = INT16_MIN;
	volatile int32_t t75 = 1;

	t75 = ((x301==x302)==(x303<=x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 1U;
	uint16_t x307 = 30920U;
	int32_t t76 = 21;

	t76 = ((x305==x306)==(x307<=x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = -1;
	uint16_t x310 = 1223U;
	int16_t x311 = INT16_MIN;
	int32_t t77 = -3515;

	t77 = ((x309==x310)==(x311<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 1U;
	volatile int8_t x314 = 2;
	int16_t x316 = 1220;

	t78 = ((x313==x314)==(x315<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x317 = -1;
	int16_t x318 = INT16_MAX;
	static int8_t x319 = INT8_MIN;
	volatile uint64_t x320 = 11196778LLU;

	t79 = ((x317==x318)==(x319<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = -1;
	static int32_t x322 = INT32_MAX;
	int64_t x323 = INT64_MIN;
	static int16_t x324 = 649;
	volatile int32_t t80 = 50;

	t80 = ((x321==x322)==(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x326 = 0U;
	static volatile int32_t x327 = INT32_MIN;

	t81 = ((x325==x326)==(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x330 = INT8_MIN;
	volatile int16_t x331 = 1;
	int16_t x332 = INT16_MAX;
	volatile int32_t t82 = -2926;

	t82 = ((x329==x330)==(x331<=x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = UINT16_MAX;
	static volatile int16_t x336 = 16;
	static int32_t t83 = 10364109;

	t83 = ((x333==x334)==(x335<=x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -3;
	int32_t x338 = INT32_MIN;
	volatile uint8_t x339 = 0U;
	uint8_t x340 = 117U;
	volatile int32_t t84 = 1378;

	t84 = ((x337==x338)==(x339<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x342 = -1;
	int32_t x343 = -18;
	static volatile int32_t t85 = 4;

	t85 = ((x341==x342)==(x343<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = UINT16_MAX;
	int8_t x346 = 3;
	int16_t x348 = 0;
	volatile int32_t t86 = -837477773;

	t86 = ((x345==x346)==(x347<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MAX;
	int64_t x350 = 3738925LL;
	volatile int64_t x351 = -1LL;
	int32_t x352 = -115;
	volatile int32_t t87 = 891135;

	t87 = ((x349==x350)==(x351<=x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = 23592965;
	uint8_t x355 = UINT8_MAX;
	uint32_t x356 = 5166U;
	int32_t t88 = 0;

	t88 = ((x353==x354)==(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = INT32_MIN;
	volatile uint32_t x359 = UINT32_MAX;
	int16_t x360 = INT16_MIN;
	int32_t t89 = 1159;

	t89 = ((x357==x358)==(x359<=x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x362 = 18;
	int16_t x363 = INT16_MIN;
	volatile int32_t t90 = -13570;

	t90 = ((x361==x362)==(x363<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	int32_t x367 = 0;
	int16_t x368 = INT16_MAX;
	volatile int32_t t91 = -4;

	t91 = ((x365==x366)==(x367<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -1;
	volatile uint64_t x370 = 508653479580LLU;
	volatile int64_t x371 = INT64_MIN;
	volatile int32_t t92 = 5;

	t92 = ((x369==x370)==(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = INT16_MAX;
	int32_t x374 = -3184934;
	static int64_t x376 = INT64_MIN;
	static int32_t t93 = 40398939;

	t93 = ((x373==x374)==(x375<=x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	int8_t x378 = 0;
	static uint16_t x379 = 0U;
	static int32_t t94 = -211848;

	t94 = ((x377==x378)==(x379<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 31063U;
	static uint16_t x382 = UINT16_MAX;
	static volatile uint32_t x383 = UINT32_MAX;
	int32_t t95 = -14;

	t95 = ((x381==x382)==(x383<=x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -1LL;
	int32_t x386 = -61;
	uint8_t x387 = 1U;
	int8_t x388 = INT8_MIN;
	volatile int32_t t96 = -5239467;

	t96 = ((x385==x386)==(x387<=x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x392 = INT16_MAX;
	volatile int32_t t97 = 2832;

	t97 = ((x389==x390)==(x391<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MAX;
	int32_t x395 = INT32_MIN;
	volatile uint32_t x396 = UINT32_MAX;
	volatile int32_t t98 = 19870805;

	t98 = ((x393==x394)==(x395<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 20U;
	int64_t x398 = -20LL;
	uint32_t x399 = 31253487U;
	uint64_t x400 = 4505726402258529587LLU;

	t99 = ((x397==x398)==(x399<=x400));

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


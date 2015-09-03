#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = INT8_MIN;
int32_t t1 = 148337108;
uint8_t x9 = UINT8_MAX;
volatile uint32_t x14 = 12686U;
int16_t x26 = 22;
int64_t x28 = -1LL;
int64_t x31 = INT64_MIN;
int8_t x34 = INT8_MAX;
volatile int32_t t7 = -367842;
volatile int16_t x41 = INT16_MAX;
int32_t t10 = -171163499;
volatile int32_t t11 = 9789006;
uint16_t x57 = UINT16_MAX;
int8_t x80 = INT8_MIN;
static int32_t t17 = 81;
int64_t x83 = -1LL;
volatile int32_t t18 = 3527779;
static int8_t x85 = 38;
static int16_t x87 = INT16_MIN;
static volatile int32_t x90 = -14281;
int16_t x99 = INT16_MIN;
uint64_t x123 = 4019LLU;
uint64_t x129 = 1301550891973873833LLU;
static int32_t t29 = -14389967;
volatile int16_t x135 = INT16_MAX;
volatile int8_t x139 = INT8_MIN;
volatile uint16_t x140 = UINT16_MAX;
volatile uint8_t x148 = 16U;
uint16_t x152 = 773U;
static uint16_t x154 = UINT16_MAX;
int32_t t35 = 0;
static volatile int32_t t36 = 39042;
uint32_t x161 = 134897U;
uint32_t x163 = UINT32_MAX;
uint32_t x166 = 63567386U;
int64_t x168 = -1LL;
int16_t x170 = -11;
uint64_t x171 = 3903190758LLU;
static int8_t x172 = INT8_MIN;
static int32_t x173 = -2;
int64_t x178 = -1LL;
int64_t x186 = 24765LL;
static int64_t x187 = -1LL;
volatile int32_t t43 = -8879775;
int8_t x195 = INT8_MIN;
uint16_t x205 = 13U;
int8_t x208 = 60;
static int8_t x213 = 15;
static int16_t x214 = INT16_MIN;
volatile int32_t t51 = -51619;
uint8_t x226 = UINT8_MAX;
static int32_t x231 = -1;
volatile int64_t x236 = INT64_MIN;
int32_t t55 = -482;
volatile int8_t x246 = INT8_MIN;
volatile int32_t t57 = 134706;
static int16_t x252 = -484;
int32_t t58 = -39;
static int8_t x256 = 0;
int8_t x273 = INT8_MIN;
static volatile int8_t x275 = -1;
uint32_t x282 = 5424U;
uint32_t x283 = 44710U;
int32_t x285 = -54871;
int16_t x286 = -8954;
int64_t x287 = INT64_MAX;
static int16_t x288 = INT16_MIN;
volatile uint16_t x290 = UINT16_MAX;
volatile uint32_t x291 = UINT32_MAX;
volatile int8_t x293 = INT8_MAX;
int64_t x294 = INT64_MIN;
static uint32_t x295 = UINT32_MAX;
uint16_t x296 = UINT16_MAX;
static int32_t t70 = 9;
static int16_t x313 = -1;
static int8_t x314 = INT8_MIN;
int64_t x318 = -24336146396LL;
volatile int32_t t75 = 16531192;
int16_t x331 = INT16_MIN;
uint32_t x333 = 200834U;
uint32_t x334 = UINT32_MAX;
static uint16_t x339 = 3148U;
uint8_t x346 = 20U;
volatile uint16_t x348 = 483U;
int8_t x350 = INT8_MIN;
int64_t x353 = -1LL;
int64_t x356 = INT64_MIN;
int32_t t83 = -3757;
volatile int32_t t84 = 15117;
int64_t x376 = INT64_MAX;
int8_t x378 = INT8_MAX;
int16_t x390 = INT16_MIN;
int8_t x396 = 0;
static uint32_t x405 = 7034U;
static int64_t x406 = -1LL;
uint16_t x418 = 806U;
int16_t x437 = 1;


void f0(void) {
	int8_t x1 = 3;
	volatile uint64_t x2 = UINT64_MAX;
	static int8_t x3 = 0;
	static int16_t x4 = -8;
	volatile int32_t t0 = -18149;

	t0 = ((x1+x2)==(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile int32_t x7 = INT32_MIN;
	volatile int8_t x8 = INT8_MIN;

	t1 = ((x5+x6)==(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x10 = INT64_MIN;
	uint16_t x11 = 0U;
	volatile int64_t x12 = -1LL;
	static int32_t t2 = 3692532;

	t2 = ((x9+x10)==(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	uint8_t x15 = 54U;
	int8_t x16 = INT8_MIN;
	static int32_t t3 = 499251;

	t3 = ((x13+x14)==(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = 25599933821391LLU;
	static uint64_t x18 = 3868802678608LLU;
	int16_t x19 = INT16_MIN;
	int64_t x20 = INT64_MIN;
	volatile int32_t t4 = 27;

	t4 = ((x17+x18)==(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = UINT64_MAX;
	int64_t x27 = INT64_MAX;
	int32_t t5 = 10;

	t5 = ((x25+x26)==(x27==x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = -1;
	static uint64_t x30 = 244274771328173799LLU;
	uint8_t x32 = UINT8_MAX;
	volatile int32_t t6 = -2098884;

	t6 = ((x29+x30)==(x31==x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x33 = -62;
	int64_t x35 = 50LL;
	int16_t x36 = -105;

	t7 = ((x33+x34)==(x35==x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x37 = UINT32_MAX;
	static int32_t x38 = -1;
	int8_t x39 = -1;
	static int16_t x40 = INT16_MIN;
	volatile int32_t t8 = 7204;

	t8 = ((x37+x38)==(x39==x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x42 = 15700U;
	volatile int16_t x43 = INT16_MAX;
	int64_t x44 = 30LL;
	int32_t t9 = -292;

	t9 = ((x41+x42)==(x43==x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x45 = -1;
	uint32_t x46 = 8738569U;
	uint64_t x47 = 2733862LLU;
	int16_t x48 = 5;

	t10 = ((x45+x46)==(x47==x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x49 = 10638U;
	static int8_t x50 = INT8_MIN;
	int64_t x51 = INT64_MAX;
	uint64_t x52 = UINT64_MAX;

	t11 = ((x49+x50)==(x51==x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x58 = 0;
	int8_t x59 = INT8_MAX;
	int32_t x60 = -1;
	static volatile int32_t t12 = -779722;

	t12 = ((x57+x58)==(x59==x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = -1LL;
	volatile int64_t x62 = -1LL;
	int32_t x63 = -1;
	int64_t x64 = -235930459071447755LL;
	int32_t t13 = 250;

	t13 = ((x61+x62)==(x63==x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MAX;
	int16_t x66 = -1;
	static uint64_t x67 = 601462915LLU;
	volatile int8_t x68 = -1;
	int32_t t14 = -46740071;

	t14 = ((x65+x66)==(x67==x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = -1;
	int16_t x70 = INT16_MIN;
	volatile int64_t x71 = INT64_MIN;
	volatile int8_t x72 = -9;
	int32_t t15 = -3135;

	t15 = ((x69+x70)==(x71==x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = -79;
	int16_t x74 = INT16_MAX;
	uint8_t x75 = 28U;
	volatile uint16_t x76 = 273U;
	volatile int32_t t16 = 61371;

	t16 = ((x73+x74)==(x75==x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x77 = UINT8_MAX;
	int16_t x78 = INT16_MIN;
	volatile uint64_t x79 = UINT64_MAX;

	t17 = ((x77+x78)==(x79==x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x81 = 32U;
	uint32_t x82 = UINT32_MAX;
	static int16_t x84 = -1;

	t18 = ((x81+x82)==(x83==x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x86 = UINT64_MAX;
	uint64_t x88 = UINT64_MAX;
	int32_t t19 = 30;

	t19 = ((x85+x86)==(x87==x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x89 = 108U;
	static volatile int64_t x91 = -1LL;
	static int32_t x92 = 226009356;
	static volatile int32_t t20 = -1952;

	t20 = ((x89+x90)==(x91==x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = 12210;
	static int64_t x98 = -1LL;
	int64_t x100 = 283767LL;
	volatile int32_t t21 = 2041857;

	t21 = ((x97+x98)==(x99==x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = -1;
	uint64_t x102 = 59560861634967LLU;
	int8_t x103 = -1;
	int64_t x104 = INT64_MAX;
	static int32_t t22 = -375;

	t22 = ((x101+x102)==(x103==x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = INT64_MIN;
	int64_t x106 = INT64_MAX;
	int8_t x107 = -1;
	static int64_t x108 = INT64_MIN;
	volatile int32_t t23 = -772504;

	t23 = ((x105+x106)==(x107==x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x109 = 3U;
	int64_t x110 = INT64_MIN;
	static int16_t x111 = INT16_MIN;
	int8_t x112 = -1;
	int32_t t24 = -35559659;

	t24 = ((x109+x110)==(x111==x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = UINT16_MAX;
	int32_t x114 = INT32_MIN;
	static int16_t x115 = -1;
	int32_t x116 = -1370674;
	volatile int32_t t25 = 87;

	t25 = ((x113+x114)==(x115==x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = INT32_MAX;
	uint32_t x118 = 29209047U;
	static volatile uint8_t x119 = 4U;
	int16_t x120 = -1;
	volatile int32_t t26 = -3878176;

	t26 = ((x117+x118)==(x119==x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x121 = 128622765LLU;
	static int64_t x122 = -1LL;
	static volatile int8_t x124 = INT8_MAX;
	volatile int32_t t27 = 1592;

	t27 = ((x121+x122)==(x123==x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x125 = 2;
	static uint16_t x126 = 9784U;
	int64_t x127 = INT64_MIN;
	int16_t x128 = 1;
	volatile int32_t t28 = -1797;

	t28 = ((x125+x126)==(x127==x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x130 = 10;
	volatile uint64_t x131 = UINT64_MAX;
	volatile uint8_t x132 = 0U;

	t29 = ((x129+x130)==(x131==x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x133 = 3266;
	int16_t x134 = -1;
	int8_t x136 = INT8_MIN;
	int32_t t30 = -296402;

	t30 = ((x133+x134)==(x135==x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = 1;
	uint64_t x138 = 56014962876392899LLU;
	static int32_t t31 = 147420888;

	t31 = ((x137+x138)==(x139==x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x141 = -1;
	static volatile int8_t x142 = -1;
	int16_t x143 = 1719;
	int64_t x144 = -1LL;
	static int32_t t32 = -1;

	t32 = ((x141+x142)==(x143==x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x145 = UINT16_MAX;
	uint8_t x146 = UINT8_MAX;
	static int32_t x147 = 3;
	static int32_t t33 = 716701;

	t33 = ((x145+x146)==(x147==x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x149 = INT64_MAX;
	int8_t x150 = INT8_MIN;
	static volatile uint8_t x151 = UINT8_MAX;
	volatile int32_t t34 = -5;

	t34 = ((x149+x150)==(x151==x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x153 = 598U;
	uint8_t x155 = 1U;
	volatile int64_t x156 = -17569369600714331LL;

	t35 = ((x153+x154)==(x155==x156));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x157 = 885914LLU;
	int16_t x158 = INT16_MAX;
	int64_t x159 = INT64_MAX;
	uint16_t x160 = 7U;

	t36 = ((x157+x158)==(x159==x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x162 = -1;
	int32_t x164 = -1;
	volatile int32_t t37 = 842721;

	t37 = ((x161+x162)==(x163==x164));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = INT64_MIN;
	volatile int32_t x167 = -1;
	static volatile int32_t t38 = 15;

	t38 = ((x165+x166)==(x167==x168));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x169 = 13U;
	volatile int32_t t39 = 3122;

	t39 = ((x169+x170)==(x171==x172));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x174 = UINT64_MAX;
	uint32_t x175 = 87978U;
	volatile int64_t x176 = INT64_MAX;
	static int32_t t40 = -3;

	t40 = ((x173+x174)==(x175==x176));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = 1;
	static int16_t x179 = INT16_MIN;
	volatile int16_t x180 = INT16_MIN;
	static int32_t t41 = 387;

	t41 = ((x177+x178)==(x179==x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x181 = -1;
	static uint8_t x182 = UINT8_MAX;
	uint8_t x183 = 0U;
	int8_t x184 = -1;
	int32_t t42 = -36670;

	t42 = ((x181+x182)==(x183==x184));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x185 = -1;
	int64_t x188 = 2059LL;

	t43 = ((x185+x186)==(x187==x188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x189 = 10U;
	static int16_t x190 = INT16_MIN;
	int16_t x191 = INT16_MAX;
	volatile int64_t x192 = -11853263LL;
	int32_t t44 = -1232;

	t44 = ((x189+x190)==(x191==x192));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x193 = UINT8_MAX;
	int16_t x194 = INT16_MIN;
	static int8_t x196 = INT8_MIN;
	int32_t t45 = 2733436;

	t45 = ((x193+x194)==(x195==x196));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = -1;
	uint8_t x198 = 12U;
	uint64_t x199 = UINT64_MAX;
	int8_t x200 = 1;
	volatile int32_t t46 = 0;

	t46 = ((x197+x198)==(x199==x200));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = INT16_MIN;
	uint8_t x202 = 4U;
	int64_t x203 = INT64_MIN;
	int8_t x204 = INT8_MIN;
	int32_t t47 = -3633475;

	t47 = ((x201+x202)==(x203==x204));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x206 = -2;
	int16_t x207 = 0;
	int32_t t48 = -1;

	t48 = ((x205+x206)==(x207==x208));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x215 = -1;
	volatile int8_t x216 = INT8_MAX;
	int32_t t49 = 50881466;

	t49 = ((x213+x214)==(x215==x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x217 = -1LL;
	uint32_t x218 = 23U;
	int32_t x219 = -1;
	static uint8_t x220 = 0U;
	static int32_t t50 = -82523382;

	t50 = ((x217+x218)==(x219==x220));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x221 = 2U;
	int8_t x222 = -1;
	static int8_t x223 = -36;
	volatile uint32_t x224 = 261678437U;

	t51 = ((x221+x222)==(x223==x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x225 = INT64_MIN;
	uint64_t x227 = 57419766092428LLU;
	static int64_t x228 = -1LL;
	volatile int32_t t52 = 55;

	t52 = ((x225+x226)==(x227==x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x229 = INT8_MIN;
	volatile int16_t x230 = 1;
	static uint16_t x232 = 1U;
	static int32_t t53 = -45;

	t53 = ((x229+x230)==(x231==x232));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x233 = 545U;
	uint64_t x234 = UINT64_MAX;
	static int32_t x235 = -1;
	int32_t t54 = -83394;

	t54 = ((x233+x234)==(x235==x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x237 = INT16_MAX;
	int32_t x238 = INT32_MIN;
	int64_t x239 = -50991127854765LL;
	uint32_t x240 = 4726U;

	t55 = ((x237+x238)==(x239==x240));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x241 = 286;
	int16_t x242 = INT16_MAX;
	uint16_t x243 = UINT16_MAX;
	static uint32_t x244 = UINT32_MAX;
	volatile int32_t t56 = 27951714;

	t56 = ((x241+x242)==(x243==x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x245 = 972689911U;
	uint32_t x247 = UINT32_MAX;
	static uint32_t x248 = 361818U;

	t57 = ((x245+x246)==(x247==x248));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x249 = 927950533LLU;
	int16_t x250 = 16042;
	volatile uint16_t x251 = 5U;

	t58 = ((x249+x250)==(x251==x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x253 = -10;
	int64_t x254 = INT64_MAX;
	int16_t x255 = INT16_MIN;
	int32_t t59 = -108561;

	t59 = ((x253+x254)==(x255==x256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x257 = 9239210712LLU;
	uint16_t x258 = UINT16_MAX;
	uint64_t x259 = UINT64_MAX;
	int32_t x260 = 177648;
	static volatile int32_t t60 = 1633;

	t60 = ((x257+x258)==(x259==x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x261 = UINT16_MAX;
	uint8_t x262 = 3U;
	uint64_t x263 = 1LLU;
	int16_t x264 = INT16_MAX;
	static volatile int32_t t61 = -32701120;

	t61 = ((x261+x262)==(x263==x264));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x265 = 1380;
	static uint64_t x266 = 21211248374741781LLU;
	uint64_t x267 = 59LLU;
	uint32_t x268 = 1133414698U;
	int32_t t62 = -2;

	t62 = ((x265+x266)==(x267==x268));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x274 = 216;
	int8_t x276 = INT8_MAX;
	volatile int32_t t63 = -499;

	t63 = ((x273+x274)==(x275==x276));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x277 = -999408;
	uint32_t x278 = 1208624U;
	int16_t x279 = 0;
	uint32_t x280 = 4967U;
	volatile int32_t t64 = -952;

	t64 = ((x277+x278)==(x279==x280));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = INT16_MIN;
	int8_t x284 = INT8_MIN;
	volatile int32_t t65 = 1;

	t65 = ((x281+x282)==(x283==x284));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t t66 = -32;

	t66 = ((x285+x286)==(x287==x288));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x289 = 3117640;
	static uint64_t x292 = 423771LLU;
	static int32_t t67 = -189;

	t67 = ((x289+x290)==(x291==x292));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t t68 = 482;

	t68 = ((x293+x294)==(x295==x296));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x297 = -50;
	volatile int64_t x298 = INT64_MAX;
	uint64_t x299 = UINT64_MAX;
	int16_t x300 = -1;
	volatile int32_t t69 = -22179154;

	t69 = ((x297+x298)==(x299==x300));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x301 = INT32_MIN;
	uint64_t x302 = 63376320644LLU;
	int64_t x303 = -1LL;
	int16_t x304 = INT16_MIN;

	t70 = ((x301+x302)==(x303==x304));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x309 = -1;
	volatile uint32_t x310 = 1037231371U;
	static int32_t x311 = INT32_MIN;
	int16_t x312 = -1;
	int32_t t71 = 39;

	t71 = ((x309+x310)==(x311==x312));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x315 = 772LLU;
	uint16_t x316 = 193U;
	volatile int32_t t72 = 94;

	t72 = ((x313+x314)==(x315==x316));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x317 = 41;
	int32_t x319 = INT32_MAX;
	volatile int16_t x320 = 1910;
	volatile int32_t t73 = -8;

	t73 = ((x317+x318)==(x319==x320));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x321 = INT32_MIN;
	uint8_t x322 = 4U;
	uint8_t x323 = 1U;
	static int32_t x324 = INT32_MIN;
	static volatile int32_t t74 = -7779;

	t74 = ((x321+x322)==(x323==x324));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x325 = 37;
	int8_t x326 = INT8_MAX;
	uint16_t x327 = 95U;
	uint64_t x328 = UINT64_MAX;

	t75 = ((x325+x326)==(x327==x328));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x329 = -1;
	static int8_t x330 = INT8_MAX;
	int16_t x332 = INT16_MIN;
	int32_t t76 = 475;

	t76 = ((x329+x330)==(x331==x332));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x335 = INT64_MIN;
	int8_t x336 = INT8_MIN;
	volatile int32_t t77 = -79;

	t77 = ((x333+x334)==(x335==x336));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x337 = 514U;
	int32_t x338 = INT32_MAX;
	int8_t x340 = INT8_MAX;
	int32_t t78 = 1803581;

	t78 = ((x337+x338)==(x339==x340));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x341 = 26;
	volatile int16_t x342 = INT16_MAX;
	uint8_t x343 = UINT8_MAX;
	volatile int32_t x344 = INT32_MAX;
	int32_t t79 = -136885933;

	t79 = ((x341+x342)==(x343==x344));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x345 = 193152LL;
	volatile uint32_t x347 = 29753U;
	int32_t t80 = -6881;

	t80 = ((x345+x346)==(x347==x348));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x349 = -7861;
	int32_t x351 = INT32_MIN;
	int16_t x352 = INT16_MIN;
	int32_t t81 = 28;

	t81 = ((x349+x350)==(x351==x352));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x354 = INT32_MIN;
	volatile uint64_t x355 = UINT64_MAX;
	volatile int32_t t82 = 379;

	t82 = ((x353+x354)==(x355==x356));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x361 = 0;
	uint64_t x362 = 879034LLU;
	int64_t x363 = -396398025307241612LL;
	int64_t x364 = 3209026LL;

	t83 = ((x361+x362)==(x363==x364));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x365 = UINT64_MAX;
	uint8_t x366 = 5U;
	int16_t x367 = 9;
	uint32_t x368 = 414U;

	t84 = ((x365+x366)==(x367==x368));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x373 = INT64_MAX;
	int16_t x374 = -1;
	uint32_t x375 = 9046U;
	volatile int32_t t85 = -359490988;

	t85 = ((x373+x374)==(x375==x376));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x377 = INT8_MIN;
	static int16_t x379 = INT16_MIN;
	static volatile uint32_t x380 = 677260U;
	int32_t t86 = 63691;

	t86 = ((x377+x378)==(x379==x380));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x381 = -215667628574172009LL;
	int8_t x382 = INT8_MIN;
	int16_t x383 = 16;
	volatile int64_t x384 = -1LL;
	int32_t t87 = -1;

	t87 = ((x381+x382)==(x383==x384));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x385 = -1LL;
	int64_t x386 = 8837LL;
	int64_t x387 = INT64_MIN;
	int16_t x388 = INT16_MAX;
	int32_t t88 = 13;

	t88 = ((x385+x386)==(x387==x388));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x389 = -1LL;
	static uint8_t x391 = 36U;
	int8_t x392 = -35;
	volatile int32_t t89 = 6;

	t89 = ((x389+x390)==(x391==x392));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x393 = -1LL;
	int16_t x394 = 3485;
	int16_t x395 = INT16_MAX;
	static int32_t t90 = 9389337;

	t90 = ((x393+x394)==(x395==x396));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x401 = INT32_MAX;
	int64_t x402 = INT64_MIN;
	int8_t x403 = INT8_MAX;
	static volatile int8_t x404 = INT8_MIN;
	int32_t t91 = 252;

	t91 = ((x401+x402)==(x403==x404));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x407 = 21;
	uint64_t x408 = 7LLU;
	int32_t t92 = -14792;

	t92 = ((x405+x406)==(x407==x408));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x409 = 1U;
	uint32_t x410 = 15U;
	uint16_t x411 = 3U;
	int64_t x412 = INT64_MIN;
	static volatile int32_t t93 = -17375609;

	t93 = ((x409+x410)==(x411==x412));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x413 = INT16_MIN;
	static uint32_t x414 = 1674U;
	static int32_t x415 = INT32_MIN;
	uint8_t x416 = 0U;
	volatile int32_t t94 = 157494546;

	t94 = ((x413+x414)==(x415==x416));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x417 = -1;
	static int8_t x419 = INT8_MAX;
	int8_t x420 = 0;
	volatile int32_t t95 = 30021;

	t95 = ((x417+x418)==(x419==x420));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x425 = 0U;
	int16_t x426 = 5964;
	uint32_t x427 = 13876U;
	int64_t x428 = -99302633184076912LL;
	static int32_t t96 = -22598287;

	t96 = ((x425+x426)==(x427==x428));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x429 = UINT64_MAX;
	static volatile int8_t x430 = -1;
	volatile uint32_t x431 = UINT32_MAX;
	uint8_t x432 = 77U;
	volatile int32_t t97 = -7063733;

	t97 = ((x429+x430)==(x431==x432));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x433 = INT8_MAX;
	static uint64_t x434 = 2364876224330677860LLU;
	int16_t x435 = -1;
	volatile int8_t x436 = INT8_MAX;
	int32_t t98 = 1;

	t98 = ((x433+x434)==(x435==x436));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x438 = 6475646;
	int8_t x439 = INT8_MAX;
	int64_t x440 = INT64_MIN;
	static volatile int32_t t99 = -1956;

	t99 = ((x437+x438)==(x439==x440));

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


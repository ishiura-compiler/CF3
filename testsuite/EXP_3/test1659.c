#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = UINT16_MAX;
volatile int32_t t0 = 0;
volatile uint8_t x11 = 21U;
int32_t t6 = 850;
int32_t x36 = INT32_MIN;
static uint32_t x39 = 58668019U;
static int64_t x43 = -1LL;
int32_t x45 = INT32_MIN;
uint8_t x47 = UINT8_MAX;
volatile int32_t x49 = -1;
int32_t t12 = -1;
volatile int16_t x56 = INT16_MAX;
uint16_t x58 = UINT16_MAX;
int32_t x69 = INT32_MIN;
uint16_t x73 = 6347U;
volatile uint64_t x74 = UINT64_MAX;
uint64_t x78 = 22088645161459348LLU;
static int16_t x79 = 2861;
int16_t x80 = INT16_MIN;
int16_t x82 = INT16_MAX;
int16_t x89 = INT16_MAX;
int64_t x96 = INT64_MIN;
int32_t t23 = 41;
volatile int64_t x99 = -822590LL;
volatile uint64_t x100 = 186LLU;
int32_t x102 = -1;
int64_t x114 = -1LL;
volatile uint16_t x115 = 738U;
uint16_t x116 = UINT16_MAX;
uint16_t x118 = 253U;
volatile int32_t t29 = -57223;
static int16_t x123 = -1;
int32_t t30 = 601892258;
static int8_t x125 = -1;
int16_t x131 = -1;
static int16_t x138 = INT16_MIN;
int16_t x144 = INT16_MIN;
int32_t t35 = 890;
volatile uint16_t x146 = 3171U;
int16_t x149 = INT16_MAX;
int64_t x152 = 5353695792656LL;
volatile int32_t t38 = -11644;
static volatile int16_t x166 = INT16_MAX;
volatile int16_t x167 = INT16_MIN;
int32_t x169 = 4948;
uint8_t x170 = 0U;
uint64_t x173 = 9067644768842270943LLU;
int8_t x175 = -10;
volatile int64_t x176 = INT64_MIN;
int16_t x178 = INT16_MIN;
int32_t x179 = 94;
uint16_t x183 = 1U;
uint32_t x188 = 787U;
int8_t x190 = 0;
uint32_t x194 = 1456U;
int16_t x196 = -2061;
int32_t t48 = 2982;
uint32_t x199 = 5121U;
int32_t x200 = -110771;
volatile int32_t t53 = 1;
volatile int64_t x220 = INT64_MAX;
int32_t x224 = INT32_MAX;
uint16_t x228 = 54U;
static uint64_t x229 = 31730283LLU;
int64_t x230 = 6619694386751LL;
static int64_t x231 = INT64_MIN;
volatile int32_t t57 = -401;
int8_t x239 = INT8_MAX;
int32_t t60 = -95420323;
int8_t x246 = INT8_MIN;
int32_t t61 = 1;
int32_t x249 = INT32_MAX;
int8_t x252 = -1;
int64_t x253 = INT64_MAX;
int16_t x254 = -122;
int8_t x261 = -13;
volatile int32_t t65 = 469412;
uint64_t x270 = UINT64_MAX;
static uint16_t x274 = 0U;
int32_t x279 = INT32_MIN;
int32_t t71 = 120;
uint8_t x290 = 0U;
int8_t x291 = INT8_MAX;
static uint8_t x292 = 3U;
int32_t x296 = INT32_MIN;
volatile int32_t t74 = 197877;
int32_t t75 = -22;
int32_t t76 = 52549396;
int32_t t77 = -901782;
int32_t t78 = 1480077;
int32_t t79 = 1;
int8_t x325 = INT8_MAX;
int8_t x336 = INT8_MAX;
int8_t x337 = INT8_MIN;
int32_t x338 = INT32_MAX;
volatile int8_t x341 = INT8_MIN;
int32_t x342 = INT32_MIN;
volatile int32_t t85 = -1;
uint8_t x351 = 10U;
int8_t x353 = 0;
uint32_t x365 = 58U;
volatile int32_t t93 = 1;
int32_t t94 = -54;
int64_t x382 = INT64_MIN;
int64_t x384 = INT64_MIN;
static volatile int8_t x385 = INT8_MIN;
int32_t x387 = INT32_MIN;
int16_t x392 = 1232;
volatile uint16_t x400 = UINT16_MAX;


void f0(void) {
	uint32_t x1 = 1U;
	volatile int8_t x3 = -27;
	int32_t x4 = INT32_MIN;

	t0 = ((x1&x2)==(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 1;
	uint32_t x6 = 571760U;
	int64_t x7 = -4304319650746581LL;
	int8_t x8 = 3;
	int32_t t1 = -1;

	t1 = ((x5&x6)==(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 1835879U;
	uint64_t x10 = 1156638497LLU;
	static volatile int32_t x12 = INT32_MAX;
	int32_t t2 = -28;

	t2 = ((x9&x10)==(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = 6;
	static int16_t x14 = 747;
	int32_t x15 = INT32_MAX;
	int32_t x16 = INT32_MAX;
	static int32_t t3 = -252;

	t3 = ((x13&x14)==(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 5U;
	int16_t x18 = -1;
	volatile int16_t x19 = -1;
	static int64_t x20 = INT64_MIN;
	static int32_t t4 = 16789777;

	t4 = ((x17&x18)==(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x21 = UINT8_MAX;
	int32_t x22 = INT32_MIN;
	int8_t x23 = INT8_MAX;
	int16_t x24 = INT16_MIN;
	int32_t t5 = -1;

	t5 = ((x21&x22)==(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -3;
	volatile int8_t x26 = INT8_MIN;
	int16_t x27 = INT16_MIN;
	static uint32_t x28 = 8473U;

	t6 = ((x25&x26)==(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 23127469LL;
	volatile int16_t x30 = INT16_MAX;
	uint16_t x31 = 3U;
	int32_t x32 = INT32_MIN;
	int32_t t7 = -9;

	t7 = ((x29&x30)==(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 25036U;
	int16_t x34 = 2253;
	int32_t x35 = -130883209;
	int32_t t8 = -124;

	t8 = ((x33&x34)==(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 25006489U;
	volatile int64_t x38 = INT64_MIN;
	int32_t x40 = INT32_MIN;
	volatile int32_t t9 = -54540;

	t9 = ((x37&x38)==(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = 41686U;
	volatile uint32_t x42 = 72U;
	int16_t x44 = 10;
	int32_t t10 = -445;

	t10 = ((x41&x42)==(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x46 = UINT8_MAX;
	static int32_t x48 = -935;
	int32_t t11 = -94767;

	t11 = ((x45&x46)==(x47<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = 1038;
	uint32_t x51 = 195845U;
	int16_t x52 = 0;

	t12 = ((x49&x50)==(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = -1182475;
	int32_t x54 = 121829182;
	int8_t x55 = INT8_MIN;
	volatile int32_t t13 = 0;

	t13 = ((x53&x54)==(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	volatile int64_t x59 = INT64_MAX;
	volatile uint16_t x60 = UINT16_MAX;
	volatile int32_t t14 = -1;

	t14 = ((x57&x58)==(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 2;
	int8_t x62 = INT8_MAX;
	uint64_t x63 = 16060954571048LLU;
	int64_t x64 = -1LL;
	int32_t t15 = 302058;

	t15 = ((x61&x62)==(x63<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	int64_t x66 = INT64_MIN;
	int32_t x67 = 27184;
	volatile uint32_t x68 = 127833U;
	volatile int32_t t16 = -982;

	t16 = ((x65&x66)==(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = 211058585876666654LL;
	int8_t x71 = -1;
	static int8_t x72 = 0;
	int32_t t17 = 30941391;

	t17 = ((x69&x70)==(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x75 = INT32_MIN;
	int16_t x76 = -1;
	volatile int32_t t18 = -385;

	t18 = ((x73&x74)==(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 9711684U;
	static int32_t t19 = -18773;

	t19 = ((x77&x78)==(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	int64_t x83 = 29940065208297322LL;
	volatile int32_t x84 = -183;
	int32_t t20 = 36746411;

	t20 = ((x81&x82)==(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -1LL;
	int64_t x86 = -296675957059645174LL;
	static int64_t x87 = INT64_MIN;
	int16_t x88 = INT16_MAX;
	static int32_t t21 = 1744674;

	t21 = ((x85&x86)==(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x90 = INT32_MIN;
	uint16_t x91 = 13U;
	volatile uint32_t x92 = 185076626U;
	volatile int32_t t22 = 88819;

	t22 = ((x89&x90)==(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 7U;
	int16_t x94 = INT16_MIN;
	int32_t x95 = INT32_MIN;

	t23 = ((x93&x94)==(x95<=x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MIN;
	int64_t x98 = -4521456916306569463LL;
	volatile int32_t t24 = 212584786;

	t24 = ((x97&x98)==(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = -1;
	volatile int16_t x103 = -1;
	int64_t x104 = INT64_MAX;
	volatile int32_t t25 = 491;

	t25 = ((x101&x102)==(x103<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	int16_t x106 = 441;
	volatile uint32_t x107 = UINT32_MAX;
	volatile int64_t x108 = 1797861799791LL;
	volatile int32_t t26 = -198456114;

	t26 = ((x105&x106)==(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x109 = UINT16_MAX;
	int8_t x110 = -1;
	volatile uint32_t x111 = 120371U;
	volatile int8_t x112 = INT8_MIN;
	int32_t t27 = -391;

	t27 = ((x109&x110)==(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	volatile int32_t t28 = -11;

	t28 = ((x113&x114)==(x115<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	static int16_t x119 = -1;
	int8_t x120 = -2;

	t29 = ((x117&x118)==(x119<=x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	int8_t x122 = -1;
	int64_t x124 = 939025560746210173LL;

	t30 = ((x121&x122)==(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = INT16_MIN;
	static int16_t x127 = INT16_MIN;
	int64_t x128 = INT64_MIN;
	static volatile int32_t t31 = 59401;

	t31 = ((x125&x126)==(x127<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	static volatile int64_t x130 = INT64_MIN;
	int64_t x132 = -2939445LL;
	int32_t t32 = -8539;

	t32 = ((x129&x130)==(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 332867989151776LLU;
	volatile int32_t x134 = INT32_MIN;
	int32_t x135 = -1;
	int8_t x136 = 0;
	volatile int32_t t33 = -20964;

	t33 = ((x133&x134)==(x135<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = UINT8_MAX;
	int32_t x139 = INT32_MIN;
	volatile int64_t x140 = -159LL;
	int32_t t34 = 4164237;

	t34 = ((x137&x138)==(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	uint8_t x142 = 6U;
	static int8_t x143 = INT8_MIN;

	t35 = ((x141&x142)==(x143<=x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 95U;
	volatile uint8_t x147 = UINT8_MAX;
	volatile int8_t x148 = -4;
	static volatile int32_t t36 = 5759962;

	t36 = ((x145&x146)==(x147<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x150 = 486U;
	int8_t x151 = 2;
	int32_t t37 = 0;

	t37 = ((x149&x150)==(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	volatile int64_t x154 = -2368545196043817792LL;
	static int64_t x155 = -1LL;
	static volatile int16_t x156 = -1;

	t38 = ((x153&x154)==(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x157 = 328U;
	volatile uint64_t x158 = 384299718366501277LLU;
	int8_t x159 = INT8_MIN;
	uint8_t x160 = UINT8_MAX;
	volatile int32_t t39 = -441820988;

	t39 = ((x157&x158)==(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x161 = 21U;
	uint16_t x162 = 1U;
	volatile uint32_t x163 = 1144980U;
	volatile int32_t x164 = -30758;
	volatile int32_t t40 = -27956248;

	t40 = ((x161&x162)==(x163<=x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -1;
	int64_t x168 = -26854LL;
	static volatile int32_t t41 = -10750;

	t41 = ((x165&x166)==(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x171 = 10171900LLU;
	uint64_t x172 = UINT64_MAX;
	int32_t t42 = 40987;

	t42 = ((x169&x170)==(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = INT16_MIN;
	int32_t t43 = -22;

	t43 = ((x173&x174)==(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 34;
	volatile int8_t x180 = -4;
	int32_t t44 = 180410140;

	t44 = ((x177&x178)==(x179<=x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x181 = UINT8_MAX;
	volatile int64_t x182 = -114995LL;
	static volatile int16_t x184 = INT16_MIN;
	volatile int32_t t45 = 121623447;

	t45 = ((x181&x182)==(x183<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	int16_t x186 = INT16_MAX;
	static int8_t x187 = -5;
	volatile int32_t t46 = 3;

	t46 = ((x185&x186)==(x187<=x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x189 = 1824U;
	int8_t x191 = INT8_MIN;
	static int8_t x192 = 3;
	int32_t t47 = 469445;

	t47 = ((x189&x190)==(x191<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 41;
	volatile uint64_t x195 = UINT64_MAX;

	t48 = ((x193&x194)==(x195<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = 120641700;
	static int16_t x198 = INT16_MIN;
	int32_t t49 = -48;

	t49 = ((x197&x198)==(x199<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 16329U;
	int8_t x202 = INT8_MIN;
	int32_t x203 = -6;
	int8_t x204 = INT8_MIN;
	volatile int32_t t50 = -25845;

	t50 = ((x201&x202)==(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = 7975162108272LL;
	uint16_t x206 = UINT16_MAX;
	int64_t x207 = -1291292650560313LL;
	int64_t x208 = 280758750744250112LL;
	int32_t t51 = -48977438;

	t51 = ((x205&x206)==(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	int32_t x210 = INT32_MIN;
	static int32_t x211 = INT32_MIN;
	int8_t x212 = INT8_MAX;
	int32_t t52 = 40;

	t52 = ((x209&x210)==(x211<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 904606LLU;
	int8_t x214 = -1;
	int64_t x215 = INT64_MIN;
	volatile uint64_t x216 = UINT64_MAX;

	t53 = ((x213&x214)==(x215<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = -1LL;
	int16_t x218 = -134;
	uint64_t x219 = UINT64_MAX;
	volatile int32_t t54 = -50632931;

	t54 = ((x217&x218)==(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x221 = INT64_MAX;
	int8_t x222 = -6;
	uint16_t x223 = 45U;
	int32_t t55 = -726009;

	t55 = ((x221&x222)==(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 239U;
	static uint16_t x226 = 2721U;
	uint64_t x227 = UINT64_MAX;
	static int32_t t56 = 73631967;

	t56 = ((x225&x226)==(x227<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x232 = INT16_MAX;

	t57 = ((x229&x230)==(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x233 = 11U;
	static int8_t x234 = -2;
	int8_t x235 = -1;
	int8_t x236 = INT8_MIN;
	volatile int32_t t58 = 926084182;

	t58 = ((x233&x234)==(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = 16201321522433LL;
	static int32_t x238 = -5158696;
	int64_t x240 = -1LL;
	int32_t t59 = -183;

	t59 = ((x237&x238)==(x239<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x241 = INT32_MIN;
	int32_t x242 = 6;
	uint64_t x243 = 324477133LLU;
	int8_t x244 = INT8_MIN;

	t60 = ((x241&x242)==(x243<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = 651;
	static int8_t x247 = INT8_MIN;
	static uint8_t x248 = 0U;

	t61 = ((x245&x246)==(x247<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = 7;
	int8_t x251 = INT8_MIN;
	static int32_t t62 = 118239;

	t62 = ((x249&x250)==(x251<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x255 = INT32_MIN;
	uint32_t x256 = UINT32_MAX;
	int32_t t63 = 24183;

	t63 = ((x253&x254)==(x255<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = INT64_MIN;
	static uint64_t x258 = 31805833610886LLU;
	uint32_t x259 = 120371U;
	volatile uint32_t x260 = 424320705U;
	int32_t t64 = 331;

	t64 = ((x257&x258)==(x259<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x262 = -1;
	static uint64_t x263 = 482LLU;
	volatile int8_t x264 = -27;

	t65 = ((x261&x262)==(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = -1;
	int8_t x266 = -1;
	int16_t x267 = -1;
	int64_t x268 = INT64_MIN;
	int32_t t66 = 127;

	t66 = ((x265&x266)==(x267<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 8840167533113791LLU;
	int16_t x271 = INT16_MIN;
	int64_t x272 = 1407865682LL;
	volatile int32_t t67 = -1;

	t67 = ((x269&x270)==(x271<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 1860LLU;
	int8_t x275 = INT8_MIN;
	int32_t x276 = INT32_MAX;
	static int32_t t68 = -5109;

	t68 = ((x273&x274)==(x275<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 2802725U;
	static volatile uint8_t x278 = UINT8_MAX;
	int64_t x280 = -32414224901764LL;
	volatile int32_t t69 = -8750931;

	t69 = ((x277&x278)==(x279<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = INT64_MAX;
	int64_t x282 = 261LL;
	volatile int16_t x283 = INT16_MIN;
	volatile int32_t x284 = -1;
	volatile int32_t t70 = -15;

	t70 = ((x281&x282)==(x283<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x285 = INT32_MIN;
	int8_t x286 = 53;
	volatile int8_t x287 = INT8_MAX;
	uint16_t x288 = 82U;

	t71 = ((x285&x286)==(x287<=x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = INT64_MAX;
	static int32_t t72 = 827021532;

	t72 = ((x289&x290)==(x291<=x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = UINT64_MAX;
	volatile uint16_t x294 = 234U;
	int64_t x295 = INT64_MIN;
	int32_t t73 = 157417978;

	t73 = ((x293&x294)==(x295<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	volatile uint16_t x298 = 1U;
	static int16_t x299 = -4694;
	static uint32_t x300 = 12830770U;

	t74 = ((x297&x298)==(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -33;
	int64_t x302 = 2127653790122108793LL;
	uint16_t x303 = 11624U;
	static volatile int16_t x304 = INT16_MIN;

	t75 = ((x301&x302)==(x303<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x305 = UINT32_MAX;
	volatile int8_t x306 = INT8_MIN;
	uint32_t x307 = 968508864U;
	uint8_t x308 = 1U;

	t76 = ((x305&x306)==(x307<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = INT8_MAX;
	static int16_t x310 = 1;
	int32_t x311 = INT32_MIN;
	volatile int32_t x312 = -55;

	t77 = ((x309&x310)==(x311<=x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 77U;
	int8_t x314 = -1;
	static uint64_t x315 = 1492864599305522LLU;
	uint16_t x316 = UINT16_MAX;

	t78 = ((x313&x314)==(x315<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	int16_t x318 = INT16_MAX;
	volatile int64_t x319 = -1LL;
	int32_t x320 = 10;

	t79 = ((x317&x318)==(x319<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = -1;
	int32_t x322 = INT32_MIN;
	int64_t x323 = 947LL;
	int64_t x324 = -2831679010774910LL;
	int32_t t80 = -12;

	t80 = ((x321&x322)==(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x326 = INT64_MIN;
	volatile int16_t x327 = -1;
	volatile uint64_t x328 = UINT64_MAX;
	int32_t t81 = 4017;

	t81 = ((x325&x326)==(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -1;
	static int8_t x330 = 1;
	int16_t x331 = -2;
	int8_t x332 = INT8_MAX;
	static int32_t t82 = 2078473;

	t82 = ((x329&x330)==(x331<=x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 21514U;
	volatile int8_t x334 = -1;
	volatile uint8_t x335 = 51U;
	int32_t t83 = 8299684;

	t83 = ((x333&x334)==(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x339 = INT64_MIN;
	int32_t x340 = 254533;
	int32_t t84 = 414795210;

	t84 = ((x337&x338)==(x339<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x343 = INT32_MAX;
	int16_t x344 = INT16_MIN;

	t85 = ((x341&x342)==(x343<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = UINT8_MAX;
	static int8_t x346 = INT8_MIN;
	int32_t x347 = INT32_MIN;
	int64_t x348 = 103746641151176167LL;
	volatile int32_t t86 = -7642;

	t86 = ((x345&x346)==(x347<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 164239898LLU;
	int8_t x350 = 15;
	int64_t x352 = INT64_MAX;
	volatile int32_t t87 = 276745;

	t87 = ((x349&x350)==(x351<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x354 = INT8_MIN;
	static uint32_t x355 = 0U;
	uint32_t x356 = UINT32_MAX;
	int32_t t88 = -663120;

	t88 = ((x353&x354)==(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 25U;
	static int16_t x358 = INT16_MIN;
	volatile int16_t x359 = 49;
	uint8_t x360 = UINT8_MAX;
	static volatile int32_t t89 = 6671;

	t89 = ((x357&x358)==(x359<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = 17U;
	volatile uint64_t x362 = UINT64_MAX;
	static int64_t x363 = -1021424176453686LL;
	int64_t x364 = INT64_MIN;
	volatile int32_t t90 = -111892;

	t90 = ((x361&x362)==(x363<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x366 = -1LL;
	static int16_t x367 = INT16_MIN;
	volatile int32_t x368 = 11732385;
	static volatile int32_t t91 = -349386;

	t91 = ((x365&x366)==(x367<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 14298682922903009LLU;
	int64_t x370 = 7622443LL;
	int16_t x371 = -1;
	volatile uint64_t x372 = UINT64_MAX;
	volatile int32_t t92 = -17;

	t92 = ((x369&x370)==(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = INT8_MIN;
	uint16_t x374 = UINT16_MAX;
	uint32_t x375 = UINT32_MAX;
	uint32_t x376 = 214066138U;

	t93 = ((x373&x374)==(x375<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x377 = 14400209787617274LLU;
	int16_t x378 = INT16_MIN;
	int64_t x379 = -1LL;
	volatile int64_t x380 = INT64_MIN;

	t94 = ((x377&x378)==(x379<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -1;
	static int64_t x383 = INT64_MIN;
	volatile int32_t t95 = 37101;

	t95 = ((x381&x382)==(x383<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x386 = -38LL;
	int16_t x388 = INT16_MIN;
	static volatile int32_t t96 = 1;

	t96 = ((x385&x386)==(x387<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MAX;
	int32_t x390 = 1412985;
	volatile uint32_t x391 = 148U;
	volatile int32_t t97 = -4;

	t97 = ((x389&x390)==(x391<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = 19407013846080LL;
	int64_t x394 = -8987301192046LL;
	volatile int8_t x395 = -1;
	volatile uint32_t x396 = 1648601U;
	int32_t t98 = -91760531;

	t98 = ((x393&x394)==(x395<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 1547013214834657LLU;
	int16_t x398 = 1434;
	int8_t x399 = -1;
	volatile int32_t t99 = 1153;

	t99 = ((x397&x398)==(x399<=x400));

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


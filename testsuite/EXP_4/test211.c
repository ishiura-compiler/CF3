#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x5 = 74151610LLU;
volatile int32_t x13 = 366519;
int32_t x19 = INT32_MIN;
uint64_t x20 = 123545047LLU;
volatile int8_t x28 = -1;
int64_t x29 = -1LL;
volatile int8_t x34 = INT8_MIN;
static volatile int64_t x38 = INT64_MAX;
uint64_t x39 = 857LLU;
uint16_t x44 = 693U;
uint32_t x62 = 3U;
static int16_t x68 = 19;
int32_t x81 = -1;
static volatile int16_t x87 = -1;
static int64_t x89 = 13816741588092526LL;
volatile uint64_t t18 = 254066169LLU;
uint32_t x100 = 2252907U;
volatile int32_t t22 = 70793;
uint8_t x122 = 1U;
volatile int64_t x124 = -1LL;
volatile int64_t x130 = -1LL;
static uint16_t x133 = 6U;
static volatile int8_t x138 = INT8_MIN;
uint8_t x140 = 11U;
int64_t x142 = INT64_MAX;
volatile int64_t t30 = -154870347306LL;
int8_t x145 = -1;
volatile int16_t x147 = 72;
static volatile int64_t t34 = -137082LL;
int16_t x165 = INT16_MIN;
int16_t x166 = INT16_MIN;
int16_t x169 = -1;
uint64_t t38 = 8512101341388LLU;
static int16_t x186 = INT16_MIN;
int32_t x188 = INT32_MIN;
int64_t x192 = INT64_MIN;
volatile int64_t t41 = 3292719248064LL;
volatile uint16_t x196 = 16630U;
int16_t x198 = INT16_MIN;
int8_t x202 = INT8_MAX;
int64_t t44 = -1LL;
volatile int64_t t45 = 69561738519943969LL;
int8_t x217 = -4;
int8_t x224 = INT8_MIN;
volatile int32_t t47 = 0;
int32_t x228 = INT32_MAX;
uint64_t t49 = 1049176750137LLU;
uint32_t x237 = 2022U;
int64_t x240 = INT64_MIN;
static volatile int64_t t50 = -50LL;
volatile int64_t x241 = INT64_MIN;
volatile uint64_t t51 = 21462722470496158LLU;
int64_t x248 = INT64_MIN;
static int64_t x252 = -46116492LL;
static int64_t x266 = -1LL;
volatile uint64_t t55 = 162558882689826493LLU;
static int32_t x273 = -6085;
uint64_t x276 = 1629071148769LLU;
static int64_t x282 = 1592312402813683634LL;
volatile int64_t t61 = -56791LL;
int64_t x294 = -1LL;
static volatile int8_t x296 = INT8_MAX;
volatile int32_t x303 = -1;
volatile uint8_t x304 = 111U;
int32_t t64 = -6;
int8_t x306 = -1;
static uint64_t x307 = 1911LLU;
int32_t x312 = 4532;
static uint64_t x321 = 1166807543LLU;
uint16_t x323 = UINT16_MAX;
volatile int16_t x330 = 363;
static volatile uint16_t x345 = UINT16_MAX;
static uint8_t x347 = 1U;
static int16_t x349 = -1;
int16_t x350 = INT16_MAX;
uint32_t x366 = 457U;
volatile int64_t x370 = -1455319LL;
volatile int64_t t77 = 14LL;
uint32_t x385 = 15391U;
volatile uint8_t x387 = 5U;
static volatile uint8_t x388 = UINT8_MAX;
static int64_t x390 = INT64_MIN;
volatile int64_t t83 = -479844004570424LL;
int32_t x409 = -11935589;
uint16_t x410 = 6984U;
volatile uint64_t x411 = 3093474169038158LLU;
uint64_t t84 = 178188791773LLU;
int16_t x420 = -4;
static int32_t t86 = -335;
volatile uint32_t x423 = 16071U;
volatile int8_t x424 = 59;
static int64_t t87 = 51LL;
volatile uint64_t t88 = 213754761598LLU;
static volatile int64_t t89 = 6595395LL;
uint64_t t91 = 6039452740980370LLU;
int64_t x460 = INT64_MIN;
int64_t t93 = -25062778LL;
int64_t x464 = INT64_MIN;
int16_t x495 = INT16_MIN;
int64_t t99 = 107LL;


void f0(void) {
	int8_t x6 = -1;
	uint64_t x7 = 407LLU;
	volatile int8_t x8 = 1;
	volatile uint64_t t0 = 102776214LLU;

	t0 = (x5*(x6/(x7-x8)));

	if (t0 != 7996618120586697206LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = 0LL;
	uint8_t x10 = UINT8_MAX;
	uint32_t x11 = 9506U;
	volatile uint8_t x12 = UINT8_MAX;
	int64_t t1 = 6LL;

	t1 = (x9*(x10/(x11-x12)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x14 = -1;
	volatile uint8_t x15 = 4U;
	int32_t x16 = 20;
	volatile int32_t t2 = -13;

	t2 = (x13*(x14/(x15-x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -355;
	static int8_t x18 = -1;
	uint64_t t3 = 176LLU;

	t3 = (x17*(x18/(x19-x20)));

	if (t3 != 18446744073709551261LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = 59999;
	static volatile int8_t x22 = -1;
	int64_t x23 = INT64_MIN;
	static volatile uint64_t x24 = UINT64_MAX;
	uint64_t t4 = 615573109998681316LLU;

	t4 = (x21*(x22/(x23-x24)));

	if (t4 != 59999LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MAX;
	int8_t x26 = INT8_MAX;
	uint64_t x27 = 4509137109LLU;
	volatile uint64_t t5 = 17972315833LLU;

	t5 = (x25*(x26/(x27-x28)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x30 = INT16_MIN;
	uint64_t x31 = 35348527448612LLU;
	volatile int32_t x32 = 5;
	volatile uint64_t t6 = 194314907329447939LLU;

	t6 = (x29*(x30/(x31-x32)));

	if (t6 != 18446744073709029763LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x33 = 37584U;
	volatile int16_t x35 = -5;
	int32_t x36 = 3074;
	volatile uint32_t t7 = 78U;

	t7 = (x33*(x34/(x35-x36)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	int64_t x40 = INT64_MAX;
	uint64_t t8 = 13398379473953438LLU;

	t8 = (x37*(x38/(x39-x40)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = 40838306565320314LL;
	int16_t x42 = 197;
	static uint8_t x43 = 4U;
	static volatile int64_t t9 = 57726674LL;

	t9 = (x41*(x42/(x43-x44)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -274678LL;
	static int16_t x46 = INT16_MIN;
	int64_t x47 = INT64_MAX;
	static uint64_t x48 = 116091156LLU;
	volatile uint64_t t10 = 798167856502764LLU;

	t10 = (x45*(x46/(x47-x48)));

	if (t10 != 18446744073709002260LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -1;
	uint64_t x50 = 141177116963865631LLU;
	static int16_t x51 = -2;
	volatile int32_t x52 = INT32_MIN;
	volatile uint64_t t11 = 26856LLU;

	t11 = (x49*(x50/(x51-x52)));

	if (t11 != 18446744073643810898LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = -206918;
	uint32_t x54 = 7U;
	uint16_t x55 = 438U;
	static int64_t x56 = INT64_MAX;
	int64_t t12 = 200LL;

	t12 = (x53*(x54/(x55-x56)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -2680670291LL;
	int32_t x58 = -4016639;
	static uint32_t x59 = 971U;
	int8_t x60 = 1;
	volatile int64_t t13 = -23546954455815LL;

	t13 = (x57*(x58/(x59-x60)));

	if (t13 != -11858373939485060LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MAX;
	uint32_t x63 = 264263U;
	int16_t x64 = INT16_MIN;
	volatile uint32_t t14 = 1961U;

	t14 = (x61*(x62/(x63-x64)));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	int16_t x66 = INT16_MIN;
	int64_t x67 = -4001774751LL;
	static volatile int64_t t15 = -1620LL;

	t15 = (x65*(x66/(x67-x68)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x82 = INT8_MAX;
	int8_t x83 = -12;
	uint16_t x84 = 8U;
	static volatile int32_t t16 = -298552;

	t16 = (x81*(x82/(x83-x84)));

	if (t16 != 6) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x85 = 1812LLU;
	volatile uint64_t x86 = 1842718661LLU;
	int8_t x88 = INT8_MIN;
	volatile uint64_t t17 = 32955989001545648LLU;

	t17 = (x85*(x86/(x87-x88)));

	if (t17 != 26291386140LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x90 = 0U;
	uint64_t x91 = 2182458783921LLU;
	static int16_t x92 = -27;

	t18 = (x89*(x90/(x91-x92)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = INT8_MIN;
	volatile int16_t x94 = INT16_MIN;
	int16_t x95 = INT16_MIN;
	int8_t x96 = INT8_MIN;
	int32_t t19 = 282;

	t19 = (x93*(x94/(x95-x96)));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = INT64_MIN;
	int16_t x98 = INT16_MIN;
	uint32_t x99 = 308U;
	int64_t t20 = INT64_MIN;

	t20 = (x97*(x98/(x99-x100)));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x105 = UINT16_MAX;
	static uint32_t x106 = 3806482U;
	int32_t x107 = 2933;
	volatile uint64_t x108 = UINT64_MAX;
	volatile uint64_t t21 = 22387889153541LLU;

	t21 = (x105*(x106/(x107-x108)));

	if (t21 != 84998895LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x109 = INT16_MAX;
	int16_t x110 = -1;
	volatile int8_t x111 = 4;
	uint16_t x112 = 2U;

	t22 = (x109*(x110/(x111-x112)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x113 = -1;
	volatile int32_t x114 = INT32_MIN;
	int8_t x115 = -1;
	uint64_t x116 = 5633504860625LLU;
	uint64_t t23 = UINT64_MAX;

	t23 = (x113*(x114/(x115-x116)));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x117 = UINT64_MAX;
	int8_t x118 = INT8_MAX;
	static uint64_t x119 = UINT64_MAX;
	static int8_t x120 = INT8_MAX;
	volatile uint64_t t24 = 12752050LLU;

	t24 = (x117*(x118/(x119-x120)));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x121 = INT64_MIN;
	static int8_t x123 = INT8_MAX;
	volatile int64_t t25 = -1840135596LL;

	t25 = (x121*(x122/(x123-x124)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x125 = 494516505372380422LLU;
	uint64_t x126 = 57024744815LLU;
	int16_t x127 = INT16_MAX;
	volatile uint64_t x128 = UINT64_MAX;
	volatile uint64_t t26 = 515924LLU;

	t26 = (x125*(x126/(x127-x128)));

	if (t26 != 8305563124634058822LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = INT32_MAX;
	int64_t x131 = -1LL;
	int32_t x132 = INT32_MAX;
	volatile int64_t t27 = -304083LL;

	t27 = (x129*(x130/(x131-x132)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x134 = UINT64_MAX;
	volatile int32_t x135 = INT32_MAX;
	int64_t x136 = -1LL;
	uint64_t t28 = 8196686606LLU;

	t28 = (x133*(x134/(x135-x136)));

	if (t28 != 51539607546LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x137 = -1;
	uint8_t x139 = 9U;
	volatile int32_t t29 = -1605;

	t29 = (x137*(x138/(x139-x140)));

	if (t29 != -64) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x141 = 1883592;
	int32_t x143 = -1;
	volatile int32_t x144 = INT32_MIN;

	t30 = (x141*(x142/(x143-x144)));

	if (t30 != 8089966042774416LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x146 = INT64_MIN;
	uint64_t x148 = 64961120LLU;
	uint64_t t31 = 515LLU;

	t31 = (x145*(x146/(x147-x148)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x149 = 25002221LLU;
	uint8_t x150 = UINT8_MAX;
	volatile int16_t x151 = -1;
	volatile int64_t x152 = INT64_MIN;
	static volatile uint64_t t32 = 686731760LLU;

	t32 = (x149*(x150/(x151-x152)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x153 = INT16_MIN;
	int64_t x154 = 5LL;
	uint8_t x155 = 77U;
	uint64_t x156 = 6750658839736923LLU;
	volatile uint64_t t33 = 14200033402885LLU;

	t33 = (x153*(x154/(x155-x156)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x157 = 1U;
	volatile uint32_t x158 = 8482966U;
	int16_t x159 = INT16_MAX;
	int64_t x160 = 170565541LL;

	t34 = (x157*(x158/(x159-x160)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = INT64_MAX;
	static int16_t x162 = -261;
	int16_t x163 = -2;
	int32_t x164 = INT32_MIN;
	volatile int64_t t35 = 14812440697957721LL;

	t35 = (x161*(x162/(x163-x164)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x167 = INT64_MIN;
	volatile uint64_t x168 = 11LLU;
	uint64_t t36 = 19644760655LLU;

	t36 = (x165*(x166/(x167-x168)));

	if (t36 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x170 = INT32_MAX;
	static int32_t x171 = INT32_MIN;
	uint64_t x172 = 1267359114540063LLU;
	volatile uint64_t t37 = 15195LLU;

	t37 = (x169*(x170/(x171-x172)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x173 = -7947;
	uint64_t x174 = 5327943472687681069LLU;
	static uint8_t x175 = UINT8_MAX;
	static int8_t x176 = INT8_MIN;

	t38 = (x173*(x174/(x175-x176)));

	if (t38 != 129115153878718038LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = INT8_MIN;
	static int32_t x178 = INT32_MIN;
	static volatile int32_t x179 = -1;
	int16_t x180 = 1255;
	volatile int32_t t39 = -14;

	t39 = (x177*(x178/(x179-x180)));

	if (t39 != -218851712) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x185 = 16U;
	uint64_t x187 = 181554722LLU;
	uint64_t t40 = 473801LLU;

	t40 = (x185*(x186/(x187-x188)));

	if (t40 != 126725222288LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x189 = UINT16_MAX;
	uint16_t x190 = UINT16_MAX;
	int16_t x191 = -10289;

	t41 = (x189*(x190/(x191-x192)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x193 = -72;
	int16_t x194 = -1;
	uint32_t x195 = UINT32_MAX;
	uint32_t t42 = 13650U;

	t42 = (x193*(x194/(x195-x196)));

	if (t42 != 4294967224U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x197 = INT64_MAX;
	volatile int64_t x199 = 16003761LL;
	int16_t x200 = INT16_MIN;
	static volatile int64_t t43 = -188560289LL;

	t43 = (x197*(x198/(x199-x200)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x201 = INT8_MIN;
	static int64_t x203 = INT64_MIN;
	static int16_t x204 = INT16_MIN;

	t44 = (x201*(x202/(x203-x204)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x209 = -1;
	uint16_t x210 = UINT16_MAX;
	uint16_t x211 = 5884U;
	static int64_t x212 = 19141723097LL;

	t45 = (x209*(x210/(x211-x212)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x218 = -1;
	int32_t x219 = INT32_MIN;
	int8_t x220 = -1;
	volatile int32_t t46 = -410289345;

	t46 = (x217*(x218/(x219-x220)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x221 = 1U;
	int8_t x222 = INT8_MIN;
	int32_t x223 = INT32_MIN;

	t47 = (x221*(x222/(x223-x224)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x225 = UINT64_MAX;
	int8_t x226 = INT8_MIN;
	uint64_t x227 = 117496761LLU;
	uint64_t t48 = UINT64_MAX;

	t48 = (x225*(x226/(x227-x228)));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x229 = INT64_MAX;
	volatile int32_t x230 = -9697438;
	volatile uint32_t x231 = UINT32_MAX;
	volatile uint64_t x232 = UINT64_MAX;

	t49 = (x229*(x230/(x231-x232)));

	if (t49 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x238 = 867;
	int16_t x239 = INT16_MIN;

	t50 = (x237*(x238/(x239-x240)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x242 = 6;
	uint64_t x243 = UINT64_MAX;
	static int8_t x244 = INT8_MIN;

	t51 = (x241*(x242/(x243-x244)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x245 = 702609067U;
	static int16_t x246 = -1;
	int32_t x247 = -1;
	int64_t t52 = -322452035134751367LL;

	t52 = (x245*(x246/(x247-x248)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x249 = -15;
	uint32_t x250 = 1309640798U;
	int16_t x251 = -63;
	int64_t t53 = 217467582289309LL;

	t53 = (x249*(x250/(x251-x252)));

	if (t53 != -420LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x261 = INT8_MIN;
	int8_t x262 = INT8_MIN;
	uint8_t x263 = 57U;
	static int8_t x264 = INT8_MAX;
	int32_t t54 = -516;

	t54 = (x261*(x262/(x263-x264)));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x265 = INT8_MIN;
	int8_t x267 = 1;
	uint64_t x268 = 4717717591094814563LLU;

	t55 = (x265*(x266/(x267-x268)));

	if (t55 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x269 = UINT64_MAX;
	static uint32_t x270 = 28U;
	uint64_t x271 = 793157931272941LLU;
	int8_t x272 = -1;
	uint64_t t56 = 5990527668496634185LLU;

	t56 = (x269*(x270/(x271-x272)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x274 = INT64_MIN;
	volatile int64_t x275 = INT64_MAX;
	volatile uint64_t t57 = 2029532724215824LLU;

	t57 = (x273*(x274/(x275-x276)));

	if (t57 != 18446744073709545531LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x277 = INT8_MAX;
	int64_t x278 = INT64_MAX;
	volatile int16_t x279 = INT16_MIN;
	static volatile int8_t x280 = 1;
	static int64_t t58 = -33712043605115LL;

	t58 = (x277*(x278/(x279-x280)));

	if (t58 != -35746231153851400LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x281 = -105;
	int64_t x283 = -3303LL;
	uint8_t x284 = UINT8_MAX;
	int64_t t59 = -184822LL;

	t59 = (x281*(x282/(x283-x284)));

	if (t59 != 46990669560268875LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x285 = 78112157U;
	static int32_t x286 = INT32_MIN;
	int64_t x287 = 169185846930685LL;
	uint16_t x288 = UINT16_MAX;
	volatile int64_t t60 = 753587428623651LL;

	t60 = (x285*(x286/(x287-x288)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x289 = 159U;
	int64_t x290 = 1948519LL;
	static uint8_t x291 = UINT8_MAX;
	int32_t x292 = 0;

	t61 = (x289*(x290/(x291-x292)));

	if (t61 != 1214919LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x293 = INT32_MAX;
	static int16_t x295 = INT16_MIN;
	static volatile int64_t t62 = -38735792LL;

	t62 = (x293*(x294/(x295-x296)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x297 = UINT64_MAX;
	volatile uint32_t x298 = 407839U;
	uint32_t x299 = UINT32_MAX;
	volatile int64_t x300 = 1734782977LL;
	uint64_t t63 = 48390196538629602LLU;

	t63 = (x297*(x298/(x299-x300)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x301 = 1352;
	int32_t x302 = -1;

	t64 = (x301*(x302/(x303-x304)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x305 = 40LL;
	int32_t x308 = INT32_MAX;
	volatile uint64_t t65 = 1542176LLU;

	t65 = (x305*(x306/(x307-x308)));

	if (t65 != 40LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x309 = -1;
	int64_t x310 = 74739548LL;
	volatile int8_t x311 = INT8_MAX;
	int64_t t66 = 456679044LL;

	t66 = (x309*(x310/(x311-x312)));

	if (t66 != 16966LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x313 = INT16_MAX;
	static int32_t x314 = INT32_MIN;
	uint32_t x315 = 23359U;
	volatile uint16_t x316 = 1849U;
	uint32_t t67 = 283688U;

	t67 = (x313*(x314/(x315-x316)));

	if (t67 != 3271326212U) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x322 = -15044;
	int16_t x324 = INT16_MAX;
	static volatile uint64_t t68 = 10768304453324LLU;

	t68 = (x321*(x322/(x323-x324)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x329 = 0;
	int16_t x331 = -1;
	static int8_t x332 = INT8_MIN;
	int32_t t69 = 7952687;

	t69 = (x329*(x330/(x331-x332)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x333 = UINT16_MAX;
	volatile int64_t x334 = INT64_MAX;
	int64_t x335 = 9377606553343LL;
	uint8_t x336 = 0U;
	volatile int64_t t70 = -26LL;

	t70 = (x333*(x334/(x335-x336)));

	if (t70 != 64457080320LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x337 = 7898341LLU;
	static int64_t x338 = 30275780502LL;
	uint64_t x339 = 8185LLU;
	uint32_t x340 = 2101142682U;
	static volatile uint64_t t71 = 201LLU;

	t71 = (x337*(x338/(x339-x340)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x346 = 12;
	volatile int8_t x348 = -2;
	static int32_t t72 = -9307;

	t72 = (x345*(x346/(x347-x348)));

	if (t72 != 262140) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x351 = INT32_MIN;
	int8_t x352 = -1;
	volatile int32_t t73 = 31504217;

	t73 = (x349*(x350/(x351-x352)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x357 = 1U;
	int64_t x358 = 104753LL;
	static int32_t x359 = INT32_MIN;
	int8_t x360 = INT8_MIN;
	int64_t t74 = -7657428085LL;

	t74 = (x357*(x358/(x359-x360)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x361 = 60453527;
	int8_t x362 = 60;
	int16_t x363 = INT16_MIN;
	static uint32_t x364 = UINT32_MAX;
	static uint32_t t75 = 41U;

	t75 = (x361*(x362/(x363-x364)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x365 = -1;
	volatile int8_t x367 = -1;
	uint16_t x368 = UINT16_MAX;
	volatile uint32_t t76 = 47731U;

	t76 = (x365*(x366/(x367-x368)));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x369 = INT32_MIN;
	static volatile uint32_t x371 = 3357U;
	uint8_t x372 = 7U;

	t77 = (x369*(x370/(x371-x372)));

	if (t77 != 932007903232LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x386 = 1;
	static uint32_t t78 = 3401U;

	t78 = (x385*(x386/(x387-x388)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x389 = 719U;
	uint64_t x391 = UINT64_MAX;
	int64_t x392 = INT64_MIN;
	volatile uint64_t t79 = 1103369791296658LLU;

	t79 = (x389*(x390/(x391-x392)));

	if (t79 != 719LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x393 = INT32_MAX;
	uint32_t x394 = 1185U;
	volatile uint32_t x395 = 324831U;
	volatile int8_t x396 = 0;
	uint32_t t80 = 5U;

	t80 = (x393*(x394/(x395-x396)));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x397 = 15U;
	uint32_t x398 = UINT32_MAX;
	uint8_t x399 = 14U;
	int16_t x400 = -1;
	volatile uint32_t t81 = UINT32_MAX;

	t81 = (x397*(x398/(x399-x400)));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x401 = -1;
	static uint32_t x402 = UINT32_MAX;
	static int32_t x403 = -2072;
	int32_t x404 = 1072947;
	uint32_t t82 = UINT32_MAX;

	t82 = (x401*(x402/(x403-x404)));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x405 = UINT8_MAX;
	volatile uint8_t x406 = 91U;
	int64_t x407 = -1LL;
	volatile int16_t x408 = INT16_MIN;

	t83 = (x405*(x406/(x407-x408)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x412 = UINT8_MAX;

	t84 = (x409*(x410/(x411-x412)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x413 = 4798422463LL;
	uint32_t x414 = UINT32_MAX;
	int8_t x415 = INT8_MIN;
	int16_t x416 = 0;
	int64_t t85 = -3838748032LL;

	t85 = (x413*(x414/(x415-x416)));

	if (t85 != 4798422463LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x417 = INT32_MIN;
	uint8_t x418 = 2U;
	static int8_t x419 = 3;

	t86 = (x417*(x418/(x419-x420)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x421 = 545295039LL;
	static uint16_t x422 = 27258U;

	t87 = (x421*(x422/(x423-x424)));

	if (t87 != 545295039LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x425 = 191036LLU;
	static volatile int8_t x426 = 0;
	uint16_t x427 = UINT16_MAX;
	int16_t x428 = 2555;

	t88 = (x425*(x426/(x427-x428)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x433 = INT64_MAX;
	int8_t x434 = -1;
	int32_t x435 = -1;
	int32_t x436 = INT32_MAX;

	t89 = (x433*(x434/(x435-x436)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x437 = INT64_MIN;
	int64_t x438 = -21635LL;
	volatile int16_t x439 = INT16_MAX;
	uint16_t x440 = 2U;
	static volatile int64_t t90 = 38087357LL;

	t90 = (x437*(x438/(x439-x440)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x449 = INT64_MIN;
	static int64_t x450 = INT64_MIN;
	uint64_t x451 = 415LLU;
	uint8_t x452 = 1U;

	t91 = (x449*(x450/(x451-x452)));

	if (t91 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x453 = UINT64_MAX;
	static uint8_t x454 = UINT8_MAX;
	volatile int8_t x455 = 0;
	int32_t x456 = -1;
	static uint64_t t92 = 3760481026798598979LLU;

	t92 = (x453*(x454/(x455-x456)));

	if (t92 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x457 = 7;
	volatile int64_t x458 = -782064LL;
	int16_t x459 = INT16_MIN;

	t93 = (x457*(x458/(x459-x460)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x461 = -1;
	int16_t x462 = INT16_MIN;
	int64_t x463 = -511903693LL;
	int64_t t94 = -27938537LL;

	t94 = (x461*(x462/(x463-x464)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x465 = 3U;
	int8_t x466 = INT8_MAX;
	int16_t x467 = -1585;
	volatile int64_t x468 = INT64_MIN;
	int64_t t95 = 28915LL;

	t95 = (x465*(x466/(x467-x468)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x473 = -1;
	volatile int8_t x474 = -1;
	volatile int64_t x475 = -1LL;
	int8_t x476 = INT8_MAX;
	int64_t t96 = 19235864LL;

	t96 = (x473*(x474/(x475-x476)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x477 = 52799LLU;
	static int8_t x478 = INT8_MAX;
	uint8_t x479 = 0U;
	static int16_t x480 = INT16_MAX;
	uint64_t t97 = 350345425274841988LLU;

	t97 = (x477*(x478/(x479-x480)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x485 = INT16_MIN;
	volatile int32_t x486 = INT32_MIN;
	int64_t x487 = -1LL;
	static int64_t x488 = INT64_MIN;
	int64_t t98 = -492LL;

	t98 = (x485*(x486/(x487-x488)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x493 = 14992U;
	volatile int8_t x494 = INT8_MAX;
	int64_t x496 = -1LL;

	t99 = (x493*(x494/(x495-x496)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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


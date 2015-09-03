#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = INT16_MAX;
static uint16_t x4 = 49U;
int64_t x8 = -1LL;
static volatile int64_t x13 = INT64_MIN;
uint32_t x18 = 9165U;
volatile uint64_t x21 = UINT64_MAX;
static int32_t x24 = INT32_MAX;
uint16_t x36 = UINT16_MAX;
int32_t x40 = INT32_MIN;
static volatile int32_t t8 = -1;
static int8_t x45 = INT8_MIN;
uint32_t x50 = UINT32_MAX;
static volatile int32_t t11 = -1041717;
volatile uint64_t x55 = 1LLU;
volatile int32_t t12 = -77873;
volatile int32_t t14 = 12;
int16_t x72 = INT16_MAX;
volatile int32_t t15 = -6860514;
uint16_t x81 = 198U;
int16_t x87 = 6696;
int64_t x91 = -1LL;
uint64_t x94 = UINT64_MAX;
volatile int32_t t22 = -221;
volatile uint64_t x109 = 136936563177981469LLU;
int16_t x111 = INT16_MAX;
volatile uint8_t x118 = 4U;
int32_t x119 = -1979;
int32_t t27 = 15747513;
int32_t x123 = -1;
static int32_t x128 = -1;
int64_t x130 = -1LL;
uint8_t x133 = 59U;
int32_t t33 = -908822341;
uint16_t x150 = 1U;
static uint8_t x152 = 118U;
static int32_t t34 = 69685792;
uint64_t x156 = UINT64_MAX;
int32_t t36 = 1708;
uint32_t x164 = UINT32_MAX;
int8_t x167 = INT8_MAX;
int32_t t38 = 503434990;
static int16_t x169 = -341;
static uint64_t x172 = 895991LLU;
volatile int16_t x176 = 0;
int32_t x177 = INT32_MIN;
static volatile int8_t x180 = -1;
volatile int32_t t42 = 1;
int8_t x189 = -1;
uint64_t x195 = 14224968199771307LLU;
uint8_t x200 = UINT8_MAX;
static int8_t x203 = INT8_MIN;
static int64_t x214 = -1LL;
uint64_t x222 = 412LLU;
uint64_t x234 = 728657346LLU;
int64_t x237 = INT64_MIN;
int8_t x244 = -13;
uint64_t x249 = UINT64_MAX;
int16_t x251 = INT16_MIN;
static int32_t t60 = 875420;
int32_t x273 = 53;
int32_t x290 = -1634023;
uint64_t x292 = 40523252013LLU;
int8_t x293 = INT8_MIN;
int32_t x296 = INT32_MIN;
uint32_t x308 = 1U;
int8_t x309 = INT8_MAX;
volatile int16_t x319 = -1;
volatile int8_t x323 = INT8_MIN;
int64_t x331 = -2814526LL;
int64_t x332 = -1LL;
static int32_t t77 = -1955530;
volatile uint64_t x333 = 194684334LLU;
int8_t x334 = INT8_MIN;
uint64_t x344 = UINT64_MAX;
volatile int32_t t80 = 24;
uint16_t x345 = 2241U;
uint32_t x348 = 1U;
volatile int32_t t81 = 1793;
volatile int8_t x355 = 4;
int16_t x367 = INT16_MIN;
int16_t x382 = INT16_MIN;
static uint32_t x383 = UINT32_MAX;
uint64_t x384 = 582651376294082541LLU;
uint32_t x389 = 321U;
static int64_t x395 = -6LL;
int64_t x397 = INT64_MIN;
volatile uint16_t x399 = UINT16_MAX;
uint8_t x400 = 115U;
int8_t x408 = -6;
static int16_t x409 = INT16_MIN;
static uint16_t x410 = UINT16_MAX;
int8_t x414 = INT8_MIN;
uint16_t x415 = 14604U;
int64_t x417 = INT64_MIN;


void f0(void) {
	uint64_t x2 = 2352840082721943194LLU;
	int16_t x3 = INT16_MAX;
	static volatile int32_t t0 = -1;

	t0 = (x1<=((x2%x3)+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	volatile uint16_t x6 = 4U;
	int64_t x7 = INT64_MIN;
	volatile int32_t t1 = 1;

	t1 = (x5<=((x6%x7)+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x14 = 109855168U;
	int16_t x15 = INT16_MIN;
	static volatile uint32_t x16 = UINT32_MAX;
	volatile int32_t t2 = 1768;

	t2 = (x13<=((x14%x15)+x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MAX;
	int16_t x19 = INT16_MIN;
	static uint16_t x20 = 0U;
	static volatile int32_t t3 = -26936308;

	t3 = (x17<=((x18%x19)+x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x22 = INT64_MAX;
	uint64_t x23 = UINT64_MAX;
	volatile int32_t t4 = -24104341;

	t4 = (x21<=((x22%x23)+x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x25 = 6518830;
	static int32_t x26 = -30806087;
	int64_t x27 = INT64_MIN;
	volatile int8_t x28 = INT8_MIN;
	int32_t t5 = 16640886;

	t5 = (x25<=((x26%x27)+x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -1;
	volatile uint64_t x30 = UINT64_MAX;
	static uint8_t x31 = 56U;
	int64_t x32 = INT64_MIN;
	int32_t t6 = 5;

	t6 = (x29<=((x30%x31)+x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -29;
	volatile int8_t x34 = -24;
	volatile uint8_t x35 = UINT8_MAX;
	volatile int32_t t7 = 9266;

	t7 = (x33<=((x34%x35)+x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = -1;
	static uint64_t x38 = UINT64_MAX;
	uint16_t x39 = 2U;

	t8 = (x37<=((x38%x39)+x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = UINT16_MAX;
	uint32_t x42 = 4U;
	uint32_t x43 = UINT32_MAX;
	int8_t x44 = -25;
	int32_t t9 = 670982;

	t9 = (x41<=((x42%x43)+x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x46 = INT32_MIN;
	static volatile int64_t x47 = INT64_MAX;
	uint8_t x48 = 0U;
	int32_t t10 = 20834395;

	t10 = (x45<=((x46%x47)+x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x49 = -1LL;
	int8_t x51 = INT8_MAX;
	volatile uint8_t x52 = 52U;

	t11 = (x49<=((x50%x51)+x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 10U;
	uint16_t x54 = UINT16_MAX;
	int16_t x56 = INT16_MAX;

	t12 = (x53<=((x54%x55)+x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x61 = -1LL;
	int8_t x62 = INT8_MIN;
	int64_t x63 = -1LL;
	static int32_t x64 = -1;
	volatile int32_t t13 = -386;

	t13 = (x61<=((x62%x63)+x64));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = -1;
	int8_t x66 = INT8_MIN;
	int64_t x67 = -1LL;
	uint8_t x68 = 2U;

	t14 = (x65<=((x66%x67)+x68));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 11556705083941614LLU;
	int64_t x70 = 17LL;
	volatile uint64_t x71 = UINT64_MAX;

	t15 = (x69<=((x70%x71)+x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x73 = UINT8_MAX;
	volatile int8_t x74 = -1;
	int8_t x75 = -1;
	static volatile int64_t x76 = -1LL;
	int32_t t16 = 20201;

	t16 = (x73<=((x74%x75)+x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x77 = INT32_MIN;
	int32_t x78 = INT32_MIN;
	volatile int16_t x79 = INT16_MIN;
	volatile uint64_t x80 = 29144262218LLU;
	volatile int32_t t17 = 257;

	t17 = (x77<=((x78%x79)+x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x82 = UINT16_MAX;
	int64_t x83 = -1LL;
	static uint32_t x84 = UINT32_MAX;
	volatile int32_t t18 = -856587;

	t18 = (x81<=((x82%x83)+x84));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x85 = INT16_MIN;
	uint8_t x86 = 14U;
	static uint16_t x88 = 12517U;
	volatile int32_t t19 = -12713311;

	t19 = (x85<=((x86%x87)+x88));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = -1;
	static uint64_t x90 = 22374947LLU;
	int32_t x92 = INT32_MIN;
	int32_t t20 = 2911003;

	t20 = (x89<=((x90%x91)+x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x93 = 1486LLU;
	volatile uint8_t x95 = 9U;
	uint16_t x96 = UINT16_MAX;
	int32_t t21 = -182389;

	t21 = (x93<=((x94%x95)+x96));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = 9511;
	static uint8_t x98 = UINT8_MAX;
	static int8_t x99 = INT8_MAX;
	static int8_t x100 = INT8_MIN;

	t22 = (x97<=((x98%x99)+x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x101 = UINT8_MAX;
	int32_t x102 = INT32_MIN;
	volatile int32_t x103 = 39060172;
	int16_t x104 = INT16_MAX;
	int32_t t23 = 4174510;

	t23 = (x101<=((x102%x103)+x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x105 = UINT16_MAX;
	int64_t x106 = 5721153LL;
	static int32_t x107 = -7243;
	uint32_t x108 = 57152U;
	static volatile int32_t t24 = 8113;

	t24 = (x105<=((x106%x107)+x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x110 = INT16_MAX;
	static uint32_t x112 = 33U;
	volatile int32_t t25 = -163282812;

	t25 = (x109<=((x110%x111)+x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x113 = 2U;
	int8_t x114 = 0;
	int32_t x115 = INT32_MIN;
	int8_t x116 = -1;
	int32_t t26 = -79521802;

	t26 = (x113<=((x114%x115)+x116));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x117 = INT64_MAX;
	uint64_t x120 = 9083251438055379LLU;

	t27 = (x117<=((x118%x119)+x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x121 = UINT32_MAX;
	uint8_t x122 = UINT8_MAX;
	uint16_t x124 = 22693U;
	int32_t t28 = 3044973;

	t28 = (x121<=((x122%x123)+x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = INT8_MIN;
	volatile int64_t x126 = -1LL;
	volatile int32_t x127 = INT32_MIN;
	int32_t t29 = 60362062;

	t29 = (x125<=((x126%x127)+x128));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x129 = INT16_MIN;
	int8_t x131 = 1;
	volatile int32_t x132 = INT32_MIN;
	int32_t t30 = 73130;

	t30 = (x129<=((x130%x131)+x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x134 = INT16_MIN;
	static volatile uint16_t x135 = 239U;
	uint32_t x136 = 30U;
	int32_t t31 = 0;

	t31 = (x133<=((x134%x135)+x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = -1;
	int64_t x138 = INT64_MIN;
	volatile int64_t x139 = INT64_MIN;
	int32_t x140 = INT32_MIN;
	volatile int32_t t32 = 843;

	t32 = (x137<=((x138%x139)+x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x145 = UINT32_MAX;
	int8_t x146 = -63;
	volatile int16_t x147 = INT16_MIN;
	volatile int64_t x148 = 0LL;

	t33 = (x145<=((x146%x147)+x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x149 = INT16_MAX;
	uint64_t x151 = 161LLU;

	t34 = (x149<=((x150%x151)+x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x153 = INT32_MIN;
	int8_t x154 = -1;
	int16_t x155 = -1;
	int32_t t35 = 376810;

	t35 = (x153<=((x154%x155)+x156));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = INT8_MIN;
	static volatile int32_t x158 = INT32_MAX;
	int16_t x159 = INT16_MAX;
	uint64_t x160 = 131050694LLU;

	t36 = (x157<=((x158%x159)+x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = INT16_MIN;
	int64_t x162 = INT64_MIN;
	int64_t x163 = -3435LL;
	static volatile int32_t t37 = -1;

	t37 = (x161<=((x162%x163)+x164));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x165 = 1151930U;
	uint64_t x166 = UINT64_MAX;
	uint8_t x168 = UINT8_MAX;

	t38 = (x165<=((x166%x167)+x168));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x170 = 723U;
	volatile uint64_t x171 = 7389519672268178973LLU;
	int32_t t39 = -112;

	t39 = (x169<=((x170%x171)+x172));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = INT8_MIN;
	static int64_t x174 = INT64_MIN;
	int16_t x175 = -1;
	volatile int32_t t40 = -22241320;

	t40 = (x173<=((x174%x175)+x176));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x178 = 24653788U;
	int16_t x179 = 1;
	int32_t t41 = 28;

	t41 = (x177<=((x178%x179)+x180));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x185 = INT64_MAX;
	uint8_t x186 = 55U;
	volatile int32_t x187 = INT32_MIN;
	volatile uint8_t x188 = 1U;

	t42 = (x185<=((x186%x187)+x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x190 = UINT8_MAX;
	volatile int64_t x191 = 633LL;
	int32_t x192 = -1;
	volatile int32_t t43 = 30084145;

	t43 = (x189<=((x190%x191)+x192));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x193 = -1;
	volatile int16_t x194 = INT16_MIN;
	int16_t x196 = -1;
	int32_t t44 = -205202;

	t44 = (x193<=((x194%x195)+x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x197 = 85U;
	int32_t x198 = -1;
	int32_t x199 = 2175517;
	volatile int32_t t45 = 241036944;

	t45 = (x197<=((x198%x199)+x200));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x201 = INT32_MIN;
	int32_t x202 = INT32_MIN;
	int64_t x204 = INT64_MIN;
	int32_t t46 = 3;

	t46 = (x201<=((x202%x203)+x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x205 = -609;
	int16_t x206 = INT16_MIN;
	volatile int32_t x207 = INT32_MIN;
	static int16_t x208 = 1;
	volatile int32_t t47 = -1;

	t47 = (x205<=((x206%x207)+x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x209 = 45U;
	int64_t x210 = -788LL;
	int8_t x211 = INT8_MIN;
	uint32_t x212 = 109583318U;
	static int32_t t48 = 93;

	t48 = (x209<=((x210%x211)+x212));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x213 = INT16_MIN;
	uint64_t x215 = UINT64_MAX;
	volatile int32_t x216 = -1;
	int32_t t49 = -28734;

	t49 = (x213<=((x214%x215)+x216));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x221 = -9;
	static volatile uint16_t x223 = 22641U;
	int32_t x224 = 2;
	int32_t t50 = -211374420;

	t50 = (x221<=((x222%x223)+x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = INT16_MAX;
	int32_t x226 = INT32_MIN;
	volatile int32_t x227 = -317;
	volatile int16_t x228 = -1;
	int32_t t51 = -11571819;

	t51 = (x225<=((x226%x227)+x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x229 = UINT32_MAX;
	int32_t x230 = INT32_MIN;
	volatile int8_t x231 = INT8_MAX;
	int16_t x232 = -11992;
	static volatile int32_t t52 = -157;

	t52 = (x229<=((x230%x231)+x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x233 = INT8_MIN;
	static int16_t x235 = INT16_MIN;
	int8_t x236 = INT8_MIN;
	static int32_t t53 = -276436;

	t53 = (x233<=((x234%x235)+x236));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x238 = INT8_MAX;
	int32_t x239 = INT32_MAX;
	volatile int16_t x240 = INT16_MIN;
	volatile int32_t t54 = -6472;

	t54 = (x237<=((x238%x239)+x240));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x241 = 6636721287253152446LLU;
	int64_t x242 = -1LL;
	volatile int8_t x243 = INT8_MAX;
	volatile int32_t t55 = 16734303;

	t55 = (x241<=((x242%x243)+x244));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x245 = 42U;
	static int16_t x246 = -1;
	int32_t x247 = INT32_MIN;
	uint64_t x248 = UINT64_MAX;
	static int32_t t56 = -116;

	t56 = (x245<=((x246%x247)+x248));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x250 = 1779742456112LLU;
	volatile int16_t x252 = 186;
	int32_t t57 = 83;

	t57 = (x249<=((x250%x251)+x252));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x253 = INT32_MIN;
	int16_t x254 = INT16_MIN;
	uint32_t x255 = 413768297U;
	static int8_t x256 = INT8_MIN;
	volatile int32_t t58 = -48844476;

	t58 = (x253<=((x254%x255)+x256));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x257 = INT32_MAX;
	volatile uint32_t x258 = 7U;
	uint64_t x259 = 1433561770627790955LLU;
	volatile int8_t x260 = -1;
	int32_t t59 = 1;

	t59 = (x257<=((x258%x259)+x260));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x261 = INT16_MIN;
	volatile int32_t x262 = INT32_MIN;
	uint8_t x263 = UINT8_MAX;
	static volatile int64_t x264 = -1LL;

	t60 = (x261<=((x262%x263)+x264));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x265 = UINT64_MAX;
	volatile int64_t x266 = -1LL;
	volatile int16_t x267 = -3435;
	int64_t x268 = -499425642LL;
	int32_t t61 = -7;

	t61 = (x265<=((x266%x267)+x268));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x269 = INT8_MIN;
	uint64_t x270 = 1510490420LLU;
	static int8_t x271 = 1;
	uint32_t x272 = 5U;
	volatile int32_t t62 = -63761948;

	t62 = (x269<=((x270%x271)+x272));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x274 = -6;
	volatile int16_t x275 = INT16_MIN;
	uint8_t x276 = 0U;
	static volatile int32_t t63 = -107998;

	t63 = (x273<=((x274%x275)+x276));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x277 = INT32_MIN;
	int64_t x278 = 388198380387422LL;
	int64_t x279 = INT64_MIN;
	int32_t x280 = -1;
	volatile int32_t t64 = 0;

	t64 = (x277<=((x278%x279)+x280));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x281 = INT8_MAX;
	volatile int8_t x282 = INT8_MIN;
	int8_t x283 = -1;
	uint8_t x284 = 1U;
	volatile int32_t t65 = 46568;

	t65 = (x281<=((x282%x283)+x284));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x285 = 11071;
	static int8_t x286 = -1;
	int32_t x287 = INT32_MIN;
	uint64_t x288 = 15053059903464638LLU;
	volatile int32_t t66 = -10906;

	t66 = (x285<=((x286%x287)+x288));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x289 = -1;
	volatile uint16_t x291 = 1592U;
	volatile int32_t t67 = 86;

	t67 = (x289<=((x290%x291)+x292));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x294 = 432U;
	int16_t x295 = INT16_MIN;
	int32_t t68 = -147694;

	t68 = (x293<=((x294%x295)+x296));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x297 = -6650;
	int64_t x298 = 251379337LL;
	int32_t x299 = -1;
	int32_t x300 = -1;
	int32_t t69 = -76547073;

	t69 = (x297<=((x298%x299)+x300));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x301 = INT64_MAX;
	int8_t x302 = INT8_MIN;
	int64_t x303 = INT64_MIN;
	volatile int16_t x304 = -156;
	volatile int32_t t70 = -1;

	t70 = (x301<=((x302%x303)+x304));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x305 = 4724809988129856LL;
	int64_t x306 = INT64_MAX;
	int8_t x307 = INT8_MIN;
	volatile int32_t t71 = -1;

	t71 = (x305<=((x306%x307)+x308));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x310 = -3;
	int32_t x311 = 30610;
	uint64_t x312 = UINT64_MAX;
	int32_t t72 = 22915;

	t72 = (x309<=((x310%x311)+x312));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x313 = UINT16_MAX;
	volatile uint32_t x314 = 838184U;
	int8_t x315 = -1;
	uint16_t x316 = UINT16_MAX;
	int32_t t73 = -590664210;

	t73 = (x313<=((x314%x315)+x316));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x317 = 764765254U;
	volatile int16_t x318 = 1;
	int32_t x320 = INT32_MIN;
	int32_t t74 = -4939;

	t74 = (x317<=((x318%x319)+x320));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x321 = INT16_MIN;
	int16_t x322 = INT16_MIN;
	static volatile int32_t x324 = -521523;
	volatile int32_t t75 = -622;

	t75 = (x321<=((x322%x323)+x324));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x325 = INT64_MIN;
	int8_t x326 = 2;
	int32_t x327 = INT32_MAX;
	int64_t x328 = INT64_MIN;
	volatile int32_t t76 = -120522;

	t76 = (x325<=((x326%x327)+x328));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x329 = 14U;
	int64_t x330 = -1727LL;

	t77 = (x329<=((x330%x331)+x332));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x335 = 19;
	volatile uint32_t x336 = 2774135U;
	volatile int32_t t78 = -170976;

	t78 = (x333<=((x334%x335)+x336));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x337 = 435187316U;
	uint64_t x338 = UINT64_MAX;
	uint64_t x339 = UINT64_MAX;
	uint32_t x340 = 612498091U;
	static int32_t t79 = -430846182;

	t79 = (x337<=((x338%x339)+x340));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x341 = -3;
	volatile int32_t x342 = INT32_MAX;
	volatile uint64_t x343 = UINT64_MAX;

	t80 = (x341<=((x342%x343)+x344));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x346 = 299U;
	static int64_t x347 = -172926008LL;

	t81 = (x345<=((x346%x347)+x348));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x349 = -3981776043LL;
	int16_t x350 = 366;
	volatile uint64_t x351 = 912988LLU;
	int16_t x352 = INT16_MIN;
	static volatile int32_t t82 = -692767348;

	t82 = (x349<=((x350%x351)+x352));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x353 = INT64_MIN;
	uint16_t x354 = 0U;
	static volatile uint8_t x356 = UINT8_MAX;
	volatile int32_t t83 = -5146;

	t83 = (x353<=((x354%x355)+x356));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x357 = INT64_MIN;
	volatile int8_t x358 = INT8_MIN;
	uint16_t x359 = 1U;
	int64_t x360 = INT64_MAX;
	volatile int32_t t84 = -4352424;

	t84 = (x357<=((x358%x359)+x360));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x361 = INT16_MIN;
	int64_t x362 = INT64_MIN;
	int64_t x363 = 654037627484LL;
	int16_t x364 = 400;
	volatile int32_t t85 = 0;

	t85 = (x361<=((x362%x363)+x364));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x365 = -1;
	int16_t x366 = -4029;
	int32_t x368 = 3;
	volatile int32_t t86 = 28;

	t86 = (x365<=((x366%x367)+x368));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x369 = INT16_MIN;
	static int16_t x370 = -23;
	static int64_t x371 = INT64_MIN;
	int16_t x372 = -144;
	int32_t t87 = -90594;

	t87 = (x369<=((x370%x371)+x372));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x373 = INT8_MIN;
	static int16_t x374 = INT16_MAX;
	static int8_t x375 = 2;
	uint64_t x376 = 11287LLU;
	static volatile int32_t t88 = 1563973;

	t88 = (x373<=((x374%x375)+x376));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x377 = INT32_MIN;
	static int8_t x378 = INT8_MIN;
	int64_t x379 = INT64_MIN;
	int8_t x380 = -2;
	volatile int32_t t89 = 1;

	t89 = (x377<=((x378%x379)+x380));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x381 = INT64_MAX;
	static int32_t t90 = -62138;

	t90 = (x381<=((x382%x383)+x384));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x390 = 249847317;
	static uint32_t x391 = UINT32_MAX;
	volatile int16_t x392 = -1;
	static volatile int32_t t91 = 120151462;

	t91 = (x389<=((x390%x391)+x392));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x393 = -47;
	static int32_t x394 = -16595;
	uint8_t x396 = 41U;
	volatile int32_t t92 = 32891699;

	t92 = (x393<=((x394%x395)+x396));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x398 = 188988567U;
	int32_t t93 = -3564;

	t93 = (x397<=((x398%x399)+x400));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x401 = INT8_MIN;
	int32_t x402 = -1;
	static int32_t x403 = -1;
	int64_t x404 = -53421837872918LL;
	static volatile int32_t t94 = 1105;

	t94 = (x401<=((x402%x403)+x404));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x405 = INT16_MIN;
	static volatile int32_t x406 = -1;
	static int16_t x407 = 1;
	volatile int32_t t95 = 1368383;

	t95 = (x405<=((x406%x407)+x408));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint32_t x411 = 16592U;
	int32_t x412 = INT32_MAX;
	int32_t t96 = 41;

	t96 = (x409<=((x410%x411)+x412));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x413 = -1;
	volatile uint8_t x416 = 29U;
	volatile int32_t t97 = 968;

	t97 = (x413<=((x414%x415)+x416));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x418 = -211111351418216LL;
	int8_t x419 = -1;
	int32_t x420 = -416403;
	int32_t t98 = -67646388;

	t98 = (x417<=((x418%x419)+x420));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x421 = INT16_MAX;
	uint8_t x422 = UINT8_MAX;
	int16_t x423 = INT16_MAX;
	int32_t x424 = -1;
	int32_t t99 = 10;

	t99 = (x421<=((x422%x423)+x424));

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


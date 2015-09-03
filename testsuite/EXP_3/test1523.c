#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = -1;
static int32_t x17 = INT32_MIN;
int8_t x22 = INT8_MIN;
int8_t x27 = INT8_MIN;
volatile uint32_t x36 = 198U;
uint32_t x45 = 421999188U;
uint64_t x48 = 245LLU;
uint16_t x50 = 2754U;
int64_t x56 = 59685LL;
int32_t t12 = -848;
volatile uint64_t t13 = 235084168LLU;
int32_t x61 = -66826952;
int8_t x67 = -1;
uint16_t x79 = UINT16_MAX;
int16_t x80 = 69;
int8_t x86 = INT8_MAX;
static int32_t t20 = -133806259;
int64_t t23 = -2961161383822LL;
int16_t x104 = -2;
uint64_t x106 = 134868766283LLU;
volatile int16_t x107 = INT16_MAX;
int16_t x112 = -1;
static int8_t x118 = INT8_MIN;
int32_t x119 = INT32_MAX;
uint8_t x120 = 14U;
static int64_t x126 = INT64_MIN;
int32_t x132 = 3640;
uint64_t x140 = 34647181990371195LLU;
int32_t x141 = 0;
uint8_t x144 = UINT8_MAX;
static int16_t x148 = INT16_MIN;
static int8_t x151 = INT8_MIN;
uint16_t x161 = UINT16_MAX;
int32_t x164 = 1929;
static int16_t x166 = INT16_MIN;
uint32_t x168 = UINT32_MAX;
uint8_t x169 = 79U;
uint16_t x173 = 855U;
int16_t x175 = 85;
uint32_t x178 = 425651U;
volatile uint32_t t42 = 36666999U;
int64_t x195 = INT64_MAX;
uint32_t x213 = UINT32_MAX;
volatile int32_t t49 = 50;
volatile int32_t t50 = -449190;
volatile uint32_t t51 = 10714U;
volatile int64_t t52 = 33059404LL;
uint16_t x236 = 2859U;
static volatile int32_t x239 = 231;
static int32_t x240 = -1002408;
static int32_t t54 = -7;
int32_t t55 = -183646127;
int8_t x249 = -1;
uint8_t x250 = UINT8_MAX;
static uint64_t t58 = 318137561399LLU;
static int32_t x259 = INT32_MAX;
uint8_t x260 = 28U;
int32_t t61 = 1;
uint64_t t62 = 1513914290034929LLU;
uint64_t x273 = 183050733LLU;
uint16_t x279 = 41U;
volatile int32_t t64 = 1201769;
int64_t x283 = INT64_MIN;
uint8_t x288 = UINT8_MAX;
static int8_t x293 = INT8_MIN;
int64_t x299 = 0LL;
static uint32_t t68 = 15U;
int64_t x311 = 424956814601852669LL;
uint64_t x312 = UINT64_MAX;
int32_t t71 = 8435486;
int16_t x320 = INT16_MIN;
int32_t t73 = 636;
uint8_t x325 = 29U;
static int64_t x326 = INT64_MIN;
volatile int8_t x328 = INT8_MAX;
int64_t t74 = -178963198155152LL;
uint8_t x333 = 31U;
int64_t t76 = 50LL;
int32_t x338 = -1;
uint16_t x340 = UINT16_MAX;
static volatile int64_t t78 = -9099516624374LL;
volatile int16_t x362 = 227;
uint16_t x364 = UINT16_MAX;
int64_t x367 = -9357474LL;
static int16_t x371 = -1;
int32_t x372 = INT32_MIN;
volatile int8_t x379 = 19;
volatile int32_t t87 = 0;
uint64_t t88 = 31420LLU;
uint64_t t89 = 1648088831454405257LLU;
static uint64_t x393 = 5250913440804LLU;
volatile uint64_t t91 = 66339801515809LLU;
int32_t t92 = 1429;
uint16_t x407 = 130U;
int16_t x430 = -1;
uint32_t x431 = UINT32_MAX;
int64_t x432 = INT64_MIN;
static int16_t x438 = 2400;
int32_t t99 = -2983798;


void f0(void) {
	volatile int16_t x5 = 2382;
	uint64_t x6 = 24191000LLU;
	int16_t x7 = INT16_MAX;
	volatile uint32_t x8 = 341821339U;
	uint64_t t0 = 17737453824660834LLU;

	t0 = ((x5+x6)-(x7<=x8));

	if (t0 != 24193381LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x10 = -1;
	uint32_t x11 = 25889837U;
	volatile uint16_t x12 = 1715U;
	int32_t t1 = 206;

	t1 = ((x9+x10)-(x11<=x12));

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x13 = 3504386176055LLU;
	int16_t x14 = INT16_MAX;
	static volatile uint32_t x15 = 3190U;
	int8_t x16 = INT8_MIN;
	volatile uint64_t t2 = 1756742712539LLU;

	t2 = ((x13+x14)-(x15<=x16));

	if (t2 != 3504386208821LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x18 = 0U;
	volatile int8_t x19 = 0;
	uint32_t x20 = 5468284U;
	static volatile uint32_t t3 = 338U;

	t3 = ((x17+x18)-(x19<=x20));

	if (t3 != 2147483647U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x21 = UINT32_MAX;
	volatile int32_t x23 = -1;
	int16_t x24 = INT16_MIN;
	volatile uint32_t t4 = 18363U;

	t4 = ((x21+x22)-(x23<=x24));

	if (t4 != 4294967167U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = 1010;
	volatile int32_t x26 = -3809298;
	uint8_t x28 = 1U;
	int32_t t5 = -6790;

	t5 = ((x25+x26)-(x27<=x28));

	if (t5 != -3808289) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = INT16_MAX;
	int32_t x30 = -1;
	int16_t x31 = 1398;
	volatile int8_t x32 = INT8_MAX;
	int32_t t6 = -7;

	t6 = ((x29+x30)-(x31<=x32));

	if (t6 != 32766) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MIN;
	volatile uint32_t x34 = 1312587U;
	int16_t x35 = INT16_MIN;
	static volatile int64_t t7 = -3918199662LL;

	t7 = ((x33+x34)-(x35<=x36));

	if (t7 != -9223372036853463221LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	int16_t x38 = INT16_MIN;
	int8_t x39 = INT8_MIN;
	uint32_t x40 = UINT32_MAX;
	volatile int32_t t8 = 57443770;

	t8 = ((x37+x38)-(x39<=x40));

	if (t8 != -32897) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 5U;
	int32_t x42 = INT32_MAX;
	int8_t x43 = 29;
	static int64_t x44 = -1022986968486LL;
	uint32_t t9 = 7U;

	t9 = ((x41+x42)-(x43<=x44));

	if (t9 != 2147483652U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x46 = INT8_MIN;
	int64_t x47 = INT64_MIN;
	uint32_t t10 = 0U;

	t10 = ((x45+x46)-(x47<=x48));

	if (t10 != 421999060U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = 34675641795259LLU;
	int8_t x51 = INT8_MIN;
	int8_t x52 = INT8_MAX;
	uint64_t t11 = 2096029494350LLU;

	t11 = ((x49+x50)-(x51<=x52));

	if (t11 != 34675641798012LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = -4;
	int32_t x54 = -703504526;
	int16_t x55 = INT16_MAX;

	t12 = ((x53+x54)-(x55<=x56));

	if (t12 != -703504531) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = 89U;
	static volatile uint64_t x58 = UINT64_MAX;
	int8_t x59 = INT8_MAX;
	int64_t x60 = -1LL;

	t13 = ((x57+x58)-(x59<=x60));

	if (t13 != 88LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x62 = 14;
	static int64_t x63 = INT64_MIN;
	int8_t x64 = INT8_MAX;
	volatile int32_t t14 = -44;

	t14 = ((x61+x62)-(x63<=x64));

	if (t14 != -66826939) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x65 = UINT8_MAX;
	volatile uint32_t x66 = 1U;
	volatile int8_t x68 = INT8_MIN;
	uint32_t t15 = 543176U;

	t15 = ((x65+x66)-(x67<=x68));

	if (t15 != 256U) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x69 = 7;
	int32_t x70 = INT32_MIN;
	uint8_t x71 = 1U;
	int32_t x72 = INT32_MIN;
	volatile int32_t t16 = -465625982;

	t16 = ((x69+x70)-(x71<=x72));

	if (t16 != -2147483641) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = -5067161LL;
	uint32_t x74 = 18952U;
	int16_t x75 = INT16_MIN;
	uint8_t x76 = 7U;
	static volatile int64_t t17 = -65023527503LL;

	t17 = ((x73+x74)-(x75<=x76));

	if (t17 != -5048210LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x77 = 57;
	uint64_t x78 = 15678921279316LLU;
	volatile uint64_t t18 = 177696LLU;

	t18 = ((x77+x78)-(x79<=x80));

	if (t18 != 15678921279373LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = 12089;
	volatile int16_t x82 = INT16_MIN;
	static int32_t x83 = 3606;
	static uint8_t x84 = 0U;
	static volatile int32_t t19 = 1;

	t19 = ((x81+x82)-(x83<=x84));

	if (t19 != -20679) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MIN;
	int32_t x87 = -2455399;
	int16_t x88 = -1;

	t20 = ((x85+x86)-(x87<=x88));

	if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MIN;
	int32_t x90 = -28;
	uint8_t x91 = 2U;
	uint64_t x92 = UINT64_MAX;
	static int32_t t21 = 1333791;

	t21 = ((x89+x90)-(x91<=x92));

	if (t21 != -32797) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MIN;
	static volatile uint8_t x94 = UINT8_MAX;
	int32_t x95 = INT32_MIN;
	static int16_t x96 = INT16_MIN;
	volatile int32_t t22 = 1;

	t22 = ((x93+x94)-(x95<=x96));

	if (t22 != 126) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = -1LL;
	int32_t x98 = INT32_MIN;
	uint8_t x99 = 19U;
	static int32_t x100 = -1;

	t23 = ((x97+x98)-(x99<=x100));

	if (t23 != -2147483649LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = 14107377680LLU;
	uint32_t x102 = 56U;
	int32_t x103 = INT32_MAX;
	volatile uint64_t t24 = 151869LLU;

	t24 = ((x101+x102)-(x103<=x104));

	if (t24 != 14107377736LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint32_t x105 = UINT32_MAX;
	static uint8_t x108 = 1U;
	static uint64_t t25 = 70302287381030LLU;

	t25 = ((x105+x106)-(x107<=x108));

	if (t25 != 139163733578LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MIN;
	uint8_t x110 = 39U;
	int64_t x111 = INT64_MIN;
	static volatile int32_t t26 = -3505;

	t26 = ((x109+x110)-(x111<=x112));

	if (t26 != -90) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = 439384354LLU;
	uint64_t t27 = 3195034187529059095LLU;

	t27 = ((x117+x118)-(x119<=x120));

	if (t27 != 439384226LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x121 = 3185LLU;
	volatile int16_t x122 = INT16_MIN;
	uint64_t x123 = 3366183147116351LLU;
	static int16_t x124 = -1;
	uint64_t t28 = 1166905157LLU;

	t28 = ((x121+x122)-(x123<=x124));

	if (t28 != 18446744073709522032LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x125 = 7LLU;
	int64_t x127 = 91116389335225LL;
	int32_t x128 = 1004695203;
	volatile uint64_t t29 = 2LLU;

	t29 = ((x125+x126)-(x127<=x128));

	if (t29 != 9223372036854775815LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x129 = 1U;
	static uint64_t x130 = UINT64_MAX;
	int8_t x131 = INT8_MIN;
	uint64_t t30 = UINT64_MAX;

	t30 = ((x129+x130)-(x131<=x132));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = INT64_MIN;
	volatile uint8_t x134 = UINT8_MAX;
	static int32_t x135 = -1;
	int32_t x136 = INT32_MAX;
	volatile int64_t t31 = -55042673LL;

	t31 = ((x133+x134)-(x135<=x136));

	if (t31 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x137 = 31200884U;
	uint8_t x138 = UINT8_MAX;
	int64_t x139 = INT64_MIN;
	volatile uint32_t t32 = 0U;

	t32 = ((x137+x138)-(x139<=x140));

	if (t32 != 31201139U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x142 = INT8_MIN;
	int64_t x143 = -336872732666418892LL;
	static volatile int32_t t33 = -646851;

	t33 = ((x141+x142)-(x143<=x144));

	if (t33 != -129) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = INT64_MIN;
	volatile uint64_t x146 = 120661649028LLU;
	static volatile int64_t x147 = 1562437386810LL;
	uint64_t t34 = 4230653LLU;

	t34 = ((x145+x146)-(x147<=x148));

	if (t34 != 9223372157516424836LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x149 = 49;
	int64_t x150 = -1LL;
	int64_t x152 = INT64_MAX;
	int64_t t35 = 3836449LL;

	t35 = ((x149+x150)-(x151<=x152));

	if (t35 != 47LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x153 = 1U;
	static uint8_t x154 = 117U;
	static volatile uint16_t x155 = 3U;
	uint8_t x156 = UINT8_MAX;
	volatile int32_t t36 = 1978;

	t36 = ((x153+x154)-(x155<=x156));

	if (t36 != 117) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x157 = INT16_MIN;
	volatile int16_t x158 = 1;
	uint32_t x159 = 80042U;
	volatile uint16_t x160 = 12622U;
	volatile int32_t t37 = 25752017;

	t37 = ((x157+x158)-(x159<=x160));

	if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x162 = -18;
	int16_t x163 = INT16_MIN;
	volatile int32_t t38 = -3780;

	t38 = ((x161+x162)-(x163<=x164));

	if (t38 != 65516) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x165 = 70U;
	int32_t x167 = INT32_MIN;
	static int32_t t39 = -373934998;

	t39 = ((x165+x166)-(x167<=x168));

	if (t39 != -32699) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x170 = -1LL;
	static int16_t x171 = -1;
	uint16_t x172 = 12290U;
	volatile int64_t t40 = 2111280LL;

	t40 = ((x169+x170)-(x171<=x172));

	if (t40 != 77LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x174 = INT64_MIN;
	uint16_t x176 = UINT16_MAX;
	int64_t t41 = 135423839306100163LL;

	t41 = ((x173+x174)-(x175<=x176));

	if (t41 != -9223372036854774954LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x177 = INT32_MIN;
	int32_t x179 = 16399;
	int64_t x180 = -279LL;

	t42 = ((x177+x178)-(x179<=x180));

	if (t42 != 2147909299U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x181 = 1U;
	static int8_t x182 = INT8_MAX;
	volatile uint8_t x183 = 0U;
	static int8_t x184 = -10;
	int32_t t43 = -3742;

	t43 = ((x181+x182)-(x183<=x184));

	if (t43 != 128) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x185 = UINT16_MAX;
	uint8_t x186 = 10U;
	int32_t x187 = INT32_MIN;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t44 = -7;

	t44 = ((x185+x186)-(x187<=x188));

	if (t44 != 65544) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x189 = 26U;
	int8_t x190 = INT8_MAX;
	uint32_t x191 = 3797U;
	int32_t x192 = INT32_MIN;
	volatile int32_t t45 = -11686047;

	t45 = ((x189+x190)-(x191<=x192));

	if (t45 != 152) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x193 = UINT8_MAX;
	int8_t x194 = INT8_MIN;
	int64_t x196 = INT64_MIN;
	volatile int32_t t46 = 60325800;

	t46 = ((x193+x194)-(x195<=x196));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x209 = INT8_MIN;
	uint16_t x210 = UINT16_MAX;
	volatile int16_t x211 = 1;
	uint32_t x212 = 1753364593U;
	volatile int32_t t47 = 5538;

	t47 = ((x209+x210)-(x211<=x212));

	if (t47 != 65406) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x214 = 52058LLU;
	static volatile int16_t x215 = -1;
	int8_t x216 = -1;
	uint64_t t48 = 121965896LLU;

	t48 = ((x213+x214)-(x215<=x216));

	if (t48 != 4295019352LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x217 = -31898846;
	uint8_t x218 = 6U;
	int16_t x219 = -73;
	static int16_t x220 = 3196;

	t49 = ((x217+x218)-(x219<=x220));

	if (t49 != -31898841) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x221 = INT16_MAX;
	int16_t x222 = INT16_MIN;
	int8_t x223 = INT8_MIN;
	int8_t x224 = -1;

	t50 = ((x221+x222)-(x223<=x224));

	if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x225 = 8223419U;
	volatile int8_t x226 = -1;
	int16_t x227 = INT16_MIN;
	volatile uint8_t x228 = 7U;

	t51 = ((x225+x226)-(x227<=x228));

	if (t51 != 8223417U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x229 = UINT32_MAX;
	int64_t x230 = -1428258LL;
	uint32_t x231 = 215579U;
	uint16_t x232 = 335U;

	t52 = ((x229+x230)-(x231<=x232));

	if (t52 != 4293539037LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x233 = 473U;
	volatile int64_t x234 = -1LL;
	int64_t x235 = INT64_MIN;
	int64_t t53 = -86763LL;

	t53 = ((x233+x234)-(x235<=x236));

	if (t53 != 471LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x237 = INT8_MIN;
	uint16_t x238 = 99U;

	t54 = ((x237+x238)-(x239<=x240));

	if (t54 != -29) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x241 = 85U;
	volatile int16_t x242 = 820;
	int64_t x243 = INT64_MIN;
	static uint64_t x244 = UINT64_MAX;

	t55 = ((x241+x242)-(x243<=x244));

	if (t55 != 904) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x245 = INT64_MAX;
	int64_t x246 = INT64_MIN;
	uint32_t x247 = 5925251U;
	static int16_t x248 = INT16_MAX;
	volatile int64_t t56 = -3372288705032430LL;

	t56 = ((x245+x246)-(x247<=x248));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x251 = INT8_MIN;
	uint32_t x252 = UINT32_MAX;
	int32_t t57 = 7866212;

	t57 = ((x249+x250)-(x251<=x252));

	if (t57 != 253) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x253 = UINT64_MAX;
	static uint8_t x254 = 1U;
	static volatile int64_t x255 = INT64_MAX;
	uint8_t x256 = 0U;

	t58 = ((x253+x254)-(x255<=x256));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x257 = 1;
	int32_t x258 = -1;
	int32_t t59 = -136330101;

	t59 = ((x257+x258)-(x259<=x260));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x261 = INT64_MIN;
	uint32_t x262 = 116512836U;
	static volatile uint32_t x263 = 736699591U;
	int64_t x264 = -247204357979LL;
	int64_t t60 = -687493LL;

	t60 = ((x261+x262)-(x263<=x264));

	if (t60 != -9223372036738262972LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x265 = UINT8_MAX;
	int16_t x266 = -1;
	int64_t x267 = -1LL;
	int16_t x268 = -3753;

	t61 = ((x265+x266)-(x267<=x268));

	if (t61 != 254) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x269 = UINT64_MAX;
	int16_t x270 = -64;
	static int32_t x271 = INT32_MIN;
	static int64_t x272 = -3LL;

	t62 = ((x269+x270)-(x271<=x272));

	if (t62 != 18446744073709551550LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x274 = 238;
	static int64_t x275 = 25555746LL;
	int16_t x276 = -1;
	uint64_t t63 = 13167LLU;

	t63 = ((x273+x274)-(x275<=x276));

	if (t63 != 183050971LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x277 = INT8_MIN;
	uint16_t x278 = UINT16_MAX;
	uint64_t x280 = UINT64_MAX;

	t64 = ((x277+x278)-(x279<=x280));

	if (t64 != 65406) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = INT16_MIN;
	int32_t x282 = 4093058;
	int16_t x284 = -1;
	int32_t t65 = 5456;

	t65 = ((x281+x282)-(x283<=x284));

	if (t65 != 4060289) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x285 = UINT64_MAX;
	uint64_t x286 = 2185159LLU;
	uint8_t x287 = 8U;
	uint64_t t66 = 14LLU;

	t66 = ((x285+x286)-(x287<=x288));

	if (t66 != 2185157LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x294 = -452492273619LL;
	static volatile uint64_t x295 = 4273295294407LLU;
	int8_t x296 = 9;
	volatile int64_t t67 = 98593821128972LL;

	t67 = ((x293+x294)-(x295<=x296));

	if (t67 != -452492273747LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x297 = 45U;
	volatile int32_t x298 = -1;
	int64_t x300 = INT64_MAX;

	t68 = ((x297+x298)-(x299<=x300));

	if (t68 != 43U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x305 = 29U;
	uint32_t x306 = UINT32_MAX;
	static uint16_t x307 = UINT16_MAX;
	volatile int64_t x308 = 446LL;
	uint32_t t69 = 11776630U;

	t69 = ((x305+x306)-(x307<=x308));

	if (t69 != 28U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x309 = 309LLU;
	static uint8_t x310 = 1U;
	volatile uint64_t t70 = 5508594LLU;

	t70 = ((x309+x310)-(x311<=x312));

	if (t70 != 309LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x313 = 21;
	int32_t x314 = 519681;
	uint32_t x315 = 245U;
	int64_t x316 = INT64_MIN;

	t71 = ((x313+x314)-(x315<=x316));

	if (t71 != 519702) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x317 = -5508094;
	int8_t x318 = -30;
	volatile uint32_t x319 = UINT32_MAX;
	int32_t t72 = -359079;

	t72 = ((x317+x318)-(x319<=x320));

	if (t72 != -5508124) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x321 = INT16_MAX;
	int16_t x322 = INT16_MIN;
	static uint64_t x323 = 37681431LLU;
	int64_t x324 = INT64_MIN;

	t73 = ((x321+x322)-(x323<=x324));

	if (t73 != -2) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x327 = UINT16_MAX;

	t74 = ((x325+x326)-(x327<=x328));

	if (t74 != -9223372036854775779LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x329 = UINT32_MAX;
	volatile int16_t x330 = INT16_MAX;
	int8_t x331 = -1;
	int32_t x332 = INT32_MIN;
	uint32_t t75 = 685U;

	t75 = ((x329+x330)-(x331<=x332));

	if (t75 != 32766U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x334 = 10656603LL;
	volatile int32_t x335 = -1;
	uint64_t x336 = 37836359769LLU;

	t76 = ((x333+x334)-(x335<=x336));

	if (t76 != 10656634LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x337 = INT8_MIN;
	volatile int16_t x339 = INT16_MIN;
	int32_t t77 = -54;

	t77 = ((x337+x338)-(x339<=x340));

	if (t77 != -130) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x341 = -1;
	volatile int64_t x342 = -1LL;
	int8_t x343 = INT8_MIN;
	static uint64_t x344 = 2387194582LLU;

	t78 = ((x341+x342)-(x343<=x344));

	if (t78 != -2LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x345 = INT16_MIN;
	uint32_t x346 = 255487U;
	int16_t x347 = INT16_MIN;
	int8_t x348 = 5;
	uint32_t t79 = 1U;

	t79 = ((x345+x346)-(x347<=x348));

	if (t79 != 222718U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x349 = 100904835U;
	static int32_t x350 = 317634358;
	int64_t x351 = 178560LL;
	static volatile uint64_t x352 = 669411LLU;
	volatile uint32_t t80 = 143412U;

	t80 = ((x349+x350)-(x351<=x352));

	if (t80 != 418539192U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x353 = -1;
	int16_t x354 = -1;
	int16_t x355 = 57;
	uint32_t x356 = 293170U;
	volatile int32_t t81 = -7777;

	t81 = ((x353+x354)-(x355<=x356));

	if (t81 != -3) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x357 = 0U;
	int64_t x358 = 3667212909391933184LL;
	int32_t x359 = INT32_MAX;
	int16_t x360 = -15;
	volatile int64_t t82 = 1684585813LL;

	t82 = ((x357+x358)-(x359<=x360));

	if (t82 != 3667212909391933184LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x361 = 8541U;
	static int16_t x363 = 246;
	volatile int32_t t83 = -2871171;

	t83 = ((x361+x362)-(x363<=x364));

	if (t83 != 8767) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x365 = UINT32_MAX;
	volatile int16_t x366 = INT16_MIN;
	uint64_t x368 = 4LLU;
	static volatile uint32_t t84 = 2U;

	t84 = ((x365+x366)-(x367<=x368));

	if (t84 != 4294934527U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x369 = UINT16_MAX;
	uint32_t x370 = UINT32_MAX;
	uint32_t t85 = 512388U;

	t85 = ((x369+x370)-(x371<=x372));

	if (t85 != 65534U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x373 = INT64_MIN;
	static int32_t x374 = 285;
	int32_t x375 = 118;
	int32_t x376 = -1;
	int64_t t86 = -3992238973LL;

	t86 = ((x373+x374)-(x375<=x376));

	if (t86 != -9223372036854775523LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x377 = INT32_MIN;
	volatile uint16_t x378 = UINT16_MAX;
	static uint64_t x380 = 893554497816LLU;

	t87 = ((x377+x378)-(x379<=x380));

	if (t87 != -2147418114) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x381 = 260904394LLU;
	uint16_t x382 = 872U;
	volatile uint64_t x383 = 1LLU;
	static volatile int64_t x384 = INT64_MIN;

	t88 = ((x381+x382)-(x383<=x384));

	if (t88 != 260905265LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x385 = 26686U;
	uint64_t x386 = 3536LLU;
	static int32_t x387 = -1;
	int64_t x388 = INT64_MIN;

	t89 = ((x385+x386)-(x387<=x388));

	if (t89 != 30222LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x389 = 7;
	int8_t x390 = INT8_MAX;
	uint8_t x391 = 7U;
	int32_t x392 = INT32_MIN;
	volatile int32_t t90 = -218681;

	t90 = ((x389+x390)-(x391<=x392));

	if (t90 != 134) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x394 = INT32_MIN;
	int64_t x395 = 135090380053714280LL;
	uint16_t x396 = 217U;

	t91 = ((x393+x394)-(x395<=x396));

	if (t91 != 5248765957156LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x401 = 25U;
	volatile uint16_t x402 = 450U;
	int8_t x403 = INT8_MIN;
	uint32_t x404 = UINT32_MAX;

	t92 = ((x401+x402)-(x403<=x404));

	if (t92 != 474) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x405 = -3356;
	int64_t x406 = 199493449880LL;
	int64_t x408 = 384736490018055LL;
	int64_t t93 = 18924581356021LL;

	t93 = ((x405+x406)-(x407<=x408));

	if (t93 != 199493446523LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x413 = INT8_MAX;
	volatile int16_t x414 = INT16_MIN;
	static int64_t x415 = INT64_MAX;
	static int16_t x416 = -5;
	int32_t t94 = -353882;

	t94 = ((x413+x414)-(x415<=x416));

	if (t94 != -32641) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x417 = INT32_MAX;
	uint64_t x418 = 6361095063088567896LLU;
	static uint64_t x419 = 90LLU;
	int16_t x420 = INT16_MAX;
	volatile uint64_t t95 = 32001898018LLU;

	t95 = ((x417+x418)-(x419<=x420));

	if (t95 != 6361095065236051542LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x421 = UINT32_MAX;
	static volatile uint64_t x422 = 1390LLU;
	static uint8_t x423 = 38U;
	uint32_t x424 = UINT32_MAX;
	uint64_t t96 = 195652LLU;

	t96 = ((x421+x422)-(x423<=x424));

	if (t96 != 4294968684LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x425 = 17835566105793986LLU;
	int8_t x426 = -1;
	int16_t x427 = 4645;
	int32_t x428 = -1;
	volatile uint64_t t97 = 325520346063461985LLU;

	t97 = ((x425+x426)-(x427<=x428));

	if (t97 != 17835566105793985LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x429 = INT16_MIN;
	int32_t t98 = -5544695;

	t98 = ((x429+x430)-(x431<=x432));

	if (t98 != -32769) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x437 = 0;
	volatile int16_t x439 = 1323;
	volatile int64_t x440 = INT64_MIN;

	t99 = ((x437+x438)-(x439<=x440));

	if (t99 != 2400) { NG(); } else { ; }
	
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


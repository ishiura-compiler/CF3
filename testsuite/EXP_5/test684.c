#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x10 = INT32_MIN;
int64_t x20 = 26624866LL;
volatile int32_t t4 = -1248;
int16_t x32 = 9156;
static int8_t x37 = 0;
int16_t x46 = INT16_MIN;
volatile int8_t x57 = INT8_MAX;
uint16_t x62 = 15604U;
int16_t x64 = -31;
volatile int32_t t13 = -1;
volatile uint32_t x66 = 46587U;
int16_t x70 = INT16_MAX;
static uint32_t x78 = UINT32_MAX;
volatile int8_t x80 = INT8_MIN;
volatile int8_t x82 = -1;
uint32_t x92 = 292705U;
volatile int16_t x100 = INT16_MIN;
int8_t x107 = -1;
int64_t x123 = INT64_MAX;
uint8_t x133 = UINT8_MAX;
volatile int64_t x139 = INT64_MAX;
int32_t x144 = INT32_MIN;
static volatile int32_t t32 = -102182523;
uint32_t x150 = UINT32_MAX;
int16_t x154 = 30;
int32_t x155 = -1;
int8_t x159 = INT8_MIN;
static uint64_t x162 = UINT64_MAX;
volatile int32_t x165 = INT32_MAX;
static uint16_t x166 = UINT16_MAX;
static int8_t x168 = INT8_MAX;
static int32_t x180 = -18;
int64_t x185 = INT64_MIN;
int16_t x188 = -1;
int8_t x191 = INT8_MIN;
uint8_t x195 = 97U;
int64_t x196 = 238LL;
int32_t t45 = 11;
static int8_t x201 = -53;
int32_t x204 = -1;
int16_t x207 = 514;
volatile int32_t t48 = 1;
int32_t x213 = INT32_MAX;
volatile uint64_t x215 = UINT64_MAX;
static int16_t x216 = -1;
volatile int32_t t49 = 177931;
static int8_t x221 = INT8_MIN;
int32_t t51 = 429647;
int64_t x230 = -166291328367LL;
int32_t t53 = 1501;
volatile int64_t x239 = INT64_MAX;
int8_t x241 = 33;
int32_t x244 = INT32_MAX;
volatile uint8_t x245 = 2U;
static uint16_t x246 = UINT16_MAX;
static int32_t x250 = -52;
volatile uint64_t x251 = 166255656864LLU;
int8_t x261 = INT8_MAX;
static int16_t x285 = INT16_MIN;
volatile uint16_t x289 = 22773U;
volatile int8_t x290 = -1;
int32_t t68 = 945156711;
volatile int32_t t71 = 1756198;
int32_t t72 = 2565303;
volatile int64_t x321 = INT64_MIN;
int8_t x324 = -1;
int16_t x325 = INT16_MAX;
int8_t x337 = 0;
uint8_t x342 = 67U;
volatile uint16_t x347 = 11215U;
int8_t x349 = 20;
int32_t x352 = 146735316;
uint64_t x353 = UINT64_MAX;
static uint64_t x359 = 1403573073LLU;
int32_t t84 = 3849;
int32_t x371 = INT32_MAX;
int64_t x376 = -525775282546879LL;
int32_t t86 = -115556;
volatile int32_t x382 = 0;
volatile int8_t x383 = INT8_MIN;
int32_t x390 = INT32_MIN;
volatile int64_t x396 = -19974867251387LL;
uint32_t x399 = 26U;
volatile uint8_t x401 = 8U;
int16_t x403 = INT16_MIN;
volatile int32_t t93 = -563;
static uint8_t x406 = 9U;
int64_t x408 = INT64_MIN;
static int16_t x409 = INT16_MIN;
uint16_t x415 = 3517U;
uint64_t x418 = 213370654699LLU;
volatile int32_t t97 = 140887641;
int64_t x421 = -8LL;
int32_t t98 = 2161859;
int64_t x428 = 26958LL;
volatile int32_t t99 = -1;


void f0(void) {
	volatile int8_t x1 = 9;
	static int32_t x2 = INT32_MAX;
	volatile uint32_t x3 = UINT32_MAX;
	static int32_t x4 = -225306;
	int32_t t0 = 789355;

	t0 = (x1==((x2%x3)+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 1U;
	int8_t x6 = INT8_MIN;
	static int64_t x7 = INT64_MAX;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 2;

	t1 = (x5==((x6%x7)+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	uint64_t x11 = 12LLU;
	uint8_t x12 = 1U;
	volatile int32_t t2 = 7870;

	t2 = (x9==((x10%x11)+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	volatile uint16_t x14 = UINT16_MAX;
	int32_t x15 = 779;
	volatile int16_t x16 = 21;
	volatile int32_t t3 = 3;

	t3 = (x13==((x14%x15)+x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	int16_t x18 = -1;
	int8_t x19 = INT8_MAX;

	t4 = (x17==((x18%x19)+x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x25 = -1;
	volatile uint32_t x26 = UINT32_MAX;
	volatile int64_t x27 = 616632LL;
	static int32_t x28 = -1;
	volatile int32_t t5 = 531744014;

	t5 = (x25==((x26%x27)+x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MAX;
	int64_t x30 = -23612231633166LL;
	volatile uint64_t x31 = UINT64_MAX;
	volatile int32_t t6 = 118;

	t6 = (x29==((x30%x31)+x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -1;
	int8_t x34 = 0;
	int8_t x35 = INT8_MAX;
	static int8_t x36 = 0;
	volatile int32_t t7 = -121744;

	t7 = (x33==((x34%x35)+x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x38 = -1LL;
	volatile int8_t x39 = -1;
	static int64_t x40 = -1LL;
	int32_t t8 = 12523;

	t8 = (x37==((x38%x39)+x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 27118794U;
	uint32_t x42 = 108U;
	int16_t x43 = -1;
	static volatile int64_t x44 = -1LL;
	int32_t t9 = -24340987;

	t9 = (x41==((x42%x43)+x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = 3U;
	int16_t x47 = INT16_MAX;
	uint16_t x48 = 14735U;
	int32_t t10 = -80194224;

	t10 = (x45==((x46%x47)+x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = UINT64_MAX;
	uint32_t x50 = 42U;
	int64_t x51 = 26LL;
	int32_t x52 = INT32_MIN;
	int32_t t11 = 0;

	t11 = (x49==((x50%x51)+x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x58 = 18886999LLU;
	int8_t x59 = 2;
	uint16_t x60 = 29U;
	volatile int32_t t12 = -93;

	t12 = (x57==((x58%x59)+x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = -10863;
	uint16_t x63 = UINT16_MAX;

	t13 = (x61==((x62%x63)+x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x65 = -1;
	static int8_t x67 = -21;
	volatile uint16_t x68 = 1481U;
	volatile int32_t t14 = 607;

	t14 = (x65==((x66%x67)+x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -8585454304LL;
	uint32_t x71 = 125832U;
	uint8_t x72 = 1U;
	volatile int32_t t15 = 1;

	t15 = (x69==((x70%x71)+x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = UINT32_MAX;
	int64_t x79 = INT64_MAX;
	volatile int32_t t16 = -137937398;

	t16 = (x77==((x78%x79)+x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = -3431730;
	static int8_t x83 = INT8_MIN;
	volatile int8_t x84 = 1;
	int32_t t17 = -6;

	t17 = (x81==((x82%x83)+x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x85 = UINT8_MAX;
	int64_t x86 = INT64_MAX;
	volatile int8_t x87 = -1;
	int32_t x88 = -1;
	int32_t t18 = 743772699;

	t18 = (x85==((x86%x87)+x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x89 = -1;
	uint8_t x90 = 13U;
	volatile int64_t x91 = -216564884787LL;
	static volatile int32_t t19 = 181;

	t19 = (x89==((x90%x91)+x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x93 = UINT32_MAX;
	uint64_t x94 = 181402LLU;
	uint8_t x95 = 18U;
	uint64_t x96 = 200460386288LLU;
	int32_t t20 = 102;

	t20 = (x93==((x94%x95)+x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = 33853118939545892LL;
	int64_t x98 = INT64_MIN;
	int64_t x99 = -1LL;
	int32_t t21 = -6726813;

	t21 = (x97==((x98%x99)+x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = -1;
	volatile int8_t x102 = 1;
	uint16_t x103 = 13U;
	int8_t x104 = INT8_MIN;
	static volatile int32_t t22 = 139779;

	t22 = (x101==((x102%x103)+x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x105 = 1183U;
	uint64_t x106 = 32LLU;
	static int16_t x108 = -1;
	volatile int32_t t23 = -51834;

	t23 = (x105==((x106%x107)+x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = INT64_MIN;
	uint32_t x110 = 6773U;
	int16_t x111 = INT16_MAX;
	static int16_t x112 = -1;
	volatile int32_t t24 = 125;

	t24 = (x109==((x110%x111)+x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = -15;
	static uint32_t x114 = 2U;
	static uint8_t x115 = 5U;
	uint8_t x116 = 87U;
	static int32_t t25 = 15538;

	t25 = (x113==((x114%x115)+x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = INT16_MIN;
	volatile int16_t x118 = 3;
	static int16_t x119 = INT16_MAX;
	static uint8_t x120 = 12U;
	int32_t t26 = -124613;

	t26 = (x117==((x118%x119)+x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = -1;
	volatile int8_t x122 = 0;
	static int64_t x124 = -955642036344535188LL;
	volatile int32_t t27 = 2838596;

	t27 = (x121==((x122%x123)+x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x125 = 36498151630305LL;
	int8_t x126 = -1;
	static int16_t x127 = INT16_MAX;
	volatile uint8_t x128 = UINT8_MAX;
	int32_t t28 = 2992;

	t28 = (x125==((x126%x127)+x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x129 = 90LLU;
	int8_t x130 = 14;
	int64_t x131 = 7000700043992606LL;
	int8_t x132 = 1;
	static volatile int32_t t29 = 7;

	t29 = (x129==((x130%x131)+x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x134 = -1LL;
	static int8_t x135 = INT8_MIN;
	static volatile uint8_t x136 = 0U;
	volatile int32_t t30 = 265655444;

	t30 = (x133==((x134%x135)+x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x137 = 16498U;
	volatile uint16_t x138 = UINT16_MAX;
	uint16_t x140 = UINT16_MAX;
	int32_t t31 = 4179109;

	t31 = (x137==((x138%x139)+x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x141 = UINT64_MAX;
	volatile uint32_t x142 = 482U;
	int16_t x143 = -3737;

	t32 = (x141==((x142%x143)+x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x145 = -9;
	int64_t x146 = 2LL;
	uint32_t x147 = 4U;
	static volatile int64_t x148 = INT64_MIN;
	volatile int32_t t33 = 58578;

	t33 = (x145==((x146%x147)+x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = INT32_MAX;
	int64_t x151 = INT64_MIN;
	uint32_t x152 = 63U;
	int32_t t34 = -97;

	t34 = (x149==((x150%x151)+x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x153 = 678474U;
	int32_t x156 = 451326;
	int32_t t35 = 4;

	t35 = (x153==((x154%x155)+x156));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x157 = INT16_MIN;
	int8_t x158 = INT8_MIN;
	uint16_t x160 = 6421U;
	volatile int32_t t36 = 1036330;

	t36 = (x157==((x158%x159)+x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x161 = 35LLU;
	int64_t x163 = INT64_MAX;
	uint32_t x164 = UINT32_MAX;
	int32_t t37 = -13;

	t37 = (x161==((x162%x163)+x164));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x167 = 122608185231328038LLU;
	int32_t t38 = -38088;

	t38 = (x165==((x166%x167)+x168));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x169 = UINT16_MAX;
	uint8_t x170 = 33U;
	volatile int8_t x171 = 3;
	int32_t x172 = INT32_MIN;
	static int32_t t39 = 43971895;

	t39 = (x169==((x170%x171)+x172));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = INT64_MIN;
	volatile int8_t x174 = -1;
	uint64_t x175 = UINT64_MAX;
	uint8_t x176 = 1U;
	volatile int32_t t40 = 26;

	t40 = (x173==((x174%x175)+x176));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = INT32_MIN;
	int64_t x178 = 30950507578883247LL;
	int32_t x179 = 1851;
	static volatile int32_t t41 = -10;

	t41 = (x177==((x178%x179)+x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x186 = UINT32_MAX;
	static int32_t x187 = -11645458;
	static int32_t t42 = -6341956;

	t42 = (x185==((x186%x187)+x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = -62642;
	uint8_t x190 = 0U;
	int16_t x192 = -1;
	volatile int32_t t43 = -3053;

	t43 = (x189==((x190%x191)+x192));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = -1;
	volatile int64_t x194 = -1LL;
	volatile int32_t t44 = 6580597;

	t44 = (x193==((x194%x195)+x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = INT16_MIN;
	volatile uint64_t x198 = 2003289437041116406LLU;
	uint32_t x199 = UINT32_MAX;
	volatile int8_t x200 = 19;

	t45 = (x197==((x198%x199)+x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x202 = UINT8_MAX;
	static volatile int32_t x203 = -369581208;
	volatile int32_t t46 = -4;

	t46 = (x201==((x202%x203)+x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x205 = 60107U;
	int8_t x206 = INT8_MIN;
	uint64_t x208 = 34468700860297072LLU;
	volatile int32_t t47 = -1;

	t47 = (x205==((x206%x207)+x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x209 = -1LL;
	int16_t x210 = -3329;
	uint8_t x211 = 7U;
	static int32_t x212 = -1;

	t48 = (x209==((x210%x211)+x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x214 = 6612256U;

	t49 = (x213==((x214%x215)+x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = INT16_MIN;
	int32_t x218 = 249886943;
	static volatile uint32_t x219 = 52199522U;
	uint32_t x220 = 308U;
	volatile int32_t t50 = -1231;

	t50 = (x217==((x218%x219)+x220));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x222 = UINT8_MAX;
	int32_t x223 = -1383053;
	uint8_t x224 = UINT8_MAX;

	t51 = (x221==((x222%x223)+x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x229 = 30810LL;
	volatile int16_t x231 = -2325;
	static int16_t x232 = -1;
	volatile int32_t t52 = 100007;

	t52 = (x229==((x230%x231)+x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x233 = INT16_MIN;
	uint32_t x234 = UINT32_MAX;
	int64_t x235 = INT64_MAX;
	uint32_t x236 = 1U;

	t53 = (x233==((x234%x235)+x236));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x237 = 0U;
	static int32_t x238 = INT32_MIN;
	volatile int8_t x240 = INT8_MIN;
	int32_t t54 = -1;

	t54 = (x237==((x238%x239)+x240));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x242 = INT32_MIN;
	int16_t x243 = -1;
	static volatile int32_t t55 = 870553;

	t55 = (x241==((x242%x243)+x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x247 = UINT16_MAX;
	volatile uint32_t x248 = UINT32_MAX;
	static volatile int32_t t56 = -3275;

	t56 = (x245==((x246%x247)+x248));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint8_t x249 = 1U;
	int64_t x252 = 911LL;
	int32_t t57 = -81850472;

	t57 = (x249==((x250%x251)+x252));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x253 = 1248168;
	int64_t x254 = INT64_MIN;
	volatile int64_t x255 = -1LL;
	uint64_t x256 = UINT64_MAX;
	volatile int32_t t58 = 57879;

	t58 = (x253==((x254%x255)+x256));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x257 = UINT16_MAX;
	volatile int64_t x258 = INT64_MAX;
	uint16_t x259 = 4U;
	uint64_t x260 = 15LLU;
	volatile int32_t t59 = 1065692263;

	t59 = (x257==((x258%x259)+x260));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x262 = 1;
	volatile int32_t x263 = 668538024;
	uint16_t x264 = 13U;
	int32_t t60 = 3;

	t60 = (x261==((x262%x263)+x264));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = INT16_MAX;
	int64_t x266 = INT64_MIN;
	static int8_t x267 = -1;
	int8_t x268 = 2;
	volatile int32_t t61 = -1;

	t61 = (x265==((x266%x267)+x268));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x269 = INT16_MIN;
	uint32_t x270 = 858611U;
	uint64_t x271 = UINT64_MAX;
	static volatile int8_t x272 = -1;
	volatile int32_t t62 = -1349069;

	t62 = (x269==((x270%x271)+x272));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x273 = 9U;
	int8_t x274 = 1;
	int32_t x275 = 221407;
	uint8_t x276 = 23U;
	volatile int32_t t63 = 96;

	t63 = (x273==((x274%x275)+x276));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x277 = UINT64_MAX;
	uint16_t x278 = UINT16_MAX;
	int16_t x279 = -1;
	static int8_t x280 = -1;
	int32_t t64 = 116864517;

	t64 = (x277==((x278%x279)+x280));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = INT16_MAX;
	uint64_t x282 = 7786414015369LLU;
	int16_t x283 = INT16_MIN;
	int16_t x284 = 7;
	volatile int32_t t65 = -2643;

	t65 = (x281==((x282%x283)+x284));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x286 = UINT32_MAX;
	uint32_t x287 = 653901925U;
	int64_t x288 = -9641311LL;
	volatile int32_t t66 = 5;

	t66 = (x285==((x286%x287)+x288));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x291 = INT16_MIN;
	volatile int8_t x292 = INT8_MIN;
	volatile int32_t t67 = -3499;

	t67 = (x289==((x290%x291)+x292));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x293 = -1;
	volatile int8_t x294 = INT8_MAX;
	int8_t x295 = INT8_MIN;
	int8_t x296 = INT8_MIN;

	t68 = (x293==((x294%x295)+x296));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x297 = 67LLU;
	uint64_t x298 = UINT64_MAX;
	int64_t x299 = INT64_MAX;
	int8_t x300 = INT8_MIN;
	volatile int32_t t69 = -30183703;

	t69 = (x297==((x298%x299)+x300));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x301 = 847U;
	int16_t x302 = INT16_MIN;
	int32_t x303 = 3179;
	volatile uint8_t x304 = 4U;
	volatile int32_t t70 = -113072973;

	t70 = (x301==((x302%x303)+x304));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x305 = INT16_MAX;
	int8_t x306 = INT8_MAX;
	int32_t x307 = -1;
	uint8_t x308 = 3U;

	t71 = (x305==((x306%x307)+x308));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x313 = 51;
	volatile int16_t x314 = INT16_MIN;
	volatile uint32_t x315 = 1162U;
	volatile uint32_t x316 = 343203U;

	t72 = (x313==((x314%x315)+x316));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x322 = -7;
	volatile uint64_t x323 = 14LLU;
	volatile int32_t t73 = -3;

	t73 = (x321==((x322%x323)+x324));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x326 = -1;
	int64_t x327 = INT64_MIN;
	int32_t x328 = 14490163;
	int32_t t74 = 6;

	t74 = (x325==((x326%x327)+x328));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x329 = UINT32_MAX;
	int32_t x330 = INT32_MAX;
	uint64_t x331 = 441525022398519088LLU;
	volatile int8_t x332 = INT8_MIN;
	int32_t t75 = -482219236;

	t75 = (x329==((x330%x331)+x332));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x333 = 15297U;
	static int32_t x334 = INT32_MAX;
	static uint16_t x335 = 120U;
	static volatile int16_t x336 = -385;
	int32_t t76 = 16886;

	t76 = (x333==((x334%x335)+x336));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x338 = 5243783956246214217LLU;
	int16_t x339 = 2;
	int64_t x340 = INT64_MAX;
	volatile int32_t t77 = -2;

	t77 = (x337==((x338%x339)+x340));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x341 = -1;
	volatile int8_t x343 = INT8_MIN;
	int8_t x344 = 15;
	int32_t t78 = 286267316;

	t78 = (x341==((x342%x343)+x344));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x345 = INT32_MIN;
	int32_t x346 = INT32_MIN;
	int32_t x348 = INT32_MAX;
	int32_t t79 = 98583767;

	t79 = (x345==((x346%x347)+x348));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x350 = 65402562U;
	int64_t x351 = INT64_MAX;
	int32_t t80 = -10;

	t80 = (x349==((x350%x351)+x352));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x354 = 181259291LLU;
	static uint16_t x355 = UINT16_MAX;
	static volatile int64_t x356 = -1LL;
	int32_t t81 = 13988565;

	t81 = (x353==((x354%x355)+x356));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x357 = INT32_MAX;
	static int32_t x358 = INT32_MIN;
	int32_t x360 = INT32_MAX;
	static int32_t t82 = 451840;

	t82 = (x357==((x358%x359)+x360));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x361 = INT32_MIN;
	volatile int64_t x362 = INT64_MIN;
	static uint64_t x363 = 92662006760LLU;
	static volatile int8_t x364 = 0;
	volatile int32_t t83 = 1894037;

	t83 = (x361==((x362%x363)+x364));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x365 = -28;
	uint64_t x366 = 30LLU;
	static uint64_t x367 = 526866844324409LLU;
	uint64_t x368 = UINT64_MAX;

	t84 = (x365==((x366%x367)+x368));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x369 = -60;
	int8_t x370 = -1;
	uint8_t x372 = 46U;
	volatile int32_t t85 = -11270;

	t85 = (x369==((x370%x371)+x372));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x373 = 12U;
	uint32_t x374 = 564706U;
	uint64_t x375 = 2LLU;

	t86 = (x373==((x374%x375)+x376));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x377 = -1;
	uint64_t x378 = 46LLU;
	volatile int8_t x379 = INT8_MAX;
	int64_t x380 = 346930253LL;
	volatile int32_t t87 = -1;

	t87 = (x377==((x378%x379)+x380));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x381 = 2U;
	volatile int16_t x384 = -1;
	int32_t t88 = 0;

	t88 = (x381==((x382%x383)+x384));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x385 = 18LLU;
	int64_t x386 = -4441548406890189201LL;
	int8_t x387 = 9;
	int32_t x388 = INT32_MAX;
	static int32_t t89 = 317603815;

	t89 = (x385==((x386%x387)+x388));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x389 = INT32_MIN;
	static uint8_t x391 = 117U;
	uint16_t x392 = 5U;
	int32_t t90 = -2124819;

	t90 = (x389==((x390%x391)+x392));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x393 = -48;
	int8_t x394 = -1;
	volatile int32_t x395 = -61159;
	volatile int32_t t91 = -11878;

	t91 = (x393==((x394%x395)+x396));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x397 = UINT8_MAX;
	uint16_t x398 = UINT16_MAX;
	int8_t x400 = 7;
	static volatile int32_t t92 = 518685965;

	t92 = (x397==((x398%x399)+x400));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x402 = 531628425U;
	uint16_t x404 = UINT16_MAX;

	t93 = (x401==((x402%x403)+x404));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x405 = -1;
	uint64_t x407 = UINT64_MAX;
	volatile int32_t t94 = 696835;

	t94 = (x405==((x406%x407)+x408));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x410 = -1;
	int64_t x411 = 994LL;
	static uint8_t x412 = 7U;
	volatile int32_t t95 = -444337;

	t95 = (x409==((x410%x411)+x412));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x413 = UINT16_MAX;
	static volatile uint32_t x414 = UINT32_MAX;
	int8_t x416 = INT8_MIN;
	volatile int32_t t96 = -44641;

	t96 = (x413==((x414%x415)+x416));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x417 = -1;
	int64_t x419 = -4289338LL;
	int16_t x420 = INT16_MIN;

	t97 = (x417==((x418%x419)+x420));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x422 = -1;
	volatile int8_t x423 = INT8_MIN;
	int8_t x424 = INT8_MIN;

	t98 = (x421==((x422%x423)+x424));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x425 = -880565591959LL;
	uint8_t x426 = 82U;
	static int8_t x427 = -6;

	t99 = (x425==((x426%x427)+x428));

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


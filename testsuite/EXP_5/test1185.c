#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = UINT16_MAX;
int16_t x6 = -1;
int32_t t1 = 635692933;
uint32_t x9 = 27117U;
volatile int16_t x11 = -1;
uint32_t t2 = 2764907U;
int8_t x13 = INT8_MIN;
uint16_t x16 = UINT16_MAX;
uint64_t x26 = 24939236771LLU;
uint8_t x30 = 31U;
int16_t x31 = INT16_MIN;
static int64_t x33 = 125980633121LL;
uint16_t x35 = 21504U;
int16_t x36 = -1;
int64_t x41 = INT64_MAX;
uint8_t x42 = 5U;
static volatile int64_t x43 = INT64_MIN;
uint8_t x44 = UINT8_MAX;
static int16_t x46 = 0;
volatile int64_t x47 = INT64_MIN;
static volatile int8_t x50 = -1;
int32_t t10 = 777811;
int16_t x53 = INT16_MIN;
static int32_t x65 = INT32_MAX;
static uint32_t x69 = UINT32_MAX;
int8_t x75 = -1;
uint32_t x76 = 975873U;
int32_t t17 = 0;
static volatile uint16_t x82 = 96U;
int64_t x85 = -1LL;
int32_t x86 = INT32_MAX;
int32_t x90 = -1;
volatile int8_t x94 = INT8_MAX;
int16_t x97 = INT16_MIN;
volatile int64_t x101 = 1692928054076090LL;
volatile int32_t x103 = -906;
int32_t x106 = 28;
int32_t x107 = INT32_MAX;
static volatile uint8_t x108 = 3U;
static volatile uint32_t x120 = 12U;
uint64_t x122 = 10618729415658LLU;
int32_t x125 = INT32_MAX;
int32_t x126 = -1;
static int32_t x127 = 2;
int8_t x128 = INT8_MAX;
volatile int32_t t28 = 39485025;
volatile uint16_t x130 = 28324U;
int16_t x149 = -1;
int64_t t34 = -446484295LL;
uint64_t x153 = 4010719712571LLU;
volatile uint32_t x154 = 221891U;
static int32_t x155 = 37395424;
int64_t x158 = 6789629350882LL;
int32_t x162 = INT32_MIN;
uint64_t t38 = 58118020801757459LLU;
static int64_t x169 = -1LL;
int8_t x179 = -1;
int64_t x182 = INT64_MIN;
static uint32_t x191 = 30260U;
uint8_t x192 = 67U;
uint8_t x193 = 39U;
uint8_t x195 = 11U;
int16_t x202 = INT16_MIN;
volatile int8_t x210 = -9;
static uint16_t x214 = 2910U;
int64_t x215 = 34672118LL;
static int64_t t48 = -87800909LL;
static int16_t x230 = INT16_MIN;
int16_t x232 = INT16_MIN;
static uint8_t x238 = UINT8_MAX;
volatile int32_t t61 = 1;
int64_t x290 = -1834332LL;
int64_t t65 = 515251481718052LL;
static int32_t x293 = 27670168;
static volatile int32_t t66 = 1;
uint64_t x298 = UINT64_MAX;
int32_t t67 = -3;
int32_t t68 = -894080698;
uint64_t x322 = 252733530316LLU;
volatile int8_t x323 = -14;
static int16_t x329 = INT16_MIN;
uint32_t x336 = UINT32_MAX;
volatile int8_t x337 = INT8_MIN;
uint64_t x338 = 34933337712425375LLU;
static uint16_t x339 = UINT16_MAX;
volatile int16_t x340 = INT16_MIN;
uint16_t x342 = 30U;
int8_t x352 = INT8_MIN;
volatile int32_t t77 = 22410572;
uint32_t x372 = UINT32_MAX;
int64_t t81 = -2007279234LL;
volatile int16_t x378 = INT16_MIN;
static volatile int64_t t82 = -546041557288449LL;
int64_t x396 = INT64_MAX;
int32_t x399 = -1;
int16_t x403 = INT16_MAX;
volatile uint16_t x406 = 380U;
uint8_t x407 = 2U;
volatile uint32_t x413 = 295001U;
uint32_t x414 = UINT32_MAX;
volatile uint32_t x421 = 680055U;
uint64_t x424 = UINT64_MAX;
uint16_t x425 = 2490U;
int64_t x432 = INT64_MAX;
uint32_t x445 = 1606279145U;
volatile int16_t x446 = -17;
int8_t x458 = -1;
uint64_t x468 = 241LLU;


void f0(void) {
	int8_t x1 = INT8_MAX;
	uint64_t x2 = 397419983696926LLU;
	uint16_t x3 = 1U;
	static int64_t x4 = -1LL;
	volatile int64_t t0 = 59LL;

	t0 = (x1-((x2==x3)+x4));

	if (t0 != 128LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x7 = -367677LL;
	int8_t x8 = 3;

	t1 = (x5-((x6==x7)+x8));

	if (t1 != 65532) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = 0;
	uint16_t x12 = 891U;

	t2 = (x9-((x10==x11)+x12));

	if (t2 != 26226U) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = 5988999513453095240LLU;
	int8_t x15 = 43;
	volatile int32_t t3 = 0;

	t3 = (x13-((x14==x15)+x16));

	if (t3 != -65663) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = -1;
	uint32_t x27 = UINT32_MAX;
	int32_t x28 = INT32_MIN;
	volatile int32_t t4 = INT32_MAX;

	t4 = (x25-((x26==x27)+x28));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x29 = INT64_MAX;
	static int32_t x32 = 48397;
	int64_t t5 = 3976212018471892LL;

	t5 = (x29-((x30==x31)+x32));

	if (t5 != 9223372036854727410LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x34 = INT8_MAX;
	static volatile int64_t t6 = 15226926466163723LL;

	t6 = (x33-((x34==x35)+x36));

	if (t6 != 125980633122LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x37 = -1395332;
	int16_t x38 = -366;
	static int64_t x39 = INT64_MIN;
	int32_t x40 = 0;
	volatile int32_t t7 = -182579581;

	t7 = (x37-((x38==x39)+x40));

	if (t7 != -1395332) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t t8 = 15143605648LL;

	t8 = (x41-((x42==x43)+x44));

	if (t8 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = 6597181LL;
	static int32_t x48 = INT32_MIN;
	volatile int64_t t9 = -1592286219306LL;

	t9 = (x45-((x46==x47)+x48));

	if (t9 != 2154080829LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x49 = -1;
	volatile uint32_t x51 = 332992U;
	int16_t x52 = -114;

	t10 = (x49-((x50==x51)+x52));

	if (t10 != 113) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x54 = INT64_MAX;
	static uint16_t x55 = UINT16_MAX;
	uint32_t x56 = 44237U;
	uint32_t t11 = 1946445692U;

	t11 = (x53-((x54==x55)+x56));

	if (t11 != 4294890291U) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x57 = 1;
	volatile uint64_t x58 = UINT64_MAX;
	uint32_t x59 = 6709427U;
	uint16_t x60 = 1U;
	static volatile int32_t t12 = 913;

	t12 = (x57-((x58==x59)+x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x61 = INT64_MIN;
	volatile uint64_t x62 = UINT64_MAX;
	uint64_t x63 = 6621651LLU;
	static int8_t x64 = INT8_MIN;
	static int64_t t13 = 194LL;

	t13 = (x61-((x62==x63)+x64));

	if (t13 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x66 = 431457174550LLU;
	int8_t x67 = 10;
	static uint8_t x68 = UINT8_MAX;
	int32_t t14 = 4955;

	t14 = (x65-((x66==x67)+x68));

	if (t14 != 2147483392) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x70 = UINT64_MAX;
	int64_t x71 = -1LL;
	int32_t x72 = -1;
	uint32_t t15 = UINT32_MAX;

	t15 = (x69-((x70==x71)+x72));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MAX;
	int8_t x74 = INT8_MIN;
	static volatile uint32_t t16 = 1921841U;

	t16 = (x73-((x74==x75)+x76));

	if (t16 != 4293991550U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = UINT16_MAX;
	static uint32_t x78 = UINT32_MAX;
	int32_t x79 = 26;
	volatile int16_t x80 = -117;

	t17 = (x77-((x78==x79)+x80));

	if (t17 != 65652) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x81 = INT8_MAX;
	volatile int8_t x83 = -1;
	static uint16_t x84 = UINT16_MAX;
	static int32_t t18 = 14703072;

	t18 = (x81-((x82==x83)+x84));

	if (t18 != -65408) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x87 = 1182;
	uint64_t x88 = 196032LLU;
	uint64_t t19 = 31193630546LLU;

	t19 = (x85-((x86==x87)+x88));

	if (t19 != 18446744073709355583LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = 4U;
	int16_t x91 = -1;
	volatile uint8_t x92 = 6U;
	static int32_t t20 = 31;

	t20 = (x89-((x90==x91)+x92));

	if (t20 != -3) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x93 = INT8_MIN;
	int16_t x95 = -3341;
	int8_t x96 = INT8_MAX;
	int32_t t21 = 73624135;

	t21 = (x93-((x94==x95)+x96));

	if (t21 != -255) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x98 = INT32_MAX;
	int16_t x99 = INT16_MIN;
	static volatile int64_t x100 = -1LL;
	int64_t t22 = 0LL;

	t22 = (x97-((x98==x99)+x100));

	if (t22 != -32767LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x102 = 0U;
	int32_t x104 = INT32_MIN;
	volatile int64_t t23 = 6719157370609LL;

	t23 = (x101-((x102==x103)+x104));

	if (t23 != 1692930201559738LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x105 = UINT8_MAX;
	int32_t t24 = 4018930;

	t24 = (x105-((x106==x107)+x108));

	if (t24 != 252) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = UINT16_MAX;
	int16_t x114 = INT16_MIN;
	uint16_t x115 = 44U;
	int32_t x116 = -1;
	int32_t t25 = 3872629;

	t25 = (x113-((x114==x115)+x116));

	if (t25 != 65536) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x117 = UINT16_MAX;
	int8_t x118 = -1;
	static uint8_t x119 = UINT8_MAX;
	static uint32_t t26 = 14536U;

	t26 = (x117-((x118==x119)+x120));

	if (t26 != 65523U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x121 = 6U;
	static volatile int32_t x123 = INT32_MIN;
	uint8_t x124 = 98U;
	static uint32_t t27 = 3U;

	t27 = (x121-((x122==x123)+x124));

	if (t27 != 4294967204U) { NG(); } else { ; }
	
}

void f28(void) {


	t28 = (x125-((x126==x127)+x128));

	if (t28 != 2147483520) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x129 = 26U;
	static volatile uint8_t x131 = 99U;
	volatile int16_t x132 = -611;
	static volatile int32_t t29 = -59692;

	t29 = (x129-((x130==x131)+x132));

	if (t29 != 637) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = -14;
	static volatile uint32_t x134 = 58U;
	uint32_t x135 = 43856500U;
	int16_t x136 = -1727;
	int32_t t30 = -10392556;

	t30 = (x133-((x134==x135)+x136));

	if (t30 != 1713) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = INT16_MAX;
	int32_t x138 = INT32_MIN;
	static uint32_t x139 = 38U;
	int8_t x140 = -1;
	volatile int32_t t31 = -1637969;

	t31 = (x137-((x138==x139)+x140));

	if (t31 != 32768) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = INT16_MIN;
	int8_t x142 = -1;
	static uint8_t x143 = 22U;
	volatile int8_t x144 = INT8_MIN;
	static int32_t t32 = -1442;

	t32 = (x141-((x142==x143)+x144));

	if (t32 != -32640) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = -1;
	int64_t x146 = INT64_MIN;
	static int64_t x147 = -447482LL;
	volatile int16_t x148 = INT16_MIN;
	volatile int32_t t33 = -347351321;

	t33 = (x145-((x146==x147)+x148));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x150 = 6;
	int8_t x151 = INT8_MAX;
	volatile int64_t x152 = 4557513LL;

	t34 = (x149-((x150==x151)+x152));

	if (t34 != -4557514LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x156 = 34243242;
	uint64_t t35 = 24444453424035LLU;

	t35 = (x153-((x154==x155)+x156));

	if (t35 != 4010685469329LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = -1;
	uint8_t x159 = 100U;
	volatile uint64_t x160 = 1705550LLU;
	uint64_t t36 = 663452201LLU;

	t36 = (x157-((x158==x159)+x160));

	if (t36 != 18446744073707846065LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x161 = INT8_MIN;
	uint64_t x163 = 16251LLU;
	int32_t x164 = INT32_MIN;
	volatile int32_t t37 = 103051;

	t37 = (x161-((x162==x163)+x164));

	if (t37 != 2147483520) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = INT64_MIN;
	static volatile int64_t x166 = INT64_MAX;
	uint32_t x167 = 274226529U;
	uint64_t x168 = 3333388465LLU;

	t38 = (x165-((x166==x167)+x168));

	if (t38 != 9223372033521387343LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x170 = -2;
	int8_t x171 = INT8_MIN;
	int64_t x172 = 2108883LL;
	volatile int64_t t39 = 6975336130LL;

	t39 = (x169-((x170==x171)+x172));

	if (t39 != -2108884LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x177 = -1;
	uint32_t x178 = 3374U;
	static uint32_t x180 = UINT32_MAX;
	volatile uint32_t t40 = 323751U;

	t40 = (x177-((x178==x179)+x180));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x181 = INT32_MAX;
	volatile uint16_t x183 = 170U;
	int64_t x184 = -7199839223285LL;
	volatile int64_t t41 = -266900359977082689LL;

	t41 = (x181-((x182==x183)+x184));

	if (t41 != 7201986706932LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = -1;
	volatile int64_t x186 = -1LL;
	uint16_t x187 = 2U;
	volatile int32_t x188 = INT32_MIN;
	volatile int32_t t42 = INT32_MAX;

	t42 = (x185-((x186==x187)+x188));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x189 = INT8_MAX;
	static int16_t x190 = -1;
	int32_t t43 = 4139994;

	t43 = (x189-((x190==x191)+x192));

	if (t43 != 60) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x194 = 145U;
	uint8_t x196 = 48U;
	volatile int32_t t44 = 2;

	t44 = (x193-((x194==x195)+x196));

	if (t44 != -9) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x201 = INT64_MIN;
	static int16_t x203 = -1;
	static volatile int32_t x204 = -1;
	static int64_t t45 = -875327684LL;

	t45 = (x201-((x202==x203)+x204));

	if (t45 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = -40LL;
	static int8_t x206 = -1;
	int32_t x207 = INT32_MIN;
	uint16_t x208 = 3U;
	int64_t t46 = 1780525037LL;

	t46 = (x205-((x206==x207)+x208));

	if (t46 != -43LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x209 = INT8_MIN;
	volatile int16_t x211 = -1;
	int64_t x212 = 52LL;
	volatile int64_t t47 = -129364016LL;

	t47 = (x209-((x210==x211)+x212));

	if (t47 != -180LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = -60124679572107LL;
	int32_t x216 = INT32_MIN;

	t48 = (x213-((x214==x215)+x216));

	if (t48 != -60122532088459LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x221 = INT64_MIN;
	int8_t x222 = INT8_MIN;
	int8_t x223 = INT8_MIN;
	uint64_t x224 = UINT64_MAX;
	uint64_t t49 = 2063682426064437LLU;

	t49 = (x221-((x222==x223)+x224));

	if (t49 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x229 = 3912U;
	uint32_t x231 = 222013U;
	volatile int32_t t50 = -4;

	t50 = (x229-((x230==x231)+x232));

	if (t50 != 36680) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x233 = 56760549U;
	int64_t x234 = 548010171973LL;
	static int8_t x235 = 0;
	volatile uint32_t x236 = 15400202U;
	uint32_t t51 = 58U;

	t51 = (x233-((x234==x235)+x236));

	if (t51 != 41360347U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x237 = 1438;
	uint16_t x239 = UINT16_MAX;
	volatile int8_t x240 = -21;
	static volatile int32_t t52 = -2;

	t52 = (x237-((x238==x239)+x240));

	if (t52 != 1459) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = 1;
	uint8_t x242 = 3U;
	int64_t x243 = INT64_MIN;
	volatile int64_t x244 = 277LL;
	static volatile int64_t t53 = -2693381914747266526LL;

	t53 = (x241-((x242==x243)+x244));

	if (t53 != -276LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x245 = 266425466900433LLU;
	uint16_t x246 = UINT16_MAX;
	int32_t x247 = INT32_MIN;
	int16_t x248 = INT16_MIN;
	static uint64_t t54 = 1511LLU;

	t54 = (x245-((x246==x247)+x248));

	if (t54 != 266425466933201LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x249 = INT8_MIN;
	int8_t x250 = 1;
	int8_t x251 = 1;
	int16_t x252 = INT16_MIN;
	volatile int32_t t55 = 11100834;

	t55 = (x249-((x250==x251)+x252));

	if (t55 != 32639) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x253 = -1LL;
	static volatile int16_t x254 = INT16_MIN;
	int16_t x255 = INT16_MIN;
	int32_t x256 = INT32_MIN;
	int64_t t56 = -1934162LL;

	t56 = (x253-((x254==x255)+x256));

	if (t56 != 2147483646LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x257 = 0LLU;
	int32_t x258 = INT32_MIN;
	int32_t x259 = INT32_MAX;
	volatile int8_t x260 = 1;
	uint64_t t57 = UINT64_MAX;

	t57 = (x257-((x258==x259)+x260));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x261 = -1;
	uint32_t x262 = 8783725U;
	int16_t x263 = -1;
	uint8_t x264 = 58U;
	int32_t t58 = -2009217;

	t58 = (x261-((x262==x263)+x264));

	if (t58 != -59) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x265 = 1U;
	int32_t x266 = INT32_MIN;
	int16_t x267 = INT16_MAX;
	int32_t x268 = 485236;
	uint32_t t59 = 0U;

	t59 = (x265-((x266==x267)+x268));

	if (t59 != 4294482061U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x269 = 1563U;
	uint16_t x270 = 79U;
	static int8_t x271 = INT8_MIN;
	uint64_t x272 = 3266895408LLU;
	uint64_t t60 = 1005372534652254713LLU;

	t60 = (x269-((x270==x271)+x272));

	if (t60 != 18446744070442657771LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x273 = -1;
	static int32_t x274 = -1;
	int32_t x275 = -1;
	uint8_t x276 = UINT8_MAX;

	t61 = (x273-((x274==x275)+x276));

	if (t61 != -257) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x277 = -1;
	int64_t x278 = INT64_MIN;
	uint64_t x279 = 63110LLU;
	uint64_t x280 = 39LLU;
	volatile uint64_t t62 = 488401286414711LLU;

	t62 = (x277-((x278==x279)+x280));

	if (t62 != 18446744073709551576LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x281 = 3;
	static uint16_t x282 = UINT16_MAX;
	volatile int16_t x283 = INT16_MAX;
	volatile int64_t x284 = 20350501LL;
	int64_t t63 = -76058505624086823LL;

	t63 = (x281-((x282==x283)+x284));

	if (t63 != -20350498LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x285 = INT8_MIN;
	volatile int64_t x286 = INT64_MIN;
	uint16_t x287 = UINT16_MAX;
	static int32_t x288 = INT32_MIN;
	volatile int32_t t64 = 89920142;

	t64 = (x285-((x286==x287)+x288));

	if (t64 != 2147483520) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x289 = 1297226922668736796LL;
	uint8_t x291 = UINT8_MAX;
	int8_t x292 = INT8_MIN;

	t65 = (x289-((x290==x291)+x292));

	if (t65 != 1297226922668736924LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x294 = -1;
	volatile int16_t x295 = INT16_MIN;
	int32_t x296 = INT32_MAX;

	t66 = (x293-((x294==x295)+x296));

	if (t66 != -2119813479) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x297 = -1;
	uint32_t x299 = UINT32_MAX;
	int16_t x300 = INT16_MIN;

	t67 = (x297-((x298==x299)+x300));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x301 = UINT16_MAX;
	int8_t x302 = 0;
	int32_t x303 = INT32_MIN;
	int32_t x304 = -1;

	t68 = (x301-((x302==x303)+x304));

	if (t68 != 65536) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x309 = 8798U;
	static uint64_t x310 = UINT64_MAX;
	volatile uint8_t x311 = 47U;
	int64_t x312 = -1LL;
	int64_t t69 = 604401957572LL;

	t69 = (x309-((x310==x311)+x312));

	if (t69 != 8799LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x313 = INT16_MAX;
	int16_t x314 = INT16_MIN;
	static int8_t x315 = 43;
	int8_t x316 = -25;
	int32_t t70 = 11972;

	t70 = (x313-((x314==x315)+x316));

	if (t70 != 32792) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x321 = 17005239453876LLU;
	int64_t x324 = -1LL;
	volatile uint64_t t71 = 68243LLU;

	t71 = (x321-((x322==x323)+x324));

	if (t71 != 17005239453877LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x325 = 252781685;
	volatile int64_t x326 = 3747049127LL;
	volatile int64_t x327 = -1LL;
	uint64_t x328 = 1533LLU;
	static uint64_t t72 = 3565219LLU;

	t72 = (x325-((x326==x327)+x328));

	if (t72 != 252780152LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x330 = 2;
	int32_t x331 = INT32_MAX;
	int16_t x332 = INT16_MIN;
	static int32_t t73 = -34755;

	t73 = (x329-((x330==x331)+x332));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x333 = UINT8_MAX;
	static int16_t x334 = 21;
	int8_t x335 = -1;
	volatile uint32_t t74 = 1018U;

	t74 = (x333-((x334==x335)+x336));

	if (t74 != 256U) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t t75 = -2437;

	t75 = (x337-((x338==x339)+x340));

	if (t75 != 32640) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x341 = -1;
	static int64_t x343 = INT64_MAX;
	volatile int32_t x344 = 5433753;
	int32_t t76 = -1207118;

	t76 = (x341-((x342==x343)+x344));

	if (t76 != -5433754) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x349 = INT8_MIN;
	int8_t x350 = INT8_MIN;
	uint8_t x351 = 7U;

	t77 = (x349-((x350==x351)+x352));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x353 = UINT16_MAX;
	volatile int64_t x354 = -5284366694829LL;
	int8_t x355 = -1;
	uint8_t x356 = 6U;
	volatile int32_t t78 = -124743;

	t78 = (x353-((x354==x355)+x356));

	if (t78 != 65529) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x357 = -1055312881LL;
	uint32_t x358 = UINT32_MAX;
	uint32_t x359 = 58U;
	int64_t x360 = INT64_MIN;
	int64_t t79 = 803355981325369139LL;

	t79 = (x357-((x358==x359)+x360));

	if (t79 != 9223372035799462927LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x361 = -1;
	uint64_t x362 = 98627629LLU;
	uint16_t x363 = 83U;
	static int16_t x364 = -1;
	static volatile int32_t t80 = -637292499;

	t80 = (x361-((x362==x363)+x364));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x369 = -1LL;
	uint32_t x370 = 118938U;
	static int16_t x371 = -1;

	t81 = (x369-((x370==x371)+x372));

	if (t81 != -4294967296LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x377 = 32U;
	uint8_t x379 = 50U;
	static int64_t x380 = -2190181799613515LL;

	t82 = (x377-((x378==x379)+x380));

	if (t82 != 2190181799613547LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x385 = -1LL;
	volatile uint16_t x386 = 243U;
	static int64_t x387 = -1229302654364LL;
	int64_t x388 = INT64_MIN;
	volatile int64_t t83 = INT64_MAX;

	t83 = (x385-((x386==x387)+x388));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x389 = 499070736U;
	volatile int32_t x390 = -712975332;
	volatile int64_t x391 = -21467141704LL;
	int16_t x392 = -50;
	static volatile uint32_t t84 = 988854365U;

	t84 = (x389-((x390==x391)+x392));

	if (t84 != 499070786U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x393 = INT8_MAX;
	volatile int16_t x394 = INT16_MAX;
	int64_t x395 = INT64_MIN;
	volatile int64_t t85 = 1989635231LL;

	t85 = (x393-((x394==x395)+x396));

	if (t85 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x397 = INT16_MIN;
	uint64_t x398 = 30012LLU;
	uint8_t x400 = 33U;
	static volatile int32_t t86 = -677;

	t86 = (x397-((x398==x399)+x400));

	if (t86 != -32801) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x401 = 308463930LLU;
	uint16_t x402 = 3U;
	volatile int8_t x404 = -1;
	uint64_t t87 = 14970195LLU;

	t87 = (x401-((x402==x403)+x404));

	if (t87 != 308463931LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x405 = -1;
	int64_t x408 = INT64_MIN;
	volatile int64_t t88 = INT64_MAX;

	t88 = (x405-((x406==x407)+x408));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x415 = 382;
	volatile uint8_t x416 = 0U;
	volatile uint32_t t89 = 1531024817U;

	t89 = (x413-((x414==x415)+x416));

	if (t89 != 295001U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x417 = INT32_MAX;
	int32_t x418 = INT32_MIN;
	uint32_t x419 = 43U;
	static int64_t x420 = -16120542210942216LL;
	int64_t t90 = -15423642390586877LL;

	t90 = (x417-((x418==x419)+x420));

	if (t90 != 16120544358425863LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint32_t x422 = 2U;
	int32_t x423 = INT32_MIN;
	volatile uint64_t t91 = 2859955LLU;

	t91 = (x421-((x422==x423)+x424));

	if (t91 != 680056LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x426 = 14049;
	uint16_t x427 = 849U;
	int16_t x428 = 11;
	static volatile int32_t t92 = -2;

	t92 = (x425-((x426==x427)+x428));

	if (t92 != 2479) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x429 = 128815636572128LL;
	volatile int32_t x430 = -1;
	uint16_t x431 = 0U;
	volatile int64_t t93 = -44316136LL;

	t93 = (x429-((x430==x431)+x432));

	if (t93 != -9223243221218203679LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x437 = -1;
	static int16_t x438 = INT16_MIN;
	int64_t x439 = INT64_MIN;
	int8_t x440 = INT8_MIN;
	static int32_t t94 = -652270220;

	t94 = (x437-((x438==x439)+x440));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x441 = INT64_MIN;
	int16_t x442 = -1521;
	uint64_t x443 = 737LLU;
	int64_t x444 = -1LL;
	static int64_t t95 = 99541482LL;

	t95 = (x441-((x442==x443)+x444));

	if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x447 = -1;
	uint8_t x448 = 21U;
	volatile uint32_t t96 = 3111354U;

	t96 = (x445-((x446==x447)+x448));

	if (t96 != 1606279124U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x449 = 6151LLU;
	int8_t x450 = -1;
	static int32_t x451 = INT32_MIN;
	int8_t x452 = -1;
	uint64_t t97 = 75946LLU;

	t97 = (x449-((x450==x451)+x452));

	if (t97 != 6152LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x457 = INT8_MIN;
	volatile uint64_t x459 = UINT64_MAX;
	uint32_t x460 = 57U;
	volatile uint32_t t98 = 77649U;

	t98 = (x457-((x458==x459)+x460));

	if (t98 != 4294967110U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x465 = 929U;
	uint64_t x466 = 737486848176350594LLU;
	int64_t x467 = 1063800276LL;
	static uint64_t t99 = 6703426714718128454LLU;

	t99 = (x465-((x466==x467)+x468));

	if (t99 != 688LLU) { NG(); } else { ; }
	
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


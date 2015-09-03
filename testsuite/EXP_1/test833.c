#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x1 = UINT16_MAX;
static int64_t x10 = INT64_MAX;
int16_t x13 = -2592;
int8_t x14 = -1;
static uint64_t x15 = 2244000LLU;
int32_t x22 = 507086639;
static volatile int16_t x25 = -227;
static volatile uint64_t t6 = 29086LLU;
uint16_t x31 = UINT16_MAX;
int64_t t7 = -153623895946326LL;
int32_t x43 = -1914;
int32_t x48 = INT32_MIN;
volatile int8_t x50 = INT8_MAX;
int64_t t13 = 870LL;
volatile int8_t x62 = INT8_MAX;
int8_t x63 = 8;
int64_t t15 = 0LL;
volatile uint64_t t17 = 328451899424LLU;
int8_t x81 = INT8_MIN;
static uint32_t x86 = 7U;
volatile int8_t x97 = 8;
volatile int64_t t22 = -6214LL;
volatile int32_t x124 = INT32_MIN;
static int64_t t24 = 428LL;
volatile uint32_t x130 = UINT32_MAX;
int8_t x131 = INT8_MIN;
int16_t x133 = INT16_MIN;
static int16_t x137 = 631;
static int64_t x138 = INT64_MIN;
int8_t x140 = 1;
static volatile int16_t x142 = INT16_MIN;
volatile uint32_t t30 = 1749016U;
int64_t x157 = -1LL;
static int64_t x159 = INT64_MIN;
uint64_t x166 = 59345618LLU;
int64_t x167 = INT64_MIN;
int64_t x173 = -5797962LL;
uint8_t x175 = UINT8_MAX;
uint64_t x177 = UINT64_MAX;
int16_t x178 = INT16_MIN;
uint8_t x179 = 39U;
int64_t x182 = 24792928230782188LL;
uint64_t t39 = 29965825LLU;
int32_t x190 = -255;
volatile uint8_t x194 = UINT8_MAX;
static uint64_t x216 = 245734265LLU;
static uint64_t x226 = 712531110626596LLU;
uint8_t x233 = 10U;
int16_t x234 = -90;
int32_t t50 = -348798202;
int64_t x242 = 8348178313585963LL;
uint64_t x246 = 5LLU;
int8_t x251 = -1;
uint64_t t54 = 32263LLU;
int64_t x254 = INT64_MAX;
uint8_t x255 = UINT8_MAX;
volatile int64_t t56 = 162256871LL;
uint16_t x267 = 0U;
uint64_t t58 = 1476732128LLU;
int64_t x272 = INT64_MIN;
int32_t x273 = -1;
static int16_t x279 = -13436;
uint64_t x282 = 984005062LLU;
int64_t x286 = 11120778LL;
uint32_t x287 = UINT32_MAX;
volatile int32_t x289 = INT32_MIN;
static volatile int64_t x290 = INT64_MIN;
int32_t x291 = -1;
int64_t x301 = -1LL;
int32_t x302 = -1;
int64_t x306 = INT64_MIN;
static volatile int64_t t67 = 1LL;
volatile int32_t x315 = -70;
uint64_t t69 = 14346LLU;
uint64_t x317 = UINT64_MAX;
int64_t x321 = INT64_MIN;
int16_t x328 = 0;
volatile int32_t t72 = 4392067;
volatile int64_t t73 = -2LL;
int64_t t77 = 876544266515607LL;
volatile int32_t x353 = -203;
static int16_t x356 = 1658;
int16_t x359 = 3533;
static volatile uint32_t t81 = 5U;
int8_t x369 = -1;
volatile uint64_t x372 = 2232LLU;
volatile uint64_t t82 = 382604503704LLU;
int64_t x380 = -1LL;
uint64_t x381 = 6217377646387LLU;
volatile int8_t x387 = INT8_MIN;
static volatile uint8_t x396 = UINT8_MAX;
int64_t x399 = -961305571322184804LL;
volatile uint64_t t90 = 16384369346935777LLU;
uint64_t x416 = 7416509778818017LLU;
static volatile int32_t x425 = INT32_MIN;
int16_t x442 = -408;
static int32_t t99 = 59;


void f0(void) {
	uint32_t x2 = 7781581U;
	int64_t x3 = -1LL;
	int64_t x4 = -1LL;
	static volatile int64_t t0 = 1LL;

	t0 = (((x1%x2)^x3)+x4);

	if (t0 != -65537LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int16_t x6 = INT16_MAX;
	static int8_t x7 = INT8_MAX;
	int64_t x8 = INT64_MIN;
	volatile int64_t t1 = 182LL;

	t1 = (((x5%x6)^x7)+x8);

	if (t1 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	volatile int32_t x11 = 466;
	volatile int64_t x12 = INT64_MIN;
	volatile uint64_t t2 = 1766291715486488518LLU;

	t2 = (((x9%x10)^x11)+x12);

	if (t2 != 9223372036854776275LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x16 = INT64_MAX;
	static uint64_t t3 = 18LLU;

	t3 = (((x13%x14)^x15)+x16);

	if (t3 != 9223372036857019807LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -212;
	int16_t x18 = -1;
	int32_t x19 = 29168;
	int16_t x20 = INT16_MAX;
	volatile int32_t t4 = 17;

	t4 = (((x17%x18)^x19)+x20);

	if (t4 != 61935) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	static int8_t x23 = INT8_MIN;
	int32_t x24 = 694;
	int32_t t5 = 47;

	t5 = (((x21%x22)^x23)+x24);

	if (t5 != 694) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x26 = 10;
	volatile int32_t x27 = INT32_MIN;
	static uint64_t x28 = 447511381222443256LLU;

	t6 = (((x25%x26)^x27)+x28);

	if (t6 != 447511383369926897LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 97618070305LL;
	int32_t x30 = INT32_MAX;
	static uint8_t x32 = 0U;

	t7 = (((x29%x30)^x31)+x32);

	if (t7 != 981300401LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	volatile int32_t x34 = INT32_MIN;
	int16_t x35 = INT16_MIN;
	uint8_t x36 = 19U;
	int64_t t8 = -161498609888LL;

	t8 = (((x33%x34)^x35)+x36);

	if (t8 != -32749LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = 55LL;
	volatile uint64_t x38 = UINT64_MAX;
	uint64_t x39 = 5631LLU;
	uint32_t x40 = UINT32_MAX;
	uint64_t t9 = 318297LLU;

	t9 = (((x37%x38)^x39)+x40);

	if (t9 != 4294972871LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = INT32_MAX;
	int64_t x42 = -1LL;
	static volatile int32_t x44 = -1;
	static int64_t t10 = 8746885118104136LL;

	t10 = (((x41%x42)^x43)+x44);

	if (t10 != -1915LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int64_t x46 = INT64_MAX;
	static int8_t x47 = -7;
	volatile int64_t t11 = -382106892840LL;

	t11 = (((x45%x46)^x47)+x48);

	if (t11 != -2147483642LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	int64_t x51 = -37646929587725045LL;
	volatile uint16_t x52 = 7U;
	int64_t t12 = -13LL;

	t12 = (((x49%x50)^x51)+x52);

	if (t12 != 37646929587725051LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int8_t x54 = -1;
	volatile uint16_t x55 = UINT16_MAX;
	volatile int8_t x56 = -1;

	t13 = (((x53%x54)^x55)+x56);

	if (t13 != 65534LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 42U;
	uint8_t x58 = UINT8_MAX;
	static int8_t x59 = INT8_MIN;
	static int64_t x60 = 18149643860785062LL;
	volatile int64_t t14 = 3682167087437259135LL;

	t14 = (((x57%x58)^x59)+x60);

	if (t14 != 18149643860784976LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	volatile int64_t x64 = 239805128600184322LL;

	t15 = (((x61%x62)^x63)+x64);

	if (t15 != 239805128600184329LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x69 = INT8_MIN;
	int8_t x70 = INT8_MIN;
	uint32_t x71 = 96194U;
	static int16_t x72 = INT16_MIN;
	volatile uint32_t t16 = 7617U;

	t16 = (((x69%x70)^x71)+x72);

	if (t16 != 63426U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x73 = INT32_MIN;
	int32_t x74 = INT32_MAX;
	uint8_t x75 = 62U;
	uint64_t x76 = 31354LLU;

	t17 = (((x73%x74)^x75)+x76);

	if (t17 != 31291LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MIN;
	int8_t x78 = INT8_MAX;
	static int32_t x79 = INT32_MIN;
	volatile uint32_t x80 = 688746U;
	uint32_t t18 = 4U;

	t18 = (((x77%x78)^x79)+x80);

	if (t18 != 2148172393U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x82 = 544780760LLU;
	int64_t x83 = INT64_MIN;
	int16_t x84 = -1;
	volatile uint64_t t19 = 6676532LLU;

	t19 = (((x81%x82)^x83)+x84);

	if (t19 != 9223372036854822375LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x85 = INT8_MAX;
	int8_t x87 = -41;
	int32_t x88 = 502074;
	uint32_t t20 = 828U;

	t20 = (((x85%x86)^x87)+x88);

	if (t20 != 502032U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = 730412512815529LL;
	int32_t x90 = 11;
	static int8_t x91 = INT8_MAX;
	int64_t x92 = -2017123LL;
	volatile int64_t t21 = -6103827935555315LL;

	t21 = (((x89%x90)^x91)+x92);

	if (t21 != -2017001LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x98 = 715281767717568524LL;
	volatile int32_t x99 = -1;
	uint32_t x100 = UINT32_MAX;

	t22 = (((x97%x98)^x99)+x100);

	if (t22 != 4294967286LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x113 = INT16_MAX;
	int8_t x114 = INT8_MAX;
	int16_t x115 = INT16_MAX;
	int8_t x116 = 7;
	static volatile int32_t t23 = -1385127;

	t23 = (((x113%x114)^x115)+x116);

	if (t23 != 32773) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x121 = INT32_MIN;
	int32_t x122 = 20170;
	int64_t x123 = INT64_MIN;

	t24 = (((x121%x122)^x123)+x124);

	if (t24 != 9223372034707288242LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x125 = 13;
	volatile int32_t x126 = -1;
	int8_t x127 = 1;
	int8_t x128 = 0;
	volatile int32_t t25 = -21531;

	t25 = (((x125%x126)^x127)+x128);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x129 = INT16_MIN;
	uint64_t x132 = UINT64_MAX;
	static uint64_t t26 = 713673361588126995LLU;

	t26 = (((x129%x130)^x131)+x132);

	if (t26 != 32639LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x134 = UINT8_MAX;
	int8_t x135 = INT8_MAX;
	volatile uint64_t x136 = 49LLU;
	volatile uint64_t t27 = 883LLU;

	t27 = (((x133%x134)^x135)+x136);

	if (t27 != 48LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x139 = 507U;
	int64_t t28 = 6923LL;

	t28 = (((x137%x138)^x139)+x140);

	if (t28 != 909LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x141 = 21U;
	static volatile int16_t x143 = -1;
	static int8_t x144 = -1;
	int32_t t29 = 13;

	t29 = (((x141%x142)^x143)+x144);

	if (t29 != -23) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x145 = INT16_MIN;
	uint8_t x146 = 1U;
	volatile uint32_t x147 = UINT32_MAX;
	static int8_t x148 = 12;

	t30 = (((x145%x146)^x147)+x148);

	if (t30 != 11U) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x149 = INT64_MIN;
	static int8_t x150 = INT8_MAX;
	int8_t x151 = INT8_MIN;
	volatile int64_t x152 = INT64_MIN;
	volatile int64_t t31 = -47178712799603489LL;

	t31 = (((x149%x150)^x151)+x152);

	if (t31 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x158 = UINT8_MAX;
	int8_t x160 = INT8_MIN;
	int64_t t32 = -3324017668703542565LL;

	t32 = (((x157%x158)^x159)+x160);

	if (t32 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x161 = 1U;
	int64_t x162 = INT64_MAX;
	int64_t x163 = -16222LL;
	uint8_t x164 = 0U;
	static int64_t t33 = 10153LL;

	t33 = (((x161%x162)^x163)+x164);

	if (t33 != -16221LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x165 = INT32_MIN;
	int8_t x168 = 1;
	static volatile uint64_t t34 = 4309455317515768LLU;

	t34 = (((x165%x166)^x167)+x168);

	if (t34 != 9223372036894339867LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x169 = 1960014361782LLU;
	volatile int8_t x170 = INT8_MIN;
	static uint32_t x171 = UINT32_MAX;
	uint64_t x172 = 5565213071LLU;
	static volatile uint64_t t35 = 4683226891160LLU;

	t35 = (((x169%x170)^x171)+x172);

	if (t35 != 1966855992536LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x174 = INT16_MIN;
	static uint64_t x176 = 447160769589432483LLU;
	uint64_t t36 = 131588LLU;

	t36 = (((x173%x174)^x175)+x176);

	if (t36 != 447160769589401580LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x180 = INT32_MIN;
	uint64_t t37 = 107309702967LLU;

	t37 = (((x177%x178)^x179)+x180);

	if (t37 != 18446744071562100696LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x181 = -1817LL;
	static volatile int32_t x183 = 545;
	int8_t x184 = 1;
	int64_t t38 = 775LL;

	t38 = (((x181%x182)^x183)+x184);

	if (t38 != -1337LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x185 = UINT64_MAX;
	int32_t x186 = INT32_MIN;
	int64_t x187 = -37492663466LL;
	int64_t x188 = INT64_MIN;

	t39 = (((x185%x186)^x187)+x188);

	if (t39 != 9223371999185511593LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x189 = 18621174121077609LLU;
	int32_t x191 = 907467632;
	uint16_t x192 = UINT16_MAX;
	volatile uint64_t t40 = 7957067250LLU;

	t40 = (((x189%x190)^x191)+x192);

	if (t40 != 18621173283700760LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x193 = -1LL;
	static uint64_t x195 = 1002LLU;
	int16_t x196 = INT16_MIN;
	uint64_t t41 = 36812LLU;

	t41 = (((x193%x194)^x195)+x196);

	if (t41 != 18446744073709517845LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x197 = 1852U;
	int32_t x198 = 128052;
	static int8_t x199 = 8;
	int64_t x200 = -8LL;
	volatile int64_t t42 = 24LL;

	t42 = (((x197%x198)^x199)+x200);

	if (t42 != 1836LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x201 = 26U;
	int32_t x202 = INT32_MIN;
	uint8_t x203 = 2U;
	int16_t x204 = INT16_MIN;
	int32_t t43 = -734022;

	t43 = (((x201%x202)^x203)+x204);

	if (t43 != -32744) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x205 = UINT8_MAX;
	static int64_t x206 = -264887678249384LL;
	uint8_t x207 = UINT8_MAX;
	int16_t x208 = -1;
	int64_t t44 = 29596856555351993LL;

	t44 = (((x205%x206)^x207)+x208);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x209 = INT16_MIN;
	static int8_t x210 = 1;
	uint8_t x211 = UINT8_MAX;
	volatile uint64_t x212 = 8917799228LLU;
	volatile uint64_t t45 = 452LLU;

	t45 = (((x209%x210)^x211)+x212);

	if (t45 != 8917799483LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x213 = 0U;
	int16_t x214 = -1;
	int32_t x215 = 872975;
	static volatile uint64_t t46 = 442325462350931810LLU;

	t46 = (((x213%x214)^x215)+x216);

	if (t46 != 246607240LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x217 = 122292;
	volatile uint8_t x218 = 4U;
	int8_t x219 = INT8_MIN;
	int32_t x220 = -1;
	static volatile int32_t t47 = -32322;

	t47 = (((x217%x218)^x219)+x220);

	if (t47 != -129) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x221 = -1;
	uint32_t x222 = 296986U;
	static uint8_t x223 = 65U;
	int8_t x224 = -3;
	volatile uint32_t t48 = 100222864U;

	t48 = (((x221%x222)^x223)+x224);

	if (t48 != 252681U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x225 = -1;
	uint16_t x227 = 1U;
	uint64_t x228 = 115736923521LLU;
	static volatile uint64_t t49 = 51727992104LLU;

	t49 = (((x225%x226)^x227)+x228);

	if (t49 != 26266434531291LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x235 = UINT8_MAX;
	int16_t x236 = 7;

	t50 = (((x233%x234)^x235)+x236);

	if (t50 != 252) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x237 = 0U;
	int8_t x238 = INT8_MIN;
	uint16_t x239 = 3U;
	static int64_t x240 = INT64_MIN;
	int64_t t51 = 135483160109285LL;

	t51 = (((x237%x238)^x239)+x240);

	if (t51 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x241 = -62;
	int32_t x243 = -1;
	static int16_t x244 = -1;
	int64_t t52 = 1438691365101LL;

	t52 = (((x241%x242)^x243)+x244);

	if (t52 != 60LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x245 = UINT32_MAX;
	int32_t x247 = -49353;
	int16_t x248 = 3;
	volatile uint64_t t53 = 9013338495680608LLU;

	t53 = (((x245%x246)^x247)+x248);

	if (t53 != 18446744073709502266LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x249 = INT32_MIN;
	uint64_t x250 = 779390129231LLU;
	volatile int8_t x252 = -1;

	t54 = (((x249%x250)^x251)+x252);

	if (t54 != 18446743532839665533LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x253 = -1LL;
	uint16_t x256 = 157U;
	int64_t t55 = 291LL;

	t55 = (((x253%x254)^x255)+x256);

	if (t55 != -99LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x257 = -450408462025355LL;
	int32_t x258 = -1;
	volatile uint32_t x259 = 20359U;
	int16_t x260 = INT16_MIN;

	t56 = (((x257%x258)^x259)+x260);

	if (t56 != -12409LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x261 = UINT32_MAX;
	uint16_t x262 = 1U;
	int32_t x263 = INT32_MAX;
	int8_t x264 = -1;
	volatile uint32_t t57 = 30U;

	t57 = (((x261%x262)^x263)+x264);

	if (t57 != 2147483646U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x265 = 113125LLU;
	int16_t x266 = -1;
	int8_t x268 = 11;

	t58 = (((x265%x266)^x267)+x268);

	if (t58 != 113136LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x269 = UINT64_MAX;
	uint64_t x270 = UINT64_MAX;
	volatile int64_t x271 = 1971LL;
	static volatile uint64_t t59 = 2194831268122494LLU;

	t59 = (((x269%x270)^x271)+x272);

	if (t59 != 9223372036854777779LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x274 = 511334425LLU;
	int32_t x275 = INT32_MIN;
	static int64_t x276 = -3037108912918976957LL;
	volatile uint64_t t60 = 538555244665106LLU;

	t60 = (((x273%x274)^x275)+x276);

	if (t60 != 15409635158751731551LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x277 = INT16_MIN;
	int16_t x278 = INT16_MIN;
	int8_t x280 = -8;
	static int32_t t61 = 6783670;

	t61 = (((x277%x278)^x279)+x280);

	if (t61 != -13444) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x281 = 6025263226LL;
	int8_t x283 = -3;
	static uint64_t x284 = UINT64_MAX;
	uint64_t t62 = 3568915793LLU;

	t62 = (((x281%x282)^x283)+x284);

	if (t62 != 18446744073588318762LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x285 = INT64_MAX;
	int32_t x288 = 430;
	int64_t t63 = 6793LL;

	t63 = (((x285%x286)^x287)+x288);

	if (t63 != 4290511134LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x292 = UINT16_MAX;
	int64_t t64 = -66532563LL;

	t64 = (((x289%x290)^x291)+x292);

	if (t64 != 2147549182LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x293 = INT16_MIN;
	int16_t x294 = INT16_MIN;
	int8_t x295 = -1;
	static int16_t x296 = INT16_MIN;
	static int32_t t65 = -4234270;

	t65 = (((x293%x294)^x295)+x296);

	if (t65 != -32769) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x303 = UINT16_MAX;
	uint64_t x304 = 63927LLU;
	volatile uint64_t t66 = 12522LLU;

	t66 = (((x301%x302)^x303)+x304);

	if (t66 != 129462LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x305 = INT8_MAX;
	int16_t x307 = -7917;
	static int32_t x308 = -1;

	t67 = (((x305%x306)^x307)+x308);

	if (t67 != -7829LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x309 = -5;
	uint32_t x310 = 72630290U;
	volatile uint16_t x311 = 8465U;
	int16_t x312 = -840;
	volatile uint32_t t68 = 7459575U;

	t68 = (((x309%x310)^x311)+x312);

	if (t68 != 9770876U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x313 = 94945LL;
	static uint8_t x314 = 79U;
	uint64_t x316 = 502LLU;

	t69 = (((x313%x314)^x315)+x316);

	if (t69 != 494LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x318 = -1LL;
	uint16_t x319 = 3975U;
	volatile int64_t x320 = INT64_MAX;
	uint64_t t70 = 168227806858941LLU;

	t70 = (((x317%x318)^x319)+x320);

	if (t70 != 9223372036854779782LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x322 = -1;
	int16_t x323 = INT16_MIN;
	int32_t x324 = 6202189;
	int64_t t71 = 4064LL;

	t71 = (((x321%x322)^x323)+x324);

	if (t71 != 6169421LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x325 = INT32_MAX;
	int8_t x326 = INT8_MIN;
	static volatile int8_t x327 = -26;

	t72 = (((x325%x326)^x327)+x328);

	if (t72 != -103) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x329 = INT64_MIN;
	int8_t x330 = 1;
	int32_t x331 = INT32_MAX;
	volatile int8_t x332 = -1;

	t73 = (((x329%x330)^x331)+x332);

	if (t73 != 2147483646LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x333 = 119794311632LLU;
	int8_t x334 = INT8_MAX;
	int8_t x335 = 7;
	int8_t x336 = INT8_MAX;
	static uint64_t t74 = 14851187524LLU;

	t74 = (((x333%x334)^x335)+x336);

	if (t74 != 174LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x337 = INT64_MAX;
	int32_t x338 = -1;
	int32_t x339 = 1876;
	uint16_t x340 = UINT16_MAX;
	static volatile int64_t t75 = 197547214LL;

	t75 = (((x337%x338)^x339)+x340);

	if (t75 != 67411LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x341 = INT16_MIN;
	uint16_t x342 = 1895U;
	int16_t x343 = INT16_MAX;
	int16_t x344 = INT16_MIN;
	int32_t t76 = -5;

	t76 = (((x341%x342)^x343)+x344);

	if (t76 != -64984) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x345 = -1;
	uint8_t x346 = 4U;
	int8_t x347 = INT8_MIN;
	int64_t x348 = -1LL;

	t77 = (((x345%x346)^x347)+x348);

	if (t77 != 126LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x349 = INT32_MIN;
	int16_t x350 = -1;
	int16_t x351 = INT16_MIN;
	uint8_t x352 = 35U;
	static int32_t t78 = 2;

	t78 = (((x349%x350)^x351)+x352);

	if (t78 != -32733) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x354 = INT8_MIN;
	volatile int64_t x355 = 49LL;
	static volatile int64_t t79 = -6773618674852LL;

	t79 = (((x353%x354)^x355)+x356);

	if (t79 != 1534LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x357 = INT64_MAX;
	volatile int8_t x358 = INT8_MIN;
	int64_t x360 = 3708834098052522LL;
	volatile int64_t t80 = -6LL;

	t80 = (((x357%x358)^x359)+x360);

	if (t80 != 3708834098056028LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x361 = 218808613U;
	static int32_t x362 = INT32_MIN;
	int16_t x363 = -8;
	static int16_t x364 = -1;

	t81 = (((x361%x362)^x363)+x364);

	if (t81 != 4076158684U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x370 = INT32_MIN;
	volatile int8_t x371 = -1;

	t82 = (((x369%x370)^x371)+x372);

	if (t82 != 2232LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x377 = 2128546700U;
	uint8_t x378 = 22U;
	static uint8_t x379 = 119U;
	volatile int64_t t83 = 3402457LL;

	t83 = (((x377%x378)^x379)+x380);

	if (t83 != 102LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x382 = INT64_MIN;
	uint16_t x383 = UINT16_MAX;
	static uint64_t x384 = 7638692019874477LLU;
	volatile uint64_t t84 = 287LLU;

	t84 = (((x381%x382)^x383)+x384);

	if (t84 != 7644909397582713LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x385 = INT32_MIN;
	uint16_t x386 = 1616U;
	int16_t x388 = INT16_MAX;
	volatile int32_t t85 = -4478;

	t85 = (((x385%x386)^x387)+x388);

	if (t85 != 33279) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x389 = 99077627382574927LLU;
	int8_t x390 = INT8_MIN;
	volatile uint16_t x391 = 0U;
	static uint32_t x392 = UINT32_MAX;
	volatile uint64_t t86 = 2249122531667412LLU;

	t86 = (((x389%x390)^x391)+x392);

	if (t86 != 99077631677542222LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x393 = -7107254410891LL;
	uint8_t x394 = UINT8_MAX;
	int32_t x395 = 246;
	int64_t t87 = -291LL;

	t87 = (((x393%x394)^x395)+x396);

	if (t87 != 5LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x397 = 56;
	uint16_t x398 = 631U;
	int32_t x400 = -1;
	int64_t t88 = 22570826604LL;

	t88 = (((x397%x398)^x399)+x400);

	if (t88 != -961305571322184797LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x401 = UINT16_MAX;
	volatile int64_t x402 = INT64_MAX;
	static volatile int16_t x403 = INT16_MAX;
	uint16_t x404 = 5159U;
	static volatile int64_t t89 = -4406298781691591LL;

	t89 = (((x401%x402)^x403)+x404);

	if (t89 != 37927LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x405 = UINT8_MAX;
	int32_t x406 = -1;
	volatile uint64_t x407 = UINT64_MAX;
	uint8_t x408 = 31U;

	t90 = (((x405%x406)^x407)+x408);

	if (t90 != 30LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x413 = -1;
	uint8_t x414 = 43U;
	volatile int8_t x415 = -3;
	uint64_t t91 = 1568266460588511616LLU;

	t91 = (((x413%x414)^x415)+x416);

	if (t91 != 7416509778818019LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x417 = -1LL;
	static volatile int64_t x418 = -18317900494829328LL;
	static uint32_t x419 = 118U;
	uint64_t x420 = UINT64_MAX;
	uint64_t t92 = 4829907817610763LLU;

	t92 = (((x417%x418)^x419)+x420);

	if (t92 != 18446744073709551496LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x421 = INT32_MIN;
	int64_t x422 = INT64_MIN;
	static int64_t x423 = INT64_MIN;
	uint32_t x424 = 5U;
	static int64_t t93 = 22384LL;

	t93 = (((x421%x422)^x423)+x424);

	if (t93 != 9223372034707292165LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x426 = INT8_MIN;
	int8_t x427 = INT8_MIN;
	int64_t x428 = INT64_MAX;
	volatile int64_t t94 = 1543789LL;

	t94 = (((x425%x426)^x427)+x428);

	if (t94 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x429 = 1811044753069424LLU;
	uint16_t x430 = 1U;
	volatile int16_t x431 = INT16_MIN;
	uint64_t x432 = 89646785003944294LLU;
	uint64_t t95 = 27026LLU;

	t95 = (((x429%x430)^x431)+x432);

	if (t95 != 89646785003911526LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x433 = -1;
	static int64_t x434 = INT64_MIN;
	volatile int16_t x435 = INT16_MIN;
	static int16_t x436 = 0;
	volatile int64_t t96 = 2193LL;

	t96 = (((x433%x434)^x435)+x436);

	if (t96 != 32767LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x437 = 3U;
	static int64_t x438 = INT64_MAX;
	uint32_t x439 = 29654844U;
	int8_t x440 = INT8_MIN;
	static int64_t t97 = -13492551067771LL;

	t97 = (((x437%x438)^x439)+x440);

	if (t97 != 29654719LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x441 = 96039LL;
	static int64_t x443 = -870233577634220740LL;
	static uint32_t x444 = 376749178U;
	static int64_t t98 = -14302051027582731LL;

	t98 = (((x441%x442)^x443)+x444);

	if (t98 != -870233577257471459LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x445 = UINT8_MAX;
	volatile int32_t x446 = -1;
	uint16_t x447 = 2502U;
	static uint8_t x448 = 9U;

	t99 = (((x445%x446)^x447)+x448);

	if (t99 != 2511) { NG(); } else { ; }
	
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


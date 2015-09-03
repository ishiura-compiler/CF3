#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x11 = -1;
volatile int64_t t2 = 6220408474968LL;
int32_t x14 = -96;
int64_t x17 = 28531157552833570LL;
int8_t x24 = 15;
volatile int8_t x25 = -5;
static volatile uint64_t t9 = 142975217234099981LLU;
uint64_t t10 = 355871LLU;
int32_t x45 = INT32_MIN;
int16_t x51 = INT16_MIN;
int64_t t13 = -78143LL;
volatile int64_t x63 = INT64_MIN;
int64_t t15 = -41079LL;
int64_t x79 = INT64_MIN;
int16_t x80 = INT16_MAX;
volatile int64_t t19 = -1893442364824488442LL;
volatile int64_t x86 = INT64_MIN;
static int32_t x95 = INT32_MIN;
uint16_t x98 = 144U;
static volatile uint8_t x99 = 110U;
volatile int8_t x106 = INT8_MAX;
volatile uint64_t x112 = 129374975LLU;
volatile int32_t x116 = 244385;
int16_t x117 = 0;
volatile int16_t x121 = -1;
int8_t x124 = 30;
int64_t x125 = INT64_MIN;
uint32_t x127 = 1594U;
int8_t x130 = -1;
int8_t x132 = -1;
int64_t t31 = 4324447105191559673LL;
volatile int16_t x135 = INT16_MAX;
uint16_t x144 = 2U;
volatile uint32_t t34 = 2746U;
static volatile int16_t x148 = INT16_MAX;
volatile int64_t t35 = -2100838506467LL;
int8_t x153 = INT8_MAX;
int8_t x163 = INT8_MIN;
uint64_t x174 = UINT64_MAX;
static uint64_t t42 = 249540790265168163LLU;
uint64_t x179 = 20LLU;
static volatile int32_t t46 = -13188033;
int8_t x195 = 1;
int8_t x199 = 1;
int64_t x200 = INT64_MIN;
uint64_t t48 = 7340322101296724142LLU;
int64_t x221 = -1LL;
int64_t x241 = 634885460LL;
int64_t x247 = INT64_MIN;
static uint32_t x257 = 151U;
int64_t x262 = -29862LL;
uint16_t x270 = UINT16_MAX;
int16_t x277 = INT16_MIN;
uint64_t x278 = 7831326532LLU;
volatile uint32_t x284 = UINT32_MAX;
volatile int16_t x294 = INT16_MIN;
volatile int64_t t71 = -93773746LL;
int16_t x299 = -1;
static int16_t x301 = -8158;
int64_t x305 = INT64_MIN;
volatile int16_t x306 = -1;
volatile int64_t t74 = 1LL;
int16_t x315 = 1;
int64_t x320 = 1LL;
volatile int64_t t77 = -82905LL;
uint16_t x323 = UINT16_MAX;
volatile uint32_t x327 = 1889536U;
volatile uint64_t x328 = 1062662LLU;
volatile int64_t x331 = -1LL;
static int32_t x337 = -38241828;
int8_t x340 = INT8_MIN;
static uint16_t x343 = UINT16_MAX;
int32_t x346 = INT32_MAX;
int32_t x351 = INT32_MAX;
int16_t x352 = INT16_MIN;
static volatile uint64_t x356 = UINT64_MAX;
static volatile uint32_t t86 = 3U;
volatile uint64_t x361 = 982997460LLU;
uint8_t x363 = 15U;
static int8_t x376 = INT8_MAX;
volatile int64_t t90 = 70LL;
int64_t t91 = -73943992LL;
static int8_t x397 = -1;
uint32_t x405 = 41895766U;
int16_t x412 = INT16_MIN;


void f0(void) {
	int8_t x1 = -1;
	uint8_t x2 = 105U;
	int64_t x3 = INT64_MIN;
	static volatile int8_t x4 = -3;
	static int64_t t0 = 101LL;

	t0 = (x1&(x2/(x3|x4)));

	if (t0 != -35LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int8_t x6 = -1;
	uint16_t x7 = 1U;
	int16_t x8 = INT16_MAX;
	int32_t t1 = 0;

	t1 = (x5&(x6/(x7|x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -1;
	int64_t x10 = -1LL;
	volatile uint16_t x12 = 680U;

	t2 = (x9&(x10/(x11|x12)));

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	int16_t x15 = INT16_MAX;
	uint32_t x16 = UINT32_MAX;
	uint32_t t3 = 77721550U;

	t3 = (x13&(x14/(x15|x16)));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = 297129475;
	static int64_t x19 = 402556265492LL;
	uint8_t x20 = 4U;
	static volatile int64_t t4 = 1LL;

	t4 = (x17&(x18/(x19|x20)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	int32_t x22 = INT32_MIN;
	volatile int16_t x23 = 968;
	static volatile int32_t t5 = 33147614;

	t5 = (x21&(x22/(x23|x24)));

	if (t5 != -2202547) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = 13U;
	static int64_t x27 = INT64_MAX;
	volatile int64_t x28 = -1LL;
	volatile int64_t t6 = 2661531966050LL;

	t6 = (x25&(x26/(x27|x28)));

	if (t6 != -13LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 123U;
	int32_t x30 = INT32_MIN;
	int8_t x31 = INT8_MIN;
	int64_t x32 = INT64_MIN;
	int64_t t7 = -497112091627LL;

	t7 = (x29&(x30/(x31|x32)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	int8_t x34 = -6;
	int8_t x35 = -1;
	volatile uint64_t x36 = 90790237628550LLU;
	volatile uint64_t t8 = 5497287994LLU;

	t8 = (x33&(x34/(x35|x36)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	static int8_t x38 = -1;
	int32_t x39 = INT32_MIN;
	volatile uint64_t x40 = UINT64_MAX;

	t9 = (x37&(x38/(x39|x40)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	uint16_t x42 = UINT16_MAX;
	int64_t x43 = -3644LL;
	uint64_t x44 = 152LLU;

	t10 = (x41&(x42/(x43|x44)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = INT16_MIN;
	volatile int8_t x47 = INT8_MIN;
	uint32_t x48 = UINT32_MAX;
	uint32_t t11 = 26406U;

	t11 = (x45&(x46/(x47|x48)));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	volatile uint64_t x50 = UINT64_MAX;
	uint64_t x52 = 604165LLU;
	uint64_t t12 = 2912302023823LLU;

	t12 = (x49&(x50/(x51|x52)));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = -1;
	volatile int64_t x54 = -41LL;
	uint32_t x55 = 11059566U;
	int64_t x56 = INT64_MAX;

	t13 = (x53&(x54/(x55|x56)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	uint64_t x58 = 1LLU;
	volatile uint32_t x59 = 115965U;
	int8_t x60 = INT8_MIN;
	volatile uint64_t t14 = 79603805LLU;

	t14 = (x57&(x58/(x59|x60)));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 768122U;
	int64_t x62 = INT64_MIN;
	volatile int64_t x64 = INT64_MIN;

	t15 = (x61&(x62/(x63|x64)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 41U;
	uint32_t x66 = 33946909U;
	volatile uint64_t x67 = 124244608LLU;
	static int8_t x68 = INT8_MIN;
	volatile uint64_t t16 = 1098611143282639LLU;

	t16 = (x65&(x66/(x67|x68)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	int8_t x70 = INT8_MAX;
	static int8_t x71 = -1;
	int16_t x72 = 4;
	uint32_t t17 = 259941U;

	t17 = (x69&(x70/(x71|x72)));

	if (t17 != 4294967169U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	uint16_t x74 = 1U;
	static uint16_t x75 = 1520U;
	int64_t x76 = INT64_MIN;
	volatile int64_t t18 = 2257702400123311105LL;

	t18 = (x73&(x74/(x75|x76)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int16_t x78 = -3;

	t19 = (x77&(x78/(x79|x80)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	uint32_t x82 = UINT32_MAX;
	uint32_t x83 = 2478U;
	int8_t x84 = INT8_MAX;
	uint32_t t20 = 212U;

	t20 = (x81&(x82/(x83|x84)));

	if (t20 != 1678377U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -1LL;
	uint64_t x87 = UINT64_MAX;
	uint8_t x88 = 14U;
	static uint64_t t21 = 395951880753874LLU;

	t21 = (x85&(x86/(x87|x88)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int8_t x90 = -1;
	volatile int64_t x91 = INT64_MAX;
	int16_t x92 = -19;
	int64_t t22 = -300LL;

	t22 = (x89&(x90/(x91|x92)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x93 = 7315804U;
	uint64_t x94 = UINT64_MAX;
	int64_t x96 = INT64_MIN;
	volatile uint64_t t23 = 2571538606LLU;

	t23 = (x93&(x94/(x95|x96)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = 1;
	volatile int64_t x100 = -765LL;
	int64_t t24 = 1107259823386593948LL;

	t24 = (x97&(x98/(x99|x100)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x105 = UINT32_MAX;
	int8_t x107 = INT8_MIN;
	int32_t x108 = -69;
	volatile uint32_t t25 = UINT32_MAX;

	t25 = (x105&(x106/(x107|x108)));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = 457LL;
	uint8_t x110 = 6U;
	volatile int32_t x111 = INT32_MIN;
	volatile uint64_t t26 = 81833255LLU;

	t26 = (x109&(x110/(x111|x112)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x113 = INT16_MIN;
	static int8_t x114 = 4;
	static int16_t x115 = INT16_MIN;
	volatile int32_t t27 = 10;

	t27 = (x113&(x114/(x115|x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x118 = INT32_MAX;
	int64_t x119 = INT64_MAX;
	uint16_t x120 = UINT16_MAX;
	int64_t t28 = -2736LL;

	t28 = (x117&(x118/(x119|x120)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x122 = UINT16_MAX;
	int8_t x123 = INT8_MAX;
	volatile int32_t t29 = 32;

	t29 = (x121&(x122/(x123|x124)));

	if (t29 != 516) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x126 = -1LL;
	int16_t x128 = 8;
	int64_t t30 = -892047232LL;

	t30 = (x125&(x126/(x127|x128)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = INT64_MIN;
	static int64_t x131 = -1LL;

	t31 = (x129&(x130/(x131|x132)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x133 = -139958LL;
	volatile int16_t x134 = INT16_MIN;
	int32_t x136 = INT32_MIN;
	int64_t t32 = 10616314LL;

	t32 = (x133&(x134/(x135|x136)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x137 = 4826U;
	static uint64_t x138 = 5961902LLU;
	volatile int16_t x139 = -1;
	int32_t x140 = 759221965;
	volatile uint64_t t33 = 1885730225181LLU;

	t33 = (x137&(x138/(x139|x140)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x141 = UINT32_MAX;
	static uint8_t x142 = 0U;
	volatile uint32_t x143 = 376175U;

	t34 = (x141&(x142/(x143|x144)));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = UINT32_MAX;
	uint32_t x146 = UINT32_MAX;
	int64_t x147 = -14LL;

	t35 = (x145&(x146/(x147|x148)));

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = INT32_MIN;
	int64_t x150 = INT64_MIN;
	volatile uint64_t x151 = UINT64_MAX;
	uint16_t x152 = 29U;
	volatile uint64_t t36 = 293337103804LLU;

	t36 = (x149&(x150/(x151|x152)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x154 = 4945U;
	volatile int64_t x155 = 31813602558LL;
	int16_t x156 = -1;
	int64_t t37 = 10700224LL;

	t37 = (x153&(x154/(x155|x156)));

	if (t37 != 47LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x157 = INT16_MIN;
	int16_t x158 = -23;
	static volatile int64_t x159 = INT64_MIN;
	uint8_t x160 = UINT8_MAX;
	static int64_t t38 = 12120LL;

	t38 = (x157&(x158/(x159|x160)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = -10237321627LL;
	static uint64_t x162 = 93303479377391879LLU;
	int32_t x164 = INT32_MAX;
	uint64_t t39 = 76504LLU;

	t39 = (x161&(x162/(x163|x164)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = 223131789532542221LL;
	volatile int32_t x166 = 25733;
	volatile int8_t x167 = INT8_MIN;
	uint32_t x168 = UINT32_MAX;
	int64_t t40 = -3655LL;

	t40 = (x165&(x166/(x167|x168)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x169 = 7U;
	static int16_t x170 = -1;
	uint32_t x171 = 793173168U;
	static int64_t x172 = INT64_MIN;
	int64_t t41 = -278747200032143LL;

	t41 = (x169&(x170/(x171|x172)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = 0;
	uint64_t x175 = 19962080LLU;
	int64_t x176 = INT64_MIN;

	t42 = (x173&(x174/(x175|x176)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x177 = INT16_MIN;
	uint8_t x178 = 63U;
	int64_t x180 = -469356LL;
	uint64_t t43 = 60454155015LLU;

	t43 = (x177&(x178/(x179|x180)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = 0;
	int8_t x182 = INT8_MAX;
	int8_t x183 = -1;
	volatile int8_t x184 = INT8_MAX;
	int32_t t44 = -5;

	t44 = (x181&(x182/(x183|x184)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = INT8_MIN;
	int64_t x186 = -1LL;
	volatile int16_t x187 = INT16_MIN;
	uint64_t x188 = UINT64_MAX;
	uint64_t t45 = 5908082999186937102LLU;

	t45 = (x185&(x186/(x187|x188)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x189 = INT8_MIN;
	int8_t x190 = INT8_MIN;
	volatile int16_t x191 = -4;
	uint16_t x192 = UINT16_MAX;

	t46 = (x189&(x190/(x191|x192)));

	if (t46 != 128) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = -14575156LL;
	uint8_t x194 = 90U;
	uint32_t x196 = 50U;
	volatile int64_t t47 = -2961432915LL;

	t47 = (x193&(x194/(x195|x196)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x197 = 159017735897022LLU;
	uint32_t x198 = 5011U;

	t48 = (x197&(x198/(x199|x200)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = INT64_MIN;
	static int32_t x202 = -1;
	static uint8_t x203 = 69U;
	int32_t x204 = -19728;
	static volatile int64_t t49 = 83012446380673041LL;

	t49 = (x201&(x202/(x203|x204)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x205 = 39U;
	uint16_t x206 = 13U;
	int16_t x207 = INT16_MIN;
	int16_t x208 = INT16_MIN;
	static volatile int32_t t50 = 996;

	t50 = (x205&(x206/(x207|x208)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = INT8_MAX;
	uint64_t x210 = 3883648716LLU;
	uint32_t x211 = 32881007U;
	volatile int8_t x212 = -2;
	uint64_t t51 = 9587449428898LLU;

	t51 = (x209&(x210/(x211|x212)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = INT32_MIN;
	int8_t x214 = -36;
	int64_t x215 = INT64_MAX;
	int16_t x216 = INT16_MIN;
	int64_t t52 = -4770872701225519LL;

	t52 = (x213&(x214/(x215|x216)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = -1;
	int64_t x218 = -1LL;
	int16_t x219 = 8;
	volatile int16_t x220 = -1;
	volatile int64_t t53 = 1620753900LL;

	t53 = (x217&(x218/(x219|x220)));

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x222 = 1U;
	int64_t x223 = -1LL;
	int64_t x224 = INT64_MIN;
	volatile int64_t t54 = -8503557033320LL;

	t54 = (x221&(x222/(x223|x224)));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x225 = 3739413U;
	int16_t x226 = INT16_MIN;
	static int8_t x227 = 0;
	uint64_t x228 = UINT64_MAX;
	uint64_t t55 = 885398LLU;

	t55 = (x225&(x226/(x227|x228)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x229 = UINT32_MAX;
	uint64_t x230 = 28563LLU;
	volatile uint8_t x231 = UINT8_MAX;
	static int16_t x232 = INT16_MIN;
	uint64_t t56 = 2571353993LLU;

	t56 = (x229&(x230/(x231|x232)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x233 = UINT32_MAX;
	int8_t x234 = INT8_MIN;
	int64_t x235 = INT64_MAX;
	int64_t x236 = -247982162259LL;
	volatile int64_t t57 = 10351344888100LL;

	t57 = (x233&(x234/(x235|x236)));

	if (t57 != 128LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x237 = 4U;
	uint8_t x238 = UINT8_MAX;
	static volatile uint32_t x239 = 11U;
	static int8_t x240 = -1;
	volatile uint32_t t58 = 251245U;

	t58 = (x237&(x238/(x239|x240)));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x242 = -1;
	uint8_t x243 = UINT8_MAX;
	volatile uint8_t x244 = 4U;
	static volatile int64_t t59 = -461LL;

	t59 = (x241&(x242/(x243|x244)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x245 = INT64_MIN;
	int16_t x246 = INT16_MAX;
	uint64_t x248 = 3LLU;
	uint64_t t60 = 8459LLU;

	t60 = (x245&(x246/(x247|x248)));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x249 = 2U;
	int64_t x250 = INT64_MAX;
	int8_t x251 = 4;
	int64_t x252 = -1087966756795830360LL;
	static volatile int64_t t61 = 139936717LL;

	t61 = (x249&(x250/(x251|x252)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x253 = INT16_MAX;
	int32_t x254 = INT32_MIN;
	int16_t x255 = INT16_MIN;
	uint32_t x256 = UINT32_MAX;
	uint32_t t62 = 510964421U;

	t62 = (x253&(x254/(x255|x256)));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x258 = INT8_MAX;
	int32_t x259 = INT32_MIN;
	volatile uint64_t x260 = UINT64_MAX;
	volatile uint64_t t63 = 138LLU;

	t63 = (x257&(x258/(x259|x260)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x261 = INT32_MIN;
	static int32_t x263 = -94;
	static int64_t x264 = INT64_MAX;
	static int64_t t64 = 99437518LL;

	t64 = (x261&(x262/(x263|x264)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = -1;
	int16_t x266 = INT16_MAX;
	int8_t x267 = INT8_MIN;
	volatile int64_t x268 = INT64_MIN;
	volatile int64_t t65 = -2304099233683LL;

	t65 = (x265&(x266/(x267|x268)));

	if (t65 != -255LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x269 = -1;
	int32_t x271 = -1;
	uint8_t x272 = 0U;
	int32_t t66 = -1;

	t66 = (x269&(x270/(x271|x272)));

	if (t66 != -65535) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x279 = 28985218U;
	uint8_t x280 = 8U;
	volatile uint64_t t67 = 45738923LLU;

	t67 = (x277&(x278/(x279|x280)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = INT8_MIN;
	static volatile uint8_t x282 = 29U;
	int8_t x283 = INT8_MAX;
	static volatile uint32_t t68 = 4715989U;

	t68 = (x281&(x282/(x283|x284)));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x285 = -1;
	int64_t x286 = -1LL;
	int32_t x287 = -1;
	uint16_t x288 = UINT16_MAX;
	volatile int64_t t69 = 2963044758737LL;

	t69 = (x285&(x286/(x287|x288)));

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x289 = 6U;
	static volatile uint64_t x290 = 29195553LLU;
	int32_t x291 = INT32_MIN;
	static uint32_t x292 = 1U;
	static volatile uint64_t t70 = 4101517831507460946LLU;

	t70 = (x289&(x290/(x291|x292)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x293 = 11638LL;
	int16_t x295 = 47;
	int64_t x296 = -1LL;

	t71 = (x293&(x294/(x295|x296)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = -3030;
	volatile int8_t x298 = INT8_MIN;
	volatile int8_t x300 = INT8_MIN;
	volatile int32_t t72 = 163816593;

	t72 = (x297&(x298/(x299|x300)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x302 = INT32_MAX;
	volatile int8_t x303 = 0;
	uint16_t x304 = 26U;
	volatile int32_t t73 = 1374;

	t73 = (x301&(x302/(x303|x304)));

	if (t73 != 82591744) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x307 = INT16_MAX;
	int16_t x308 = INT16_MIN;

	t74 = (x305&(x306/(x307|x308)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = INT64_MIN;
	static int64_t x310 = INT64_MIN;
	int64_t x311 = INT64_MAX;
	volatile uint16_t x312 = 5324U;
	volatile int64_t t75 = INT64_MIN;

	t75 = (x309&(x310/(x311|x312)));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x313 = INT64_MAX;
	int8_t x314 = -4;
	static int16_t x316 = INT16_MAX;
	volatile int64_t t76 = 498178732782817LL;

	t76 = (x313&(x314/(x315|x316)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x317 = 10;
	static int32_t x318 = INT32_MIN;
	static volatile int64_t x319 = INT64_MAX;

	t77 = (x317&(x318/(x319|x320)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x321 = -5922439;
	int32_t x322 = -28643939;
	uint32_t x324 = UINT32_MAX;
	uint32_t t78 = 79U;

	t78 = (x321&(x322/(x323|x324)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x325 = 11936U;
	uint8_t x326 = 80U;
	volatile uint64_t t79 = 4093780598418548LLU;

	t79 = (x325&(x326/(x327|x328)));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x329 = 34;
	int64_t x330 = -1748612551LL;
	uint64_t x332 = 97286LLU;
	static volatile uint64_t t80 = 3018578LLU;

	t80 = (x329&(x330/(x331|x332)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x338 = 24553LLU;
	int8_t x339 = 1;
	static uint64_t t81 = 1900020175LLU;

	t81 = (x337&(x338/(x339|x340)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x341 = UINT32_MAX;
	int64_t x342 = INT64_MAX;
	int32_t x344 = INT32_MIN;
	int64_t t82 = -29425LL;

	t82 = (x341&(x342/(x343|x344)));

	if (t82 != 4294836223LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x345 = 24;
	int8_t x347 = INT8_MAX;
	int16_t x348 = INT16_MIN;
	static volatile int32_t t83 = 67799120;

	t83 = (x345&(x346/(x347|x348)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x349 = 2;
	static int8_t x350 = INT8_MIN;
	int32_t t84 = -465371;

	t84 = (x349&(x350/(x351|x352)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x353 = UINT64_MAX;
	int8_t x354 = INT8_MIN;
	volatile uint32_t x355 = UINT32_MAX;
	uint64_t t85 = 70329664568LLU;

	t85 = (x353&(x354/(x355|x356)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x357 = 0U;
	static uint32_t x358 = 169895U;
	int32_t x359 = -1;
	int32_t x360 = INT32_MIN;

	t86 = (x357&(x358/(x359|x360)));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x362 = UINT8_MAX;
	int8_t x364 = INT8_MAX;
	uint64_t t87 = 5345894811137662LLU;

	t87 = (x361&(x362/(x363|x364)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x365 = 2U;
	int8_t x366 = -1;
	uint8_t x367 = 0U;
	volatile uint8_t x368 = UINT8_MAX;
	volatile int32_t t88 = 97;

	t88 = (x365&(x366/(x367|x368)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x369 = -1;
	int16_t x370 = -1;
	static uint16_t x371 = UINT16_MAX;
	int32_t x372 = -22789771;
	static int32_t t89 = 36378;

	t89 = (x369&(x370/(x371|x372)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x373 = INT64_MIN;
	int8_t x374 = -1;
	int32_t x375 = 3873951;

	t90 = (x373&(x374/(x375|x376)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x377 = 0;
	volatile uint32_t x378 = 4U;
	uint16_t x379 = UINT16_MAX;
	int64_t x380 = INT64_MAX;

	t91 = (x377&(x378/(x379|x380)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x381 = 660378947U;
	int16_t x382 = -1;
	int32_t x383 = INT32_MAX;
	int32_t x384 = 6;
	uint32_t t92 = 21086386U;

	t92 = (x381&(x382/(x383|x384)));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x385 = -1;
	volatile uint64_t x386 = UINT64_MAX;
	int16_t x387 = INT16_MAX;
	uint16_t x388 = 974U;
	volatile uint64_t t93 = 385819392LLU;

	t93 = (x385&(x386/(x387|x388)));

	if (t93 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x389 = 1U;
	uint16_t x390 = 12U;
	volatile int16_t x391 = -1;
	static int32_t x392 = INT32_MIN;
	int32_t t94 = -149499;

	t94 = (x389&(x390/(x391|x392)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x393 = 2388459LLU;
	volatile int16_t x394 = 18;
	volatile uint32_t x395 = UINT32_MAX;
	volatile int64_t x396 = -1LL;
	uint64_t t95 = 15523243438007LLU;

	t95 = (x393&(x394/(x395|x396)));

	if (t95 != 2388458LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x398 = INT32_MAX;
	int8_t x399 = INT8_MIN;
	int64_t x400 = INT64_MAX;
	int64_t t96 = -1315030725472774LL;

	t96 = (x397&(x398/(x399|x400)));

	if (t96 != -2147483647LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x401 = 6LLU;
	static uint32_t x402 = UINT32_MAX;
	uint16_t x403 = UINT16_MAX;
	volatile int8_t x404 = INT8_MIN;
	uint64_t t97 = 223013LLU;

	t97 = (x401&(x402/(x403|x404)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x406 = 633;
	volatile int16_t x407 = 0;
	uint8_t x408 = 14U;
	static volatile uint32_t t98 = 882588010U;

	t98 = (x405&(x406/(x407|x408)));

	if (t98 != 4U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x409 = INT8_MIN;
	int32_t x410 = INT32_MIN;
	static int32_t x411 = -635865;
	volatile int32_t t99 = -7153769;

	t99 = (x409&(x410/(x411|x412)));

	if (t99 != 161792) { NG(); } else { ; }
	
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


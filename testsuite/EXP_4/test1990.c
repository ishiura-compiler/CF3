#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MAX;
int32_t t0 = -466;
volatile uint64_t x6 = UINT64_MAX;
int16_t x9 = INT16_MAX;
int16_t x11 = INT16_MIN;
static int16_t x14 = 636;
static volatile int64_t t3 = -1825351547321LL;
volatile uint16_t x25 = UINT16_MAX;
static volatile uint8_t x26 = UINT8_MAX;
volatile uint64_t t5 = 6626603418LLU;
uint64_t x33 = UINT64_MAX;
volatile uint16_t x42 = 148U;
volatile uint32_t t9 = 18U;
int64_t x47 = -1LL;
int32_t x51 = 20789;
volatile uint32_t t12 = 106453U;
int32_t x58 = -9137;
int16_t x60 = INT16_MIN;
int64_t x63 = INT64_MIN;
uint16_t x64 = 7U;
int8_t x66 = INT8_MAX;
int64_t x75 = -3690000921LL;
static int64_t x76 = INT64_MIN;
volatile int64_t t17 = 993380843022376LL;
static int64_t x78 = INT64_MAX;
volatile int64_t x83 = INT64_MIN;
volatile int8_t x84 = -1;
int16_t x89 = INT16_MAX;
volatile int8_t x92 = INT8_MIN;
int8_t x93 = -1;
volatile int64_t t22 = 899211610431957LL;
static int64_t x97 = INT64_MAX;
volatile uint8_t x103 = 113U;
int32_t t24 = -49566;
volatile int32_t x109 = -1;
int64_t x123 = INT64_MIN;
int8_t x125 = -24;
static int16_t x128 = -22;
uint64_t x129 = 7048709827594682LLU;
int32_t x130 = -1;
volatile uint32_t x138 = 624U;
volatile uint8_t x141 = 117U;
volatile uint64_t t34 = 10013302573849376LLU;
int16_t x153 = -1858;
int8_t x156 = INT8_MAX;
int16_t x158 = INT16_MIN;
int64_t x159 = -1LL;
int8_t x163 = -1;
uint64_t t37 = 805509512LLU;
int8_t x167 = 1;
uint16_t x171 = 119U;
uint64_t t42 = 1LLU;
uint64_t x190 = 9112LLU;
int16_t x198 = -982;
static int16_t x201 = -60;
uint8_t x202 = 0U;
uint16_t x203 = 60U;
static volatile uint64_t x208 = UINT64_MAX;
uint32_t x211 = 413567931U;
uint64_t x213 = 6563122368LLU;
int32_t x217 = INT32_MIN;
int32_t x219 = -1;
int16_t x229 = 0;
volatile uint16_t x237 = 3914U;
volatile uint16_t x240 = UINT16_MAX;
volatile int64_t t55 = 7567541591899LL;
static int16_t x242 = INT16_MAX;
static volatile int32_t t56 = -65;
int32_t x249 = -518655;
int64_t x251 = -1LL;
uint64_t t58 = 1LLU;
int32_t x253 = INT32_MIN;
static volatile uint64_t t59 = 6016821872376176LLU;
int32_t x260 = INT32_MAX;
volatile uint64_t t60 = 38321LLU;
int8_t x261 = INT8_MAX;
static uint8_t x262 = UINT8_MAX;
volatile uint64_t t62 = 372738964LLU;
int16_t x274 = 74;
int32_t x276 = -1129;
uint32_t x277 = 70U;
int64_t x301 = INT64_MIN;
volatile int64_t t72 = 628176LL;
int16_t x315 = -1;
int64_t x316 = -1LL;
static int64_t x333 = -1LL;
int16_t x341 = -1;
volatile uint32_t x347 = 686963U;
static int8_t x352 = -3;
volatile uint32_t t83 = 9815U;
int32_t x357 = INT32_MAX;
int8_t x360 = -1;
int64_t t84 = 6986LL;
static volatile int16_t x367 = INT16_MAX;
uint16_t x371 = 26020U;
uint64_t x374 = 36978258539485LLU;
int64_t x378 = INT64_MAX;
volatile int64_t x379 = -6213305408LL;
uint64_t x380 = 3867096LLU;
uint64_t t92 = 1366305397985129LLU;
uint8_t x393 = 3U;
static uint16_t x399 = 28916U;
volatile int64_t x403 = INT64_MIN;
volatile int16_t x412 = INT16_MAX;
int8_t x413 = INT8_MIN;
uint32_t x417 = UINT32_MAX;
int16_t x420 = INT16_MAX;


void f0(void) {
	int8_t x1 = -1;
	volatile int32_t x3 = 79995;
	uint16_t x4 = 1U;

	t0 = (x1+(x2&(x3|x4)));

	if (t0 != 79994) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	uint32_t x7 = UINT32_MAX;
	static int64_t x8 = -665886LL;
	uint64_t t1 = 16772882LLU;

	t1 = (x5+(x6&(x7|x8)));

	if (t1 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -101993719076LL;
	uint64_t x12 = 554673985505021LLU;
	volatile uint64_t t2 = 5192276075312686LLU;

	t2 = (x9+(x10&(x11|x12)));

	if (t2 != 18446743971715859163LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = UINT16_MAX;
	static volatile uint16_t x15 = UINT16_MAX;
	int64_t x16 = -1LL;

	t3 = (x13+(x14&(x15|x16)));

	if (t3 != 66171LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = 1U;
	uint32_t x22 = 795U;
	static uint16_t x23 = 892U;
	volatile int64_t x24 = INT64_MIN;
	static volatile int64_t t4 = -66215223LL;

	t4 = (x21+(x22&(x23|x24)));

	if (t4 != 793LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x27 = UINT64_MAX;
	int8_t x28 = 17;

	t5 = (x25+(x26&(x27|x28)));

	if (t5 != 65790LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = 7966736066934LL;
	volatile uint64_t x30 = 4365660LLU;
	static int16_t x31 = INT16_MIN;
	int64_t x32 = -5982LL;
	uint64_t t6 = 125540LLU;

	t6 = (x29+(x30&(x31|x32)));

	if (t6 != 7966740427126LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x34 = 2594500672LL;
	int32_t x35 = 25;
	uint8_t x36 = UINT8_MAX;
	uint64_t t7 = 8524885350LLU;

	t7 = (x33+(x34&(x35|x36)));

	if (t7 != 63LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x37 = INT8_MAX;
	int64_t x38 = INT64_MIN;
	int16_t x39 = -1;
	volatile uint32_t x40 = 201U;
	static int64_t t8 = 27278261699755836LL;

	t8 = (x37+(x38&(x39|x40)));

	if (t8 != 127LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x41 = 82U;
	uint32_t x43 = 104U;
	int16_t x44 = 3201;

	t9 = (x41+(x42&(x43|x44)));

	if (t9 != 210U) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = -1LL;
	uint32_t x46 = 331U;
	uint64_t x48 = 3375717186427LLU;
	uint64_t t10 = 318LLU;

	t10 = (x45+(x46&(x47|x48)));

	if (t10 != 330LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x49 = 2881739LL;
	static int64_t x50 = INT64_MIN;
	int32_t x52 = INT32_MAX;
	int64_t t11 = -5257743756922964LL;

	t11 = (x49+(x50&(x51|x52)));

	if (t11 != 2881739LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = 811634U;
	int8_t x54 = -1;
	volatile int32_t x55 = INT32_MIN;
	static int16_t x56 = INT16_MAX;

	t12 = (x53+(x54&(x55|x56)));

	if (t12 != 2148328049U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x57 = INT64_MAX;
	int64_t x59 = INT64_MIN;
	volatile int64_t t13 = 156907190LL;

	t13 = (x57+(x58&(x59|x60)));

	if (t13 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = -1;
	static int64_t x62 = 24856LL;
	static int64_t t14 = -600819734LL;

	t14 = (x61+(x62&(x63|x64)));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x65 = UINT32_MAX;
	static int8_t x67 = INT8_MAX;
	static uint64_t x68 = 699322358LLU;
	volatile uint64_t t15 = 98646LLU;

	t15 = (x65+(x66&(x67|x68)));

	if (t15 != 4294967422LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MIN;
	int64_t x70 = 0LL;
	static int32_t x71 = -125;
	int8_t x72 = INT8_MIN;
	int64_t t16 = INT64_MIN;

	t16 = (x69+(x70&(x71|x72)));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = 10;
	int8_t x74 = INT8_MIN;

	t17 = (x73+(x74&(x75|x76)));

	if (t17 != -3690001014LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x77 = -1;
	int16_t x79 = -762;
	uint8_t x80 = 11U;
	volatile int64_t t18 = 8284LL;

	t18 = (x77+(x78&(x79|x80)));

	if (t18 != 9223372036854775054LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x81 = UINT8_MAX;
	int16_t x82 = -1;
	volatile int64_t t19 = 1869862647LL;

	t19 = (x81+(x82&(x83|x84)));

	if (t19 != 254LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MIN;
	uint64_t x86 = UINT64_MAX;
	static int16_t x87 = -1;
	static uint32_t x88 = 16551U;
	uint64_t t20 = 7787LLU;

	t20 = (x85+(x86&(x87|x88)));

	if (t20 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x90 = 1132481789791343502LL;
	int64_t x91 = -1LL;
	volatile int64_t t21 = 98477954168LL;

	t21 = (x89+(x90&(x91|x92)));

	if (t21 != 1132481789791376269LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x94 = -1;
	volatile int64_t x95 = INT64_MAX;
	static int64_t x96 = 60734507299LL;

	t22 = (x93+(x94&(x95|x96)));

	if (t22 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x98 = -1;
	int32_t x99 = -1;
	int64_t x100 = INT64_MAX;
	static volatile int64_t t23 = 238LL;

	t23 = (x97+(x98&(x99|x100)));

	if (t23 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = INT32_MIN;
	static int8_t x102 = 28;
	int8_t x104 = INT8_MAX;

	t24 = (x101+(x102&(x103|x104)));

	if (t24 != -2147483620) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x110 = INT64_MIN;
	static uint64_t x111 = UINT64_MAX;
	volatile int8_t x112 = 42;
	volatile uint64_t t25 = 109512885041891LLU;

	t25 = (x109+(x110&(x111|x112)));

	if (t25 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x113 = 250704LLU;
	int16_t x114 = INT16_MAX;
	static int32_t x115 = INT32_MIN;
	static int32_t x116 = INT32_MIN;
	uint64_t t26 = 1024347053074774LLU;

	t26 = (x113+(x114&(x115|x116)));

	if (t26 != 250704LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x117 = INT8_MIN;
	int16_t x118 = -1;
	static uint64_t x119 = 145557150LLU;
	static int16_t x120 = -2781;
	static uint64_t t27 = 2051357676745LLU;

	t27 = (x117+(x118&(x119|x120)));

	if (t27 != 18446744073709549375LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x121 = -2;
	static uint8_t x122 = UINT8_MAX;
	volatile uint8_t x124 = UINT8_MAX;
	int64_t t28 = -1LL;

	t28 = (x121+(x122&(x123|x124)));

	if (t28 != 253LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x126 = 1U;
	int32_t x127 = -1;
	volatile int32_t t29 = 4855590;

	t29 = (x125+(x126&(x127|x128)));

	if (t29 != -23) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x131 = 8U;
	int64_t x132 = -1LL;
	volatile uint64_t t30 = 3350LLU;

	t30 = (x129+(x130&(x131|x132)));

	if (t30 != 7048709827594681LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint16_t x137 = UINT16_MAX;
	int16_t x139 = INT16_MIN;
	int16_t x140 = INT16_MAX;
	volatile uint32_t t31 = 25417U;

	t31 = (x137+(x138&(x139|x140)));

	if (t31 != 66159U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x142 = UINT16_MAX;
	int16_t x143 = INT16_MIN;
	volatile int8_t x144 = INT8_MIN;
	volatile int32_t t32 = -69385;

	t32 = (x141+(x142&(x143|x144)));

	if (t32 != 65525) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x145 = -1LL;
	uint32_t x146 = UINT32_MAX;
	static int64_t x147 = INT64_MAX;
	int8_t x148 = -1;
	int64_t t33 = 5758LL;

	t33 = (x145+(x146&(x147|x148)));

	if (t33 != 4294967294LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x149 = 81417801569455915LLU;
	volatile int8_t x150 = INT8_MIN;
	int64_t x151 = 14140088400769LL;
	volatile int16_t x152 = INT16_MIN;

	t34 = (x149+(x150&(x151|x152)));

	if (t34 != 81417801569438379LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x154 = INT16_MIN;
	uint16_t x155 = 127U;
	volatile int32_t t35 = 15983;

	t35 = (x153+(x154&(x155|x156)));

	if (t35 != -1858) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x157 = 290431U;
	int32_t x160 = -1;
	int64_t t36 = -730338545816LL;

	t36 = (x157+(x158&(x159|x160)));

	if (t36 != 257663LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x161 = 9329658039728097LLU;
	int8_t x162 = 3;
	static int8_t x164 = -15;

	t37 = (x161+(x162&(x163|x164)));

	if (t37 != 9329658039728100LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x165 = 46U;
	uint8_t x166 = 15U;
	volatile uint8_t x168 = 1U;
	int32_t t38 = -3509089;

	t38 = (x165+(x166&(x167|x168)));

	if (t38 != 47) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = INT32_MAX;
	volatile int16_t x170 = INT16_MIN;
	int16_t x172 = -374;
	int32_t t39 = -5347683;

	t39 = (x169+(x170&(x171|x172)));

	if (t39 != 2147450879) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = INT8_MIN;
	static int32_t x174 = INT32_MAX;
	uint8_t x175 = UINT8_MAX;
	uint8_t x176 = UINT8_MAX;
	volatile int32_t t40 = 30893464;

	t40 = (x173+(x174&(x175|x176)));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x177 = 1U;
	volatile int64_t x178 = INT64_MIN;
	int32_t x179 = -1;
	uint32_t x180 = 13U;
	volatile int64_t t41 = -34318262764701703LL;

	t41 = (x177+(x178&(x179|x180)));

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x181 = UINT64_MAX;
	static int16_t x182 = INT16_MIN;
	static uint32_t x183 = 28866566U;
	static uint64_t x184 = 804LLU;

	t42 = (x181+(x182&(x183|x184)));

	if (t42 != 28835839LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x185 = -1LL;
	int8_t x186 = INT8_MIN;
	static uint64_t x187 = 11076082284166LLU;
	int32_t x188 = -1;
	volatile uint64_t t43 = 1449730597644LLU;

	t43 = (x185+(x186&(x187|x188)));

	if (t43 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x189 = UINT32_MAX;
	static volatile int8_t x191 = 0;
	int64_t x192 = INT64_MIN;
	uint64_t t44 = 6782542619LLU;

	t44 = (x189+(x190&(x191|x192)));

	if (t44 != 4294967295LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x193 = 1426U;
	volatile uint32_t x194 = 60890841U;
	int32_t x195 = INT32_MAX;
	volatile uint16_t x196 = UINT16_MAX;
	static uint32_t t45 = 7497U;

	t45 = (x193+(x194&(x195|x196)));

	if (t45 != 60892267U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x197 = 199818346;
	static volatile int32_t x199 = INT32_MAX;
	int8_t x200 = INT8_MIN;
	volatile int32_t t46 = -2599;

	t46 = (x197+(x198&(x199|x200)));

	if (t46 != 199817364) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x204 = INT8_MIN;
	int32_t t47 = 5;

	t47 = (x201+(x202&(x203|x204)));

	if (t47 != -60) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x205 = -56147946;
	uint32_t x206 = 11U;
	int8_t x207 = INT8_MAX;
	static volatile uint64_t t48 = 12LLU;

	t48 = (x205+(x206&(x207|x208)));

	if (t48 != 18446744073653403681LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = INT8_MIN;
	static uint8_t x210 = 1U;
	volatile int16_t x212 = -30;
	static volatile uint32_t t49 = 7347U;

	t49 = (x209+(x210&(x211|x212)));

	if (t49 != 4294967169U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x214 = INT16_MIN;
	int32_t x215 = INT32_MAX;
	int64_t x216 = INT64_MAX;
	uint64_t t50 = 4397598LLU;

	t50 = (x213+(x214&(x215|x216)));

	if (t50 != 9223372043417865408LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x218 = INT16_MAX;
	static volatile int8_t x220 = INT8_MAX;
	volatile int32_t t51 = -759;

	t51 = (x217+(x218&(x219|x220)));

	if (t51 != -2147450881) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x221 = 144U;
	int32_t x222 = INT32_MIN;
	int32_t x223 = INT32_MIN;
	static int16_t x224 = INT16_MIN;
	int32_t t52 = -64;

	t52 = (x221+(x222&(x223|x224)));

	if (t52 != -2147483504) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x230 = 99945369;
	volatile int32_t x231 = INT32_MIN;
	uint64_t x232 = UINT64_MAX;
	volatile uint64_t t53 = 8LLU;

	t53 = (x229+(x230&(x231|x232)));

	if (t53 != 99945369LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x233 = 52U;
	int8_t x234 = INT8_MIN;
	static uint16_t x235 = 17604U;
	volatile int8_t x236 = 6;
	int32_t t54 = -6737037;

	t54 = (x233+(x234&(x235|x236)));

	if (t54 != 17588) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x238 = 14014397;
	int64_t x239 = 67647300LL;

	t55 = (x237+(x238&(x239|x240)));

	if (t55 != 59143LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x241 = 50U;
	int8_t x243 = INT8_MIN;
	int16_t x244 = INT16_MIN;

	t56 = (x241+(x242&(x243|x244)));

	if (t56 != 32690) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = -1;
	static int32_t x246 = INT32_MIN;
	uint32_t x247 = 1899699300U;
	int32_t x248 = 310134;
	volatile uint32_t t57 = UINT32_MAX;

	t57 = (x245+(x246&(x247|x248)));

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x250 = INT32_MIN;
	uint64_t x252 = 9LLU;

	t58 = (x249+(x250&(x251|x252)));

	if (t58 != 18446744071561549313LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x254 = UINT64_MAX;
	uint8_t x255 = 69U;
	volatile int16_t x256 = -18;

	t59 = (x253+(x254&(x255|x256)));

	if (t59 != 18446744071562067951LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x257 = -1;
	static volatile int16_t x258 = INT16_MAX;
	uint64_t x259 = UINT64_MAX;

	t60 = (x257+(x258&(x259|x260)));

	if (t60 != 32766LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x263 = 567558733U;
	int16_t x264 = -1;
	volatile uint32_t t61 = 44003U;

	t61 = (x261+(x262&(x263|x264)));

	if (t61 != 382U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = -1LL;
	uint64_t x266 = UINT64_MAX;
	volatile int16_t x267 = -1;
	static int64_t x268 = -59410LL;

	t62 = (x265+(x266&(x267|x268)));

	if (t62 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = -1LL;
	int8_t x270 = INT8_MAX;
	int32_t x271 = 0;
	uint8_t x272 = UINT8_MAX;
	int64_t t63 = 21996484196340LL;

	t63 = (x269+(x270&(x271|x272)));

	if (t63 != 126LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x273 = 6;
	static int64_t x275 = INT64_MIN;
	int64_t t64 = 74256317092220LL;

	t64 = (x273+(x274&(x275|x276)));

	if (t64 != 8LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x278 = -1LL;
	int64_t x279 = INT64_MIN;
	int8_t x280 = -1;
	static volatile int64_t t65 = -499250875033843734LL;

	t65 = (x277+(x278&(x279|x280)));

	if (t65 != 69LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x281 = 5560694447LLU;
	uint64_t x282 = UINT64_MAX;
	volatile int8_t x283 = INT8_MIN;
	static volatile uint64_t x284 = UINT64_MAX;
	uint64_t t66 = 48760677564393LLU;

	t66 = (x281+(x282&(x283|x284)));

	if (t66 != 5560694446LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x285 = -1;
	int32_t x286 = INT32_MAX;
	volatile int16_t x287 = 451;
	static int64_t x288 = -1LL;
	static int64_t t67 = -204706261LL;

	t67 = (x285+(x286&(x287|x288)));

	if (t67 != 2147483646LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x289 = -1LL;
	static uint8_t x290 = 52U;
	static int32_t x291 = -13109;
	static volatile uint32_t x292 = 299352782U;
	static volatile int64_t t68 = 3296121379215LL;

	t68 = (x289+(x290&(x291|x292)));

	if (t68 != 3LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x293 = -1;
	static uint16_t x294 = UINT16_MAX;
	static volatile int16_t x295 = INT16_MAX;
	int64_t x296 = INT64_MIN;
	static int64_t t69 = -63905667648024LL;

	t69 = (x293+(x294&(x295|x296)));

	if (t69 != 32766LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = 6;
	uint8_t x298 = 45U;
	static int16_t x299 = -4547;
	int8_t x300 = INT8_MAX;
	volatile int32_t t70 = 411949;

	t70 = (x297+(x298&(x299|x300)));

	if (t70 != 51) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x302 = UINT32_MAX;
	int8_t x303 = INT8_MIN;
	static uint16_t x304 = UINT16_MAX;
	int64_t t71 = -2090032LL;

	t71 = (x301+(x302&(x303|x304)));

	if (t71 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x309 = INT64_MIN;
	uint32_t x310 = UINT32_MAX;
	int8_t x311 = INT8_MIN;
	uint16_t x312 = 11U;

	t72 = (x309+(x310&(x311|x312)));

	if (t72 != -9223372032559808629LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x313 = 7920817LLU;
	int8_t x314 = -1;
	volatile uint64_t t73 = 92650255612829LLU;

	t73 = (x313+(x314&(x315|x316)));

	if (t73 != 7920816LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x317 = 1153570804LLU;
	uint32_t x318 = 728563U;
	uint8_t x319 = 1U;
	volatile int8_t x320 = INT8_MAX;
	uint64_t t74 = 453LLU;

	t74 = (x317+(x318&(x319|x320)));

	if (t74 != 1153570919LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x321 = INT8_MIN;
	static volatile int32_t x322 = INT32_MIN;
	int32_t x323 = INT32_MAX;
	uint16_t x324 = 1819U;
	static volatile int32_t t75 = 1015556015;

	t75 = (x321+(x322&(x323|x324)));

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x325 = 852414829438101379LLU;
	static int8_t x326 = 34;
	uint16_t x327 = 52U;
	int64_t x328 = INT64_MAX;
	uint64_t t76 = 4902364777612936834LLU;

	t76 = (x325+(x326&(x327|x328)));

	if (t76 != 852414829438101413LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x329 = 40009520953849LL;
	int64_t x330 = -1LL;
	static int32_t x331 = INT32_MAX;
	uint64_t x332 = 243936LLU;
	uint64_t t77 = 139576404LLU;

	t77 = (x329+(x330&(x331|x332)));

	if (t77 != 40011668437496LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x334 = 2U;
	int32_t x335 = 0;
	static volatile int64_t x336 = -598096069LL;
	int64_t t78 = 245078094753LL;

	t78 = (x333+(x334&(x335|x336)));

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x337 = 394LLU;
	static int16_t x338 = -1;
	static int16_t x339 = INT16_MIN;
	volatile int64_t x340 = INT64_MIN;
	volatile uint64_t t79 = 616LLU;

	t79 = (x337+(x338&(x339|x340)));

	if (t79 != 18446744073709519242LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x342 = -1;
	int8_t x343 = INT8_MAX;
	int64_t x344 = INT64_MIN;
	static volatile int64_t t80 = -848209235LL;

	t80 = (x341+(x342&(x343|x344)));

	if (t80 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x345 = INT8_MIN;
	int32_t x346 = INT32_MIN;
	int16_t x348 = INT16_MIN;
	uint32_t t81 = 125959712U;

	t81 = (x345+(x346&(x347|x348)));

	if (t81 != 2147483520U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x349 = -1;
	static int32_t x350 = INT32_MIN;
	volatile int64_t x351 = INT64_MIN;
	static int64_t t82 = -1124533906192489479LL;

	t82 = (x349+(x350&(x351|x352)));

	if (t82 != -2147483649LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x353 = INT32_MAX;
	static uint32_t x354 = 116287U;
	static int32_t x355 = INT32_MIN;
	int32_t x356 = -1;

	t83 = (x353+(x354&(x355|x356)));

	if (t83 != 2147599934U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x358 = -651LL;
	volatile int8_t x359 = -1;

	t84 = (x357+(x358&(x359|x360)));

	if (t84 != 2147482996LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x361 = UINT8_MAX;
	uint8_t x362 = 19U;
	int64_t x363 = INT64_MIN;
	uint64_t x364 = 571641574LLU;
	uint64_t t85 = 2661LLU;

	t85 = (x361+(x362&(x363|x364)));

	if (t85 != 257LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x365 = 4219;
	volatile uint64_t x366 = 363LLU;
	int64_t x368 = 1708470860010951LL;
	uint64_t t86 = 0LLU;

	t86 = (x365+(x366&(x367|x368)));

	if (t86 != 4582LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x369 = UINT16_MAX;
	volatile int8_t x370 = INT8_MIN;
	int16_t x372 = -26;
	int32_t t87 = 9499;

	t87 = (x369+(x370&(x371|x372)));

	if (t87 != 65407) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x373 = INT32_MIN;
	volatile uint16_t x375 = 615U;
	volatile int32_t x376 = 3;
	static volatile uint64_t t88 = 8100980171200934LLU;

	t88 = (x373+(x374&(x375|x376)));

	if (t88 != 18446744071562068549LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x377 = INT8_MIN;
	volatile uint64_t t89 = 1931884999076084LLU;

	t89 = (x377+(x378&(x379|x380)));

	if (t89 != 9223372030642715480LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x381 = -26342311371707LL;
	int32_t x382 = INT32_MIN;
	volatile int64_t x383 = -749637150753LL;
	int16_t x384 = INT16_MIN;
	volatile int64_t t90 = -59131464LL;

	t90 = (x381+(x382&(x383|x384)));

	if (t90 != -26344458855355LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x385 = INT8_MAX;
	uint16_t x386 = 43U;
	int64_t x387 = -1LL;
	int8_t x388 = INT8_MIN;
	volatile int64_t t91 = -134260282898683LL;

	t91 = (x385+(x386&(x387|x388)));

	if (t91 != 170LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x389 = 77287728U;
	uint64_t x390 = 199135937LLU;
	uint64_t x391 = UINT64_MAX;
	int32_t x392 = INT32_MAX;

	t92 = (x389+(x390&(x391|x392)));

	if (t92 != 276423665LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x394 = INT8_MAX;
	int64_t x395 = -514284LL;
	static volatile uint8_t x396 = 0U;
	static int64_t t93 = -26350412849LL;

	t93 = (x393+(x394&(x395|x396)));

	if (t93 != 23LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x397 = -1;
	uint8_t x398 = UINT8_MAX;
	int64_t x400 = INT64_MAX;
	volatile int64_t t94 = -2014812LL;

	t94 = (x397+(x398&(x399|x400)));

	if (t94 != 254LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x401 = INT32_MAX;
	int8_t x402 = -1;
	uint8_t x404 = 5U;
	volatile int64_t t95 = 228843915002LL;

	t95 = (x401+(x402&(x403|x404)));

	if (t95 != -9223372034707292156LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x405 = UINT8_MAX;
	volatile uint64_t x406 = 304362424349346LLU;
	static int32_t x407 = -613803;
	static volatile uint64_t x408 = 5109454597554029473LLU;
	uint64_t t96 = 4889189550594348LLU;

	t96 = (x405+(x406&(x407|x408)));

	if (t96 != 304362423821215LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x409 = 21971U;
	volatile uint16_t x410 = 62U;
	uint16_t x411 = 7394U;
	uint32_t t97 = 56142273U;

	t97 = (x409+(x410&(x411|x412)));

	if (t97 != 22033U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x414 = 11756U;
	uint16_t x415 = 27124U;
	uint8_t x416 = 0U;
	static volatile int32_t t98 = 7769;

	t98 = (x413+(x414&(x415|x416)));

	if (t98 != 10596) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x418 = -1;
	uint64_t x419 = 23899939646201345LLU;
	static volatile uint64_t t99 = 3107755LLU;

	t99 = (x417+(x418&(x419|x420)));

	if (t99 != 23899943941177342LLU) { NG(); } else { ; }
	
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


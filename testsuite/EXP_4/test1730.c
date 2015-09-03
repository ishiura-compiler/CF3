#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = -1;
int32_t x7 = 143;
volatile int32_t t4 = -41030;
volatile int64_t x25 = INT64_MIN;
static volatile int64_t t7 = 0LL;
int32_t x33 = 1;
int64_t x35 = INT64_MAX;
uint32_t x47 = 197719U;
int32_t x59 = -1;
int32_t x65 = INT32_MIN;
int64_t x68 = INT64_MAX;
int8_t x76 = -1;
int64_t x85 = INT64_MAX;
int32_t x93 = 254546;
uint16_t x94 = UINT16_MAX;
int32_t x104 = INT32_MAX;
int32_t x109 = 0;
uint32_t x111 = 1902241U;
int16_t x120 = INT16_MIN;
volatile uint64_t t24 = 4LLU;
uint16_t x122 = 90U;
static int64_t x125 = INT64_MIN;
volatile uint32_t x126 = UINT32_MAX;
int16_t x128 = INT16_MIN;
volatile int64_t t26 = -597458264645407LL;
uint64_t x132 = 547282717773LLU;
int32_t x142 = 48;
uint32_t x144 = UINT32_MAX;
int64_t x147 = 13654763082674136LL;
int8_t x150 = -1;
volatile int64_t x153 = INT64_MIN;
int16_t x158 = -1;
int32_t x168 = INT32_MIN;
uint64_t x170 = UINT64_MAX;
static int64_t t39 = -405068384LL;
int16_t x187 = INT16_MIN;
int32_t x201 = INT32_MAX;
int8_t x213 = -1;
uint16_t x215 = 277U;
static volatile int64_t x219 = INT64_MIN;
static int64_t t45 = 1690113066LL;
volatile uint32_t t46 = 96U;
uint64_t t47 = UINT64_MAX;
int8_t x239 = INT8_MIN;
static volatile int32_t t48 = -9;
static int8_t x243 = -1;
static uint16_t x244 = 1U;
volatile int8_t x245 = INT8_MIN;
static int16_t x266 = INT16_MAX;
uint16_t x276 = 4856U;
static int64_t t52 = 1916362046528094LL;
volatile uint64_t t53 = 479779108612618LLU;
uint64_t x291 = 109578LLU;
uint64_t t54 = 2LLU;
volatile int64_t t55 = -2346LL;
static int32_t x297 = 336747672;
int64_t x301 = 21081027725LL;
volatile int8_t x310 = INT8_MIN;
int32_t x315 = -1;
volatile int16_t x320 = INT16_MAX;
static int64_t x326 = INT64_MAX;
volatile uint16_t x327 = 93U;
static uint64_t t63 = 79890439447000LLU;
static volatile int8_t x330 = INT8_MIN;
volatile int8_t x342 = -2;
static int8_t x344 = -1;
uint64_t x348 = 4174LLU;
int8_t x358 = 2;
int64_t t68 = 9904LL;
int32_t x365 = -1;
static uint64_t t73 = 10752772LLU;
volatile uint64_t t74 = 6933LLU;
volatile int8_t x424 = INT8_MAX;
int8_t x425 = 1;
uint32_t x426 = UINT32_MAX;
static int8_t x430 = INT8_MIN;
static int8_t x438 = -61;
uint8_t x443 = 3U;
int64_t x453 = -1LL;
int32_t x457 = INT32_MIN;
int32_t x458 = INT32_MIN;
int8_t x467 = 43;
int16_t x471 = INT16_MAX;
uint8_t x474 = UINT8_MAX;
uint8_t x477 = 4U;
int64_t t92 = 5LL;
uint16_t x482 = UINT16_MAX;
int64_t x483 = INT64_MIN;
volatile int8_t x487 = INT8_MAX;
uint64_t x496 = UINT64_MAX;
volatile uint32_t t97 = 24434081U;
volatile int8_t x501 = INT8_MIN;
static volatile uint8_t x504 = 3U;
static int64_t t98 = 653671345059970LL;
int64_t x509 = INT64_MIN;
int32_t x512 = -25531;
uint64_t t99 = 1517539429789182436LLU;


void f0(void) {
	int16_t x1 = -1;
	static int16_t x2 = -298;
	int64_t x3 = INT64_MIN;
	static volatile int64_t t0 = -28593LL;

	t0 = (x1+(x2/(x3&x4)));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 1011686LLU;
	uint8_t x6 = 75U;
	int64_t x8 = -168821LL;
	static volatile uint64_t t1 = 1503683882940352LLU;

	t1 = (x5+(x6/(x7&x8)));

	if (t1 != 1011686LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int32_t x10 = -1601;
	static uint64_t x11 = UINT64_MAX;
	int16_t x12 = -5588;
	uint64_t t2 = 398948247039LLU;

	t2 = (x9+(x10/(x11&x12)));

	if (t2 != 4294967296LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = INT32_MIN;
	int64_t x14 = INT64_MAX;
	uint64_t x15 = 1513725231LLU;
	int64_t x16 = 52833392LL;
	volatile uint64_t t3 = 156350487669076LLU;

	t3 = (x13+(x14/(x15&x16)));

	if (t3 != 256538612184LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 5621U;
	int8_t x18 = 16;
	volatile uint8_t x19 = UINT8_MAX;
	volatile int16_t x20 = -1;

	t4 = (x17+(x18/(x19&x20)));

	if (t4 != 5621) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 1574;
	volatile int8_t x22 = INT8_MAX;
	static uint64_t x23 = 10242551585518LLU;
	int8_t x24 = -5;
	uint64_t t5 = 229743382LLU;

	t5 = (x21+(x22/(x23&x24)));

	if (t5 != 1574LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = -1;
	volatile int16_t x27 = -1;
	int32_t x28 = -1;
	int64_t t6 = -2043057022748874708LL;

	t6 = (x25+(x26/(x27&x28)));

	if (t6 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -394;
	uint32_t x30 = 37644109U;
	int16_t x31 = -1;
	int64_t x32 = INT64_MIN;

	t7 = (x29+(x30/(x31&x32)));

	if (t7 != -394LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x34 = -1;
	static int8_t x36 = 29;
	int64_t t8 = 0LL;

	t8 = (x33+(x34/(x35&x36)));

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 5769132U;
	uint8_t x38 = 20U;
	uint64_t x39 = UINT64_MAX;
	int64_t x40 = -14626021620534403LL;
	volatile uint64_t t9 = 63532714LLU;

	t9 = (x37+(x38/(x39&x40)));

	if (t9 != 5769132LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = UINT32_MAX;
	int64_t x46 = -1LL;
	static int16_t x48 = -139;
	int64_t t10 = -1664678454003LL;

	t10 = (x45+(x46/(x47&x48)));

	if (t10 != 4294967295LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x53 = -1LL;
	int64_t x54 = INT64_MIN;
	uint64_t x55 = 1660970798635690372LLU;
	uint64_t x56 = 2201665063195022236LLU;
	volatile uint64_t t11 = 67LLU;

	t11 = (x53+(x54/(x55&x56)));

	if (t11 != 4LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = INT16_MIN;
	int16_t x58 = 9599;
	volatile int32_t x60 = INT32_MIN;
	int32_t t12 = -431598;

	t12 = (x57+(x58/(x59&x60)));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MIN;
	int16_t x62 = 1;
	int32_t x63 = -1;
	volatile int32_t x64 = INT32_MAX;
	static int32_t t13 = 45539;

	t13 = (x61+(x62/(x63&x64)));

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x66 = -1;
	static uint32_t x67 = 135177U;
	volatile int64_t t14 = -658011882720955LL;

	t14 = (x65+(x66/(x67&x68)));

	if (t14 != -2147483648LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = -5;
	static int64_t x74 = 1037799885LL;
	uint8_t x75 = 3U;
	volatile int64_t t15 = -17367227425135075LL;

	t15 = (x73+(x74/(x75&x76)));

	if (t15 != 345933290LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x77 = UINT8_MAX;
	volatile int64_t x78 = INT64_MIN;
	uint8_t x79 = 4U;
	int64_t x80 = -1LL;
	int64_t t16 = 156088412359094804LL;

	t16 = (x77+(x78/(x79&x80)));

	if (t16 != -2305843009213693697LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MAX;
	int32_t x82 = -1;
	static int16_t x83 = INT16_MAX;
	int32_t x84 = -1;
	static volatile int32_t t17 = 56;

	t17 = (x81+(x82/(x83&x84)));

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x86 = 232;
	int32_t x87 = INT32_MIN;
	volatile int64_t x88 = INT64_MIN;
	static volatile int64_t t18 = INT64_MAX;

	t18 = (x85+(x86/(x87&x88)));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x89 = UINT32_MAX;
	uint8_t x90 = UINT8_MAX;
	volatile int32_t x91 = -130151;
	static volatile int32_t x92 = -1;
	volatile uint32_t t19 = UINT32_MAX;

	t19 = (x89+(x90/(x91&x92)));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x95 = -1;
	static volatile int16_t x96 = INT16_MAX;
	int32_t t20 = 43161729;

	t20 = (x93+(x94/(x95&x96)));

	if (t20 != 254548) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = -1LL;
	int8_t x98 = -1;
	int8_t x99 = INT8_MAX;
	int64_t x100 = 13LL;
	volatile int64_t t21 = 14880407454346LL;

	t21 = (x97+(x98/(x99&x100)));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x101 = INT16_MAX;
	int32_t x102 = INT32_MIN;
	int16_t x103 = INT16_MAX;
	volatile int32_t t22 = 69679483;

	t22 = (x101+(x102/(x103&x104)));

	if (t22 != -32771) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x110 = 1152LLU;
	int16_t x112 = 1498;
	uint64_t t23 = 84791LLU;

	t23 = (x109+(x110/(x111&x112)));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = INT16_MIN;
	uint64_t x118 = 249385639307417282LLU;
	int32_t x119 = 451827;

	t24 = (x117+(x118/(x119&x120)));

	if (t24 != 585434254217LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x121 = -1;
	volatile int32_t x123 = -1;
	int16_t x124 = INT16_MIN;
	volatile int32_t t25 = -31;

	t25 = (x121+(x122/(x123&x124)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x127 = INT32_MIN;

	t26 = (x125+(x126/(x127&x128)));

	if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = INT32_MIN;
	int8_t x130 = INT8_MIN;
	volatile int16_t x131 = -53;
	uint64_t t27 = 19LLU;

	t27 = (x129+(x130/(x131&x132)));

	if (t27 != 18446744071595774027LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x133 = INT32_MIN;
	int8_t x134 = 0;
	int16_t x135 = INT16_MIN;
	int32_t x136 = -941343571;
	volatile int32_t t28 = INT32_MIN;

	t28 = (x133+(x134/(x135&x136)));

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x141 = 8161417800528961480LLU;
	uint64_t x143 = 445148078952332277LLU;
	uint64_t t29 = 33342479958679084LLU;

	t29 = (x141+(x142/(x143&x144)));

	if (t29 != 8161417800528961480LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x145 = 0;
	int16_t x146 = -26;
	int32_t x148 = INT32_MIN;
	volatile int64_t t30 = -207282788387076LL;

	t30 = (x145+(x146/(x147&x148)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x149 = -3912;
	uint16_t x151 = UINT16_MAX;
	int8_t x152 = INT8_MAX;
	volatile int32_t t31 = 25398384;

	t31 = (x149+(x150/(x151&x152)));

	if (t31 != -3912) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x154 = 6963;
	int32_t x155 = -1;
	volatile int64_t x156 = INT64_MAX;
	volatile int64_t t32 = INT64_MIN;

	t32 = (x153+(x154/(x155&x156)));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x157 = -1;
	static int8_t x159 = INT8_MAX;
	volatile int8_t x160 = INT8_MAX;
	volatile int32_t t33 = -44;

	t33 = (x157+(x158/(x159&x160)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x161 = INT8_MAX;
	uint16_t x162 = UINT16_MAX;
	static int8_t x163 = -1;
	int64_t x164 = 3219281785753LL;
	volatile int64_t t34 = -17523LL;

	t34 = (x161+(x162/(x163&x164)));

	if (t34 != 127LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x165 = INT8_MAX;
	static int8_t x166 = 5;
	volatile int8_t x167 = -28;
	volatile int32_t t35 = 703909031;

	t35 = (x165+(x166/(x167&x168)));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x169 = 52U;
	volatile int32_t x171 = -1;
	int64_t x172 = INT64_MIN;
	static uint64_t t36 = 22645565011774LLU;

	t36 = (x169+(x170/(x171&x172)));

	if (t36 != 53LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x173 = 16;
	int32_t x174 = -16748609;
	uint64_t x175 = UINT64_MAX;
	int16_t x176 = 33;
	uint64_t t37 = 39857898822933886LLU;

	t37 = (x173+(x174/(x175&x176)));

	if (t37 != 558992244657357682LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x177 = 0;
	volatile int64_t x178 = 29LL;
	static int32_t x179 = INT32_MIN;
	int32_t x180 = INT32_MIN;
	volatile int64_t t38 = -59LL;

	t38 = (x177+(x178/(x179&x180)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x181 = 11;
	int64_t x182 = INT64_MAX;
	int32_t x183 = -1;
	int64_t x184 = INT64_MAX;

	t39 = (x181+(x182/(x183&x184)));

	if (t39 != 12LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x185 = INT8_MIN;
	uint64_t x186 = 117125273LLU;
	static volatile int16_t x188 = INT16_MIN;
	volatile uint64_t t40 = 8154339667460364LLU;

	t40 = (x185+(x186/(x187&x188)));

	if (t40 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x197 = INT64_MIN;
	uint64_t x198 = 1152658329LLU;
	volatile uint64_t x199 = UINT64_MAX;
	uint32_t x200 = 135U;
	static uint64_t t41 = 1940838692198850LLU;

	t41 = (x197+(x198/(x199&x200)));

	if (t41 != 9223372036863314017LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x202 = INT32_MIN;
	int8_t x203 = INT8_MAX;
	static int8_t x204 = -1;
	static volatile int32_t t42 = -834826511;

	t42 = (x201+(x202/(x203&x204)));

	if (t42 != 2130574327) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x209 = INT16_MIN;
	int64_t x210 = -27448723926972LL;
	volatile int16_t x211 = INT16_MAX;
	int8_t x212 = INT8_MAX;
	int64_t t43 = 140867847LL;

	t43 = (x209+(x210/(x211&x212)));

	if (t43 != -216131717232LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x214 = 3110U;
	uint64_t x216 = UINT64_MAX;
	uint64_t t44 = 3LLU;

	t44 = (x213+(x214/(x215&x216)));

	if (t44 != 10LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x217 = INT16_MIN;
	volatile int16_t x218 = -4307;
	int32_t x220 = INT32_MIN;

	t45 = (x217+(x218/(x219&x220)));

	if (t45 != -32768LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x221 = 1205620557U;
	volatile int16_t x222 = INT16_MAX;
	int32_t x223 = -7;
	int8_t x224 = INT8_MIN;

	t46 = (x221+(x222/(x223&x224)));

	if (t46 != 1205620302U) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x229 = -1LL;
	uint8_t x230 = 5U;
	int64_t x231 = -1LL;
	uint64_t x232 = 1673138LLU;

	t47 = (x229+(x230/(x231&x232)));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x237 = INT16_MIN;
	int32_t x238 = INT32_MIN;
	int16_t x240 = -1;

	t48 = (x237+(x238/(x239&x240)));

	if (t48 != 16744448) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x241 = INT8_MIN;
	static int8_t x242 = 17;
	volatile int32_t t49 = 0;

	t49 = (x241+(x242/(x243&x244)));

	if (t49 != -111) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x246 = 7;
	static int32_t x247 = -2026019;
	static int8_t x248 = 16;
	int32_t t50 = 0;

	t50 = (x245+(x246/(x247&x248)));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x265 = 0;
	uint8_t x267 = 23U;
	volatile int64_t x268 = -59895LL;
	volatile int64_t t51 = -22LL;

	t51 = (x265+(x266/(x267&x268)));

	if (t51 != 32767LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x273 = -1494;
	int64_t x274 = INT64_MIN;
	int8_t x275 = INT8_MIN;

	t52 = (x273+(x274/(x275&x276)));

	if (t52 != -1947502541567113LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x285 = 1;
	int64_t x286 = INT64_MIN;
	uint64_t x287 = 246010907LLU;
	int8_t x288 = -1;

	t53 = (x285+(x286/(x287&x288)));

	if (t53 != 37491719979LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x289 = INT8_MIN;
	int8_t x290 = INT8_MIN;
	volatile int32_t x292 = INT32_MAX;

	t54 = (x289+(x290/(x291&x292)));

	if (t54 != 168343500280124LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x293 = INT16_MIN;
	static int64_t x294 = -50048006LL;
	int32_t x295 = 1778719;
	int32_t x296 = INT32_MAX;

	t55 = (x293+(x294/(x295&x296)));

	if (t55 != -32796LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x298 = INT32_MAX;
	volatile int8_t x299 = -1;
	int16_t x300 = -1;
	static int32_t t56 = -45387;

	t56 = (x297+(x298/(x299&x300)));

	if (t56 != -1810735975) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x302 = 35U;
	static int32_t x303 = INT32_MIN;
	volatile int16_t x304 = INT16_MIN;
	int64_t t57 = -2038343827830804122LL;

	t57 = (x301+(x302/(x303&x304)));

	if (t57 != 21081027725LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x305 = INT16_MIN;
	static int16_t x306 = -468;
	int64_t x307 = INT64_MAX;
	uint64_t x308 = 16239403209LLU;
	uint64_t t58 = 269LLU;

	t58 = (x305+(x306/(x307&x308)));

	if (t58 != 1135892230LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x309 = 106U;
	uint32_t x311 = 8070280U;
	static int64_t x312 = -1LL;
	int64_t t59 = 962097122487572LL;

	t59 = (x309+(x310/(x311&x312)));

	if (t59 != 106LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x313 = INT64_MIN;
	int8_t x314 = -1;
	uint64_t x316 = 561072565674LLU;
	uint64_t t60 = 17008437268490LLU;

	t60 = (x313+(x314/(x315&x316)));

	if (t60 != 9223372036887653452LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x317 = INT8_MAX;
	int64_t x318 = 66564197LL;
	int8_t x319 = INT8_MIN;
	volatile int64_t t61 = 14254LL;

	t61 = (x317+(x318/(x319&x320)));

	if (t61 != 2166LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x321 = -3;
	uint16_t x322 = UINT16_MAX;
	static int8_t x323 = 1;
	volatile uint16_t x324 = 39U;
	volatile int32_t t62 = 170793;

	t62 = (x321+(x322/(x323&x324)));

	if (t62 != 65532) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x325 = INT8_MIN;
	uint64_t x328 = 7312794LLU;

	t63 = (x325+(x326/(x327&x328)));

	if (t63 != 384307168202282197LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x329 = INT8_MAX;
	volatile int32_t x331 = -1;
	static uint8_t x332 = 1U;
	int32_t t64 = -89720083;

	t64 = (x329+(x330/(x331&x332)));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x341 = INT16_MIN;
	int32_t x343 = INT32_MIN;
	int32_t t65 = 68357;

	t65 = (x341+(x342/(x343&x344)));

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x345 = -3;
	uint32_t x346 = 199995843U;
	uint16_t x347 = UINT16_MAX;
	volatile uint64_t t66 = 167108LLU;

	t66 = (x345+(x346/(x347&x348)));

	if (t66 != 47911LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x357 = -3;
	volatile uint64_t x359 = UINT64_MAX;
	uint64_t x360 = 1812LLU;
	volatile uint64_t t67 = 134103565725957LLU;

	t67 = (x357+(x358/(x359&x360)));

	if (t67 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x361 = INT32_MIN;
	int32_t x362 = -100;
	int64_t x363 = -1LL;
	int16_t x364 = -1;

	t68 = (x361+(x362/(x363&x364)));

	if (t68 != -2147483548LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x366 = 41U;
	int32_t x367 = -1;
	int8_t x368 = 45;
	static volatile int32_t t69 = 5199177;

	t69 = (x365+(x366/(x367&x368)));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x369 = INT16_MAX;
	uint8_t x370 = UINT8_MAX;
	int8_t x371 = 1;
	static uint16_t x372 = UINT16_MAX;
	static volatile int32_t t70 = 28;

	t70 = (x369+(x370/(x371&x372)));

	if (t70 != 33022) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x373 = UINT8_MAX;
	uint32_t x374 = 108U;
	volatile int64_t x375 = INT64_MAX;
	int32_t x376 = INT32_MIN;
	static int64_t t71 = 13LL;

	t71 = (x373+(x374/(x375&x376)));

	if (t71 != 255LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x377 = 61188670;
	int8_t x378 = INT8_MIN;
	int32_t x379 = INT32_MAX;
	uint64_t x380 = 156998164484853LLU;
	volatile uint64_t t72 = 2471LLU;

	t72 = (x377+(x378/(x379&x380)));

	if (t72 != 8940784845LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x381 = UINT64_MAX;
	volatile int64_t x382 = INT64_MIN;
	uint64_t x383 = 14553881LLU;
	uint64_t x384 = 4464904194241118LLU;

	t73 = (x381+(x382/(x383&x384)));

	if (t73 != 1674037732455LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x389 = 639552657LLU;
	volatile uint32_t x390 = 261957U;
	static volatile uint32_t x391 = UINT32_MAX;
	int8_t x392 = 4;

	t74 = (x389+(x390/(x391&x392)));

	if (t74 != 639618146LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x393 = INT8_MAX;
	int32_t x394 = INT32_MIN;
	int64_t x395 = -1LL;
	int16_t x396 = INT16_MIN;
	volatile int64_t t75 = 11728LL;

	t75 = (x393+(x394/(x395&x396)));

	if (t75 != 65663LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x397 = 104LLU;
	int8_t x398 = INT8_MAX;
	static int16_t x399 = 2;
	static volatile int64_t x400 = -1LL;
	uint64_t t76 = 166853444768679LLU;

	t76 = (x397+(x398/(x399&x400)));

	if (t76 != 167LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x405 = INT16_MIN;
	int32_t x406 = -1;
	volatile int64_t x407 = -1LL;
	uint64_t x408 = 1504380097741541424LLU;
	volatile uint64_t t77 = 54573LLU;

	t77 = (x405+(x406/(x407&x408)));

	if (t77 != 18446744073709518860LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x417 = UINT64_MAX;
	int8_t x418 = INT8_MAX;
	int64_t x419 = INT64_MAX;
	volatile uint16_t x420 = 41U;
	uint64_t t78 = 152017334LLU;

	t78 = (x417+(x418/(x419&x420)));

	if (t78 != 2LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x421 = UINT64_MAX;
	static volatile int8_t x422 = -1;
	uint32_t x423 = UINT32_MAX;
	uint64_t t79 = 840685459LLU;

	t79 = (x421+(x422/(x423&x424)));

	if (t79 != 33818639LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x427 = INT32_MIN;
	int16_t x428 = INT16_MIN;
	static volatile uint32_t t80 = 54751U;

	t80 = (x425+(x426/(x427&x428)));

	if (t80 != 2U) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x429 = INT64_MIN;
	int16_t x431 = INT16_MIN;
	int32_t x432 = -1;
	int64_t t81 = INT64_MIN;

	t81 = (x429+(x430/(x431&x432)));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x437 = -1;
	volatile int64_t x439 = 2907845LL;
	int64_t x440 = -1LL;
	int64_t t82 = 17976809LL;

	t82 = (x437+(x438/(x439&x440)));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x441 = -19;
	int32_t x442 = INT32_MAX;
	volatile int8_t x444 = 42;
	volatile int32_t t83 = -39;

	t83 = (x441+(x442/(x443&x444)));

	if (t83 != 1073741804) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x445 = UINT32_MAX;
	int16_t x446 = 1;
	uint8_t x447 = UINT8_MAX;
	int64_t x448 = -1LL;
	int64_t t84 = -695862371992326291LL;

	t84 = (x445+(x446/(x447&x448)));

	if (t84 != 4294967295LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x449 = INT64_MIN;
	uint16_t x450 = 1090U;
	static int64_t x451 = INT64_MIN;
	int64_t x452 = -1LL;
	static volatile int64_t t85 = INT64_MIN;

	t85 = (x449+(x450/(x451&x452)));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x454 = INT16_MIN;
	volatile int8_t x455 = INT8_MIN;
	static uint32_t x456 = UINT32_MAX;
	volatile int64_t t86 = 386115217LL;

	t86 = (x453+(x454/(x455&x456)));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x459 = UINT32_MAX;
	int64_t x460 = -4820LL;
	int64_t t87 = -1265LL;

	t87 = (x457+(x458/(x459&x460)));

	if (t87 != -2147483648LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x461 = -1;
	int64_t x462 = INT64_MIN;
	uint32_t x463 = UINT32_MAX;
	int32_t x464 = INT32_MIN;
	static int64_t t88 = -4106409568680LL;

	t88 = (x461+(x462/(x463&x464)));

	if (t88 != -4294967297LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x465 = 24916631;
	int8_t x466 = 6;
	uint64_t x468 = 464949891156383LLU;
	volatile uint64_t t89 = 32331064813849LLU;

	t89 = (x465+(x466/(x467&x468)));

	if (t89 != 24916631LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x469 = UINT8_MAX;
	int8_t x470 = INT8_MIN;
	uint16_t x472 = 60U;
	int32_t t90 = 32270;

	t90 = (x469+(x470/(x471&x472)));

	if (t90 != 253) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x473 = INT8_MIN;
	uint32_t x475 = 590701259U;
	volatile int64_t x476 = -1LL;
	volatile int64_t t91 = 14874884LL;

	t91 = (x473+(x474/(x475&x476)));

	if (t91 != -128LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x478 = 76366U;
	int64_t x479 = -1055921773687LL;
	int64_t x480 = -16039714271LL;

	t92 = (x477+(x478/(x479&x480)));

	if (t92 != 4LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x481 = -1LL;
	int64_t x484 = -1LL;
	int64_t t93 = -488627924306LL;

	t93 = (x481+(x482/(x483&x484)));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x485 = -1LL;
	int64_t x486 = -16627LL;
	int8_t x488 = -1;
	volatile int64_t t94 = 3227516673635654LL;

	t94 = (x485+(x486/(x487&x488)));

	if (t94 != -131LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x489 = INT8_MIN;
	int16_t x490 = -3;
	volatile int8_t x491 = INT8_MAX;
	int8_t x492 = -1;
	volatile int32_t t95 = -7769981;

	t95 = (x489+(x490/(x491&x492)));

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x493 = INT32_MIN;
	uint64_t x494 = 1LLU;
	static volatile int32_t x495 = 3717818;
	static uint64_t t96 = 47802746743LLU;

	t96 = (x493+(x494/(x495&x496)));

	if (t96 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x497 = -1;
	uint32_t x498 = UINT32_MAX;
	static int32_t x499 = -6574;
	int16_t x500 = INT16_MAX;

	t97 = (x497+(x498/(x499&x500)));

	if (t97 != 163966U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x502 = INT16_MAX;
	int64_t x503 = 27395929360192686LL;

	t98 = (x501+(x502/(x503&x504)));

	if (t98 != 16255LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x510 = UINT64_MAX;
	int32_t x511 = INT32_MAX;

	t99 = (x509+(x510/(x511&x512)));

	if (t99 != 9223372045444812525LLU) { NG(); } else { ; }
	
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


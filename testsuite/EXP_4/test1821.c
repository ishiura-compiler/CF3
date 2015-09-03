#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = -329746;
int64_t t1 = 263191061978903LL;
int32_t t2 = -124;
uint32_t x31 = UINT32_MAX;
uint16_t x32 = 951U;
uint64_t x38 = 47408680LLU;
uint64_t t8 = 9273234895538LLU;
int16_t x41 = 56;
uint64_t x50 = UINT64_MAX;
int32_t x52 = INT32_MIN;
static volatile uint16_t x63 = 103U;
int32_t x68 = INT32_MAX;
static volatile uint64_t t16 = UINT64_MAX;
int32_t x73 = -1;
static volatile int64_t x74 = -1LL;
int64_t x78 = -1967LL;
int64_t t18 = 29586LL;
volatile int32_t x81 = INT32_MIN;
volatile int8_t x87 = INT8_MIN;
uint16_t x88 = 653U;
volatile int16_t x102 = 326;
static uint8_t x110 = 66U;
uint32_t x114 = UINT32_MAX;
volatile int64_t x121 = 1328713991443137258LL;
int16_t x123 = INT16_MIN;
int64_t x124 = INT64_MIN;
int64_t t31 = -1018LL;
int8_t x135 = 0;
static int16_t x137 = INT16_MIN;
int64_t x142 = -8320586727969LL;
int32_t x143 = INT32_MIN;
volatile uint64_t x144 = 934575302773771LLU;
static int8_t x148 = -1;
volatile int64_t t35 = INT64_MIN;
int64_t x150 = INT64_MIN;
static volatile int16_t x162 = INT16_MIN;
uint64_t t39 = 1LLU;
uint8_t x169 = 0U;
int8_t x170 = 2;
volatile int32_t t41 = -1401919;
uint64_t x179 = 292837760LLU;
int16_t x184 = -8795;
uint32_t x198 = 134191267U;
static uint64_t t48 = 257291821LLU;
uint32_t x213 = 19797422U;
static volatile int32_t x216 = INT32_MIN;
uint32_t t52 = 0U;
uint16_t x218 = 0U;
static int16_t x224 = INT16_MAX;
volatile uint16_t x226 = 18971U;
int8_t x238 = -1;
int32_t t60 = -364;
volatile int8_t x250 = INT8_MIN;
int8_t x265 = -1;
int8_t x269 = INT8_MAX;
uint64_t x271 = 38757313520895LLU;
int16_t x273 = 0;
int32_t t67 = -47758231;
volatile int32_t x292 = -2;
static uint32_t x293 = 10896U;
volatile uint64_t t71 = 439129438LLU;
static int32_t t72 = 44;
volatile int16_t x302 = INT16_MIN;
int64_t x305 = INT64_MAX;
uint8_t x317 = 11U;
int64_t t78 = -654215749121137463LL;
static volatile uint32_t x340 = 892732U;
volatile uint8_t x363 = 7U;
int64_t x365 = INT64_MIN;
volatile int64_t t89 = INT64_MIN;
static uint64_t x374 = UINT64_MAX;
uint64_t t91 = 38026392LLU;
uint32_t x377 = 1629U;
volatile int8_t x382 = INT8_MIN;
uint64_t x393 = 749165886371LLU;
volatile int32_t x395 = -1;
uint64_t t96 = 702333222375050LLU;
int64_t x402 = -1LL;


void f0(void) {
	uint64_t x1 = 7710673933LLU;
	int16_t x2 = -11408;
	static int64_t x3 = INT64_MIN;
	volatile uint16_t x4 = UINT16_MAX;
	uint64_t t0 = 15LLU;

	t0 = (x1+(x2&(x3&x4)));

	if (t0 != 7710673933LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 11422404408LL;
	int32_t x7 = INT32_MIN;
	static uint8_t x8 = 4U;

	t1 = (x5+(x6&(x7&x8)));

	if (t1 != 11422404408LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -1;
	int32_t x14 = INT32_MAX;
	static int16_t x15 = -1;
	int16_t x16 = -18;

	t2 = (x13+(x14&(x15&x16)));

	if (t2 != 2147483629) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	uint32_t x18 = 31U;
	static uint8_t x19 = UINT8_MAX;
	static int64_t x20 = INT64_MIN;
	volatile int64_t t3 = INT64_MIN;

	t3 = (x17+(x18&(x19&x20)));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MAX;
	int64_t x22 = -1522747604237LL;
	static int16_t x23 = -1;
	int64_t x24 = -162208132155973LL;
	volatile int64_t t4 = -2160047084097681543LL;

	t4 = (x21+(x22&(x23&x24)));

	if (t4 != 9223209414111199410LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = 11595476;
	int64_t x26 = INT64_MAX;
	static volatile int32_t x27 = 862510472;
	static uint64_t x28 = 822871229744149LLU;
	volatile uint64_t t5 = 12813990694525LLU;

	t5 = (x25+(x26&(x27&x28)));

	if (t5 != 603534036LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x29 = 52817374589905862LLU;
	int64_t x30 = -1LL;
	volatile uint64_t t6 = 866260487189441858LLU;

	t6 = (x29+(x30&(x31&x32)));

	if (t6 != 52817374589906813LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = UINT8_MAX;
	uint32_t x34 = UINT32_MAX;
	int8_t x35 = INT8_MIN;
	uint32_t x36 = UINT32_MAX;
	uint32_t t7 = 141848U;

	t7 = (x33+(x34&(x35&x36)));

	if (t7 != 127U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MIN;
	static int64_t x39 = -1LL;
	int32_t x40 = -50;

	t8 = (x37+(x38&(x39&x40)));

	if (t8 != 18446744071609476616LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x42 = -7;
	static uint16_t x43 = 6U;
	volatile uint16_t x44 = UINT16_MAX;
	static int32_t t9 = 0;

	t9 = (x41+(x42&(x43&x44)));

	if (t9 != 56) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 2364129818LLU;
	int16_t x46 = INT16_MIN;
	int8_t x47 = 50;
	volatile uint16_t x48 = UINT16_MAX;
	static volatile uint64_t t10 = 25621LLU;

	t10 = (x45+(x46&(x47&x48)));

	if (t10 != 2364129818LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 83856U;
	static int8_t x51 = INT8_MIN;
	volatile uint64_t t11 = 1176428291534501LLU;

	t11 = (x49+(x50&(x51&x52)));

	if (t11 != 18446744071562151824LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 341652830689901277LLU;
	int8_t x54 = INT8_MIN;
	int16_t x55 = -1;
	int64_t x56 = INT64_MIN;
	volatile uint64_t t12 = 5560892595482670LLU;

	t12 = (x53+(x54&(x55&x56)));

	if (t12 != 9565024867544677085LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x57 = -22560;
	int16_t x58 = 5;
	int8_t x59 = INT8_MAX;
	static int8_t x60 = INT8_MIN;
	int32_t t13 = -26;

	t13 = (x57+(x58&(x59&x60)));

	if (t13 != -22560) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = 2248077698383510LLU;
	uint32_t x62 = 1493U;
	uint32_t x64 = 4858082U;
	uint64_t t14 = 7695895917823LLU;

	t14 = (x61+(x62&(x63&x64)));

	if (t14 != 2248077698383574LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x65 = -1LL;
	int32_t x66 = INT32_MIN;
	int32_t x67 = INT32_MAX;
	int64_t t15 = 594640137955951307LL;

	t15 = (x65+(x66&(x67&x68)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x69 = UINT64_MAX;
	int32_t x70 = INT32_MAX;
	int64_t x71 = INT64_MIN;
	int8_t x72 = INT8_MIN;

	t16 = (x69+(x70&(x71&x72)));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x75 = -1285;
	uint16_t x76 = 17U;
	int64_t t17 = 243520LL;

	t17 = (x73+(x74&(x75&x76)));

	if (t17 != 16LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = -1;
	int32_t x79 = -122;
	static int8_t x80 = INT8_MIN;

	t18 = (x77+(x78&(x79&x80)));

	if (t18 != -2049LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x82 = UINT8_MAX;
	static volatile int16_t x83 = -265;
	volatile int16_t x84 = INT16_MAX;
	volatile int32_t t19 = -22;

	t19 = (x81+(x82&(x83&x84)));

	if (t19 != -2147483401) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = 1863;
	volatile uint64_t x86 = 79770551LLU;
	volatile uint64_t t20 = 93460122LLU;

	t20 = (x85+(x86&(x87&x88)));

	if (t20 != 2503LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MIN;
	static int16_t x90 = 1;
	int16_t x91 = INT16_MAX;
	uint32_t x92 = UINT32_MAX;
	volatile uint32_t t21 = 179845732U;

	t21 = (x89+(x90&(x91&x92)));

	if (t21 != 4294934529U) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x93 = 0;
	int8_t x94 = -1;
	int64_t x95 = INT64_MAX;
	uint16_t x96 = 13U;
	volatile int64_t t22 = -10234051641579LL;

	t22 = (x93+(x94&(x95&x96)));

	if (t22 != 13LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x97 = INT8_MIN;
	static int32_t x98 = 1;
	volatile int8_t x99 = 5;
	int16_t x100 = 1694;
	int32_t t23 = 96;

	t23 = (x97+(x98&(x99&x100)));

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x101 = INT32_MIN;
	static volatile uint32_t x103 = UINT32_MAX;
	static volatile uint32_t x104 = 3695160U;
	uint32_t t24 = 285U;

	t24 = (x101+(x102&(x103&x104)));

	if (t24 != 2147483648U) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x105 = -1;
	static volatile int16_t x106 = INT16_MIN;
	int32_t x107 = 3;
	volatile int8_t x108 = 11;
	static int32_t t25 = 2046;

	t25 = (x105+(x106&(x107&x108)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = INT64_MIN;
	volatile int64_t x111 = INT64_MIN;
	volatile uint64_t x112 = UINT64_MAX;
	uint64_t t26 = 400181180LLU;

	t26 = (x109+(x110&(x111&x112)));

	if (t26 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MIN;
	int64_t x115 = -1LL;
	uint32_t x116 = UINT32_MAX;
	volatile int64_t t27 = -123880757623960806LL;

	t27 = (x113+(x114&(x115&x116)));

	if (t27 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x117 = 12884;
	volatile int16_t x118 = 1733;
	uint8_t x119 = 16U;
	volatile int32_t x120 = INT32_MIN;
	volatile int32_t t28 = -862;

	t28 = (x117+(x118&(x119&x120)));

	if (t28 != 12884) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x122 = 2893U;
	static int64_t t29 = 10LL;

	t29 = (x121+(x122&(x123&x124)));

	if (t29 != 1328713991443137258LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = INT32_MIN;
	volatile uint8_t x126 = 13U;
	uint32_t x127 = 232U;
	uint64_t x128 = 95186530308506LLU;
	volatile uint64_t t30 = 9758LLU;

	t30 = (x125+(x126&(x127&x128)));

	if (t30 != 18446744071562067976LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x129 = 1;
	volatile uint16_t x130 = UINT16_MAX;
	int64_t x131 = INT64_MIN;
	volatile int64_t x132 = 1137987749540880633LL;

	t31 = (x129+(x130&(x131&x132)));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x133 = -1LL;
	uint8_t x134 = 3U;
	volatile uint16_t x136 = 4U;
	int64_t t32 = 32201922096LL;

	t32 = (x133+(x134&(x135&x136)));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x138 = 52;
	volatile int8_t x139 = 26;
	int64_t x140 = INT64_MIN;
	int64_t t33 = -42886LL;

	t33 = (x137+(x138&(x139&x140)));

	if (t33 != -32768LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x141 = 119036893U;
	volatile uint64_t t34 = 143197984LLU;

	t34 = (x141+(x142&(x143&x144)));

	if (t34 != 932851983342557LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = INT64_MIN;
	int32_t x146 = INT32_MIN;
	int8_t x147 = INT8_MAX;

	t35 = (x145+(x146&(x147&x148)));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = -962;
	volatile uint32_t x151 = 1627945777U;
	volatile uint8_t x152 = UINT8_MAX;
	volatile int64_t t36 = 4909LL;

	t36 = (x149+(x150&(x151&x152)));

	if (t36 != -962LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x153 = INT16_MAX;
	int32_t x154 = -1;
	volatile int16_t x155 = INT16_MAX;
	static volatile int16_t x156 = INT16_MIN;
	int32_t t37 = 133502922;

	t37 = (x153+(x154&(x155&x156)));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = -58597668214036LL;
	int8_t x158 = INT8_MAX;
	volatile int16_t x159 = -4;
	uint32_t x160 = 71U;
	static int64_t t38 = -2063473918LL;

	t38 = (x157+(x158&(x159&x160)));

	if (t38 != -58597668213968LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = -1LL;
	uint64_t x163 = UINT64_MAX;
	int64_t x164 = 25285653540137880LL;

	t39 = (x161+(x162&(x163&x164)));

	if (t39 != 25285653540110335LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x165 = -1;
	int8_t x166 = INT8_MAX;
	static volatile int16_t x167 = 2998;
	volatile int64_t x168 = 4LL;
	int64_t t40 = -96782LL;

	t40 = (x165+(x166&(x167&x168)));

	if (t40 != 3LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x171 = 2U;
	volatile int8_t x172 = -1;

	t41 = (x169+(x170&(x171&x172)));

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = INT64_MIN;
	uint16_t x174 = UINT16_MAX;
	int16_t x175 = -1;
	int16_t x176 = -1;
	static volatile int64_t t42 = -7170926282079LL;

	t42 = (x173+(x174&(x175&x176)));

	if (t42 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x177 = UINT16_MAX;
	volatile int8_t x178 = 0;
	uint64_t x180 = 15413614347853LLU;
	uint64_t t43 = 7LLU;

	t43 = (x177+(x178&(x179&x180)));

	if (t43 != 65535LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = -18029810309279247LL;
	uint16_t x182 = UINT16_MAX;
	int8_t x183 = -26;
	static volatile int64_t t44 = -18953487784839LL;

	t44 = (x181+(x182&(x183&x184)));

	if (t44 != -18029810309222507LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = -246;
	volatile int8_t x186 = 0;
	uint8_t x187 = 3U;
	int32_t x188 = INT32_MIN;
	static int32_t t45 = -240402;

	t45 = (x185+(x186&(x187&x188)));

	if (t45 != -246) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x189 = INT16_MIN;
	uint64_t x190 = 8413955293535803865LLU;
	volatile uint8_t x191 = UINT8_MAX;
	int32_t x192 = INT32_MIN;
	static volatile uint64_t t46 = 178LLU;

	t46 = (x189+(x190&(x191&x192)));

	if (t46 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x193 = INT16_MIN;
	uint64_t x194 = 1390913585472LLU;
	int32_t x195 = 14;
	volatile uint16_t x196 = 26269U;
	volatile uint64_t t47 = 712973050LLU;

	t47 = (x193+(x194&(x195&x196)));

	if (t47 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x197 = INT32_MIN;
	int64_t x199 = 575498322852656LL;
	uint64_t x200 = 122745454732579766LLU;

	t48 = (x197+(x198&(x199&x200)));

	if (t48 != 18446744071578849312LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x201 = 88U;
	int16_t x202 = 847;
	volatile int8_t x203 = INT8_MAX;
	static volatile int32_t x204 = INT32_MAX;
	volatile int32_t t49 = -2;

	t49 = (x201+(x202&(x203&x204)));

	if (t49 != 167) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = INT64_MIN;
	static int16_t x206 = INT16_MAX;
	uint64_t x207 = 261545LLU;
	uint8_t x208 = 127U;
	static uint64_t t50 = 28519975079LLU;

	t50 = (x205+(x206&(x207&x208)));

	if (t50 != 9223372036854775849LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x209 = -1;
	uint32_t x210 = 0U;
	int32_t x211 = INT32_MAX;
	static int64_t x212 = INT64_MIN;
	volatile int64_t t51 = 611702610LL;

	t51 = (x209+(x210&(x211&x212)));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x214 = INT16_MIN;
	int8_t x215 = INT8_MIN;

	t52 = (x213+(x214&(x215&x216)));

	if (t52 != 2167281070U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x217 = INT64_MAX;
	int8_t x219 = 0;
	volatile int32_t x220 = INT32_MAX;
	volatile int64_t t53 = INT64_MAX;

	t53 = (x217+(x218&(x219&x220)));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x221 = -1;
	static volatile uint64_t x222 = UINT64_MAX;
	volatile int32_t x223 = INT32_MIN;
	uint64_t t54 = UINT64_MAX;

	t54 = (x221+(x222&(x223&x224)));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = 433666986900727LL;
	int8_t x227 = INT8_MIN;
	static int16_t x228 = -1;
	int64_t t55 = -17427890327581855LL;

	t55 = (x225+(x226&(x227&x228)));

	if (t55 != 433666986919671LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = 896296262;
	int32_t x230 = INT32_MIN;
	int64_t x231 = INT64_MIN;
	volatile uint8_t x232 = UINT8_MAX;
	int64_t t56 = 342727822945LL;

	t56 = (x229+(x230&(x231&x232)));

	if (t56 != 896296262LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x233 = 5207816U;
	int16_t x234 = -198;
	int64_t x235 = -1LL;
	uint16_t x236 = 30489U;
	volatile int64_t t57 = -29740926329LL;

	t57 = (x233+(x234&(x235&x236)));

	if (t57 != 5238304LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = INT64_MIN;
	int8_t x239 = INT8_MIN;
	uint8_t x240 = UINT8_MAX;
	int64_t t58 = 81644LL;

	t58 = (x237+(x238&(x239&x240)));

	if (t58 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x241 = UINT32_MAX;
	volatile int16_t x242 = 1981;
	volatile int8_t x243 = INT8_MAX;
	volatile uint8_t x244 = UINT8_MAX;
	uint32_t t59 = 101U;

	t59 = (x241+(x242&(x243&x244)));

	if (t59 != 60U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x245 = 861236;
	int16_t x246 = INT16_MAX;
	static volatile int8_t x247 = INT8_MIN;
	volatile int16_t x248 = INT16_MIN;

	t60 = (x245+(x246&(x247&x248)));

	if (t60 != 861236) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x249 = UINT32_MAX;
	uint32_t x251 = 0U;
	int8_t x252 = INT8_MIN;
	static uint32_t t61 = UINT32_MAX;

	t61 = (x249+(x250&(x251&x252)));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x253 = -6869303970741937LL;
	int32_t x254 = 1153;
	static int64_t x255 = INT64_MIN;
	uint64_t x256 = 117521976LLU;
	uint64_t t62 = 258050029407521LLU;

	t62 = (x253+(x254&(x255&x256)));

	if (t62 != 18439874769738809679LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x257 = -1;
	uint8_t x258 = 1U;
	uint64_t x259 = UINT64_MAX;
	int32_t x260 = -457842244;
	uint64_t t63 = UINT64_MAX;

	t63 = (x257+(x258&(x259&x260)));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x261 = -10233110;
	int8_t x262 = INT8_MIN;
	uint8_t x263 = UINT8_MAX;
	int8_t x264 = -1;
	static int32_t t64 = -115;

	t64 = (x261+(x262&(x263&x264)));

	if (t64 != -10232982) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x266 = -23321323;
	uint8_t x267 = UINT8_MAX;
	int32_t x268 = INT32_MIN;
	int32_t t65 = -24;

	t65 = (x265+(x266&(x267&x268)));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x270 = -1LL;
	int16_t x272 = -1585;
	volatile uint64_t t66 = 4991219515429LLU;

	t66 = (x269+(x270&(x271&x272)));

	if (t66 != 38757313519950LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x274 = INT16_MAX;
	volatile int32_t x275 = INT32_MAX;
	int16_t x276 = -1;

	t67 = (x273+(x274&(x275&x276)));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = -1;
	int64_t x282 = INT64_MIN;
	int32_t x283 = INT32_MAX;
	static int32_t x284 = INT32_MAX;
	static int64_t t68 = 3938LL;

	t68 = (x281+(x282&(x283&x284)));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x285 = INT16_MIN;
	int8_t x286 = -1;
	static uint64_t x287 = UINT64_MAX;
	int8_t x288 = INT8_MIN;
	uint64_t t69 = 29354LLU;

	t69 = (x285+(x286&(x287&x288)));

	if (t69 != 18446744073709518720LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x289 = INT32_MAX;
	static int8_t x290 = INT8_MIN;
	static volatile uint64_t x291 = 22505974024LLU;
	uint64_t t70 = 10054477231462LLU;

	t70 = (x289+(x290&(x291&x292)));

	if (t70 != 24653457663LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x294 = 7996523LLU;
	int64_t x295 = -1LL;
	int64_t x296 = -1LL;

	t71 = (x293+(x294&(x295&x296)));

	if (t71 != 8007419LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x297 = 53943;
	volatile int32_t x298 = INT32_MAX;
	uint8_t x299 = 2U;
	static volatile int32_t x300 = INT32_MAX;

	t72 = (x297+(x298&(x299&x300)));

	if (t72 != 53945) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = -36948057LL;
	volatile int32_t x303 = INT32_MIN;
	static uint32_t x304 = 2480425U;
	int64_t t73 = -2799700148LL;

	t73 = (x301+(x302&(x303&x304)));

	if (t73 != -36948057LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x306 = INT64_MIN;
	int16_t x307 = INT16_MAX;
	uint8_t x308 = 3U;
	int64_t t74 = INT64_MAX;

	t74 = (x305+(x306&(x307&x308)));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x309 = 6027LLU;
	static int32_t x310 = INT32_MIN;
	int16_t x311 = INT16_MAX;
	volatile int8_t x312 = INT8_MAX;
	volatile uint64_t t75 = 7106605LLU;

	t75 = (x309+(x310&(x311&x312)));

	if (t75 != 6027LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x313 = 132;
	uint64_t x314 = 28712651843390471LLU;
	int64_t x315 = 70LL;
	uint32_t x316 = 134073325U;
	uint64_t t76 = 144083660602193159LLU;

	t76 = (x313+(x314&(x315&x316)));

	if (t76 != 136LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x318 = -1;
	uint16_t x319 = 1222U;
	int8_t x320 = INT8_MIN;
	volatile int32_t t77 = 5448652;

	t77 = (x317+(x318&(x319&x320)));

	if (t77 != 1163) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x321 = -490605226370975670LL;
	volatile int8_t x322 = INT8_MIN;
	static int32_t x323 = INT32_MIN;
	uint8_t x324 = 44U;

	t78 = (x321+(x322&(x323&x324)));

	if (t78 != -490605226370975670LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x325 = UINT8_MAX;
	int8_t x326 = INT8_MAX;
	int16_t x327 = INT16_MIN;
	volatile uint32_t x328 = 19000667U;
	uint32_t t79 = 6282U;

	t79 = (x325+(x326&(x327&x328)));

	if (t79 != 255U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = 2734;
	int16_t x330 = INT16_MIN;
	static volatile int8_t x331 = INT8_MAX;
	static uint64_t x332 = 45LLU;
	static uint64_t t80 = 5371207361LLU;

	t80 = (x329+(x330&(x331&x332)));

	if (t80 != 2734LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x333 = 9;
	int8_t x334 = INT8_MIN;
	static int8_t x335 = 3;
	static uint32_t x336 = 29630024U;
	volatile uint32_t t81 = 2115957569U;

	t81 = (x333+(x334&(x335&x336)));

	if (t81 != 9U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x337 = INT64_MIN;
	uint16_t x338 = 2U;
	int64_t x339 = 1LL;
	int64_t t82 = INT64_MIN;

	t82 = (x337+(x338&(x339&x340)));

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x341 = 640883901549LLU;
	int32_t x342 = INT32_MIN;
	uint16_t x343 = 55U;
	uint64_t x344 = 44087531507084372LLU;
	volatile uint64_t t83 = 1057213126LLU;

	t83 = (x341+(x342&(x343&x344)));

	if (t83 != 640883901549LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x345 = 269345672256LL;
	uint8_t x346 = 0U;
	int8_t x347 = INT8_MIN;
	int64_t x348 = INT64_MIN;
	int64_t t84 = 70618788703954403LL;

	t84 = (x345+(x346&(x347&x348)));

	if (t84 != 269345672256LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = 1254129792LL;
	int64_t x350 = -3403827272135885LL;
	uint16_t x351 = 660U;
	volatile int32_t x352 = INT32_MAX;
	volatile int64_t t85 = -1267924642LL;

	t85 = (x349+(x350&(x351&x352)));

	if (t85 != 1254130320LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x353 = 0U;
	uint8_t x354 = 3U;
	int32_t x355 = 2;
	volatile int8_t x356 = -1;
	volatile int32_t t86 = -28;

	t86 = (x353+(x354&(x355&x356)));

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x357 = INT16_MIN;
	int16_t x358 = INT16_MIN;
	static volatile int16_t x359 = INT16_MIN;
	static int64_t x360 = 95623231LL;
	int64_t t87 = -161071575902LL;

	t87 = (x357+(x358&(x359&x360)));

	if (t87 != 95584256LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x361 = -1;
	static uint16_t x362 = UINT16_MAX;
	int8_t x364 = -1;
	int32_t t88 = 6244246;

	t88 = (x361+(x362&(x363&x364)));

	if (t88 != 6) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x366 = -1LL;
	int16_t x367 = INT16_MIN;
	int32_t x368 = 7;

	t89 = (x365+(x366&(x367&x368)));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x369 = INT8_MIN;
	int16_t x370 = 13;
	volatile int16_t x371 = -121;
	int16_t x372 = INT16_MIN;
	int32_t t90 = 0;

	t90 = (x369+(x370&(x371&x372)));

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x373 = INT8_MIN;
	int16_t x375 = 0;
	int64_t x376 = 52057038161LL;

	t91 = (x373+(x374&(x375&x376)));

	if (t91 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x378 = 2840510049LL;
	int32_t x379 = -39295428;
	uint64_t x380 = 20LLU;
	volatile uint64_t t92 = 77236799674881LLU;

	t92 = (x377+(x378&(x379&x380)));

	if (t92 != 1629LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x381 = 108753LLU;
	volatile int8_t x383 = -1;
	volatile int32_t x384 = -1;
	uint64_t t93 = 262610447LLU;

	t93 = (x381+(x382&(x383&x384)));

	if (t93 != 108625LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x385 = -1;
	uint16_t x386 = UINT16_MAX;
	int64_t x387 = 12930LL;
	int32_t x388 = INT32_MAX;
	int64_t t94 = 100425550322LL;

	t94 = (x385+(x386&(x387&x388)));

	if (t94 != 12929LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x389 = 15930092766926LLU;
	int64_t x390 = 152LL;
	static int64_t x391 = -77520439740290LL;
	static uint16_t x392 = UINT16_MAX;
	static uint64_t t95 = 33544379715240791LLU;

	t95 = (x389+(x390&(x391&x392)));

	if (t95 != 15930092766950LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x394 = 29571179903LLU;
	uint64_t x396 = 166032621654443650LLU;

	t96 = (x393+(x394&(x395&x396)));

	if (t96 != 758335946661LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x397 = UINT8_MAX;
	uint16_t x398 = 1U;
	int8_t x399 = -1;
	volatile uint8_t x400 = 4U;
	volatile int32_t t97 = 3;

	t97 = (x397+(x398&(x399&x400)));

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x401 = -1;
	volatile uint16_t x403 = UINT16_MAX;
	int64_t x404 = INT64_MIN;
	volatile int64_t t98 = 151551282435579956LL;

	t98 = (x401+(x402&(x403&x404)));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x405 = 7547U;
	volatile int64_t x406 = INT64_MIN;
	uint8_t x407 = 94U;
	int32_t x408 = 11176626;
	volatile int64_t t99 = -1836249656827LL;

	t99 = (x405+(x406&(x407&x408)));

	if (t99 != 7547LL) { NG(); } else { ; }
	
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


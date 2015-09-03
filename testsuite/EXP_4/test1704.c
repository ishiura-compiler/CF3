#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = UINT64_MAX;
int32_t x18 = -1;
int16_t x27 = INT16_MIN;
int32_t t5 = 95485119;
int16_t x37 = INT16_MIN;
int32_t x38 = -784893;
volatile int16_t x46 = INT16_MIN;
uint16_t x48 = UINT16_MAX;
volatile int64_t x50 = -400541LL;
uint16_t x51 = 79U;
int8_t x57 = -1;
int32_t x58 = INT32_MIN;
static int32_t x64 = INT32_MAX;
int64_t x66 = -1LL;
uint8_t x68 = 0U;
int16_t x77 = -1;
volatile int16_t x85 = INT16_MIN;
static uint32_t x87 = 2139U;
static uint8_t x89 = 13U;
uint32_t x90 = UINT32_MAX;
int16_t x95 = 1;
int32_t x100 = INT32_MAX;
int8_t x103 = INT8_MAX;
uint16_t x105 = 16U;
volatile uint64_t t22 = 2383991125726198LLU;
static int32_t x117 = -1;
int16_t x118 = INT16_MIN;
volatile int8_t x138 = INT8_MAX;
int8_t x167 = INT8_MIN;
static uint64_t x181 = UINT64_MAX;
uint64_t t36 = 24LLU;
volatile uint16_t x189 = UINT16_MAX;
int32_t x197 = -97;
volatile int64_t x199 = -450LL;
uint64_t x200 = UINT64_MAX;
volatile int8_t x201 = -6;
static volatile int32_t t41 = -7146043;
volatile int32_t x205 = INT32_MIN;
static int8_t x206 = 3;
uint64_t x207 = 8601152568752LLU;
int32_t x211 = -15660081;
static int64_t x213 = INT64_MAX;
static int64_t x216 = INT64_MAX;
int16_t x220 = -1;
int64_t t45 = -55276756459613LL;
uint16_t x225 = 1U;
int16_t x232 = INT16_MAX;
static uint32_t x235 = 87U;
int8_t x237 = 22;
static uint64_t x240 = UINT64_MAX;
volatile uint64_t t50 = 1425169078655389760LLU;
int64_t x250 = -1LL;
int16_t x254 = -6;
int32_t x255 = 2;
int16_t x258 = INT16_MAX;
int16_t x259 = INT16_MAX;
int64_t x265 = 37748LL;
int8_t x266 = INT8_MIN;
uint32_t x283 = 12383U;
volatile int8_t x288 = INT8_MAX;
volatile int32_t t58 = 155905;
int64_t x293 = INT64_MAX;
int8_t x294 = -1;
static uint8_t x295 = UINT8_MAX;
uint16_t x299 = UINT16_MAX;
uint64_t x312 = UINT64_MAX;
static int32_t x317 = INT32_MIN;
int8_t x323 = -26;
static int64_t x336 = -779948704LL;
uint64_t t67 = 384211LLU;
int64_t x338 = INT64_MAX;
volatile uint64_t t68 = 846548107011273059LLU;
int8_t x341 = INT8_MIN;
int16_t x344 = INT16_MIN;
uint32_t t69 = 318421U;
volatile int8_t x355 = INT8_MIN;
static volatile int16_t x365 = INT16_MIN;
uint16_t x368 = 1312U;
int8_t x376 = INT8_MIN;
volatile uint32_t t76 = 0U;
static int32_t t77 = -15099091;
volatile uint32_t t78 = 126872752U;
int64_t x412 = INT64_MIN;
int16_t x434 = 5452;
volatile int16_t x435 = -40;
int16_t x452 = 7;
uint64_t x456 = 151445244443980LLU;
volatile uint64_t t91 = 15123779156LLU;
uint64_t t92 = 2179903317417319461LLU;
volatile int64_t x465 = 862392092531472LL;
int16_t x473 = 6046;
int32_t x476 = 0;
uint32_t t95 = 1U;
uint64_t x479 = UINT64_MAX;
static int8_t x490 = -1;


void f0(void) {
	int64_t x1 = INT64_MIN;
	static volatile uint32_t x2 = UINT32_MAX;
	int32_t x3 = 423603;
	uint64_t t0 = 732582889415LLU;

	t0 = (x1+(x2-(x3&x4)));

	if (t0 != 9223372041149319500LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 0;
	static int32_t x6 = INT32_MIN;
	volatile int16_t x7 = -183;
	int16_t x8 = -1;
	volatile int32_t t1 = 40277623;

	t1 = (x5+(x6-(x7&x8)));

	if (t1 != -2147483465) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 22U;
	int8_t x10 = -1;
	static int32_t x11 = 1288989;
	int32_t x12 = -1372561;
	int32_t t2 = 3651;

	t2 = (x9+(x10-(x11&x12)));

	if (t2 != -199160) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = 1;
	int64_t x19 = -1LL;
	int8_t x20 = -1;
	volatile int64_t t3 = 148090700238LL;

	t3 = (x17+(x18-(x19&x20)));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MAX;
	int16_t x22 = 6508;
	volatile uint64_t x23 = 1649926718LLU;
	int16_t x24 = -1;
	uint64_t t4 = 2LLU;

	t4 = (x21+(x22-(x23&x24)));

	if (t4 != 18446744072059664173LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -2;
	uint8_t x26 = UINT8_MAX;
	uint8_t x28 = UINT8_MAX;

	t5 = (x25+(x26-(x27&x28)));

	if (t5 != 253) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -1LL;
	int32_t x30 = INT32_MIN;
	uint8_t x31 = 123U;
	volatile int32_t x32 = INT32_MIN;
	volatile int64_t t6 = -2267180850515484LL;

	t6 = (x29+(x30-(x31&x32)));

	if (t6 != -2147483649LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x39 = -1;
	volatile int32_t x40 = INT32_MIN;
	int32_t t7 = 10;

	t7 = (x37+(x38-(x39&x40)));

	if (t7 != 2146665987) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = INT16_MAX;
	static int32_t x47 = -1;
	volatile int32_t t8 = -29049;

	t8 = (x45+(x46-(x47&x48)));

	if (t8 != -65536) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x49 = -12802803783471084LL;
	uint8_t x52 = 0U;
	volatile int64_t t9 = -13108571395LL;

	t9 = (x49+(x50-(x51&x52)));

	if (t9 != -12802803783871625LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x59 = -1;
	int8_t x60 = INT8_MIN;
	int32_t t10 = -3927173;

	t10 = (x57+(x58-(x59&x60)));

	if (t10 != -2147483521) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x61 = 2432;
	int8_t x62 = 3;
	uint64_t x63 = UINT64_MAX;
	static uint64_t t11 = 14LLU;

	t11 = (x61+(x62-(x63&x64)));

	if (t11 != 18446744071562070404LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x65 = 653369864243LLU;
	static int32_t x67 = INT32_MIN;
	volatile uint64_t t12 = 6193138LLU;

	t12 = (x65+(x66-(x67&x68)));

	if (t12 != 653369864242LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x69 = INT8_MIN;
	volatile int32_t x70 = INT32_MAX;
	uint32_t x71 = UINT32_MAX;
	static int16_t x72 = INT16_MIN;
	static uint32_t t13 = 15034318U;

	t13 = (x69+(x70-(x71&x72)));

	if (t13 != 2147516287U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x73 = 2773U;
	int64_t x74 = INT64_MIN;
	int64_t x75 = INT64_MIN;
	static uint64_t x76 = UINT64_MAX;
	volatile uint64_t t14 = 5338552819637128LLU;

	t14 = (x73+(x74-(x75&x76)));

	if (t14 != 2773LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x78 = INT16_MIN;
	uint16_t x79 = UINT16_MAX;
	uint16_t x80 = 95U;
	volatile int32_t t15 = -2646716;

	t15 = (x77+(x78-(x79&x80)));

	if (t15 != -32864) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x81 = UINT16_MAX;
	int64_t x82 = -1LL;
	uint32_t x83 = 307U;
	volatile int16_t x84 = INT16_MIN;
	volatile int64_t t16 = -2816511570929876467LL;

	t16 = (x81+(x82-(x83&x84)));

	if (t16 != 65534LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x86 = 0;
	int16_t x88 = -1;
	static volatile uint32_t t17 = 739U;

	t17 = (x85+(x86-(x87&x88)));

	if (t17 != 4294932389U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x91 = UINT16_MAX;
	int64_t x92 = -1LL;
	int64_t t18 = 923LL;

	t18 = (x89+(x90-(x91&x92)));

	if (t18 != 4294901773LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x93 = 19U;
	uint16_t x94 = 2629U;
	int8_t x96 = INT8_MIN;
	int32_t t19 = 97447990;

	t19 = (x93+(x94-(x95&x96)));

	if (t19 != 2648) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = -1;
	volatile int32_t x98 = INT32_MAX;
	uint64_t x99 = 456705LLU;
	uint64_t t20 = 7066497219721619836LLU;

	t20 = (x97+(x98-(x99&x100)));

	if (t20 != 2147026941LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x101 = -901;
	volatile int8_t x102 = INT8_MAX;
	volatile uint64_t x104 = 19636944728881259LLU;
	volatile uint64_t t21 = 748365819723351LLU;

	t21 = (x101+(x102-(x103&x104)));

	if (t21 != 18446744073709550735LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x106 = 416473743027767828LLU;
	uint64_t x107 = UINT64_MAX;
	uint8_t x108 = UINT8_MAX;

	t22 = (x105+(x106-(x107&x108)));

	if (t22 != 416473743027767589LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x113 = -1;
	uint64_t x114 = 68LLU;
	int8_t x115 = INT8_MAX;
	int16_t x116 = -1;
	static uint64_t t23 = 14978626750LLU;

	t23 = (x113+(x114-(x115&x116)));

	if (t23 != 18446744073709551556LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x119 = 32U;
	int8_t x120 = -1;
	volatile int32_t t24 = 10653;

	t24 = (x117+(x118-(x119&x120)));

	if (t24 != -32801) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x121 = -4253548057893789LL;
	int16_t x122 = -102;
	static volatile uint8_t x123 = 4U;
	static int16_t x124 = -1;
	int64_t t25 = -1042375904789306233LL;

	t25 = (x121+(x122-(x123&x124)));

	if (t25 != -4253548057893895LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x129 = INT16_MAX;
	volatile int8_t x130 = INT8_MIN;
	int8_t x131 = INT8_MAX;
	int16_t x132 = 6;
	volatile int32_t t26 = 3;

	t26 = (x129+(x130-(x131&x132)));

	if (t26 != 32633) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x133 = 8972U;
	uint8_t x134 = 8U;
	int32_t x135 = INT32_MIN;
	uint64_t x136 = UINT64_MAX;
	volatile uint64_t t27 = 5798018997734061442LLU;

	t27 = (x133+(x134-(x135&x136)));

	if (t27 != 2147492628LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x137 = -1LL;
	static int64_t x139 = INT64_MIN;
	int8_t x140 = 3;
	static volatile int64_t t28 = -87772412LL;

	t28 = (x137+(x138-(x139&x140)));

	if (t28 != 126LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x141 = 14U;
	int8_t x142 = INT8_MIN;
	static uint64_t x143 = 55890075368LLU;
	int64_t x144 = -741882173148LL;
	uint64_t t29 = 984676469581357489LLU;

	t29 = (x141+(x142-(x143&x144)));

	if (t29 != 18446744069410371438LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x145 = 12;
	volatile int64_t x146 = 808LL;
	static int16_t x147 = INT16_MIN;
	volatile int16_t x148 = -1;
	int64_t t30 = -507LL;

	t30 = (x145+(x146-(x147&x148)));

	if (t30 != 33588LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x153 = 10236U;
	int16_t x154 = -8492;
	static int64_t x155 = INT64_MIN;
	uint16_t x156 = 1343U;
	volatile int64_t t31 = 7785075LL;

	t31 = (x153+(x154-(x155&x156)));

	if (t31 != 1744LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x161 = 24708U;
	int8_t x162 = 1;
	volatile uint8_t x163 = UINT8_MAX;
	static volatile int32_t x164 = -1;
	int32_t t32 = -243;

	t32 = (x161+(x162-(x163&x164)));

	if (t32 != 24454) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x165 = 1003508625LLU;
	volatile int8_t x166 = INT8_MIN;
	uint64_t x168 = 45880063040LLU;
	uint64_t t33 = 3227557332LLU;

	t33 = (x165+(x166-(x167&x168)));

	if (t33 != 18446744028832997137LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x169 = INT32_MIN;
	static volatile uint32_t x170 = 1U;
	int16_t x171 = INT16_MIN;
	int8_t x172 = INT8_MIN;
	uint32_t t34 = 993846U;

	t34 = (x169+(x170-(x171&x172)));

	if (t34 != 2147516417U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x173 = 21247LLU;
	volatile int8_t x174 = INT8_MAX;
	uint32_t x175 = UINT32_MAX;
	int32_t x176 = -1;
	uint64_t t35 = 442328755LLU;

	t35 = (x173+(x174-(x175&x176)));

	if (t35 != 21375LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x182 = INT16_MIN;
	int16_t x183 = 67;
	uint16_t x184 = UINT16_MAX;

	t36 = (x181+(x182-(x183&x184)));

	if (t36 != 18446744073709518780LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x185 = UINT32_MAX;
	int16_t x186 = -151;
	volatile uint32_t x187 = 7U;
	int64_t x188 = -1LL;
	static volatile int64_t t37 = -2443611739634LL;

	t37 = (x185+(x186-(x187&x188)));

	if (t37 != 4294967137LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x190 = -1;
	int8_t x191 = INT8_MAX;
	static volatile int32_t x192 = INT32_MIN;
	volatile int32_t t38 = -5;

	t38 = (x189+(x190-(x191&x192)));

	if (t38 != 65534) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x193 = -1;
	static volatile int32_t x194 = 7868;
	int64_t x195 = -429LL;
	uint32_t x196 = 457U;
	volatile int64_t t39 = -58720258370427LL;

	t39 = (x193+(x194-(x195&x196)));

	if (t39 != 7802LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x198 = 70U;
	uint64_t t40 = 1LLU;

	t40 = (x197+(x198-(x199&x200)));

	if (t40 != 423LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x202 = 28;
	volatile int32_t x203 = INT32_MIN;
	static uint16_t x204 = UINT16_MAX;

	t41 = (x201+(x202-(x203&x204)));

	if (t41 != 22) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x208 = -1;
	volatile uint64_t t42 = 231886651354181877LLU;

	t42 = (x205+(x206-(x207&x208)));

	if (t42 != 18446735470409499219LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x209 = INT16_MIN;
	volatile int32_t x210 = INT32_MAX;
	static volatile int16_t x212 = INT16_MAX;
	volatile int32_t t43 = 3339;

	t43 = (x209+(x210-(x211&x212)));

	if (t43 != 2147447856) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x214 = -1LL;
	uint64_t x215 = 816902468769586580LLU;
	volatile uint64_t t44 = 793LLU;

	t44 = (x213+(x214-(x215&x216)));

	if (t44 != 8406469568085189226LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x217 = INT64_MAX;
	int32_t x218 = INT32_MIN;
	static int8_t x219 = 0;

	t45 = (x217+(x218-(x219&x220)));

	if (t45 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x221 = INT32_MIN;
	volatile uint16_t x222 = 8883U;
	int8_t x223 = 9;
	int16_t x224 = INT16_MIN;
	static int32_t t46 = 331;

	t46 = (x221+(x222-(x223&x224)));

	if (t46 != -2147474765) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x226 = INT16_MIN;
	uint32_t x227 = 120812U;
	static int8_t x228 = INT8_MIN;
	uint32_t t47 = 102U;

	t47 = (x225+(x226-(x227&x228)));

	if (t47 != 4294813825U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x229 = -119;
	int16_t x230 = INT16_MIN;
	int64_t x231 = INT64_MIN;
	static volatile int64_t t48 = -812241674215LL;

	t48 = (x229+(x230-(x231&x232)));

	if (t48 != -32887LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x233 = 0;
	int16_t x234 = INT16_MIN;
	int8_t x236 = INT8_MAX;
	volatile uint32_t t49 = 2U;

	t49 = (x233+(x234-(x235&x236)));

	if (t49 != 4294934441U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x238 = INT8_MIN;
	static int32_t x239 = -32423105;

	t50 = (x237+(x238-(x239&x240)));

	if (t50 != 32422999LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x249 = 1U;
	int16_t x251 = INT16_MIN;
	volatile int16_t x252 = -1;
	static volatile int64_t t51 = 8154688813026LL;

	t51 = (x249+(x250-(x251&x252)));

	if (t51 != 32768LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x253 = INT64_MAX;
	static uint64_t x256 = 12622975145543047LLU;
	volatile uint64_t t52 = 16357769523611LLU;

	t52 = (x253+(x254-(x255&x256)));

	if (t52 != 9223372036854775799LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x257 = INT8_MIN;
	uint64_t x260 = 262061332951LLU;
	volatile uint64_t t53 = 1131019483LLU;

	t53 = (x257+(x258-(x259&x260)));

	if (t53 != 26024LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x261 = 0;
	int16_t x262 = INT16_MIN;
	volatile int32_t x263 = -12;
	int16_t x264 = -14617;
	int32_t t54 = -3228;

	t54 = (x261+(x262-(x263&x264)));

	if (t54 != -18148) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x267 = INT16_MIN;
	static int64_t x268 = -907462509598894155LL;
	int64_t t55 = 4731313LL;

	t55 = (x265+(x266-(x267&x268)));

	if (t55 != 907462509598937844LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x273 = -1;
	int16_t x274 = -1;
	volatile int64_t x275 = INT64_MIN;
	static uint16_t x276 = 36U;
	volatile int64_t t56 = 3546208LL;

	t56 = (x273+(x274-(x275&x276)));

	if (t56 != -2LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x281 = 75873U;
	int32_t x282 = -1;
	static int16_t x284 = INT16_MIN;
	volatile uint32_t t57 = 1177U;

	t57 = (x281+(x282-(x283&x284)));

	if (t57 != 75872U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x285 = UINT8_MAX;
	int8_t x286 = INT8_MAX;
	static int16_t x287 = -227;

	t58 = (x285+(x286-(x287&x288)));

	if (t58 != 353) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x296 = 606LLU;
	uint64_t t59 = 6836113089425LLU;

	t59 = (x293+(x294-(x295&x296)));

	if (t59 != 9223372036854775712LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x297 = INT8_MAX;
	volatile int16_t x298 = INT16_MIN;
	volatile int32_t x300 = INT32_MIN;
	int32_t t60 = 1003;

	t60 = (x297+(x298-(x299&x300)));

	if (t60 != -32641) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x305 = 39LL;
	volatile int32_t x306 = INT32_MIN;
	int64_t x307 = 97070789169789LL;
	int8_t x308 = -28;
	static volatile int64_t t61 = -83246180LL;

	t61 = (x305+(x306-(x307&x308)));

	if (t61 != -97072936653373LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x309 = -1;
	uint8_t x310 = 21U;
	int16_t x311 = -205;
	static volatile uint64_t t62 = 2539LLU;

	t62 = (x309+(x310-(x311&x312)));

	if (t62 != 225LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x318 = 1070U;
	volatile int64_t x319 = INT64_MIN;
	volatile int16_t x320 = 14445;
	int64_t t63 = -1LL;

	t63 = (x317+(x318-(x319&x320)));

	if (t63 != -2147482578LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x321 = -1;
	static volatile int16_t x322 = INT16_MIN;
	volatile int64_t x324 = -1LL;
	static int64_t t64 = -3839059394814LL;

	t64 = (x321+(x322-(x323&x324)));

	if (t64 != -32743LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x325 = 73U;
	int64_t x326 = INT64_MIN;
	int16_t x327 = INT16_MIN;
	int8_t x328 = -1;
	volatile int64_t t65 = -18481724033097812LL;

	t65 = (x325+(x326-(x327&x328)));

	if (t65 != -9223372036854742967LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x329 = 1;
	static uint32_t x330 = 4U;
	volatile uint16_t x331 = UINT16_MAX;
	int32_t x332 = -288;
	volatile uint32_t t66 = 2076U;

	t66 = (x329+(x330-(x331&x332)));

	if (t66 != 4294902053U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x333 = 68926698863042LLU;
	int8_t x334 = INT8_MIN;
	int8_t x335 = 63;

	t67 = (x333+(x334-(x335&x336)));

	if (t67 != 68926698862882LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x337 = 3142385868986LLU;
	int8_t x339 = 1;
	int8_t x340 = INT8_MAX;

	t68 = (x337+(x338-(x339&x340)));

	if (t68 != 9223375179240644792LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x342 = 3U;
	static uint32_t x343 = UINT32_MAX;

	t69 = (x341+(x342-(x343&x344)));

	if (t69 != 32643U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x353 = 72LL;
	int16_t x354 = INT16_MIN;
	volatile uint64_t x356 = UINT64_MAX;
	uint64_t t70 = 6842289598LLU;

	t70 = (x353+(x354-(x355&x356)));

	if (t70 != 18446744073709519048LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x357 = 7771687316373LLU;
	static int16_t x358 = -1;
	static uint64_t x359 = 4566138713LLU;
	static uint16_t x360 = UINT16_MAX;
	uint64_t t71 = 143362458089095089LLU;

	t71 = (x357+(x358-(x359&x360)));

	if (t71 != 7771687267387LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x361 = 1;
	static int32_t x362 = -1;
	int16_t x363 = 114;
	int8_t x364 = INT8_MIN;
	volatile int32_t t72 = 5;

	t72 = (x361+(x362-(x363&x364)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x366 = INT64_MAX;
	volatile int16_t x367 = -1880;
	static volatile int64_t t73 = -45411765149523LL;

	t73 = (x365+(x366-(x367&x368)));

	if (t73 != 9223372036854743007LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x369 = INT16_MIN;
	static int32_t x370 = INT32_MIN;
	uint32_t x371 = 260505U;
	int64_t x372 = INT64_MAX;
	volatile int64_t t74 = -1LL;

	t74 = (x369+(x370-(x371&x372)));

	if (t74 != -2147776921LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x373 = UINT8_MAX;
	uint32_t x374 = UINT32_MAX;
	uint8_t x375 = 18U;
	uint32_t t75 = 417U;

	t75 = (x373+(x374-(x375&x376)));

	if (t75 != 254U) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x377 = -1;
	uint32_t x378 = 1030808100U;
	int16_t x379 = 14004;
	static uint8_t x380 = UINT8_MAX;

	t76 = (x377+(x378-(x379&x380)));

	if (t76 != 1030807919U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x381 = INT32_MIN;
	volatile int16_t x382 = -14600;
	static int16_t x383 = INT16_MIN;
	int8_t x384 = INT8_MIN;

	t77 = (x381+(x382-(x383&x384)));

	if (t77 != -2147465480) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x385 = 17454775U;
	static volatile int16_t x386 = -71;
	uint8_t x387 = 120U;
	uint16_t x388 = 866U;

	t78 = (x385+(x386-(x387&x388)));

	if (t78 != 17454608U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x389 = 97;
	uint8_t x390 = UINT8_MAX;
	int32_t x391 = INT32_MAX;
	static int32_t x392 = INT32_MIN;
	int32_t t79 = -293244596;

	t79 = (x389+(x390-(x391&x392)));

	if (t79 != 352) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x397 = 2048;
	int64_t x398 = INT64_MIN;
	int8_t x399 = INT8_MIN;
	int64_t x400 = INT64_MIN;
	volatile int64_t t80 = 202949390462LL;

	t80 = (x397+(x398-(x399&x400)));

	if (t80 != 2048LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x405 = INT16_MIN;
	int32_t x406 = -9660;
	static int8_t x407 = -2;
	int32_t x408 = -1;
	volatile int32_t t81 = -1971;

	t81 = (x405+(x406-(x407&x408)));

	if (t81 != -42426) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x409 = INT32_MIN;
	int8_t x410 = INT8_MIN;
	uint8_t x411 = 97U;
	int64_t t82 = 5876033048859LL;

	t82 = (x409+(x410-(x411&x412)));

	if (t82 != -2147483776LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x413 = UINT16_MAX;
	int16_t x414 = INT16_MIN;
	int8_t x415 = -7;
	uint8_t x416 = 54U;
	int32_t t83 = -355;

	t83 = (x413+(x414-(x415&x416)));

	if (t83 != 32719) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x421 = INT64_MIN;
	static uint32_t x422 = 4540U;
	volatile int32_t x423 = -1;
	static volatile int16_t x424 = INT16_MIN;
	volatile int64_t t84 = 274313703613LL;

	t84 = (x421+(x422-(x423&x424)));

	if (t84 != -9223372036854738500LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x425 = UINT8_MAX;
	uint32_t x426 = UINT32_MAX;
	static int8_t x427 = INT8_MIN;
	int16_t x428 = -1;
	volatile uint32_t t85 = 11U;

	t85 = (x425+(x426-(x427&x428)));

	if (t85 != 382U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x429 = INT64_MIN;
	static uint64_t x430 = UINT64_MAX;
	volatile int32_t x431 = -1;
	uint8_t x432 = 22U;
	volatile uint64_t t86 = 1584LLU;

	t86 = (x429+(x430-(x431&x432)));

	if (t86 != 9223372036854775785LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x433 = 20251U;
	uint32_t x436 = 385746325U;
	static uint32_t t87 = 38U;

	t87 = (x433+(x434-(x435&x436)));

	if (t87 != 3909246679U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x441 = 13772LLU;
	int16_t x442 = INT16_MIN;
	uint8_t x443 = 53U;
	int32_t x444 = -57108;
	volatile uint64_t t88 = 3670942LLU;

	t88 = (x441+(x442-(x443&x444)));

	if (t88 != 18446744073709532584LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x445 = 10U;
	int16_t x446 = -3744;
	uint32_t x447 = UINT32_MAX;
	static uint32_t x448 = 27225U;
	static volatile uint32_t t89 = 26U;

	t89 = (x445+(x446-(x447&x448)));

	if (t89 != 4294936337U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x449 = 1;
	volatile uint64_t x450 = 15881140LLU;
	uint16_t x451 = UINT16_MAX;
	uint64_t t90 = 133334360901565LLU;

	t90 = (x449+(x450-(x451&x452)));

	if (t90 != 15881134LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x453 = 1;
	int16_t x454 = INT16_MIN;
	volatile uint32_t x455 = 11U;

	t91 = (x453+(x454-(x455&x456)));

	if (t91 != 18446744073709518841LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x457 = -1;
	uint16_t x458 = 0U;
	volatile uint64_t x459 = 48285415425870LLU;
	static int32_t x460 = INT32_MIN;

	t92 = (x457+(x458-(x459&x460)));

	if (t92 != 18446695789687209983LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x461 = UINT8_MAX;
	uint32_t x462 = 1002073U;
	int16_t x463 = INT16_MIN;
	uint32_t x464 = UINT32_MAX;
	volatile uint32_t t93 = 24606U;

	t93 = (x461+(x462-(x463&x464)));

	if (t93 != 1035096U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x466 = 0;
	static int16_t x467 = INT16_MIN;
	int64_t x468 = -1LL;
	volatile int64_t t94 = 29LL;

	t94 = (x465+(x466-(x467&x468)));

	if (t94 != 862392092564240LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x474 = 380963504U;
	int16_t x475 = INT16_MIN;

	t95 = (x473+(x474-(x475&x476)));

	if (t95 != 380969550U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x477 = INT8_MAX;
	int16_t x478 = INT16_MIN;
	int64_t x480 = INT64_MAX;
	volatile uint64_t t96 = 7121568165875105LLU;

	t96 = (x477+(x478-(x479&x480)));

	if (t96 != 9223372036854743168LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x481 = -1;
	static int32_t x482 = INT32_MAX;
	static volatile uint8_t x483 = 14U;
	int32_t x484 = INT32_MIN;
	int32_t t97 = -182571559;

	t97 = (x481+(x482-(x483&x484)));

	if (t97 != 2147483646) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x485 = UINT16_MAX;
	volatile int32_t x486 = -5;
	int64_t x487 = INT64_MAX;
	int8_t x488 = INT8_MIN;
	volatile int64_t t98 = 417056LL;

	t98 = (x485+(x486-(x487&x488)));

	if (t98 != -9223372036854710150LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x489 = 7U;
	static int8_t x491 = -1;
	uint64_t x492 = 1945718LLU;
	static uint64_t t99 = 23493182029LLU;

	t99 = (x489+(x490-(x491&x492)));

	if (t99 != 18446744073707605904LLU) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x13 = -1;
volatile int64_t x17 = -1LL;
int64_t x19 = INT64_MIN;
int8_t x22 = 6;
static uint16_t x25 = 9588U;
int8_t x26 = 7;
volatile uint8_t x27 = 0U;
static int8_t x28 = INT8_MAX;
static volatile int32_t t6 = 114;
int32_t x29 = -108078;
int64_t x33 = INT64_MIN;
uint64_t t8 = 2553946526938LLU;
int32_t x37 = -261094;
static uint32_t x42 = 61U;
int8_t x43 = 1;
volatile uint64_t x48 = UINT64_MAX;
uint8_t x61 = 1U;
int8_t x67 = 0;
int64_t x68 = INT64_MIN;
volatile int64_t x72 = -88657698355691428LL;
int32_t x85 = 41423662;
int16_t x88 = 26;
uint32_t x91 = UINT32_MAX;
int8_t x96 = INT8_MIN;
volatile uint32_t t22 = 1U;
static int8_t x102 = -1;
volatile int16_t x103 = INT16_MIN;
volatile int8_t x105 = INT8_MIN;
int16_t x111 = 0;
static volatile int32_t t25 = INT32_MIN;
volatile int32_t t26 = -11318;
volatile int32_t x124 = INT32_MIN;
volatile uint8_t x126 = 1U;
uint32_t x129 = 220U;
static volatile uint64_t t30 = 188142231LLU;
uint32_t t32 = 6675U;
int8_t x153 = -1;
static int32_t x155 = INT32_MIN;
uint16_t x156 = 911U;
static uint32_t x159 = UINT32_MAX;
int8_t x160 = -1;
uint16_t x163 = 18634U;
static uint32_t x173 = UINT32_MAX;
int64_t x174 = INT64_MIN;
static int16_t x175 = INT16_MIN;
uint64_t t40 = 378064634170766038LLU;
int16_t x183 = INT16_MAX;
int32_t x192 = -1;
volatile uint64_t x194 = 756LLU;
uint64_t x200 = UINT64_MAX;
int64_t t46 = 25094482LL;
static volatile int32_t x205 = -1;
int8_t x207 = INT8_MIN;
static int16_t x211 = INT16_MIN;
int16_t x215 = INT16_MAX;
uint8_t x216 = UINT8_MAX;
volatile int64_t t49 = -161837783LL;
static uint64_t x220 = 39406534LLU;
uint64_t t50 = 166512468652934560LLU;
static int64_t x221 = -1LL;
static int8_t x224 = 1;
volatile int8_t x228 = INT8_MIN;
uint16_t x240 = 31U;
volatile int64_t t58 = 0LL;
volatile uint64_t t61 = 540113046047LLU;
static uint64_t t62 = 471032LLU;
int32_t x273 = -1;
volatile int64_t x275 = INT64_MIN;
int64_t t63 = -135632469463LL;
uint16_t x277 = UINT16_MAX;
int16_t x287 = INT16_MIN;
int64_t x292 = INT64_MAX;
uint16_t x294 = 22U;
volatile uint64_t x300 = 82948683420572LLU;
int32_t t69 = 89;
int64_t x310 = 30184LL;
static int16_t x312 = INT16_MIN;
int16_t x322 = INT16_MIN;
int64_t t74 = 205740358619LL;
int32_t x332 = -504107;
int64_t x335 = INT64_MIN;
static volatile uint32_t t81 = 1516262016U;
int64_t x362 = -340001752LL;
int8_t x366 = INT8_MIN;
int64_t x369 = -1LL;
static volatile uint64_t x372 = UINT64_MAX;
uint64_t x385 = 1579LLU;
int8_t x388 = INT8_MIN;
int8_t x399 = 1;
uint64_t t90 = 452663142310392LLU;
volatile int16_t x407 = 15;
volatile uint16_t x410 = UINT16_MAX;
static int8_t x425 = INT8_MIN;
static uint32_t t96 = 7747U;
int32_t x434 = -787169159;
uint64_t x441 = 108LLU;


void f0(void) {
	int16_t x1 = -1;
	uint16_t x2 = 77U;
	int32_t x3 = INT32_MIN;
	static int16_t x4 = INT16_MAX;
	static volatile int32_t t0 = 1408119;

	t0 = (x1-(x2*(x3%x4)));

	if (t0 != 153) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MAX;
	volatile int16_t x6 = -20;
	int64_t x7 = INT64_MIN;
	uint32_t x8 = 13U;
	static int64_t t1 = -815219263191819LL;

	t1 = (x5-(x6*(x7%x8)));

	if (t1 != 2147483487LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -38;
	uint32_t x10 = 0U;
	uint16_t x11 = 12U;
	uint64_t x12 = 5LLU;
	static volatile uint64_t t2 = 9423241098LLU;

	t2 = (x9-(x10*(x11%x12)));

	if (t2 != 18446744073709551578LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x14 = UINT32_MAX;
	int16_t x15 = -1;
	int32_t x16 = -4233859;
	static volatile uint32_t t3 = 2047627U;

	t3 = (x13-(x14*(x15%x16)));

	if (t3 != 4294967294U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = UINT64_MAX;
	static volatile int8_t x20 = -1;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = (x17-(x18*(x19%x20)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 9;
	uint8_t x23 = UINT8_MAX;
	uint32_t x24 = 149004U;
	volatile uint32_t t5 = 2006399035U;

	t5 = (x21-(x22*(x23%x24)));

	if (t5 != 4294965775U) { NG(); } else { ; }
	
}

void f6(void) {


	t6 = (x25-(x26*(x27%x28)));

	if (t6 != 9588) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x30 = 868U;
	static uint32_t x31 = UINT32_MAX;
	static volatile int8_t x32 = -1;
	static volatile uint32_t t7 = 7079669U;

	t7 = (x29-(x30*(x31%x32)));

	if (t7 != 4294859218U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x34 = 1LLU;
	int32_t x35 = INT32_MIN;
	uint32_t x36 = 1U;

	t8 = (x33-(x34*(x35%x36)));

	if (t8 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x38 = 47;
	static int32_t x39 = INT32_MAX;
	volatile int16_t x40 = 126;
	volatile int32_t t9 = 2;

	t9 = (x37-(x38*(x39%x40)));

	if (t9 != -261141) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = 2572;
	int32_t x44 = -1;
	volatile uint32_t t10 = 36U;

	t10 = (x41-(x42*(x43%x44)));

	if (t10 != 2572U) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MAX;
	static uint32_t x46 = 91265658U;
	int8_t x47 = 0;
	uint64_t t11 = 490534472920628122LLU;

	t11 = (x45-(x46*(x47%x48)));

	if (t11 != 2147483647LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int16_t x50 = INT16_MIN;
	uint32_t x51 = 3556968U;
	static int8_t x52 = INT8_MAX;
	volatile uint32_t t12 = 0U;

	t12 = (x49-(x50*(x51%x52)));

	if (t12 != 2588544U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1660;
	int64_t x54 = INT64_MAX;
	int64_t x55 = -1LL;
	int16_t x56 = INT16_MAX;
	volatile int64_t t13 = -394320391LL;

	t13 = (x53-(x54*(x55%x56)));

	if (t13 != 9223372036854774147LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x62 = INT32_MIN;
	int16_t x63 = 12348;
	static int64_t x64 = -1LL;
	volatile int64_t t14 = -3LL;

	t14 = (x61-(x62*(x63%x64)));

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x65 = INT64_MIN;
	int16_t x66 = INT16_MIN;
	volatile int64_t t15 = INT64_MIN;

	t15 = (x65-(x66*(x67%x68)));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	volatile uint64_t x70 = UINT64_MAX;
	volatile int8_t x71 = INT8_MAX;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = (x69-(x70*(x71%x72)));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x73 = UINT16_MAX;
	uint64_t x74 = 1680LLU;
	int8_t x75 = INT8_MIN;
	uint32_t x76 = UINT32_MAX;
	uint64_t t17 = 21362LLU;

	t17 = (x73-(x74*(x75%x76)));

	if (t17 != 18446736858164774911LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = 49U;
	static int8_t x78 = INT8_MAX;
	static uint32_t x79 = UINT32_MAX;
	static volatile int64_t x80 = INT64_MIN;
	volatile int64_t t18 = 4600036707171863353LL;

	t18 = (x77-(x78*(x79%x80)));

	if (t18 != -545460846416LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x86 = UINT16_MAX;
	int32_t x87 = INT32_MIN;
	static volatile int32_t t19 = -5;

	t19 = (x85-(x86*(x87%x88)));

	if (t19 != 42996502) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x89 = -1829948469507LL;
	int8_t x90 = -27;
	uint32_t x92 = UINT32_MAX;
	static int64_t t20 = 28LL;

	t20 = (x89-(x90*(x91%x92)));

	if (t20 != -1829948469507LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x93 = -12;
	int32_t x94 = INT32_MIN;
	uint32_t x95 = 100120796U;
	static uint32_t t21 = 124378299U;

	t21 = (x93-(x94*(x95%x96)));

	if (t21 != 4294967284U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = INT32_MIN;
	int8_t x98 = -1;
	volatile uint32_t x99 = 0U;
	uint8_t x100 = 9U;

	t22 = (x97-(x98*(x99%x100)));

	if (t22 != 2147483648U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = UINT64_MAX;
	uint16_t x104 = 289U;
	volatile uint64_t t23 = 5911437203657423848LLU;

	t23 = (x101-(x102*(x103%x104)));

	if (t23 != 18446744073709551504LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x106 = 56;
	uint64_t x107 = 1295301269LLU;
	static int32_t x108 = -1;
	volatile uint64_t t24 = 6304741607894087743LLU;

	t24 = (x105-(x106*(x107%x108)));

	if (t24 != 18446744001172680424LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x109 = INT32_MIN;
	static volatile int32_t x110 = -23924;
	int16_t x112 = INT16_MAX;

	t25 = (x109-(x110*(x111%x112)));

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = -1;
	uint8_t x114 = 11U;
	int8_t x115 = -1;
	volatile int8_t x116 = INT8_MAX;

	t26 = (x113-(x114*(x115%x116)));

	if (t26 != 10) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = INT32_MIN;
	static int16_t x118 = INT16_MIN;
	int16_t x119 = -1;
	int16_t x120 = 1;
	static int32_t t27 = INT32_MIN;

	t27 = (x117-(x118*(x119%x120)));

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x121 = 0;
	static uint8_t x122 = 61U;
	static int32_t x123 = -1;
	int32_t t28 = -63;

	t28 = (x121-(x122*(x123%x124)));

	if (t28 != 61) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x125 = -1LL;
	int8_t x127 = INT8_MIN;
	uint64_t x128 = 218151858195LLU;
	static uint64_t t29 = 884272090949LLU;

	t29 = (x125-(x126*(x127%x128)));

	if (t29 != 18446743989660345787LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x130 = UINT16_MAX;
	uint32_t x131 = UINT32_MAX;
	volatile uint64_t x132 = 1917946245240LLU;

	t30 = (x129-(x130*(x131%x132)));

	if (t30 != 18446462603027874011LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = 7;
	volatile int8_t x134 = INT8_MIN;
	int64_t x135 = 0LL;
	static int32_t x136 = INT32_MAX;
	int64_t t31 = 47539LL;

	t31 = (x133-(x134*(x135%x136)));

	if (t31 != 7LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = INT16_MIN;
	volatile uint32_t x142 = UINT32_MAX;
	int32_t x143 = -191806;
	int8_t x144 = -1;

	t32 = (x141-(x142*(x143%x144)));

	if (t32 != 4294934528U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x145 = 82U;
	int8_t x146 = 0;
	int8_t x147 = 53;
	int64_t x148 = INT64_MAX;
	static int64_t t33 = -30214702986LL;

	t33 = (x145-(x146*(x147%x148)));

	if (t33 != 82LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = -1319;
	static uint16_t x150 = UINT16_MAX;
	uint16_t x151 = 6U;
	static volatile int16_t x152 = -185;
	volatile int32_t t34 = 34443;

	t34 = (x149-(x150*(x151%x152)));

	if (t34 != -394529) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x154 = INT8_MIN;
	int32_t t35 = 149;

	t35 = (x153-(x154*(x155%x156)));

	if (t35 != -84097) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x157 = UINT8_MAX;
	volatile int8_t x158 = INT8_MIN;
	uint32_t t36 = 3699118U;

	t36 = (x157-(x158*(x159%x160)));

	if (t36 != 255U) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x161 = -1;
	int8_t x162 = 0;
	static int8_t x164 = 47;
	volatile int32_t t37 = -4114676;

	t37 = (x161-(x162*(x163%x164)));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x169 = INT8_MAX;
	volatile int32_t x170 = -1;
	uint32_t x171 = UINT32_MAX;
	volatile int16_t x172 = INT16_MAX;
	volatile uint32_t t38 = 168484U;

	t38 = (x169-(x170*(x171%x172)));

	if (t38 != 130U) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x176 = -1;
	static volatile int64_t t39 = 2086001139LL;

	t39 = (x173-(x174*(x175%x176)));

	if (t39 != 4294967295LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = -1;
	volatile int64_t x178 = INT64_MAX;
	uint64_t x179 = 66709232797LLU;
	int16_t x180 = 6974;

	t40 = (x177-(x178*(x179%x180)));

	if (t40 != 9223372036854776498LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x181 = 57550750588489601LLU;
	uint8_t x182 = 120U;
	volatile int16_t x184 = INT16_MAX;
	static uint64_t t41 = 51960183LLU;

	t41 = (x181-(x182*(x183%x184)));

	if (t41 != 57550750588489601LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x185 = INT32_MIN;
	int8_t x186 = 0;
	int32_t x187 = -1;
	int16_t x188 = INT16_MAX;
	volatile int32_t t42 = INT32_MIN;

	t42 = (x185-(x186*(x187%x188)));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x189 = INT8_MAX;
	uint32_t x190 = 153062454U;
	int8_t x191 = INT8_MAX;
	static volatile uint32_t t43 = 6U;

	t43 = (x189-(x190*(x191%x192)));

	if (t43 != 127U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x193 = UINT32_MAX;
	volatile int64_t x195 = -1LL;
	static uint16_t x196 = UINT16_MAX;
	volatile uint64_t t44 = 1904069628003589946LLU;

	t44 = (x193-(x194*(x195%x196)));

	if (t44 != 4294968051LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = INT8_MIN;
	uint16_t x198 = 639U;
	int8_t x199 = -1;
	volatile uint64_t t45 = 510989428669LLU;

	t45 = (x197-(x198*(x199%x200)));

	if (t45 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x201 = INT8_MIN;
	static int32_t x202 = 595484;
	int8_t x203 = -1;
	int64_t x204 = INT64_MAX;

	t46 = (x201-(x202*(x203%x204)));

	if (t46 != 595356LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x206 = INT8_MAX;
	uint64_t x208 = 1305817LLU;
	volatile uint64_t t47 = 34479394719LLU;

	t47 = (x205-(x206*(x207%x208)));

	if (t47 != 18446744073602838214LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x209 = 44631200049LL;
	int8_t x210 = INT8_MIN;
	int16_t x212 = INT16_MAX;
	int64_t t48 = 1835672391823478LL;

	t48 = (x209-(x210*(x211%x212)));

	if (t48 != 44631199921LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x213 = INT16_MIN;
	int64_t x214 = -1LL;

	t49 = (x213-(x214*(x215%x216)));

	if (t49 != -32641LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = 1;
	static uint64_t x218 = 1356528077527LLU;
	uint16_t x219 = UINT16_MAX;

	t50 = (x217-(x218*(x219%x220)));

	if (t50 != 18357844006148819672LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x222 = UINT32_MAX;
	int64_t x223 = INT64_MAX;
	volatile int64_t t51 = 1LL;

	t51 = (x221-(x222*(x223%x224)));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x225 = 107;
	static int64_t x226 = 8056020255LL;
	int16_t x227 = 25;
	static volatile int64_t t52 = -2347572LL;

	t52 = (x225-(x226*(x227%x228)));

	if (t52 != -201400506268LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x229 = 51;
	uint16_t x230 = UINT16_MAX;
	int32_t x231 = INT32_MIN;
	int8_t x232 = INT8_MAX;
	int32_t t53 = -1187;

	t53 = (x229-(x230*(x231%x232)));

	if (t53 != 524331) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x233 = UINT8_MAX;
	static uint8_t x234 = 5U;
	volatile int16_t x235 = INT16_MIN;
	int64_t x236 = INT64_MIN;
	static volatile int64_t t54 = -15192774862048LL;

	t54 = (x233-(x234*(x235%x236)));

	if (t54 != 164095LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x237 = INT64_MAX;
	volatile int8_t x238 = 0;
	int64_t x239 = -2110429914939LL;
	volatile int64_t t55 = INT64_MAX;

	t55 = (x237-(x238*(x239%x240)));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x241 = INT32_MIN;
	static int16_t x242 = -325;
	static int16_t x243 = INT16_MAX;
	volatile uint64_t x244 = UINT64_MAX;
	volatile uint64_t t56 = 42034670LLU;

	t56 = (x241-(x242*(x243%x244)));

	if (t56 != 18446744071572717243LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x245 = INT32_MAX;
	static int16_t x246 = -1;
	int16_t x247 = INT16_MIN;
	int64_t x248 = INT64_MIN;
	volatile int64_t t57 = -50658290872971LL;

	t57 = (x245-(x246*(x247%x248)));

	if (t57 != 2147450879LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x249 = INT64_MAX;
	uint32_t x250 = UINT32_MAX;
	static volatile int16_t x251 = -996;
	int16_t x252 = INT16_MIN;

	t58 = (x249-(x250*(x251%x252)));

	if (t58 != 9223372036854774811LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x257 = INT16_MIN;
	int16_t x258 = -1;
	volatile int64_t x259 = -1LL;
	static int16_t x260 = INT16_MAX;
	static int64_t t59 = 39539973LL;

	t59 = (x257-(x258*(x259%x260)));

	if (t59 != -32769LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x261 = 9U;
	int32_t x262 = 784158;
	volatile int32_t x263 = INT32_MIN;
	int16_t x264 = INT16_MAX;
	volatile int32_t t60 = -3976;

	t60 = (x261-(x262*(x263%x264)));

	if (t60 != 1568325) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = -10989;
	uint64_t x266 = 40908088LLU;
	uint64_t x267 = 32527829957064104LLU;
	int16_t x268 = INT16_MAX;

	t61 = (x265-(x266*(x267%x268)));

	if (t61 != 18446743690073491363LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x269 = 27157U;
	uint64_t x270 = UINT64_MAX;
	uint16_t x271 = UINT16_MAX;
	int32_t x272 = INT32_MAX;

	t62 = (x269-(x270*(x271%x272)));

	if (t62 != 92692LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x274 = INT32_MIN;
	static int16_t x276 = INT16_MIN;

	t63 = (x273-(x274*(x275%x276)));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x278 = INT32_MAX;
	int64_t x279 = -480LL;
	static int64_t x280 = INT64_MAX;
	volatile int64_t t64 = 15454679574LL;

	t64 = (x277-(x278*(x279%x280)));

	if (t64 != 1030792216095LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x285 = INT64_MAX;
	volatile uint16_t x286 = 0U;
	volatile uint16_t x288 = UINT16_MAX;
	volatile int64_t t65 = INT64_MAX;

	t65 = (x285-(x286*(x287%x288)));

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x289 = 216U;
	volatile int64_t x290 = INT64_MAX;
	uint64_t x291 = UINT64_MAX;
	volatile uint64_t t66 = 19993LLU;

	t66 = (x289-(x290*(x291%x292)));

	if (t66 != 9223372036854776025LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x293 = 2449LLU;
	uint32_t x295 = 0U;
	uint8_t x296 = 37U;
	static volatile uint64_t t67 = 401470871LLU;

	t67 = (x293-(x294*(x295%x296)));

	if (t67 != 2449LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x297 = 27879857U;
	int64_t x298 = 3114498LL;
	volatile int16_t x299 = -1;
	uint64_t t68 = 3916609LLU;

	t68 = (x297-(x298*(x299%x300)));

	if (t68 != 1006971617934062555LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x305 = UINT8_MAX;
	static uint8_t x306 = 56U;
	int16_t x307 = INT16_MIN;
	int16_t x308 = -553;

	t69 = (x305-(x306*(x307%x308)));

	if (t69 != 8151) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x309 = INT16_MAX;
	int32_t x311 = -680397;
	static volatile int64_t t70 = -11421370518LL;

	t70 = (x309-(x310*(x311%x312)));

	if (t70 != 755749575LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x313 = 21U;
	volatile int16_t x314 = INT16_MIN;
	int8_t x315 = -17;
	static int32_t x316 = INT32_MAX;
	volatile int32_t t71 = -1784;

	t71 = (x313-(x314*(x315%x316)));

	if (t71 != -557035) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x317 = 7888947U;
	volatile uint16_t x318 = 1303U;
	volatile int32_t x319 = 1646572;
	volatile int16_t x320 = 282;
	static uint32_t t72 = 809011U;

	t72 = (x317-(x318*(x319%x320)));

	if (t72 != 7555379U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x321 = 525U;
	int64_t x323 = -1LL;
	int32_t x324 = INT32_MIN;
	int64_t t73 = 1749LL;

	t73 = (x321-(x322*(x323%x324)));

	if (t73 != -32243LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x325 = 3U;
	int8_t x326 = INT8_MAX;
	int64_t x327 = -4879LL;
	int64_t x328 = -2LL;

	t74 = (x325-(x326*(x327%x328)));

	if (t74 != 130LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x329 = UINT8_MAX;
	int16_t x330 = -1;
	static int16_t x331 = INT16_MAX;
	int32_t t75 = 286687873;

	t75 = (x329-(x330*(x331%x332)));

	if (t75 != 33022) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x333 = INT8_MIN;
	int16_t x334 = INT16_MIN;
	static int8_t x336 = INT8_MAX;
	static volatile int64_t t76 = 17914213980204445LL;

	t76 = (x333-(x334*(x335%x336)));

	if (t76 != -32896LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x337 = -1LL;
	int32_t x338 = INT32_MIN;
	int64_t x339 = -65LL;
	volatile uint32_t x340 = 42235680U;
	volatile int64_t t77 = 460849936379729LL;

	t77 = (x337-(x338*(x339%x340)));

	if (t77 != -139586437121LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x341 = 6U;
	int64_t x342 = 262787824593LL;
	uint16_t x343 = 4U;
	volatile int16_t x344 = -13;
	int64_t t78 = -307216100800445LL;

	t78 = (x341-(x342*(x343%x344)));

	if (t78 != -1051151298366LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x345 = 650;
	static int8_t x346 = INT8_MIN;
	int32_t x347 = -24;
	int64_t x348 = INT64_MIN;
	static int64_t t79 = -9853LL;

	t79 = (x345-(x346*(x347%x348)));

	if (t79 != -2422LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x349 = 132852U;
	int16_t x350 = INT16_MIN;
	static int8_t x351 = 1;
	static int32_t x352 = -364580;
	uint32_t t80 = 43289U;

	t80 = (x349-(x350*(x351%x352)));

	if (t80 != 165620U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x353 = 55;
	volatile int32_t x354 = INT32_MAX;
	uint32_t x355 = 946U;
	static uint32_t x356 = 32488582U;

	t81 = (x353-(x354*(x355%x356)));

	if (t81 != 1001U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x361 = 14U;
	int8_t x363 = 4;
	int64_t x364 = INT64_MIN;
	int64_t t82 = -22860614386LL;

	t82 = (x361-(x362*(x363%x364)));

	if (t82 != 1360007022LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x365 = 2;
	volatile int64_t x367 = INT64_MIN;
	int32_t x368 = INT32_MIN;
	int64_t t83 = -14698642323LL;

	t83 = (x365-(x366*(x367%x368)));

	if (t83 != 2LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x370 = 3U;
	int16_t x371 = -1;
	uint64_t t84 = UINT64_MAX;

	t84 = (x369-(x370*(x371%x372)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x373 = -1;
	static int8_t x374 = INT8_MIN;
	static int16_t x375 = INT16_MIN;
	int16_t x376 = INT16_MIN;
	int32_t t85 = 9397978;

	t85 = (x373-(x374*(x375%x376)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x377 = UINT64_MAX;
	volatile int16_t x378 = 0;
	static int8_t x379 = -28;
	static int8_t x380 = 1;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = (x377-(x378*(x379%x380)));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x386 = 124;
	int32_t x387 = 225;
	volatile uint64_t t87 = 39240663LLU;

	t87 = (x385-(x386*(x387%x388)));

	if (t87 != 18446744073709541167LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x389 = UINT64_MAX;
	int8_t x390 = -1;
	uint8_t x391 = UINT8_MAX;
	uint32_t x392 = 55081U;
	uint64_t t88 = 332447671LLU;

	t88 = (x389-(x390*(x391%x392)));

	if (t88 != 18446744069414584574LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x393 = UINT8_MAX;
	uint16_t x394 = 620U;
	volatile uint8_t x395 = 49U;
	volatile int16_t x396 = -1;
	int32_t t89 = 190;

	t89 = (x393-(x394*(x395%x396)));

	if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x397 = -7923;
	volatile uint64_t x398 = 23991271LLU;
	volatile int32_t x400 = 42;

	t90 = (x397-(x398*(x399%x400)));

	if (t90 != 18446744073685552422LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x401 = INT8_MIN;
	volatile int8_t x402 = INT8_MIN;
	int64_t x403 = INT64_MAX;
	int32_t x404 = 1053731;
	volatile int64_t t91 = 77174764LL;

	t91 = (x401-(x402*(x403%x404)));

	if (t91 != 14676352LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x405 = INT8_MIN;
	uint16_t x406 = 13320U;
	uint64_t x408 = 16737LLU;
	volatile uint64_t t92 = 486096596901060LLU;

	t92 = (x405-(x406*(x407%x408)));

	if (t92 != 18446744073709351688LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x409 = 1U;
	int8_t x411 = -1;
	volatile int8_t x412 = INT8_MAX;
	static int32_t t93 = -301;

	t93 = (x409-(x410*(x411%x412)));

	if (t93 != 65536) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x413 = INT16_MAX;
	int16_t x414 = -1;
	static volatile int64_t x415 = 24LL;
	uint32_t x416 = 1965U;
	int64_t t94 = 247435LL;

	t94 = (x413-(x414*(x415%x416)));

	if (t94 != 32791LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x417 = 94U;
	int8_t x418 = INT8_MIN;
	int8_t x419 = INT8_MIN;
	static int16_t x420 = 4921;
	static volatile int32_t t95 = 0;

	t95 = (x417-(x418*(x419%x420)));

	if (t95 != -16290) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x426 = 15766244U;
	int32_t x427 = 460563252;
	uint32_t x428 = UINT32_MAX;

	t96 = (x425-(x426*(x427%x428)));

	if (t96 != 2569993520U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x429 = 11U;
	static int8_t x430 = -3;
	static int16_t x431 = -1;
	static int8_t x432 = 6;
	static int32_t t97 = 1;

	t97 = (x429-(x430*(x431%x432)));

	if (t97 != 8) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x433 = UINT32_MAX;
	volatile uint64_t x435 = UINT64_MAX;
	int64_t x436 = INT64_MIN;
	static volatile uint64_t t98 = 2LLU;

	t98 = (x433-(x434*(x435%x436)));

	if (t98 != 9223372040362573944LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x442 = -1LL;
	int8_t x443 = INT8_MIN;
	uint64_t x444 = UINT64_MAX;
	uint64_t t99 = 389LLU;

	t99 = (x441-(x442*(x443%x444)));

	if (t99 != 18446744073709551596LLU) { NG(); } else { ; }
	
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


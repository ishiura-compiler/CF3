#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x5 = INT64_MIN;
uint8_t x14 = 1U;
int64_t x25 = INT64_MAX;
static int32_t x27 = INT32_MAX;
volatile int32_t t7 = 94675821;
int64_t x34 = -11704277322LL;
volatile int64_t x38 = INT64_MAX;
volatile int32_t x41 = -1421506;
int8_t x43 = INT8_MIN;
int64_t x48 = INT64_MAX;
static volatile uint64_t x49 = 157168036326296664LLU;
volatile int64_t x50 = 1633427LL;
int64_t x56 = 1LL;
int8_t x60 = INT8_MIN;
volatile int32_t t15 = 1715802;
uint64_t x68 = 63521402LLU;
volatile int32_t t16 = 678564;
uint8_t x73 = 1U;
int32_t t18 = 2;
int8_t x77 = INT8_MIN;
volatile int32_t t19 = 1;
volatile int32_t x84 = INT32_MIN;
uint32_t t20 = 1327229U;
uint16_t x88 = UINT16_MAX;
static uint32_t x90 = UINT32_MAX;
volatile int16_t x100 = 5;
int8_t x110 = 0;
uint32_t x111 = 3U;
uint32_t t27 = 2U;
static int32_t t28 = 19;
int64_t x119 = INT64_MIN;
volatile int32_t x121 = INT32_MIN;
uint16_t x123 = UINT16_MAX;
volatile int16_t x126 = INT16_MIN;
uint32_t t31 = 88135U;
uint16_t x130 = UINT16_MAX;
int16_t x131 = -1;
uint16_t x133 = UINT16_MAX;
volatile int16_t x139 = INT16_MAX;
int8_t x140 = -1;
volatile int64_t x141 = -1LL;
int64_t x145 = INT64_MIN;
int8_t x160 = 1;
int32_t t41 = -958047;
static uint8_t x169 = UINT8_MAX;
int32_t t42 = 365209;
int64_t x173 = -1LL;
volatile uint16_t x177 = 68U;
volatile int32_t t44 = -14825538;
int16_t x181 = INT16_MIN;
static int16_t x183 = 2;
uint16_t x185 = UINT16_MAX;
int32_t x188 = 29;
volatile uint64_t x190 = 233043380336LLU;
int16_t x196 = INT16_MAX;
uint16_t x202 = UINT16_MAX;
int8_t x204 = -1;
static volatile uint64_t x208 = 3868233LLU;
int8_t x210 = -1;
uint64_t x223 = UINT64_MAX;
volatile uint32_t x224 = UINT32_MAX;
static int32_t x226 = INT32_MAX;
uint64_t x230 = 423578LLU;
int16_t x234 = -1969;
volatile uint64_t x241 = UINT64_MAX;
int32_t x246 = INT32_MAX;
uint32_t x251 = UINT32_MAX;
int64_t x255 = 1LL;
int64_t x256 = INT64_MAX;
int32_t t63 = -201060602;
uint8_t x258 = UINT8_MAX;
static int64_t x260 = -1LL;
uint64_t x261 = 13680825LLU;
volatile int32_t x262 = INT32_MIN;
static int8_t x264 = -1;
int8_t x266 = -23;
uint64_t x271 = 11630586751LLU;
int64_t x279 = INT64_MIN;
int8_t x286 = INT8_MIN;
int32_t t71 = -22609;
volatile uint64_t x290 = 311524267915365679LLU;
int64_t x293 = INT64_MAX;
uint8_t x296 = 6U;
uint64_t x299 = UINT64_MAX;
volatile int8_t x306 = 1;
int32_t t76 = 39;
static volatile uint64_t x312 = 58954464566302LLU;
int64_t x313 = -125861912329497350LL;
int64_t x315 = 3293859095953982LL;
uint64_t x317 = 28334987632869545LLU;
int64_t x323 = -1LL;
int32_t t81 = 240334;
int64_t x347 = INT64_MIN;
volatile uint32_t t86 = 0U;
uint64_t x351 = 1317LLU;
volatile uint32_t t87 = 3U;
volatile int8_t x363 = INT8_MIN;
int32_t x364 = INT32_MIN;
static int64_t x367 = INT64_MIN;
int16_t x372 = INT16_MAX;
volatile uint16_t x375 = 412U;
volatile int64_t t94 = 22562784721353661LL;
volatile int8_t x390 = INT8_MIN;
uint16_t x391 = 816U;
volatile int32_t t97 = 1;
static volatile int8_t x400 = -1;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	static int16_t x2 = INT16_MIN;
	int64_t x3 = INT64_MAX;
	static volatile uint16_t x4 = 112U;
	static int32_t t0 = -54998521;

	t0 = (x1&(x2*(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x6 = -923;
	uint8_t x7 = 0U;
	static uint8_t x8 = UINT8_MAX;
	static int64_t t1 = INT64_MIN;

	t1 = (x5&(x6*(x7<=x8)));

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	uint32_t x10 = UINT32_MAX;
	int8_t x11 = -1;
	int32_t x12 = INT32_MIN;
	int64_t t2 = -91499LL;

	t2 = (x9&(x10*(x11<=x12)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MAX;
	volatile uint64_t x15 = 4192637693059LLU;
	int64_t x16 = 26236237119LL;
	int64_t t3 = -5744LL;

	t3 = (x13&(x14*(x15<=x16)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int32_t x18 = INT32_MIN;
	int64_t x19 = -25123698LL;
	int32_t x20 = INT32_MIN;
	int64_t t4 = 1440LL;

	t4 = (x17&(x18*(x19<=x20)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 385077U;
	int8_t x22 = INT8_MIN;
	static volatile uint8_t x23 = UINT8_MAX;
	int16_t x24 = 3787;
	uint32_t t5 = 122711646U;

	t5 = (x21&(x22*(x23<=x24)));

	if (t5 != 385024U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = -176121566LL;
	uint16_t x28 = 0U;
	static int64_t t6 = 1692248LL;

	t6 = (x25&(x26*(x27<=x28)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = -1;
	int8_t x30 = INT8_MAX;
	static int8_t x31 = INT8_MIN;
	volatile uint8_t x32 = 5U;

	t7 = (x29&(x30*(x31<=x32)));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	uint64_t x35 = UINT64_MAX;
	static int16_t x36 = -1;
	volatile int64_t t8 = -228038094062052LL;

	t8 = (x33&(x34*(x35<=x36)));

	if (t8 != 26294LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = INT64_MIN;
	int32_t x39 = -1;
	uint8_t x40 = UINT8_MAX;
	volatile int64_t t9 = -213128112LL;

	t9 = (x37&(x38*(x39<=x40)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x42 = 29241;
	static uint16_t x44 = 3U;
	int32_t t10 = -550;

	t10 = (x41&(x42*(x43<=x44)));

	if (t10 != 16952) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = -1;
	uint8_t x46 = 19U;
	static int16_t x47 = INT16_MIN;
	volatile int32_t t11 = 375356;

	t11 = (x45&(x46*(x47<=x48)));

	if (t11 != 19) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x51 = 674957853548LLU;
	volatile int16_t x52 = -1;
	static uint64_t t12 = 1000LLU;

	t12 = (x49&(x50*(x51<=x52)));

	if (t12 != 19472LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = INT64_MAX;
	int64_t x54 = -1LL;
	uint32_t x55 = 74215369U;
	volatile int64_t t13 = -1196776420297160691LL;

	t13 = (x53&(x54*(x55<=x56)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	int64_t x58 = INT64_MIN;
	int8_t x59 = INT8_MIN;
	volatile int64_t t14 = INT64_MIN;

	t14 = (x57&(x58*(x59<=x60)));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -418;
	static int32_t x62 = 6;
	int64_t x63 = INT64_MIN;
	int16_t x64 = INT16_MIN;

	t15 = (x61&(x62*(x63<=x64)));

	if (t15 != 6) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = INT16_MAX;
	uint8_t x66 = 3U;
	uint64_t x67 = UINT64_MAX;

	t16 = (x65&(x66*(x67<=x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	int32_t x70 = 0;
	static int8_t x71 = -1;
	int8_t x72 = -4;
	volatile int64_t t17 = -5363585070434274LL;

	t17 = (x69&(x70*(x71<=x72)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x74 = 0U;
	volatile int8_t x75 = INT8_MIN;
	static uint16_t x76 = 1U;

	t18 = (x73&(x74*(x75<=x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = 8;
	volatile int32_t x79 = 58;
	uint32_t x80 = UINT32_MAX;

	t19 = (x77&(x78*(x79<=x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = UINT32_MAX;
	static uint32_t x82 = UINT32_MAX;
	int64_t x83 = INT64_MAX;

	t20 = (x81&(x82*(x83<=x84)));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	uint8_t x86 = UINT8_MAX;
	volatile uint64_t x87 = 15236LLU;
	static uint32_t t21 = 7U;

	t21 = (x85&(x86*(x87<=x88)));

	if (t21 != 255U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	static int64_t x91 = 243654104200LL;
	int16_t x92 = 4312;
	uint64_t t22 = 1531852288405266375LLU;

	t22 = (x89&(x90*(x91<=x92)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x93 = 94224756LLU;
	int32_t x94 = -1;
	uint64_t x95 = UINT64_MAX;
	int8_t x96 = -1;
	volatile uint64_t t23 = 22972772450226041LLU;

	t23 = (x93&(x94*(x95<=x96)));

	if (t23 != 94224756LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = INT16_MIN;
	static int16_t x98 = INT16_MAX;
	uint16_t x99 = UINT16_MAX;
	int32_t t24 = -778354;

	t24 = (x97&(x98*(x99<=x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint64_t x101 = 2860398452LLU;
	static int8_t x102 = -1;
	int8_t x103 = 1;
	static uint8_t x104 = UINT8_MAX;
	volatile uint64_t t25 = 7473405783751029LLU;

	t25 = (x101&(x102*(x103<=x104)));

	if (t25 != 2860398452LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1;
	static int16_t x106 = -5;
	static uint8_t x107 = 45U;
	static volatile int16_t x108 = -1;
	volatile int32_t t26 = 109470345;

	t26 = (x105&(x106*(x107<=x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 28919U;
	uint16_t x112 = UINT16_MAX;

	t27 = (x109&(x110*(x111<=x112)));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = -34;
	static volatile int8_t x114 = INT8_MIN;
	int64_t x115 = 1LL;
	volatile int16_t x116 = -2;

	t28 = (x113&(x114*(x115<=x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	uint8_t x118 = UINT8_MAX;
	uint32_t x120 = UINT32_MAX;
	volatile int32_t t29 = 559715;

	t29 = (x117&(x118*(x119<=x120)));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x122 = INT64_MAX;
	uint8_t x124 = 0U;
	static int64_t t30 = 83201LL;

	t30 = (x121&(x122*(x123<=x124)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 204365334U;
	int8_t x127 = INT8_MAX;
	uint64_t x128 = 9388772686269434LLU;

	t31 = (x125&(x126*(x127<=x128)));

	if (t31 != 204341248U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1LL;
	int32_t x132 = INT32_MIN;
	volatile int64_t t32 = -27806370353051LL;

	t32 = (x129&(x130*(x131<=x132)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = -36120;
	uint16_t x135 = 1234U;
	int32_t x136 = INT32_MIN;
	volatile int32_t t33 = -13914195;

	t33 = (x133&(x134*(x135<=x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = -5;
	int64_t x138 = 17LL;
	volatile int64_t t34 = 1LL;

	t34 = (x137&(x138*(x139<=x140)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x142 = 230169U;
	int16_t x143 = INT16_MIN;
	int8_t x144 = 12;
	int64_t t35 = -14LL;

	t35 = (x141&(x142*(x143<=x144)));

	if (t35 != 230169LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x146 = INT64_MIN;
	uint16_t x147 = 2U;
	int64_t x148 = INT64_MIN;
	static volatile int64_t t36 = -4028867607387937113LL;

	t36 = (x145&(x146*(x147<=x148)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	uint32_t x150 = UINT32_MAX;
	int64_t x151 = -1LL;
	int8_t x152 = INT8_MIN;
	uint32_t t37 = 971162705U;

	t37 = (x149&(x150*(x151<=x152)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = -1;
	static volatile int16_t x154 = 600;
	int32_t x155 = -1;
	static volatile int8_t x156 = -1;
	static int32_t t38 = 1;

	t38 = (x153&(x154*(x155<=x156)));

	if (t38 != 600) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = 438;
	uint64_t x158 = 49927624485386LLU;
	int8_t x159 = 2;
	volatile uint64_t t39 = 51162489905LLU;

	t39 = (x157&(x158*(x159<=x160)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	int32_t x162 = 5;
	static uint64_t x163 = 1657162720386599644LLU;
	static int32_t x164 = -1;
	int32_t t40 = -125228419;

	t40 = (x161&(x162*(x163<=x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -11275;
	int32_t x166 = INT32_MAX;
	uint64_t x167 = UINT64_MAX;
	int8_t x168 = 1;

	t41 = (x165&(x166*(x167<=x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x170 = -1;
	int8_t x171 = INT8_MAX;
	int8_t x172 = -31;

	t42 = (x169&(x170*(x171<=x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x174 = 24U;
	static volatile int16_t x175 = 3;
	int64_t x176 = -651786LL;
	int64_t t43 = -382LL;

	t43 = (x173&(x174*(x175<=x176)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x178 = 0U;
	static int8_t x179 = INT8_MIN;
	uint32_t x180 = 4U;

	t44 = (x177&(x178*(x179<=x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x182 = 6996875030790379LL;
	int32_t x184 = -1;
	volatile int64_t t45 = -48552908717LL;

	t45 = (x181&(x182*(x183<=x184)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x186 = INT32_MIN;
	int8_t x187 = INT8_MAX;
	static volatile int32_t t46 = 1;

	t46 = (x185&(x186*(x187<=x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x189 = UINT8_MAX;
	uint32_t x191 = UINT32_MAX;
	uint64_t x192 = 4671553340483LLU;
	uint64_t t47 = 6LLU;

	t47 = (x189&(x190*(x191<=x192)));

	if (t47 != 112LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	uint8_t x194 = UINT8_MAX;
	int64_t x195 = 28318946385322LL;
	static volatile int32_t t48 = 0;

	t48 = (x193&(x194*(x195<=x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MAX;
	int32_t x198 = INT32_MAX;
	uint64_t x199 = UINT64_MAX;
	static volatile int16_t x200 = INT16_MAX;
	volatile int64_t t49 = -4088676596LL;

	t49 = (x197&(x198*(x199<=x200)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = INT8_MAX;
	uint64_t x203 = 11709LLU;
	volatile int32_t t50 = -12227;

	t50 = (x201&(x202*(x203<=x204)));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 12666U;
	int64_t x206 = -1LL;
	uint32_t x207 = UINT32_MAX;
	volatile int64_t t51 = 3959133476LL;

	t51 = (x205&(x206*(x207<=x208)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -459860LL;
	int16_t x211 = INT16_MAX;
	static uint16_t x212 = 16357U;
	volatile int64_t t52 = -166579483LL;

	t52 = (x209&(x210*(x211<=x212)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x213 = -1;
	int32_t x214 = INT32_MIN;
	static int16_t x215 = INT16_MIN;
	uint16_t x216 = 102U;
	int32_t t53 = INT32_MIN;

	t53 = (x213&(x214*(x215<=x216)));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -43;
	static int8_t x218 = -1;
	volatile int32_t x219 = -2838;
	int16_t x220 = INT16_MAX;
	volatile int32_t t54 = -26054;

	t54 = (x217&(x218*(x219<=x220)));

	if (t54 != -43) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x221 = UINT32_MAX;
	int8_t x222 = INT8_MIN;
	volatile uint32_t t55 = 53498U;

	t55 = (x221&(x222*(x223<=x224)));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = 1;
	int8_t x227 = 1;
	uint8_t x228 = 15U;
	volatile int32_t t56 = -12816120;

	t56 = (x225&(x226*(x227<=x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 1U;
	int16_t x231 = -92;
	int64_t x232 = INT64_MIN;
	volatile uint64_t t57 = 180495312729LLU;

	t57 = (x229&(x230*(x231<=x232)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -128082;
	int64_t x235 = 106112LL;
	volatile int8_t x236 = INT8_MIN;
	int32_t t58 = 1;

	t58 = (x233&(x234*(x235<=x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = UINT32_MAX;
	int16_t x238 = INT16_MIN;
	volatile uint8_t x239 = 0U;
	static uint16_t x240 = UINT16_MAX;
	uint32_t t59 = 28U;

	t59 = (x237&(x238*(x239<=x240)));

	if (t59 != 4294934528U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = INT8_MAX;
	uint16_t x243 = UINT16_MAX;
	uint32_t x244 = 32480689U;
	volatile uint64_t t60 = 760691LLU;

	t60 = (x241&(x242*(x243<=x244)));

	if (t60 != 127LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 0U;
	uint32_t x247 = UINT32_MAX;
	int64_t x248 = -1LL;
	int32_t t61 = -71430887;

	t61 = (x245&(x246*(x247<=x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 891899LLU;
	static int8_t x250 = INT8_MIN;
	static uint16_t x252 = 31389U;
	volatile uint64_t t62 = 6478534570LLU;

	t62 = (x249&(x250*(x251<=x252)));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x253 = UINT8_MAX;
	volatile uint16_t x254 = UINT16_MAX;

	t63 = (x253&(x254*(x255<=x256)));

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x257 = 103447467734LLU;
	volatile int8_t x259 = INT8_MIN;
	volatile uint64_t t64 = 4928564185713265LLU;

	t64 = (x257&(x258*(x259<=x260)));

	if (t64 != 214LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x263 = -549708;
	volatile uint64_t t65 = 17257LLU;

	t65 = (x261&(x262*(x263<=x264)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -1;
	volatile int64_t x267 = 30154674544196220LL;
	volatile uint8_t x268 = 0U;
	volatile int32_t t66 = -24293999;

	t66 = (x265&(x266*(x267<=x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 16787052634555LLU;
	volatile int32_t x270 = -967292855;
	int64_t x272 = INT64_MIN;
	volatile uint64_t t67 = 9345803619490928LLU;

	t67 = (x269&(x270*(x271<=x272)));

	if (t67 != 16786917949449LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x273 = 84U;
	uint8_t x274 = 25U;
	int8_t x275 = 1;
	volatile uint64_t x276 = UINT64_MAX;
	static volatile uint32_t t68 = 316518U;

	t68 = (x273&(x274*(x275<=x276)));

	if (t68 != 16U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MAX;
	int64_t x278 = INT64_MAX;
	int8_t x280 = INT8_MIN;
	volatile int64_t t69 = -296603889537494428LL;

	t69 = (x277&(x278*(x279<=x280)));

	if (t69 != 127LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x281 = 0U;
	static int8_t x282 = INT8_MAX;
	static uint16_t x283 = 48U;
	int64_t x284 = 10775658542977LL;
	volatile int32_t t70 = 164;

	t70 = (x281&(x282*(x283<=x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -1;
	uint16_t x287 = 15221U;
	int64_t x288 = INT64_MAX;

	t71 = (x285&(x286*(x287<=x288)));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = INT64_MIN;
	static volatile uint16_t x291 = 1U;
	int64_t x292 = INT64_MAX;
	static uint64_t t72 = 2842233809041573253LLU;

	t72 = (x289&(x290*(x291<=x292)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x294 = -723;
	static int64_t x295 = INT64_MIN;
	volatile int64_t t73 = 26534230549620LL;

	t73 = (x293&(x294*(x295<=x296)));

	if (t73 != 9223372036854775085LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 417U;
	int32_t x298 = INT32_MAX;
	int8_t x300 = -1;
	static volatile uint32_t t74 = 382209U;

	t74 = (x297&(x298*(x299<=x300)));

	if (t74 != 417U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -4LL;
	int16_t x302 = 3;
	int64_t x303 = INT64_MIN;
	int16_t x304 = 749;
	static int64_t t75 = -41326625022LL;

	t75 = (x301&(x302*(x303<=x304)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -15;
	static uint16_t x307 = 4U;
	volatile int64_t x308 = INT64_MIN;

	t76 = (x305&(x306*(x307<=x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = UINT32_MAX;
	int16_t x310 = -5945;
	volatile uint16_t x311 = 5U;
	volatile uint32_t t77 = 2017U;

	t77 = (x309&(x310*(x311<=x312)));

	if (t77 != 4294961351U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x314 = INT8_MIN;
	volatile uint16_t x316 = UINT16_MAX;
	volatile int64_t t78 = -6320793984296590LL;

	t78 = (x313&(x314*(x315<=x316)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x318 = INT8_MIN;
	int16_t x319 = -7;
	volatile uint8_t x320 = 104U;
	uint64_t t79 = 211543980505232071LLU;

	t79 = (x317&(x318*(x319<=x320)));

	if (t79 != 28334987632869504LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MAX;
	int32_t x322 = INT32_MAX;
	volatile int64_t x324 = INT64_MIN;
	static volatile int64_t t80 = 29929057385912399LL;

	t80 = (x321&(x322*(x323<=x324)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -1;
	volatile uint16_t x326 = 0U;
	static int64_t x327 = -39387153007LL;
	int16_t x328 = INT16_MIN;

	t81 = (x325&(x326*(x327<=x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 44U;
	uint8_t x330 = 1U;
	int8_t x331 = 1;
	int32_t x332 = -20352;
	uint32_t t82 = 28U;

	t82 = (x329&(x330*(x331<=x332)));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	volatile int16_t x334 = -1;
	static int64_t x335 = -59234LL;
	int16_t x336 = INT16_MIN;
	volatile int32_t t83 = 54527;

	t83 = (x333&(x334*(x335<=x336)));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x337 = UINT8_MAX;
	static uint32_t x338 = 158U;
	uint64_t x339 = UINT64_MAX;
	uint8_t x340 = UINT8_MAX;
	static volatile uint32_t t84 = 14537U;

	t84 = (x337&(x338*(x339<=x340)));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 3882744U;
	uint64_t x342 = 13401LLU;
	uint32_t x343 = 1372519U;
	volatile uint32_t x344 = 34690940U;
	volatile uint64_t t85 = 14423LLU;

	t85 = (x341&(x342*(x343<=x344)));

	if (t85 != 13400LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x345 = 1217U;
	static uint32_t x346 = 933702157U;
	int8_t x348 = 49;

	t86 = (x345&(x346*(x347<=x348)));

	if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 5142321U;
	int32_t x350 = 1;
	volatile int64_t x352 = -252335LL;

	t87 = (x349&(x350*(x351<=x352)));

	if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -23;
	static uint16_t x354 = UINT16_MAX;
	int32_t x355 = -577378;
	int64_t x356 = INT64_MIN;
	volatile int32_t t88 = 679475969;

	t88 = (x353&(x354*(x355<=x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -1;
	int8_t x358 = -41;
	static int16_t x359 = -48;
	static volatile int32_t x360 = -129804;
	static int32_t t89 = -97495139;

	t89 = (x357&(x358*(x359<=x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	static int32_t x362 = INT32_MIN;
	static volatile int32_t t90 = -6971;

	t90 = (x361&(x362*(x363<=x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = 1;
	uint8_t x366 = UINT8_MAX;
	volatile int16_t x368 = -1;
	volatile int32_t t91 = 11;

	t91 = (x365&(x366*(x367<=x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	static int16_t x370 = 7114;
	static int64_t x371 = 1LL;
	int32_t t92 = -15246;

	t92 = (x369&(x370*(x371<=x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MAX;
	int8_t x374 = INT8_MIN;
	volatile int64_t x376 = INT64_MIN;
	int32_t t93 = 521945873;

	t93 = (x373&(x374*(x375<=x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = -19450182509336LL;
	volatile int16_t x378 = -8;
	int64_t x379 = -292785567965LL;
	int8_t x380 = INT8_MAX;

	t94 = (x377&(x378*(x379<=x380)));

	if (t94 != -19450182509336LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = INT16_MIN;
	uint64_t x382 = 13849597LLU;
	static int32_t x383 = -1;
	int8_t x384 = INT8_MIN;
	volatile uint64_t t95 = 701015709431063569LLU;

	t95 = (x381&(x382*(x383<=x384)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = UINT8_MAX;
	static int64_t x386 = -1LL;
	int32_t x387 = -1;
	int8_t x388 = INT8_MIN;
	volatile int64_t t96 = -111197232LL;

	t96 = (x385&(x386*(x387<=x388)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = 3;
	volatile uint32_t x392 = 4395U;

	t97 = (x389&(x390*(x391<=x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	int8_t x394 = INT8_MIN;
	static uint32_t x395 = 65U;
	int64_t x396 = -1LL;
	int64_t t98 = 34828519935932429LL;

	t98 = (x393&(x394*(x395<=x396)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x397 = INT32_MIN;
	static int32_t x398 = INT32_MIN;
	static uint16_t x399 = 6404U;
	volatile int32_t t99 = -722568;

	t99 = (x397&(x398*(x399<=x400)));

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


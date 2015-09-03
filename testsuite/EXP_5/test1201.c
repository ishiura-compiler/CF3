#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = 5954064414370LLU;
volatile uint32_t t0 = 318919U;
uint8_t x5 = 103U;
uint16_t x9 = 50U;
static uint16_t x10 = 7U;
int8_t x20 = INT8_MIN;
uint32_t x27 = UINT32_MAX;
int64_t x31 = 985LL;
volatile int32_t x34 = -3468935;
volatile uint16_t x37 = 486U;
volatile int64_t x43 = INT64_MIN;
volatile int32_t t9 = 25180;
volatile int16_t x52 = INT16_MIN;
static int64_t x79 = -8826660653LL;
static volatile int32_t t19 = 245354;
uint64_t x89 = UINT64_MAX;
int16_t x91 = 0;
volatile uint16_t x94 = 1892U;
volatile int64_t t21 = 550712743997027575LL;
uint16_t x100 = 99U;
int32_t x115 = INT32_MIN;
int16_t x117 = -1;
volatile int32_t t26 = -1544180;
static int16_t x122 = INT16_MIN;
volatile uint8_t x125 = 3U;
volatile int16_t x126 = INT16_MAX;
volatile int16_t x128 = INT16_MIN;
int32_t t28 = -219;
int8_t x140 = -1;
uint32_t t31 = 523067U;
int16_t x147 = 12133;
uint8_t x152 = 18U;
int64_t t33 = 799306096LL;
uint32_t x155 = UINT32_MAX;
volatile uint32_t x156 = 1027857U;
static int64_t t35 = -54LL;
uint64_t x167 = UINT64_MAX;
static uint8_t x188 = UINT8_MAX;
int64_t x192 = INT64_MAX;
static uint64_t t42 = 29LLU;
volatile int64_t x199 = 291LL;
int16_t x214 = INT16_MIN;
int64_t x216 = -1LL;
uint32_t x225 = 3U;
static int16_t x229 = -6;
int64_t x230 = -3013966LL;
static uint16_t x232 = 4U;
volatile int32_t t51 = 963796887;
volatile int16_t x249 = -1;
static uint32_t x252 = 10294U;
int32_t x253 = 512099913;
static volatile int16_t x254 = INT16_MIN;
int8_t x257 = INT8_MAX;
int8_t x258 = INT8_MIN;
volatile int64_t t57 = -1057634359469LL;
int8_t x265 = INT8_MAX;
static int32_t x266 = INT32_MIN;
int16_t x268 = 5;
static int8_t x272 = INT8_MIN;
volatile int32_t t59 = -64;
volatile int8_t x283 = -48;
int32_t x284 = 12556;
int8_t x285 = -1;
volatile uint64_t t61 = 23187969LLU;
int64_t x289 = INT64_MAX;
static uint32_t x297 = UINT32_MAX;
static volatile uint32_t t64 = 6546325U;
int16_t x306 = INT16_MAX;
int8_t x320 = INT8_MIN;
uint8_t x329 = 3U;
uint32_t x340 = 4401404U;
int32_t x342 = -1;
int8_t x344 = 8;
int64_t t76 = 97804280LL;
static int16_t x354 = 0;
int8_t x355 = INT8_MAX;
static uint64_t x358 = 2195318235765624LLU;
uint64_t x364 = 6512737573820720169LLU;
volatile int8_t x372 = 3;
uint16_t x378 = 210U;
int16_t x381 = INT16_MIN;
uint64_t x384 = 19586LLU;
int8_t x392 = -29;
volatile int16_t x396 = 5772;
static uint64_t x401 = UINT64_MAX;
volatile uint32_t t91 = 621485500U;
volatile int64_t x423 = -1LL;
volatile int16_t x424 = -7679;
int32_t t94 = -6;
static uint32_t x435 = 206U;
int16_t x437 = INT16_MIN;
int32_t x438 = INT32_MAX;
static int16_t x444 = INT16_MAX;
uint32_t x450 = 13U;
int32_t x451 = -357;
int8_t x454 = 25;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile uint64_t x2 = 12LLU;
	uint32_t x4 = 4U;

	t0 = (x1%((x2==x3)-x4));

	if (t0 != 2147483648U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x6 = -533227285LL;
	static int16_t x7 = -170;
	uint16_t x8 = 20094U;
	volatile int32_t t1 = -363095913;

	t1 = (x5%((x6==x7)-x8));

	if (t1 != 103) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x11 = INT16_MIN;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = 58;

	t2 = (x9%((x10==x11)-x12));

	if (t2 != 50) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	volatile int16_t x14 = -1;
	volatile int64_t x15 = 13179786819559LL;
	volatile int8_t x16 = -3;
	volatile int32_t t3 = 661823285;

	t3 = (x13%((x14==x15)-x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int8_t x18 = 1;
	uint16_t x19 = 197U;
	int32_t t4 = 872;

	t4 = (x17%((x18==x19)-x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	int64_t x26 = INT64_MIN;
	volatile uint16_t x28 = 5U;
	volatile int32_t t5 = -30330971;

	t5 = (x25%((x26==x27)-x28));

	if (t5 != -3) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x29 = 0;
	int64_t x30 = INT64_MAX;
	uint32_t x32 = 14403U;
	uint32_t t6 = 4397U;

	t6 = (x29%((x30==x31)-x32));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = 1;
	uint8_t x35 = UINT8_MAX;
	int8_t x36 = -2;
	int32_t t7 = -112211166;

	t7 = (x33%((x34==x35)-x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x38 = INT64_MAX;
	static int16_t x39 = -1;
	int32_t x40 = 954257;
	static int32_t t8 = -2248796;

	t8 = (x37%((x38==x39)-x40));

	if (t8 != 486) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x41 = INT32_MIN;
	volatile uint16_t x42 = 203U;
	int32_t x44 = INT32_MAX;

	t9 = (x41%((x42==x43)-x44));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -1;
	static volatile int8_t x46 = 5;
	volatile int32_t x47 = INT32_MAX;
	volatile uint64_t x48 = 1842179745092526554LLU;
	volatile uint64_t t10 = 12116285101799LLU;

	t10 = (x45%((x46==x47)-x48));

	if (t10 != 1842179745092526553LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = UINT8_MAX;
	int64_t x50 = INT64_MIN;
	static uint16_t x51 = 11287U;
	volatile int32_t t11 = -3123560;

	t11 = (x49%((x50==x51)-x52));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = 24046LL;
	static uint8_t x54 = 2U;
	volatile int64_t x55 = INT64_MIN;
	uint32_t x56 = 5247546U;
	volatile int64_t t12 = -4818LL;

	t12 = (x53%((x54==x55)-x56));

	if (t12 != 24046LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x57 = 7;
	volatile int8_t x58 = INT8_MIN;
	static volatile int64_t x59 = INT64_MIN;
	static uint8_t x60 = UINT8_MAX;
	int32_t t13 = 16171673;

	t13 = (x57%((x58==x59)-x60));

	if (t13 != 7) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x65 = 5311;
	int16_t x66 = -3140;
	static uint32_t x67 = 88U;
	uint8_t x68 = 11U;
	volatile int32_t t14 = 18725234;

	t14 = (x65%((x66==x67)-x68));

	if (t14 != 9) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -2386243LL;
	int8_t x70 = INT8_MIN;
	static volatile int64_t x71 = 1007LL;
	int64_t x72 = INT64_MAX;
	volatile int64_t t15 = 1506602563LL;

	t15 = (x69%((x70==x71)-x72));

	if (t15 != -2386243LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x73 = UINT16_MAX;
	int32_t x74 = INT32_MAX;
	uint16_t x75 = 9538U;
	uint32_t x76 = 1797483732U;
	volatile uint32_t t16 = 3025U;

	t16 = (x73%((x74==x75)-x76));

	if (t16 != 65535U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x77 = UINT64_MAX;
	volatile int16_t x78 = INT16_MIN;
	volatile uint8_t x80 = UINT8_MAX;
	volatile uint64_t t17 = 14048LLU;

	t17 = (x77%((x78==x79)-x80));

	if (t17 != 254LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x81 = UINT32_MAX;
	int8_t x82 = INT8_MAX;
	int64_t x83 = -949197358LL;
	uint32_t x84 = UINT32_MAX;
	static volatile uint32_t t18 = 165U;

	t18 = (x81%((x82==x83)-x84));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x85 = 14U;
	uint16_t x86 = UINT16_MAX;
	uint32_t x87 = UINT32_MAX;
	static int8_t x88 = INT8_MIN;

	t19 = (x85%((x86==x87)-x88));

	if (t19 != 14) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x90 = 1U;
	int8_t x92 = -1;
	uint64_t t20 = 368143929036845LLU;

	t20 = (x89%((x90==x91)-x92));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = INT8_MAX;
	static volatile int16_t x95 = 1;
	static int64_t x96 = INT64_MAX;

	t21 = (x93%((x94==x95)-x96));

	if (t21 != 127LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = 5U;
	uint16_t x98 = 5142U;
	int32_t x99 = 893542;
	uint32_t t22 = 146903U;

	t22 = (x97%((x98==x99)-x100));

	if (t22 != 5U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = INT32_MIN;
	volatile int8_t x106 = 6;
	uint8_t x107 = 109U;
	static int64_t x108 = -14239567LL;
	static volatile int64_t t23 = -61300661929LL;

	t23 = (x105%((x106==x107)-x108));

	if (t23 != -11548598LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x109 = UINT32_MAX;
	uint8_t x110 = 72U;
	static volatile int16_t x111 = -5;
	static int8_t x112 = INT8_MAX;
	uint32_t t24 = 1U;

	t24 = (x109%((x110==x111)-x112));

	if (t24 != 126U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x113 = UINT32_MAX;
	int64_t x114 = INT64_MIN;
	uint8_t x116 = UINT8_MAX;
	uint32_t t25 = 11U;

	t25 = (x113%((x114==x115)-x116));

	if (t25 != 254U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x118 = UINT64_MAX;
	int32_t x119 = 0;
	static uint8_t x120 = 96U;

	t26 = (x117%((x118==x119)-x120));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x121 = INT16_MIN;
	uint32_t x123 = 805U;
	static int64_t x124 = INT64_MAX;
	int64_t t27 = -1342508LL;

	t27 = (x121%((x122==x123)-x124));

	if (t27 != -32768LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x127 = INT16_MAX;

	t28 = (x125%((x126==x127)-x128));

	if (t28 != 3) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = INT32_MIN;
	static int32_t x130 = 1;
	int64_t x131 = INT64_MAX;
	static int32_t x132 = INT32_MAX;
	volatile int32_t t29 = -62;

	t29 = (x129%((x130==x131)-x132));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x137 = UINT8_MAX;
	volatile int16_t x138 = INT16_MIN;
	volatile uint64_t x139 = 2092297889LLU;
	int32_t t30 = -220630949;

	t30 = (x137%((x138==x139)-x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = UINT32_MAX;
	int8_t x142 = 15;
	int64_t x143 = -1LL;
	int16_t x144 = INT16_MAX;

	t31 = (x141%((x142==x143)-x144));

	if (t31 != 32766U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = INT16_MAX;
	static int32_t x146 = 37673903;
	uint64_t x148 = 15LLU;
	uint64_t t32 = 8533701582283139LLU;

	t32 = (x145%((x146==x147)-x148));

	if (t32 != 32767LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x149 = INT64_MIN;
	volatile int16_t x150 = -1;
	int16_t x151 = -119;

	t33 = (x149%((x150==x151)-x152));

	if (t33 != -8LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x153 = UINT32_MAX;
	int32_t x154 = INT32_MIN;
	static uint32_t t34 = 512720631U;

	t34 = (x153%((x154==x155)-x156));

	if (t34 != 1027856U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x157 = 8U;
	volatile uint32_t x158 = 2899U;
	int64_t x159 = -1436407820LL;
	int64_t x160 = -1LL;

	t35 = (x157%((x158==x159)-x160));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = INT64_MIN;
	static volatile int64_t x162 = -57687250910034282LL;
	uint64_t x163 = 609315946LLU;
	uint64_t x164 = 3990LLU;
	volatile uint64_t t36 = 840019849597LLU;

	t36 = (x161%((x162==x163)-x164));

	if (t36 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = -1;
	static uint64_t x166 = 350008983471180LLU;
	uint32_t x168 = 394U;
	static volatile uint32_t t37 = 6U;

	t37 = (x165%((x166==x167)-x168));

	if (t37 != 393U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x169 = INT8_MIN;
	int16_t x170 = 23;
	int64_t x171 = INT64_MIN;
	volatile int8_t x172 = -1;
	static int32_t t38 = 1;

	t38 = (x169%((x170==x171)-x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = INT64_MIN;
	int8_t x178 = -7;
	uint64_t x179 = 3235714243276844575LLU;
	uint8_t x180 = UINT8_MAX;
	static volatile int64_t t39 = 573462557953287LL;

	t39 = (x177%((x178==x179)-x180));

	if (t39 != -128LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = INT8_MAX;
	volatile int8_t x182 = INT8_MIN;
	volatile uint32_t x183 = 506853923U;
	static volatile int16_t x184 = INT16_MAX;
	int32_t t40 = -5;

	t40 = (x181%((x182==x183)-x184));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x185 = -1;
	static int16_t x186 = -1;
	int8_t x187 = -1;
	static int32_t t41 = 1821;

	t41 = (x185%((x186==x187)-x188));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x189 = 627970861970LLU;
	uint32_t x190 = 942U;
	int64_t x191 = -458853014715LL;

	t42 = (x189%((x190==x191)-x192));

	if (t42 != 627970861970LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x197 = INT16_MIN;
	static int8_t x198 = INT8_MIN;
	int64_t x200 = -123LL;
	int64_t t43 = -1614LL;

	t43 = (x197%((x198==x199)-x200));

	if (t43 != -50LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x201 = INT32_MIN;
	static int64_t x202 = -6058774200793958LL;
	int32_t x203 = -1;
	uint32_t x204 = 343365U;
	uint32_t t44 = 3011401U;

	t44 = (x201%((x202==x203)-x204));

	if (t44 != 2147483648U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x205 = 29U;
	static int16_t x206 = INT16_MIN;
	int64_t x207 = INT64_MIN;
	int64_t x208 = -31152379LL;
	int64_t t45 = 209102753LL;

	t45 = (x205%((x206==x207)-x208));

	if (t45 != 29LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = INT32_MIN;
	uint64_t x210 = 41282419757875050LLU;
	int16_t x211 = INT16_MIN;
	int32_t x212 = -774514718;
	volatile int32_t t46 = -61;

	t46 = (x209%((x210==x211)-x212));

	if (t46 != -598454212) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x213 = -132507997;
	int16_t x215 = -6;
	volatile int64_t t47 = 1LL;

	t47 = (x213%((x214==x215)-x216));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x217 = INT32_MIN;
	int64_t x218 = INT64_MIN;
	uint16_t x219 = 5U;
	int64_t x220 = -4123802420112308LL;
	int64_t t48 = -292LL;

	t48 = (x217%((x218==x219)-x220));

	if (t48 != -2147483648LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x226 = -1;
	int32_t x227 = INT32_MAX;
	volatile uint8_t x228 = 1U;
	volatile uint32_t t49 = 187125U;

	t49 = (x225%((x226==x227)-x228));

	if (t49 != 3U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x231 = INT64_MIN;
	volatile int32_t t50 = -15;

	t50 = (x229%((x230==x231)-x232));

	if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = INT8_MIN;
	uint64_t x234 = UINT64_MAX;
	uint32_t x235 = 170074819U;
	int8_t x236 = INT8_MAX;

	t51 = (x233%((x234==x235)-x236));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x237 = -32;
	int64_t x238 = -1964661849937457571LL;
	int32_t x239 = INT32_MIN;
	volatile int16_t x240 = 2;
	int32_t t52 = -32565744;

	t52 = (x237%((x238==x239)-x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x245 = -271842;
	int32_t x246 = -42365391;
	uint64_t x247 = 3569400301118718LLU;
	int8_t x248 = INT8_MIN;
	int32_t t53 = 156002526;

	t53 = (x245%((x246==x247)-x248));

	if (t53 != -98) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x250 = -1;
	static int64_t x251 = -1LL;
	static volatile uint32_t t54 = 5U;

	t54 = (x249%((x250==x251)-x252));

	if (t54 != 10292U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x255 = INT32_MAX;
	int32_t x256 = INT32_MAX;
	int32_t t55 = 7;

	t55 = (x253%((x254==x255)-x256));

	if (t55 != 512099913) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x259 = -1;
	uint32_t x260 = 2585424U;
	static volatile uint32_t t56 = 948195U;

	t56 = (x257%((x258==x259)-x260));

	if (t56 != 127U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x261 = 1588U;
	static uint16_t x262 = 20U;
	int32_t x263 = INT32_MIN;
	int64_t x264 = 1611381262326714215LL;

	t57 = (x261%((x262==x263)-x264));

	if (t57 != 1588LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x267 = -1;
	volatile int32_t t58 = -1;

	t58 = (x265%((x266==x267)-x268));

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x269 = 1;
	volatile int32_t x270 = INT32_MAX;
	int16_t x271 = INT16_MIN;

	t59 = (x269%((x270==x271)-x272));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x281 = 6936417667579LL;
	int8_t x282 = INT8_MAX;
	int64_t t60 = -2LL;

	t60 = (x281%((x282==x283)-x284));

	if (t60 != 12251LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x286 = 5;
	int8_t x287 = INT8_MIN;
	static uint64_t x288 = 20LLU;

	t61 = (x285%((x286==x287)-x288));

	if (t61 != 19LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x290 = -1LL;
	int64_t x291 = INT64_MIN;
	int32_t x292 = -1;
	volatile int64_t t62 = 7097693189LL;

	t62 = (x289%((x290==x291)-x292));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x293 = 47;
	static volatile int16_t x294 = 13;
	int64_t x295 = INT64_MAX;
	volatile int64_t x296 = 792899007962705LL;
	volatile int64_t t63 = -15587302286964707LL;

	t63 = (x293%((x294==x295)-x296));

	if (t63 != 47LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x298 = INT8_MIN;
	volatile uint64_t x299 = UINT64_MAX;
	int16_t x300 = INT16_MIN;

	t64 = (x297%((x298==x299)-x300));

	if (t64 != 32767U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x301 = -1;
	uint32_t x302 = 27U;
	int8_t x303 = 0;
	static int64_t x304 = -2852339LL;
	int64_t t65 = -16LL;

	t65 = (x301%((x302==x303)-x304));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x305 = 375LLU;
	int16_t x307 = 74;
	static int16_t x308 = INT16_MIN;
	volatile uint64_t t66 = 113LLU;

	t66 = (x305%((x306==x307)-x308));

	if (t66 != 375LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x309 = INT64_MIN;
	static uint64_t x310 = UINT64_MAX;
	int8_t x311 = INT8_MIN;
	int8_t x312 = -43;
	volatile int64_t t67 = -1LL;

	t67 = (x309%((x310==x311)-x312));

	if (t67 != -42LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x313 = 3LLU;
	static int32_t x314 = -1;
	int32_t x315 = -1;
	int16_t x316 = 13741;
	uint64_t t68 = 234404709166LLU;

	t68 = (x313%((x314==x315)-x316));

	if (t68 != 3LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x317 = INT8_MIN;
	static uint64_t x318 = 3LLU;
	int8_t x319 = -16;
	static int32_t t69 = 11880605;

	t69 = (x317%((x318==x319)-x320));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x321 = 2U;
	int64_t x322 = INT64_MIN;
	static uint16_t x323 = UINT16_MAX;
	int8_t x324 = INT8_MIN;
	int32_t t70 = -126;

	t70 = (x321%((x322==x323)-x324));

	if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x325 = -1LL;
	int8_t x326 = INT8_MIN;
	static int32_t x327 = INT32_MIN;
	static uint32_t x328 = 51908U;
	int64_t t71 = 230LL;

	t71 = (x325%((x326==x327)-x328));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x330 = 1U;
	int64_t x331 = 126241LL;
	uint32_t x332 = 20839550U;
	uint32_t t72 = 1583728190U;

	t72 = (x329%((x330==x331)-x332));

	if (t72 != 3U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x333 = -2758;
	int16_t x334 = -15;
	uint8_t x335 = 1U;
	uint32_t x336 = UINT32_MAX;
	uint32_t t73 = 35U;

	t73 = (x333%((x334==x335)-x336));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x337 = 3U;
	volatile int16_t x338 = INT16_MIN;
	int16_t x339 = -1;
	volatile uint32_t t74 = 34U;

	t74 = (x337%((x338==x339)-x340));

	if (t74 != 3U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x341 = 2U;
	int64_t x343 = INT64_MIN;
	int32_t t75 = -3890913;

	t75 = (x341%((x342==x343)-x344));

	if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x345 = 1974737889186571LL;
	int32_t x346 = INT32_MIN;
	int32_t x347 = -1;
	int64_t x348 = INT64_MAX;

	t76 = (x345%((x346==x347)-x348));

	if (t76 != 1974737889186571LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x349 = INT8_MIN;
	static uint16_t x350 = 12493U;
	static int8_t x351 = -1;
	static uint64_t x352 = 538207342406LLU;
	volatile uint64_t t77 = 42LLU;

	t77 = (x349%((x350==x351)-x352));

	if (t77 != 538207342278LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x353 = -1;
	volatile uint8_t x356 = UINT8_MAX;
	static volatile int32_t t78 = -30242296;

	t78 = (x353%((x354==x355)-x356));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x357 = 203;
	uint32_t x359 = 445U;
	int8_t x360 = INT8_MIN;
	int32_t t79 = -12263;

	t79 = (x357%((x358==x359)-x360));

	if (t79 != 75) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x361 = -2587044LL;
	int8_t x362 = -11;
	static int64_t x363 = INT64_MAX;
	volatile uint64_t t80 = 157027068400LLU;

	t80 = (x361%((x362==x363)-x364));

	if (t80 != 6512737573818133125LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x365 = INT8_MIN;
	static uint32_t x366 = 7U;
	int16_t x367 = 13614;
	int8_t x368 = INT8_MIN;
	volatile int32_t t81 = 464853066;

	t81 = (x365%((x366==x367)-x368));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x369 = INT32_MIN;
	int8_t x370 = -46;
	static int8_t x371 = 54;
	volatile int32_t t82 = -82625524;

	t82 = (x369%((x370==x371)-x372));

	if (t82 != -2) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x373 = 0;
	int64_t x374 = INT64_MIN;
	int16_t x375 = 353;
	int16_t x376 = -1;
	volatile int32_t t83 = -210079;

	t83 = (x373%((x374==x375)-x376));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x377 = 236LLU;
	int64_t x379 = INT64_MAX;
	static uint16_t x380 = 7U;
	volatile uint64_t t84 = 17LLU;

	t84 = (x377%((x378==x379)-x380));

	if (t84 != 236LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x382 = INT8_MIN;
	static int8_t x383 = -3;
	uint64_t t85 = 105016030622029LLU;

	t85 = (x381%((x382==x383)-x384));

	if (t85 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x385 = -2;
	int32_t x386 = -1;
	volatile int32_t x387 = INT32_MIN;
	int8_t x388 = -12;
	static volatile int32_t t86 = -11205296;

	t86 = (x385%((x386==x387)-x388));

	if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x389 = 2U;
	static volatile int8_t x390 = INT8_MIN;
	uint8_t x391 = 2U;
	volatile uint32_t t87 = 768644539U;

	t87 = (x389%((x390==x391)-x392));

	if (t87 != 2U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x393 = 20U;
	int32_t x394 = INT32_MIN;
	int8_t x395 = INT8_MIN;
	static volatile int32_t t88 = 74203117;

	t88 = (x393%((x394==x395)-x396));

	if (t88 != 20) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x402 = 4984U;
	static int8_t x403 = 1;
	int16_t x404 = -1;
	uint64_t t89 = 298LLU;

	t89 = (x401%((x402==x403)-x404));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x409 = INT64_MIN;
	int8_t x410 = -1;
	uint16_t x411 = 1U;
	int32_t x412 = 62647717;
	int64_t t90 = -2914360274LL;

	t90 = (x409%((x410==x411)-x412));

	if (t90 != -9732995LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x417 = -24040;
	static volatile uint8_t x418 = 3U;
	int16_t x419 = INT16_MAX;
	uint32_t x420 = 7U;

	t91 = (x417%((x418==x419)-x420));

	if (t91 != 4294943256U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x421 = 28U;
	int32_t x422 = -1;
	int32_t t92 = 1642466;

	t92 = (x421%((x422==x423)-x424));

	if (t92 != 28) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x425 = INT16_MIN;
	volatile uint32_t x426 = 1499567U;
	static int64_t x427 = -1LL;
	int16_t x428 = INT16_MIN;
	volatile int32_t t93 = -131747;

	t93 = (x425%((x426==x427)-x428));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x429 = INT32_MIN;
	int8_t x430 = INT8_MIN;
	static int8_t x431 = -43;
	int8_t x432 = INT8_MIN;

	t94 = (x429%((x430==x431)-x432));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint32_t x433 = UINT32_MAX;
	int8_t x434 = INT8_MIN;
	static int8_t x436 = -1;
	volatile uint32_t t95 = 18U;

	t95 = (x433%((x434==x435)-x436));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x439 = 107U;
	volatile uint32_t x440 = 520220049U;
	uint32_t t96 = 284U;

	t96 = (x437%((x438==x439)-x440));

	if (t96 != 520187281U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x441 = UINT64_MAX;
	int32_t x442 = 1;
	static int16_t x443 = -1;
	static volatile uint64_t t97 = 67335103947LLU;

	t97 = (x441%((x442==x443)-x444));

	if (t97 != 32766LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x449 = INT64_MAX;
	static uint32_t x452 = 24275847U;
	volatile int64_t t98 = 813671020794LL;

	t98 = (x449%((x450==x451)-x452));

	if (t98 != 4152605673LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x453 = -19035168;
	static int32_t x455 = INT32_MIN;
	int16_t x456 = -1;
	volatile int32_t t99 = -219;

	t99 = (x453%((x454==x455)-x456));

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


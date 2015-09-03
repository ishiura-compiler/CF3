#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x7 = -1425365868989LL;
uint64_t t5 = 46831LLU;
int32_t x31 = INT32_MIN;
uint32_t x32 = UINT32_MAX;
int64_t x37 = INT64_MIN;
uint16_t x40 = 1129U;
int64_t t10 = -45865LL;
int32_t x52 = INT32_MAX;
static volatile uint32_t x55 = 87863637U;
volatile uint16_t x64 = UINT16_MAX;
static uint32_t t14 = 22U;
static volatile int64_t x72 = -1LL;
int64_t t15 = -38008817605575692LL;
static uint8_t x73 = UINT8_MAX;
uint32_t x74 = UINT32_MAX;
int8_t x81 = 0;
int64_t x94 = INT64_MIN;
int16_t x96 = -108;
int8_t x97 = INT8_MAX;
static uint64_t t21 = 22945980309966LLU;
static int8_t x105 = INT8_MIN;
volatile uint32_t t22 = 0U;
static uint64_t t23 = 890LLU;
int32_t x114 = INT32_MIN;
uint32_t x116 = 15523U;
int16_t x124 = -1678;
uint8_t x135 = 1U;
int32_t x139 = INT32_MIN;
uint16_t x141 = UINT16_MAX;
volatile int64_t x144 = -1LL;
int64_t t30 = 1LL;
volatile int8_t x149 = -1;
uint16_t x150 = 24579U;
volatile uint32_t t32 = 2U;
static int16_t x153 = -1;
int32_t x154 = INT32_MIN;
uint8_t x156 = UINT8_MAX;
uint8_t x158 = 45U;
static int32_t t34 = -189;
static volatile int32_t t35 = 55;
int16_t x165 = -1;
int8_t x174 = INT8_MIN;
static volatile uint8_t x183 = 2U;
int16_t x189 = INT16_MIN;
uint64_t x197 = 8029324503LLU;
int8_t x198 = INT8_MIN;
uint64_t t44 = 95143711LLU;
int64_t x203 = 7369033345401458LL;
int64_t t45 = 90LL;
static int16_t x205 = INT16_MIN;
int16_t x216 = INT16_MIN;
static int8_t x224 = 55;
uint64_t t50 = 183882607279980LLU;
static uint8_t x238 = 0U;
int64_t x240 = INT64_MIN;
volatile int32_t x246 = INT32_MIN;
uint16_t x247 = UINT16_MAX;
int64_t x249 = INT64_MAX;
volatile int16_t x253 = INT16_MAX;
int32_t x257 = -1;
static uint8_t x263 = 7U;
int8_t x264 = INT8_MIN;
volatile int8_t x281 = INT8_MIN;
uint64_t x286 = 0LLU;
int8_t x290 = INT8_MIN;
uint64_t t65 = 112629604229107LLU;
int8_t x303 = INT8_MIN;
uint32_t x305 = UINT32_MAX;
int8_t x314 = INT8_MIN;
int8_t x316 = -4;
static int16_t x323 = INT16_MIN;
int64_t x330 = INT64_MAX;
int64_t x335 = INT64_MIN;
volatile uint64_t t76 = 4276267037741391LLU;
volatile uint64_t x353 = 7094084366909LLU;
static uint64_t x354 = 255943123466933569LLU;
int64_t x359 = INT64_MIN;
int8_t x360 = -11;
volatile int64_t t79 = 26861883LL;
int64_t x362 = INT64_MIN;
int64_t x364 = -1LL;
static int8_t x366 = 7;
int8_t x379 = INT8_MAX;
int32_t x382 = INT32_MIN;
volatile uint32_t x383 = 8420U;
static int64_t x398 = INT64_MIN;
volatile int16_t x401 = -1;
int32_t t92 = -510191;
int32_t x413 = INT32_MIN;
int8_t x434 = 36;
int64_t x439 = -287358458677172LL;
static volatile int32_t x442 = INT32_MIN;


void f0(void) {
	volatile int8_t x5 = INT8_MAX;
	uint8_t x6 = UINT8_MAX;
	uint64_t x8 = 78990LLU;
	volatile uint64_t t0 = 14425226128LLU;

	t0 = (x5%((x6|x7)-x8));

	if (t0 != 127LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = UINT32_MAX;
	volatile int64_t x10 = -1LL;
	static int32_t x11 = INT32_MAX;
	int32_t x12 = INT32_MIN;
	volatile int64_t t1 = -32210LL;

	t1 = (x9%((x10|x11)-x12));

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = 92LL;
	int64_t x14 = INT64_MIN;
	volatile int8_t x15 = INT8_MIN;
	uint64_t x16 = UINT64_MAX;
	volatile uint64_t t2 = 4LLU;

	t2 = (x13%((x14|x15)-x16));

	if (t2 != 92LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MIN;
	uint8_t x18 = UINT8_MAX;
	static int16_t x19 = -1;
	uint64_t x20 = 3233LLU;
	static uint64_t t3 = 238LLU;

	t3 = (x17%((x18|x19)-x20));

	if (t3 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	static volatile uint64_t x22 = 221514153139LLU;
	volatile int16_t x23 = INT16_MIN;
	int16_t x24 = INT16_MAX;
	uint64_t t4 = 15LLU;

	t4 = (x21%((x22|x23)-x24));

	if (t4 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x25 = 8991145791781336LLU;
	int32_t x26 = -1;
	int16_t x27 = INT16_MIN;
	uint32_t x28 = 1664U;

	t5 = (x25%((x26|x27)-x28));

	if (t5 != 315361471LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 7U;
	int64_t x30 = -265744026LL;
	int64_t t6 = -12299627LL;

	t6 = (x29%((x30|x31)-x32));

	if (t6 != 7LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MAX;
	uint64_t x34 = 2291682714540LLU;
	int8_t x35 = INT8_MAX;
	int16_t x36 = INT16_MAX;
	uint64_t t7 = 1272654968005243LLU;

	t7 = (x33%((x34|x35)-x36));

	if (t7 != 2147483647LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x38 = 0;
	static int16_t x39 = INT16_MIN;
	volatile int64_t t8 = 2634941801128825LL;

	t8 = (x37%((x38|x39)-x40));

	if (t8 != -30386LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x41 = INT8_MIN;
	int16_t x42 = -1;
	static uint8_t x43 = 35U;
	uint32_t x44 = 634962U;
	static uint32_t t9 = 1U;

	t9 = (x41%((x42|x43)-x44));

	if (t9 != 634835U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = UINT16_MAX;
	int32_t x46 = INT32_MIN;
	static volatile uint8_t x47 = 1U;
	int64_t x48 = INT64_MIN;

	t10 = (x45%((x46|x47)-x48));

	if (t10 != 65535LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	uint16_t x50 = 1474U;
	uint64_t x51 = 132643693410479LLU;
	uint64_t t11 = 37766243681LLU;

	t11 = (x49%((x50|x51)-x52));

	if (t11 != 18998386226176LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x53 = 11611144LL;
	int8_t x54 = INT8_MIN;
	int16_t x56 = -1;
	int64_t t12 = 0LL;

	t12 = (x53%((x54|x55)-x56));

	if (t12 != 11611144LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MIN;
	int32_t x62 = INT32_MIN;
	static int16_t x63 = -1;
	volatile int32_t t13 = -58791;

	t13 = (x61%((x62|x63)-x64));

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = -15095;
	uint32_t x66 = 110521U;
	static int16_t x67 = -5343;
	int8_t x68 = INT8_MIN;

	t14 = (x65%((x66|x67)-x68));

	if (t14 != 4294952201U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = -40297;
	uint32_t x70 = UINT32_MAX;
	volatile int64_t x71 = 827LL;

	t15 = (x69%((x70|x71)-x72));

	if (t15 != -40297LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x75 = -1;
	int64_t x76 = INT64_MAX;
	int64_t t16 = 105669786988275216LL;

	t16 = (x73%((x74|x75)-x76));

	if (t16 != 255LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 5U;
	int64_t x78 = INT64_MIN;
	uint8_t x79 = UINT8_MAX;
	volatile int16_t x80 = INT16_MIN;
	volatile int64_t t17 = -1568LL;

	t17 = (x77%((x78|x79)-x80));

	if (t17 != 5LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x82 = 782621011331976602LLU;
	int16_t x83 = -73;
	uint16_t x84 = UINT16_MAX;
	volatile uint64_t t18 = 5361632858771LLU;

	t18 = (x81%((x82|x83)-x84));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x93 = 62U;
	static uint64_t x95 = UINT64_MAX;
	static volatile uint64_t t19 = 635LLU;

	t19 = (x93%((x94|x95)-x96));

	if (t19 != 62LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x98 = INT64_MAX;
	volatile int64_t x99 = -4429534020644280759LL;
	static uint16_t x100 = 11822U;
	static volatile int64_t t20 = 109938LL;

	t20 = (x97%((x98|x99)-x100));

	if (t20 != 127LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = INT16_MIN;
	int16_t x102 = INT16_MIN;
	uint64_t x103 = 49425180LLU;
	int16_t x104 = 4;

	t21 = (x101%((x102|x103)-x104));

	if (t21 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x106 = INT8_MAX;
	static int16_t x107 = 8710;
	static uint32_t x108 = 1682087U;

	t22 = (x105%((x106|x107)-x108));

	if (t22 != 1673128U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x109 = INT8_MIN;
	uint16_t x110 = UINT16_MAX;
	static uint64_t x111 = UINT64_MAX;
	int32_t x112 = INT32_MIN;

	t23 = (x109%((x110|x111)-x112));

	if (t23 != 2147483523LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x113 = 0U;
	int32_t x115 = INT32_MAX;
	volatile uint32_t t24 = 1012U;

	t24 = (x113%((x114|x115)-x116));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x117 = 16412331LLU;
	int8_t x118 = -1;
	uint32_t x119 = 1U;
	static uint32_t x120 = 427896949U;
	uint64_t t25 = 429467553554821478LLU;

	t25 = (x117%((x118|x119)-x120));

	if (t25 != 16412331LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = -1;
	static uint64_t x122 = UINT64_MAX;
	int64_t x123 = -1LL;
	uint64_t t26 = 4LLU;

	t26 = (x121%((x122|x123)-x124));

	if (t26 != 1029LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = -1LL;
	static int32_t x126 = INT32_MIN;
	int32_t x127 = -150595;
	volatile int8_t x128 = -1;
	volatile int64_t t27 = -194LL;

	t27 = (x125%((x126|x127)-x128));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x133 = INT32_MAX;
	int8_t x134 = -17;
	volatile uint64_t x136 = 8032850137108832LLU;
	volatile uint64_t t28 = 717842426LLU;

	t28 = (x133%((x134|x135)-x136));

	if (t28 != 2147483647LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x137 = INT8_MIN;
	int8_t x138 = -1;
	static uint64_t x140 = 1902435437LLU;
	uint64_t t29 = 5968022767151554954LLU;

	t29 = (x137%((x138|x139)-x140));

	if (t29 != 1902435310LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x142 = INT32_MIN;
	static uint8_t x143 = UINT8_MAX;

	t30 = (x141%((x142|x143)-x144));

	if (t30 != 65535LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x145 = INT64_MAX;
	volatile uint64_t x146 = 6842805LLU;
	uint8_t x147 = UINT8_MAX;
	static uint8_t x148 = 0U;
	uint64_t t31 = 13LLU;

	t31 = (x145%((x146|x147)-x148));

	if (t31 != 1258737LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x151 = 391U;
	uint32_t x152 = UINT32_MAX;

	t32 = (x149%((x150|x151)-x152));

	if (t32 != 21871U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x155 = 5153;
	static volatile int32_t t33 = 117593677;

	t33 = (x153%((x154|x155)-x156));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x157 = UINT8_MAX;
	int8_t x159 = INT8_MIN;
	uint8_t x160 = UINT8_MAX;

	t34 = (x157%((x158|x159)-x160));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x161 = 1180;
	int32_t x162 = -6500;
	int16_t x163 = -34;
	volatile int16_t x164 = -13576;

	t35 = (x161%((x162|x163)-x164));

	if (t35 != 1180) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x166 = INT8_MAX;
	int8_t x167 = INT8_MIN;
	int32_t x168 = INT32_MIN;
	volatile int32_t t36 = 48770;

	t36 = (x165%((x166|x167)-x168));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x169 = 2184825784655450LLU;
	int32_t x170 = -1;
	static volatile uint8_t x171 = 2U;
	static volatile uint8_t x172 = 28U;
	static volatile uint64_t t37 = 5044772746847472LLU;

	t37 = (x169%((x170|x171)-x172));

	if (t37 != 2184825784655450LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = 6534827546LL;
	int8_t x175 = -20;
	volatile uint64_t x176 = UINT64_MAX;
	volatile uint64_t t38 = 126153LLU;

	t38 = (x173%((x174|x175)-x176));

	if (t38 != 6534827546LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x177 = INT32_MIN;
	uint32_t x178 = 1U;
	uint64_t x179 = UINT64_MAX;
	static uint16_t x180 = 139U;
	uint64_t t39 = 1101LLU;

	t39 = (x177%((x178|x179)-x180));

	if (t39 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x181 = 52026840642465LLU;
	uint8_t x182 = 10U;
	int64_t x184 = -1LL;
	uint64_t t40 = 138765LLU;

	t40 = (x181%((x182|x183)-x184));

	if (t40 != 7LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x185 = 0U;
	volatile int32_t x186 = -85534727;
	static volatile int16_t x187 = -8;
	static int8_t x188 = INT8_MIN;
	int32_t t41 = 58;

	t41 = (x185%((x186|x187)-x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x190 = INT8_MIN;
	uint8_t x191 = 40U;
	volatile int32_t x192 = 3812;
	int32_t t42 = -1210891;

	t42 = (x189%((x190|x191)-x192));

	if (t42 != -1568) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x193 = 4304843230547320323LL;
	static int16_t x194 = 0;
	int16_t x195 = -7432;
	static uint16_t x196 = 13874U;
	volatile int64_t t43 = 267014143233365818LL;

	t43 = (x193%((x194|x195)-x196));

	if (t43 != 4521LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x199 = 6544864U;
	static int64_t x200 = -1LL;

	t44 = (x197%((x198|x199)-x200));

	if (t44 != 3734357238LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x201 = INT16_MIN;
	int8_t x202 = INT8_MIN;
	uint8_t x204 = UINT8_MAX;

	t45 = (x201%((x202|x203)-x204));

	if (t45 != -219LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x206 = 594844337;
	uint16_t x207 = 13U;
	int64_t x208 = INT64_MAX;
	volatile int64_t t46 = 23571426239716LL;

	t46 = (x205%((x206|x207)-x208));

	if (t46 != -32768LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x209 = INT8_MAX;
	int32_t x210 = INT32_MIN;
	uint8_t x211 = UINT8_MAX;
	int64_t x212 = -1LL;
	static volatile int64_t t47 = 1541LL;

	t47 = (x209%((x210|x211)-x212));

	if (t47 != 127LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x213 = UINT64_MAX;
	int64_t x214 = INT64_MIN;
	int16_t x215 = 0;
	uint64_t t48 = 465809LLU;

	t48 = (x213%((x214|x215)-x216));

	if (t48 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x217 = 15U;
	volatile int16_t x218 = INT16_MIN;
	static int8_t x219 = -1;
	volatile int64_t x220 = 6LL;
	volatile int64_t t49 = -4LL;

	t49 = (x217%((x218|x219)-x220));

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x221 = -1;
	static volatile int16_t x222 = INT16_MAX;
	uint64_t x223 = 0LLU;

	t50 = (x221%((x222|x223)-x224));

	if (t50 != 7215LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x225 = 10;
	int8_t x226 = INT8_MAX;
	int16_t x227 = INT16_MIN;
	int8_t x228 = -1;
	volatile int32_t t51 = -437590;

	t51 = (x225%((x226|x227)-x228));

	if (t51 != 10) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x229 = -16;
	int64_t x230 = INT64_MIN;
	static int32_t x231 = 3559;
	static uint8_t x232 = 32U;
	int64_t t52 = 15328LL;

	t52 = (x229%((x230|x231)-x232));

	if (t52 != -16LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x233 = INT16_MIN;
	int64_t x234 = INT64_MAX;
	int32_t x235 = INT32_MIN;
	int8_t x236 = INT8_MIN;
	int64_t t53 = -3783LL;

	t53 = (x233%((x234|x235)-x236));

	if (t53 != -2LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = -140;
	static int16_t x239 = INT16_MIN;
	static int64_t t54 = 38839811901158LL;

	t54 = (x237%((x238|x239)-x240));

	if (t54 != -140LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x241 = UINT8_MAX;
	volatile uint16_t x242 = UINT16_MAX;
	int32_t x243 = -334;
	static volatile int32_t x244 = INT32_MIN;
	static volatile int32_t t55 = -61435763;

	t55 = (x241%((x242|x243)-x244));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = -27;
	int16_t x248 = INT16_MIN;
	int32_t t56 = 53;

	t56 = (x245%((x246|x247)-x248));

	if (t56 != -27) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x250 = 61;
	static volatile uint16_t x251 = 19U;
	uint32_t x252 = 122531U;
	static int64_t t57 = 2445087396670684661LL;

	t57 = (x249%((x250|x251)-x252));

	if (t57 != 3204360683LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x254 = INT32_MIN;
	static int16_t x255 = -52;
	static volatile uint16_t x256 = UINT16_MAX;
	int32_t t58 = -2;

	t58 = (x253%((x254|x255)-x256));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x258 = INT64_MIN;
	int16_t x259 = INT16_MIN;
	volatile int16_t x260 = 0;
	int64_t t59 = -62768LL;

	t59 = (x257%((x258|x259)-x260));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x261 = INT32_MIN;
	uint8_t x262 = UINT8_MAX;
	volatile int32_t t60 = -718642056;

	t60 = (x261%((x262|x263)-x264));

	if (t60 != -350) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x282 = 7U;
	volatile int64_t x283 = INT64_MIN;
	volatile int16_t x284 = -1;
	int64_t t61 = -14900229937245219LL;

	t61 = (x281%((x282|x283)-x284));

	if (t61 != -128LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x285 = INT64_MIN;
	static int16_t x287 = -205;
	int64_t x288 = INT64_MIN;
	uint64_t t62 = 39359954497LLU;

	t62 = (x285%((x286|x287)-x288));

	if (t62 != 205LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x289 = -1;
	int64_t x291 = INT64_MIN;
	static uint32_t x292 = UINT32_MAX;
	volatile int64_t t63 = 104550288966226LL;

	t63 = (x289%((x290|x291)-x292));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x293 = INT32_MIN;
	int8_t x294 = 29;
	int8_t x295 = 30;
	static uint32_t x296 = 1689548687U;
	uint32_t t64 = 484242179U;

	t64 = (x293%((x294|x295)-x296));

	if (t64 != 2147483648U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x297 = 3998922254588823559LL;
	int8_t x298 = -1;
	uint64_t x299 = UINT64_MAX;
	int8_t x300 = INT8_MAX;

	t65 = (x297%((x298|x299)-x300));

	if (t65 != 3998922254588823559LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x301 = INT32_MIN;
	int16_t x302 = INT16_MIN;
	volatile uint64_t x304 = UINT64_MAX;
	volatile uint64_t t66 = 34935LLU;

	t66 = (x301%((x302|x303)-x304));

	if (t66 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x306 = INT64_MAX;
	static volatile int8_t x307 = -1;
	uint8_t x308 = 3U;
	int64_t t67 = -1355392877085214119LL;

	t67 = (x305%((x306|x307)-x308));

	if (t67 != 3LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x309 = 18226846U;
	uint64_t x310 = UINT64_MAX;
	int8_t x311 = 1;
	int64_t x312 = INT64_MIN;
	uint64_t t68 = 9219LLU;

	t68 = (x309%((x310|x311)-x312));

	if (t68 != 18226846LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x313 = -3804;
	volatile uint8_t x315 = UINT8_MAX;
	volatile int32_t t69 = -7830161;

	t69 = (x313%((x314|x315)-x316));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x321 = 156U;
	int32_t x322 = -1;
	volatile int8_t x324 = -35;
	int32_t t70 = -1007326;

	t70 = (x321%((x322|x323)-x324));

	if (t70 != 20) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x325 = -1;
	volatile uint64_t x326 = 26208191379LLU;
	int16_t x327 = 129;
	uint64_t x328 = UINT64_MAX;
	static volatile uint64_t t71 = 4039694LLU;

	t71 = (x325%((x326|x327)-x328));

	if (t71 != 16567855655LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x329 = -1;
	volatile int8_t x331 = INT8_MIN;
	static int64_t x332 = INT64_MIN;
	static volatile int64_t t72 = -12888834LL;

	t72 = (x329%((x330|x331)-x332));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x333 = 340341991524623LLU;
	volatile int32_t x334 = -121;
	int64_t x336 = INT64_MIN;
	static volatile uint64_t t73 = 986034401905LLU;

	t73 = (x333%((x334|x335)-x336));

	if (t73 != 340341991524623LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x337 = 5744026906359093LLU;
	int32_t x338 = -7275250;
	static int32_t x339 = -1;
	int32_t x340 = INT32_MIN;
	volatile uint64_t t74 = 134309059228LLU;

	t74 = (x337%((x338|x339)-x340));

	if (t74 != 2071872903LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x341 = INT16_MIN;
	static int8_t x342 = 1;
	static volatile int8_t x343 = -1;
	int64_t x344 = INT64_MAX;
	int64_t t75 = 1003LL;

	t75 = (x341%((x342|x343)-x344));

	if (t75 != -32768LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x345 = UINT32_MAX;
	uint64_t x346 = 5LLU;
	int64_t x347 = 889473615651272LL;
	int64_t x348 = INT64_MIN;

	t76 = (x345%((x346|x347)-x348));

	if (t76 != 4294967295LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x349 = -1;
	static int16_t x350 = -1;
	int8_t x351 = -1;
	int32_t x352 = 54315;
	int32_t t77 = 1832616;

	t77 = (x349%((x350|x351)-x352));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x355 = INT32_MAX;
	static uint8_t x356 = 42U;
	uint64_t t78 = 74063LLU;

	t78 = (x353%((x354|x355)-x356));

	if (t78 != 7094084366909LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x357 = 2700254U;
	static int16_t x358 = INT16_MAX;

	t79 = (x357%((x358|x359)-x360));

	if (t79 != 2700254LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x361 = INT64_MAX;
	int64_t x363 = -4455084735435LL;
	int64_t t80 = -53288LL;

	t80 = (x361%((x362|x363)-x364));

	if (t80 != 1198916294739LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x365 = 1992;
	uint8_t x367 = 30U;
	static uint64_t x368 = 6211455715174431LLU;
	volatile uint64_t t81 = 1658655166LLU;

	t81 = (x365%((x366|x367)-x368));

	if (t81 != 1992LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x369 = INT8_MIN;
	uint16_t x370 = UINT16_MAX;
	int64_t x371 = INT64_MIN;
	int16_t x372 = 1253;
	int64_t t82 = 809576084779057LL;

	t82 = (x369%((x370|x371)-x372));

	if (t82 != -128LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x373 = 377361;
	int8_t x374 = -1;
	static int32_t x375 = INT32_MIN;
	int8_t x376 = INT8_MIN;
	int32_t t83 = 424;

	t83 = (x373%((x374|x375)-x376));

	if (t83 != 44) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x377 = INT32_MIN;
	static volatile int16_t x378 = INT16_MAX;
	int16_t x380 = INT16_MIN;
	int32_t t84 = -10996104;

	t84 = (x377%((x378|x379)-x380));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x381 = -1;
	uint64_t x384 = 90082552083356LLU;
	uint64_t t85 = 224337344905580678LLU;

	t85 = (x381%((x382|x383)-x384));

	if (t85 != 90080404591287LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x385 = 6U;
	static int16_t x386 = -3;
	int8_t x387 = 5;
	uint32_t x388 = UINT32_MAX;
	uint32_t t86 = 75U;

	t86 = (x385%((x386|x387)-x388));

	if (t86 != 6U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x389 = INT16_MAX;
	int64_t x390 = INT64_MIN;
	static int32_t x391 = INT32_MAX;
	volatile int16_t x392 = -1;
	volatile int64_t t87 = 4256LL;

	t87 = (x389%((x390|x391)-x392));

	if (t87 != 32767LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x393 = 13511U;
	int64_t x394 = INT64_MIN;
	int16_t x395 = INT16_MAX;
	volatile int8_t x396 = 0;
	volatile int64_t t88 = -1891425025375212LL;

	t88 = (x393%((x394|x395)-x396));

	if (t88 != 13511LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x397 = 10224U;
	static int16_t x399 = INT16_MIN;
	int8_t x400 = -1;
	int64_t t89 = -4366280886820211186LL;

	t89 = (x397%((x398|x399)-x400));

	if (t89 != 10224LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x402 = 6959210;
	int8_t x403 = 17;
	uint8_t x404 = 0U;
	int32_t t90 = -693;

	t90 = (x401%((x402|x403)-x404));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x405 = INT64_MIN;
	int8_t x406 = INT8_MAX;
	static uint16_t x407 = 370U;
	uint8_t x408 = 5U;
	volatile int64_t t91 = 1185811418036LL;

	t91 = (x405%((x406|x407)-x408));

	if (t91 != -134LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x409 = 62U;
	uint8_t x410 = UINT8_MAX;
	int8_t x411 = 3;
	int16_t x412 = INT16_MIN;

	t92 = (x409%((x410|x411)-x412));

	if (t92 != 62) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x414 = 1U;
	static int16_t x415 = INT16_MIN;
	static volatile uint8_t x416 = 10U;
	uint32_t t93 = 438596U;

	t93 = (x413%((x414|x415)-x416));

	if (t93 != 2147483648U) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x421 = INT8_MIN;
	int8_t x422 = -1;
	uint64_t x423 = 963082LLU;
	static int64_t x424 = -697608454771168LL;
	uint64_t t94 = 16664LLU;

	t94 = (x421%((x422|x423)-x424));

	if (t94 != 581312650353674LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x425 = -11405LL;
	int8_t x426 = INT8_MIN;
	static int8_t x427 = 0;
	int16_t x428 = -1;
	int64_t t95 = 16116169318LL;

	t95 = (x425%((x426|x427)-x428));

	if (t95 != -102LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x429 = UINT32_MAX;
	volatile uint64_t x430 = UINT64_MAX;
	int64_t x431 = INT64_MIN;
	uint16_t x432 = 305U;
	uint64_t t96 = 232382243LLU;

	t96 = (x429%((x430|x431)-x432));

	if (t96 != 4294967295LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x433 = INT64_MIN;
	int16_t x435 = INT16_MIN;
	int16_t x436 = 5400;
	static int64_t t97 = -11723LL;

	t97 = (x433%((x434|x435)-x436));

	if (t97 != -36776LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x437 = -1;
	uint64_t x438 = 8020627328LLU;
	int64_t x440 = INT64_MIN;
	uint64_t t98 = 21476378637LLU;

	t98 = (x437%((x438|x439)-x440));

	if (t98 != 574701010452583LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x441 = INT16_MAX;
	int16_t x443 = 0;
	uint32_t x444 = UINT32_MAX;
	volatile uint32_t t99 = 2738585U;

	t99 = (x441%((x442|x443)-x444));

	if (t99 != 32767U) { NG(); } else { ; }
	
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


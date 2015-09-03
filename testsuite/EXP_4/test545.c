#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MAX;
int32_t x4 = -10024168;
volatile uint64_t t0 = 126919LLU;
volatile int32_t x6 = INT32_MIN;
volatile int16_t x8 = INT16_MAX;
int16_t x9 = 1098;
static int64_t x11 = INT64_MIN;
uint64_t t2 = 115090241305LLU;
int16_t x16 = 59;
volatile uint16_t x22 = 4U;
uint64_t x23 = UINT64_MAX;
int64_t x25 = INT64_MAX;
int16_t x32 = INT16_MIN;
uint8_t x39 = 56U;
static int32_t x41 = INT32_MAX;
static uint16_t x42 = 15U;
int8_t x50 = -2;
static volatile int16_t x52 = INT16_MIN;
volatile uint32_t x57 = 557484957U;
int64_t x75 = 98660LL;
int8_t x77 = INT8_MIN;
int8_t x78 = 1;
int16_t x80 = 442;
int32_t x91 = INT32_MIN;
uint64_t x94 = UINT64_MAX;
volatile uint64_t t21 = 54387093873305105LLU;
int16_t x98 = 26;
uint32_t x124 = UINT32_MAX;
int16_t x135 = 4;
static uint16_t x141 = 0U;
int8_t x147 = 16;
static uint32_t x155 = UINT32_MAX;
volatile int8_t x156 = INT8_MIN;
volatile int8_t x159 = 1;
int64_t x160 = INT64_MAX;
int64_t t34 = -2083524482463268LL;
int64_t x161 = -1LL;
static int32_t x163 = INT32_MIN;
uint8_t x164 = UINT8_MAX;
static uint32_t t36 = UINT32_MAX;
int8_t x170 = INT8_MAX;
int64_t x173 = -1LL;
static int16_t x174 = 43;
int16_t x175 = INT16_MIN;
static int64_t t38 = 0LL;
int64_t x181 = -118LL;
static volatile int64_t x187 = 31415LL;
int64_t t43 = 51210216063298404LL;
volatile int32_t x200 = INT32_MIN;
int16_t x201 = -1874;
int8_t x203 = -1;
static volatile int64_t t45 = 1813LL;
static volatile uint8_t x209 = 2U;
int8_t x212 = INT8_MAX;
uint64_t x218 = 252905695034LLU;
volatile int64_t x219 = -1LL;
int32_t x227 = 43708780;
uint32_t x228 = 19815U;
int8_t x229 = INT8_MIN;
int32_t x231 = 42995621;
volatile int32_t t51 = -2;
volatile int16_t x247 = -1;
volatile int64_t t54 = INT64_MAX;
int8_t x250 = -1;
uint32_t t55 = 58831U;
uint64_t t56 = 8650591756LLU;
uint64_t x270 = 114564628888527420LLU;
int64_t x273 = INT64_MIN;
uint64_t x275 = UINT64_MAX;
volatile int8_t x278 = 27;
static int8_t x279 = -1;
volatile uint16_t x280 = 120U;
int32_t x281 = -3;
uint32_t x284 = UINT32_MAX;
uint8_t x304 = UINT8_MAX;
int8_t x307 = INT8_MIN;
volatile uint64_t t68 = 58658LLU;
static uint64_t x312 = UINT64_MAX;
static uint64_t x317 = 9673972833119045LLU;
volatile int16_t x324 = -112;
volatile int8_t x334 = INT8_MAX;
int8_t x336 = INT8_MIN;
volatile uint64_t t73 = 221481694LLU;
static uint32_t x340 = UINT32_MAX;
volatile uint64_t t75 = 17820924659359109LLU;
static int64_t x353 = INT64_MAX;
uint64_t t79 = 34949654552221850LLU;
int32_t x365 = INT32_MAX;
static volatile int64_t t80 = 4895022791448LL;
uint32_t t81 = UINT32_MAX;
static uint8_t x375 = 0U;
int32_t x378 = -93;
volatile int32_t x387 = INT32_MAX;
uint8_t x401 = 22U;
volatile uint16_t x402 = UINT16_MAX;
uint64_t x404 = 45576931691492LLU;
int8_t x410 = INT8_MIN;
static uint64_t x428 = UINT64_MAX;
static int64_t x433 = 185985602LL;
uint32_t x435 = UINT32_MAX;
static int64_t x436 = -1LL;
int64_t x440 = INT64_MIN;
static int32_t x446 = -279;


void f0(void) {
	static uint64_t x1 = 3963087467418616176LLU;
	int8_t x2 = INT8_MIN;

	t0 = (x1|(x2*(x3/x4)));

	if (t0 != 3963166700986945904LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 14U;
	int8_t x7 = -1;
	volatile int32_t t1 = -109;

	t1 = (x5|(x6*(x7/x8)));

	if (t1 != 14) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x10 = INT32_MAX;
	uint64_t x12 = 76910886861726063LLU;

	t2 = (x9|(x10*(x11/x12)));

	if (t2 != 255550554059LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1692;
	static volatile int8_t x14 = 0;
	int16_t x15 = INT16_MAX;
	int32_t t3 = 14556;

	t3 = (x13|(x14*(x15/x16)));

	if (t3 != -1692) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = UINT32_MAX;
	static volatile uint32_t x24 = UINT32_MAX;
	volatile uint64_t t4 = 1400LLU;

	t4 = (x21|(x22*(x23/x24)));

	if (t4 != 21474836479LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x26 = INT8_MIN;
	static volatile int64_t x27 = INT64_MAX;
	int16_t x28 = INT16_MAX;
	volatile int64_t t5 = -461146612LL;

	t5 = (x25|(x26*(x27/x28)));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MAX;
	int64_t x30 = -1LL;
	volatile int16_t x31 = -1;
	int64_t t6 = 113115114144288401LL;

	t6 = (x29|(x30*(x31/x32)));

	if (t6 != 127LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 19U;
	static volatile uint8_t x34 = 5U;
	volatile uint8_t x35 = UINT8_MAX;
	int64_t x36 = -1070861226323750215LL;
	volatile int64_t t7 = 3369852LL;

	t7 = (x33|(x34*(x35/x36)));

	if (t7 != 19LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x37 = 1145861471322749728LL;
	int8_t x38 = INT8_MAX;
	volatile uint64_t x40 = 357847186LLU;
	uint64_t t8 = 73522LLU;

	t8 = (x37|(x38*(x39/x40)));

	if (t8 != 1145861471322749728LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x43 = INT64_MIN;
	int16_t x44 = INT16_MAX;
	int64_t t9 = -161589808634LL;

	t9 = (x41|(x42*(x43/x44)));

	if (t9 != -4222253499678721LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 5597U;
	volatile uint32_t x46 = UINT32_MAX;
	int8_t x47 = INT8_MIN;
	uint8_t x48 = UINT8_MAX;
	uint32_t t10 = 196U;

	t10 = (x45|(x46*(x47/x48)));

	if (t10 != 5597U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -9596;
	int16_t x51 = 43;
	volatile int32_t t11 = 156;

	t11 = (x49|(x50*(x51/x52)));

	if (t11 != -9596) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 2U;
	int32_t x54 = INT32_MAX;
	static uint16_t x55 = 109U;
	static volatile int64_t x56 = INT64_MAX;
	int64_t t12 = 366707776LL;

	t12 = (x53|(x54*(x55/x56)));

	if (t12 != 2LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x58 = 1;
	int32_t x59 = -1;
	uint8_t x60 = 19U;
	volatile uint32_t t13 = 2U;

	t13 = (x57|(x58*(x59/x60)));

	if (t13 != 557484957U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x61 = -1;
	int8_t x62 = 0;
	volatile int8_t x63 = 1;
	uint8_t x64 = 3U;
	int32_t t14 = -11;

	t14 = (x61|(x62*(x63/x64)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -1LL;
	uint64_t x70 = 114803422557LLU;
	int32_t x71 = INT32_MIN;
	uint64_t x72 = UINT64_MAX;
	uint64_t t15 = UINT64_MAX;

	t15 = (x69|(x70*(x71/x72)));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x73 = INT8_MIN;
	int32_t x74 = 1797;
	static uint8_t x76 = UINT8_MAX;
	static volatile int64_t t16 = -157712474LL;

	t16 = (x73|(x74*(x75/x76)));

	if (t16 != -118LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x79 = 513702U;
	static uint32_t t17 = 4U;

	t17 = (x77|(x78*(x79/x80)));

	if (t17 != 4294967178U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = -1;
	int8_t x82 = -4;
	int32_t x83 = -7;
	int16_t x84 = -29;
	int32_t t18 = 6736117;

	t18 = (x81|(x82*(x83/x84)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x85 = -13994176;
	int64_t x86 = INT64_MAX;
	static uint32_t x87 = 7594398U;
	volatile uint32_t x88 = UINT32_MAX;
	volatile int64_t t19 = -85169LL;

	t19 = (x85|(x86*(x87/x88)));

	if (t19 != -13994176LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = -1;
	uint8_t x90 = 5U;
	uint64_t x92 = UINT64_MAX;
	volatile uint64_t t20 = UINT64_MAX;

	t20 = (x89|(x90*(x91/x92)));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x93 = INT8_MIN;
	int64_t x95 = 168LL;
	uint8_t x96 = UINT8_MAX;

	t21 = (x93|(x94*(x95/x96)));

	if (t21 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = -2;
	uint16_t x99 = UINT16_MAX;
	uint64_t x100 = UINT64_MAX;
	static uint64_t t22 = 30211951033170861LLU;

	t22 = (x97|(x98*(x99/x100)));

	if (t22 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x105 = 55U;
	uint8_t x106 = 7U;
	uint64_t x107 = 13638374394297749LLU;
	volatile int16_t x108 = INT16_MAX;
	uint64_t t23 = 5753008136698LLU;

	t23 = (x105|(x106*(x107/x108)));

	if (t23 != 2913560007359LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x109 = 9U;
	int16_t x110 = 1287;
	volatile uint32_t x111 = UINT32_MAX;
	volatile int8_t x112 = -3;
	static uint32_t t24 = 1U;

	t24 = (x109|(x110*(x111/x112)));

	if (t24 != 1295U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = -1418428;
	volatile int8_t x114 = 7;
	uint8_t x115 = 0U;
	static int32_t x116 = 18946908;
	volatile int32_t t25 = 316253912;

	t25 = (x113|(x114*(x115/x116)));

	if (t25 != -1418428) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = INT64_MAX;
	static uint32_t x118 = 712852U;
	int64_t x119 = -127701554997LL;
	int8_t x120 = INT8_MIN;
	volatile int64_t t26 = INT64_MAX;

	t26 = (x117|(x118*(x119/x120)));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x121 = UINT32_MAX;
	int32_t x122 = INT32_MIN;
	int8_t x123 = INT8_MAX;
	static uint32_t t27 = UINT32_MAX;

	t27 = (x121|(x122*(x123/x124)));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x125 = INT16_MIN;
	uint32_t x126 = UINT32_MAX;
	volatile int32_t x127 = INT32_MIN;
	uint16_t x128 = 1028U;
	volatile uint32_t t28 = 7096963U;

	t28 = (x125|(x126*(x127/x128)));

	if (t28 != 4294959135U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x129 = 0U;
	volatile int64_t x130 = -1LL;
	int8_t x131 = 3;
	int8_t x132 = INT8_MIN;
	int64_t t29 = -1493389366538777LL;

	t29 = (x129|(x130*(x131/x132)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x133 = 0;
	volatile int32_t x134 = 14198930;
	volatile int16_t x136 = 1;
	volatile int32_t t30 = 48;

	t30 = (x133|(x134*(x135/x136)));

	if (t30 != 56795720) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x142 = 221652920801975LL;
	int32_t x143 = -1;
	int32_t x144 = INT32_MIN;
	static volatile int64_t t31 = -64LL;

	t31 = (x141|(x142*(x143/x144)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = INT32_MIN;
	uint64_t x146 = 180LLU;
	volatile int16_t x148 = INT16_MIN;
	volatile uint64_t t32 = 84522LLU;

	t32 = (x145|(x146*(x147/x148)));

	if (t32 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = 3857159LL;
	volatile int16_t x154 = INT16_MIN;
	int64_t t33 = 0LL;

	t33 = (x153|(x154*(x155/x156)));

	if (t33 != 4294957831LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x157 = -1;
	static int8_t x158 = INT8_MIN;

	t34 = (x157|(x158*(x159/x160)));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x162 = INT8_MIN;
	volatile int64_t t35 = 638336113361106180LL;

	t35 = (x161|(x162*(x163/x164)));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x165 = UINT32_MAX;
	int16_t x166 = INT16_MIN;
	static uint32_t x167 = 8U;
	uint32_t x168 = UINT32_MAX;

	t36 = (x165|(x166*(x167/x168)));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x169 = -1;
	int8_t x171 = -1;
	int32_t x172 = -1;
	int32_t t37 = 695;

	t37 = (x169|(x170*(x171/x172)));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x176 = -1;

	t38 = (x173|(x174*(x175/x176)));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x177 = 78730LLU;
	int8_t x178 = -1;
	static uint16_t x179 = UINT16_MAX;
	uint64_t x180 = 809LLU;
	volatile uint64_t t39 = 5004LLU;

	t39 = (x177|(x178*(x179/x180)));

	if (t39 != 18446744073709551535LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x182 = 77544061U;
	int16_t x183 = INT16_MAX;
	int32_t x184 = INT32_MAX;
	int64_t t40 = 14258377353856LL;

	t40 = (x181|(x182*(x183/x184)));

	if (t40 != -118LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x185 = INT32_MIN;
	static uint16_t x186 = UINT16_MAX;
	static int16_t x188 = INT16_MIN;
	int64_t t41 = -4375LL;

	t41 = (x185|(x186*(x187/x188)));

	if (t41 != -2147483648LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x189 = INT64_MAX;
	int16_t x190 = INT16_MAX;
	uint32_t x191 = UINT32_MAX;
	volatile uint64_t x192 = UINT64_MAX;
	volatile uint64_t t42 = 790779585LLU;

	t42 = (x189|(x190*(x191/x192)));

	if (t42 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x193 = 0;
	int8_t x194 = INT8_MIN;
	volatile int16_t x195 = INT16_MIN;
	int64_t x196 = INT64_MIN;

	t43 = (x193|(x194*(x195/x196)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x197 = 45U;
	int64_t x198 = 3988025LL;
	int16_t x199 = INT16_MAX;
	int64_t t44 = 70297136309110LL;

	t44 = (x197|(x198*(x199/x200)));

	if (t44 != 45LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x202 = -1;
	int64_t x204 = INT64_MIN;

	t45 = (x201|(x202*(x203/x204)));

	if (t45 != -1874LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x210 = UINT16_MAX;
	int8_t x211 = INT8_MIN;
	static volatile int32_t t46 = -18110;

	t46 = (x209|(x210*(x211/x212)));

	if (t46 != -65533) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x213 = INT32_MAX;
	int32_t x214 = INT32_MAX;
	uint16_t x215 = UINT16_MAX;
	static uint64_t x216 = 1014829108706571184LLU;
	uint64_t t47 = 32232LLU;

	t47 = (x213|(x214*(x215/x216)));

	if (t47 != 2147483647LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x217 = INT32_MIN;
	uint8_t x220 = UINT8_MAX;
	uint64_t t48 = 2486668605650556448LLU;

	t48 = (x217|(x218*(x219/x220)));

	if (t48 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x221 = INT8_MIN;
	static int16_t x222 = -1;
	static int16_t x223 = INT16_MIN;
	static int8_t x224 = 32;
	static volatile int32_t t49 = 108335760;

	t49 = (x221|(x222*(x223/x224)));

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x225 = 127055754153LL;
	uint16_t x226 = UINT16_MAX;
	int64_t t50 = 3LL;

	t50 = (x225|(x226*(x227/x228)));

	if (t50 != 127198361579LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x230 = -1;
	int16_t x232 = INT16_MIN;

	t51 = (x229|(x230*(x231/x232)));

	if (t51 != -96) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x233 = INT64_MAX;
	volatile uint32_t x234 = 1U;
	uint32_t x235 = UINT32_MAX;
	int16_t x236 = INT16_MIN;
	volatile int64_t t52 = INT64_MAX;

	t52 = (x233|(x234*(x235/x236)));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = -1;
	uint32_t x242 = 3532289U;
	int32_t x243 = -7348;
	int16_t x244 = 1003;
	volatile uint32_t t53 = UINT32_MAX;

	t53 = (x241|(x242*(x243/x244)));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x245 = INT64_MAX;
	volatile int8_t x246 = INT8_MIN;
	volatile uint16_t x248 = 11845U;

	t54 = (x245|(x246*(x247/x248)));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x249 = INT16_MIN;
	uint32_t x251 = 181U;
	int8_t x252 = INT8_MIN;

	t55 = (x249|(x250*(x251/x252)));

	if (t55 != 4294934528U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x253 = INT16_MIN;
	uint16_t x254 = 50U;
	uint16_t x255 = UINT16_MAX;
	uint64_t x256 = UINT64_MAX;

	t56 = (x253|(x254*(x255/x256)));

	if (t56 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x257 = INT8_MAX;
	uint16_t x258 = UINT16_MAX;
	static int32_t x259 = -1;
	static int8_t x260 = 1;
	static int32_t t57 = -1;

	t57 = (x257|(x258*(x259/x260)));

	if (t57 != -65409) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x261 = 67U;
	static uint32_t x262 = 2796U;
	int8_t x263 = -1;
	int8_t x264 = -2;
	volatile uint32_t t58 = 11034U;

	t58 = (x261|(x262*(x263/x264)));

	if (t58 != 67U) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x265 = INT8_MIN;
	int8_t x266 = INT8_MAX;
	uint32_t x267 = UINT32_MAX;
	int64_t x268 = -1LL;
	volatile int64_t t59 = -4502645LL;

	t59 = (x265|(x266*(x267/x268)));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x269 = 1270981708813995100LLU;
	int64_t x271 = INT64_MAX;
	int32_t x272 = INT32_MAX;
	volatile uint64_t t60 = 1003423342605LLU;

	t60 = (x269|(x270*(x271/x272)));

	if (t60 != 6622524791573433468LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x274 = -1;
	volatile int8_t x276 = -1;
	static uint64_t t61 = UINT64_MAX;

	t61 = (x273|(x274*(x275/x276)));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x277 = -1;
	volatile int32_t t62 = 587050972;

	t62 = (x277|(x278*(x279/x280)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x282 = INT32_MIN;
	static int16_t x283 = -1;
	static volatile uint32_t t63 = 0U;

	t63 = (x281|(x282*(x283/x284)));

	if (t63 != 4294967293U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x285 = 629861U;
	uint32_t x286 = 23U;
	int16_t x287 = -1;
	uint32_t x288 = 1U;
	volatile uint32_t t64 = 66102940U;

	t64 = (x285|(x286*(x287/x288)));

	if (t64 != 4294967277U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x289 = INT16_MIN;
	int64_t x290 = 966814851LL;
	uint64_t x291 = UINT64_MAX;
	volatile int64_t x292 = -1657151595337485242LL;
	static volatile uint64_t t65 = 93481LLU;

	t65 = (x289|(x290*(x291/x292)));

	if (t65 != 18446744073709546627LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x293 = INT64_MIN;
	int8_t x294 = INT8_MIN;
	int16_t x295 = 14579;
	int32_t x296 = -48720;
	int64_t t66 = INT64_MIN;

	t66 = (x293|(x294*(x295/x296)));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x301 = INT8_MIN;
	static int32_t x302 = INT32_MAX;
	int8_t x303 = 35;
	int32_t t67 = 1;

	t67 = (x301|(x302*(x303/x304)));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x305 = 3;
	volatile int16_t x306 = INT16_MIN;
	uint64_t x308 = 3LLU;

	t68 = (x305|(x306*(x307/x308)));

	if (t68 != 6148914691237937155LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x309 = 78596341LL;
	static int32_t x310 = -430207659;
	uint16_t x311 = 1U;
	uint64_t t69 = 21680094444LLU;

	t69 = (x309|(x310*(x311/x312)));

	if (t69 != 78596341LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x318 = INT16_MIN;
	static volatile uint8_t x319 = UINT8_MAX;
	int64_t x320 = INT64_MIN;
	static volatile uint64_t t70 = 11218745053237373LLU;

	t70 = (x317|(x318*(x319/x320)));

	if (t70 != 9673972833119045LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x321 = 1501U;
	uint8_t x322 = 87U;
	uint32_t x323 = UINT32_MAX;
	uint32_t t71 = 244U;

	t71 = (x321|(x322*(x323/x324)));

	if (t71 != 1503U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x325 = 1102951U;
	int64_t x326 = INT64_MAX;
	volatile int8_t x327 = 0;
	int8_t x328 = INT8_MAX;
	volatile int64_t t72 = -4728459LL;

	t72 = (x325|(x326*(x327/x328)));

	if (t72 != 1102951LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x333 = 1340009LLU;
	volatile uint16_t x335 = 52U;

	t73 = (x333|(x334*(x335/x336)));

	if (t73 != 1340009LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x337 = UINT64_MAX;
	volatile int64_t x338 = -1LL;
	uint64_t x339 = 20917352752569182LLU;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = (x337|(x338*(x339/x340)));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x345 = 84657792339109615LLU;
	static int16_t x346 = INT16_MIN;
	uint16_t x347 = UINT16_MAX;
	volatile int8_t x348 = INT8_MAX;

	t75 = (x345|(x346*(x347/x348)));

	if (t75 != 18446744073709512431LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x349 = UINT16_MAX;
	volatile int16_t x350 = 8;
	int64_t x351 = 5672580585LL;
	int64_t x352 = 80439105296034393LL;
	volatile int64_t t76 = 38358LL;

	t76 = (x349|(x350*(x351/x352)));

	if (t76 != 65535LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x354 = -1;
	static int8_t x355 = INT8_MIN;
	int64_t x356 = -1LL;
	static volatile int64_t t77 = -6019858LL;

	t77 = (x353|(x354*(x355/x356)));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x357 = -1;
	uint16_t x358 = 8879U;
	uint64_t x359 = 6LLU;
	int64_t x360 = 42305348492590LL;
	static volatile uint64_t t78 = UINT64_MAX;

	t78 = (x357|(x358*(x359/x360)));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x361 = INT8_MAX;
	uint32_t x362 = 273168099U;
	int32_t x363 = -1;
	uint64_t x364 = 7975165136LLU;

	t79 = (x361|(x362*(x363/x364)));

	if (t79 != 631844222056938751LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x366 = 1;
	int64_t x367 = INT64_MIN;
	int16_t x368 = INT16_MIN;

	t80 = (x365|(x366*(x367/x368)));

	if (t80 != 281477124194303LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x369 = -1;
	uint32_t x370 = 1792629U;
	static volatile int32_t x371 = INT32_MIN;
	static int8_t x372 = 1;

	t81 = (x369|(x370*(x371/x372)));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x373 = UINT16_MAX;
	volatile int8_t x374 = INT8_MIN;
	int8_t x376 = INT8_MIN;
	static int32_t t82 = -3;

	t82 = (x373|(x374*(x375/x376)));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x377 = 63U;
	int8_t x379 = INT8_MIN;
	int64_t x380 = INT64_MAX;
	volatile int64_t t83 = -562226881986136211LL;

	t83 = (x377|(x378*(x379/x380)));

	if (t83 != 63LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x381 = INT32_MIN;
	static int32_t x382 = INT32_MIN;
	volatile uint32_t x383 = 36861164U;
	int16_t x384 = -2218;
	uint32_t t84 = 211U;

	t84 = (x381|(x382*(x383/x384)));

	if (t84 != 2147483648U) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x385 = -765237;
	int64_t x386 = -117186035603LL;
	uint16_t x388 = 789U;
	volatile int64_t t85 = 9091718072934116LL;

	t85 = (x385|(x386*(x387/x388)));

	if (t85 != -3329LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x389 = 61;
	uint8_t x390 = UINT8_MAX;
	volatile uint16_t x391 = 1094U;
	static uint8_t x392 = UINT8_MAX;
	static int32_t t86 = 38;

	t86 = (x389|(x390*(x391/x392)));

	if (t86 != 1021) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x393 = -1;
	uint16_t x394 = 14U;
	volatile int16_t x395 = INT16_MIN;
	static uint16_t x396 = UINT16_MAX;
	int32_t t87 = 0;

	t87 = (x393|(x394*(x395/x396)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x397 = 243U;
	int32_t x398 = INT32_MAX;
	uint8_t x399 = UINT8_MAX;
	int64_t x400 = INT64_MIN;
	int64_t t88 = 2981396722460403LL;

	t88 = (x397|(x398*(x399/x400)));

	if (t88 != 243LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x403 = INT16_MIN;
	uint64_t t89 = 37636943079LLU;

	t89 = (x401|(x402*(x403/x404)));

	if (t89 != 26524504830LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x405 = -22;
	volatile uint16_t x406 = 228U;
	int64_t x407 = -18249353322708902LL;
	uint32_t x408 = 265U;
	int64_t t90 = 839414221350836314LL;

	t90 = (x405|(x406*(x407/x408)));

	if (t90 != -18LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x409 = 0;
	int32_t x411 = INT32_MAX;
	int64_t x412 = INT64_MAX;
	static volatile int64_t t91 = 14LL;

	t91 = (x409|(x410*(x411/x412)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x421 = 1U;
	volatile uint8_t x422 = UINT8_MAX;
	static uint32_t x423 = 430U;
	uint16_t x424 = 18U;
	static volatile uint32_t t92 = 2230845U;

	t92 = (x421|(x422*(x423/x424)));

	if (t92 != 5865U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x425 = 211U;
	volatile int32_t x426 = 132759;
	int32_t x427 = 1754;
	static uint64_t t93 = 434856146822780640LLU;

	t93 = (x425|(x426*(x427/x428)));

	if (t93 != 211LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x429 = INT64_MIN;
	static volatile int8_t x430 = 1;
	volatile int16_t x431 = -1;
	int8_t x432 = INT8_MIN;
	volatile int64_t t94 = INT64_MIN;

	t94 = (x429|(x430*(x431/x432)));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x434 = INT8_MIN;
	int64_t t95 = -1090326114LL;

	t95 = (x433|(x434*(x435/x436)));

	if (t95 != 549755813826LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x437 = -114;
	int8_t x438 = 45;
	static uint64_t x439 = UINT64_MAX;
	volatile uint64_t t96 = 28773065533912LLU;

	t96 = (x437|(x438*(x439/x440)));

	if (t96 != 18446744073709551535LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x441 = 1;
	int32_t x442 = -1755234;
	volatile int32_t x443 = INT32_MAX;
	uint32_t x444 = 237U;
	uint32_t t97 = 572753717U;

	t97 = (x441|(x442*(x443/x444)));

	if (t97 != 4187004177U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x445 = 1314LLU;
	volatile int64_t x447 = INT64_MIN;
	int32_t x448 = 528246509;
	uint64_t t98 = 55127045LLU;

	t98 = (x445|(x446*(x447/x448)));

	if (t98 != 4871439290158LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint16_t x449 = 3U;
	static int16_t x450 = INT16_MIN;
	int16_t x451 = INT16_MAX;
	volatile uint8_t x452 = 1U;
	static volatile int32_t t99 = -1879012;

	t99 = (x449|(x450*(x451/x452)));

	if (t99 != -1073709053) { NG(); } else { ; }
	
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


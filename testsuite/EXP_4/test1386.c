#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x6 = INT16_MIN;
static int8_t x9 = INT8_MIN;
int8_t x11 = INT8_MIN;
uint16_t x12 = 49U;
volatile int64_t x13 = 71823470833LL;
int32_t x16 = -1;
int32_t t3 = -2460151;
int64_t x19 = -1LL;
uint8_t x22 = 4U;
uint32_t x23 = UINT32_MAX;
volatile int32_t t6 = -18448;
static int8_t x33 = 2;
static int8_t x36 = INT8_MIN;
int8_t x40 = -1;
int32_t x43 = INT32_MAX;
int32_t x46 = INT32_MAX;
int32_t t11 = 2;
int16_t x50 = INT16_MAX;
volatile int32_t t13 = -1745821;
static int32_t x57 = -26;
static volatile int32_t t16 = 394;
static int32_t x71 = -1;
volatile int16_t x74 = -1;
volatile int32_t t18 = 295884056;
int32_t x77 = -462;
volatile int64_t x79 = INT64_MAX;
int32_t x88 = -1;
int16_t x99 = -2;
int32_t t24 = 88199073;
volatile int16_t x101 = INT16_MAX;
int32_t x102 = INT32_MIN;
volatile int64_t x103 = INT64_MIN;
int8_t x116 = INT8_MIN;
static uint8_t x117 = 90U;
static uint32_t x123 = 118U;
volatile uint8_t x125 = UINT8_MAX;
int16_t x128 = 7113;
uint32_t x130 = UINT32_MAX;
int8_t x132 = 21;
static volatile int32_t t33 = 4515706;
int32_t x145 = INT32_MIN;
static volatile int32_t x152 = 3248;
static uint8_t x153 = 2U;
int32_t x154 = -1;
int64_t x156 = -1LL;
int32_t x158 = INT32_MIN;
int8_t x161 = -1;
int16_t x165 = -1;
static int32_t t41 = -44633741;
uint16_t x171 = 57U;
volatile int32_t t42 = 52;
volatile int16_t x177 = INT16_MIN;
int16_t x180 = INT16_MIN;
volatile int32_t t45 = 1;
volatile int32_t x186 = INT32_MIN;
volatile int8_t x187 = INT8_MAX;
static int16_t x189 = 45;
static int32_t x200 = INT32_MIN;
int32_t x207 = -123;
int64_t x208 = -1LL;
int32_t t51 = 13;
volatile uint16_t x216 = UINT16_MAX;
int8_t x223 = -7;
static volatile uint32_t x229 = 3531U;
uint16_t x240 = 9U;
uint16_t x245 = 1U;
volatile int64_t x247 = -1LL;
uint32_t x252 = 1U;
int32_t x253 = INT32_MAX;
uint16_t x264 = 54U;
int32_t x266 = INT32_MIN;
int16_t x267 = INT16_MIN;
volatile uint16_t x269 = UINT16_MAX;
volatile uint8_t x281 = 2U;
int64_t x287 = -47498721977672LL;
volatile uint16_t x292 = 184U;
int16_t x297 = -389;
uint8_t x299 = UINT8_MAX;
volatile uint32_t x301 = 41006426U;
uint64_t x310 = UINT64_MAX;
static int16_t x311 = INT16_MIN;
static volatile int32_t t79 = -32410;
int8_t x322 = 17;
int64_t x329 = -69564LL;
int16_t x330 = -1;
static volatile int32_t x339 = INT32_MIN;
int32_t t85 = -352254;
int8_t x350 = -1;
int8_t x357 = -6;
int32_t x358 = INT32_MAX;
static int32_t t89 = -183889194;
volatile int16_t x364 = -13917;
static int16_t x368 = INT16_MAX;
int8_t x378 = 28;
volatile uint16_t x383 = UINT16_MAX;
static int16_t x387 = INT16_MAX;
uint16_t x388 = UINT16_MAX;
volatile int32_t x393 = -1;
uint8_t x395 = 2U;


void f0(void) {
	volatile uint64_t x1 = 53721706424LLU;
	uint8_t x2 = 0U;
	int64_t x3 = INT64_MIN;
	uint64_t x4 = UINT64_MAX;
	int32_t t0 = -126093;

	t0 = (x1==(x2*(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MAX;
	int8_t x7 = 13;
	uint64_t x8 = 2159011101910583LLU;
	int32_t t1 = 5744;

	t1 = (x5==(x6*(x7<x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = UINT16_MAX;
	static volatile int32_t t2 = -2822823;

	t2 = (x9==(x10*(x11<x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MAX;
	static int16_t x15 = -1256;

	t3 = (x13==(x14*(x15<x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 0;
	volatile int16_t x18 = -1;
	int16_t x20 = INT16_MIN;
	static int32_t t4 = 104;

	t4 = (x17==(x18*(x19<x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int16_t x24 = INT16_MIN;
	int32_t t5 = 146791450;

	t5 = (x21==(x22*(x23<x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	int8_t x26 = -58;
	int16_t x27 = 11512;
	uint16_t x28 = 5U;

	t6 = (x25==(x26*(x27<x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	static int8_t x30 = -5;
	static int64_t x31 = -230413735LL;
	volatile int16_t x32 = -1;
	volatile int32_t t7 = -1;

	t7 = (x29==(x30*(x31<x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x34 = 7570U;
	int64_t x35 = -1LL;
	static int32_t t8 = 3;

	t8 = (x33==(x34*(x35<x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	int8_t x38 = INT8_MIN;
	static int16_t x39 = INT16_MAX;
	volatile int32_t t9 = -83;

	t9 = (x37==(x38*(x39<x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	uint32_t x42 = 10U;
	static int32_t x44 = INT32_MIN;
	int32_t t10 = 3;

	t10 = (x41==(x42*(x43<x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MAX;
	volatile int32_t x47 = INT32_MIN;
	uint16_t x48 = 2U;

	t11 = (x45==(x46*(x47<x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 0U;
	uint64_t x51 = UINT64_MAX;
	static int16_t x52 = INT16_MAX;
	volatile int32_t t12 = 56;

	t12 = (x49==(x50*(x51<x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = -1;
	static int8_t x54 = -1;
	static uint64_t x55 = 34674814715309497LLU;
	int8_t x56 = -1;

	t13 = (x53==(x54*(x55<x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = INT32_MIN;
	int64_t x59 = INT64_MAX;
	volatile uint16_t x60 = UINT16_MAX;
	int32_t t14 = 0;

	t14 = (x57==(x58*(x59<x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x61 = 7895419560906258946LLU;
	int16_t x62 = INT16_MIN;
	int64_t x63 = INT64_MIN;
	uint64_t x64 = 190LLU;
	int32_t t15 = -7161;

	t15 = (x61==(x62*(x63<x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	uint32_t x66 = UINT32_MAX;
	volatile int64_t x67 = -250LL;
	int64_t x68 = INT64_MAX;

	t16 = (x65==(x66*(x67<x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int8_t x70 = -1;
	int64_t x72 = INT64_MIN;
	int32_t t17 = -12895034;

	t17 = (x69==(x70*(x71<x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 46U;
	int64_t x75 = INT64_MIN;
	int16_t x76 = INT16_MIN;

	t18 = (x73==(x74*(x75<x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x78 = UINT16_MAX;
	int32_t x80 = INT32_MAX;
	volatile int32_t t19 = 140984;

	t19 = (x77==(x78*(x79<x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = -370048968;
	int64_t x82 = -1LL;
	volatile int16_t x83 = -1;
	uint8_t x84 = UINT8_MAX;
	int32_t t20 = -7403096;

	t20 = (x81==(x82*(x83<x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -144;
	int8_t x86 = INT8_MAX;
	static int16_t x87 = -1;
	int32_t t21 = 72962693;

	t21 = (x85==(x86*(x87<x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	uint8_t x90 = 60U;
	static uint8_t x91 = UINT8_MAX;
	uint32_t x92 = 688781U;
	volatile int32_t t22 = 26955;

	t22 = (x89==(x90*(x91<x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1;
	int64_t x94 = INT64_MAX;
	volatile uint32_t x95 = 3149U;
	int32_t x96 = -1672;
	volatile int32_t t23 = 41028;

	t23 = (x93==(x94*(x95<x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 2U;
	int16_t x98 = INT16_MIN;
	int32_t x100 = -1;

	t24 = (x97==(x98*(x99<x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x104 = UINT16_MAX;
	volatile int32_t t25 = -434;

	t25 = (x101==(x102*(x103<x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 370479758532LLU;
	int64_t x106 = 36LL;
	uint8_t x107 = 23U;
	volatile int8_t x108 = 5;
	int32_t t26 = 11;

	t26 = (x105==(x106*(x107<x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = -1;
	int16_t x110 = INT16_MAX;
	int64_t x111 = INT64_MIN;
	static int32_t x112 = -886835704;
	volatile int32_t t27 = 109;

	t27 = (x109==(x110*(x111<x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	int16_t x114 = INT16_MAX;
	volatile int64_t x115 = INT64_MIN;
	int32_t t28 = 310318718;

	t28 = (x113==(x114*(x115<x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x118 = -1;
	int32_t x119 = 9;
	int64_t x120 = -4246142753LL;
	int32_t t29 = 2348119;

	t29 = (x117==(x118*(x119<x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x121 = UINT32_MAX;
	volatile int64_t x122 = -28313768274655815LL;
	volatile int32_t x124 = -1;
	volatile int32_t t30 = -23;

	t30 = (x121==(x122*(x123<x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = INT16_MIN;
	uint16_t x127 = 23857U;
	volatile int32_t t31 = -199210;

	t31 = (x125==(x126*(x127<x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x129 = INT64_MIN;
	int16_t x131 = 850;
	static volatile int32_t t32 = -487;

	t32 = (x129==(x130*(x131<x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MAX;
	volatile uint8_t x134 = UINT8_MAX;
	uint64_t x135 = 8239086568505LLU;
	int16_t x136 = INT16_MAX;

	t33 = (x133==(x134*(x135<x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = 2245U;
	static int8_t x138 = INT8_MIN;
	int32_t x139 = -264595656;
	volatile uint64_t x140 = 8154580039515LLU;
	int32_t t34 = 0;

	t34 = (x137==(x138*(x139<x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 1U;
	int32_t x142 = INT32_MIN;
	int64_t x143 = INT64_MIN;
	int32_t x144 = -6360;
	int32_t t35 = -9;

	t35 = (x141==(x142*(x143<x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x146 = INT64_MIN;
	static volatile int8_t x147 = INT8_MIN;
	uint16_t x148 = UINT16_MAX;
	volatile int32_t t36 = 209879487;

	t36 = (x145==(x146*(x147<x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MAX;
	volatile uint8_t x150 = UINT8_MAX;
	uint32_t x151 = 43851157U;
	int32_t t37 = -12;

	t37 = (x149==(x150*(x151<x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x155 = INT64_MIN;
	static int32_t t38 = -6;

	t38 = (x153==(x154*(x155<x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x157 = 1U;
	int64_t x159 = 2091633146604389LL;
	uint16_t x160 = UINT16_MAX;
	int32_t t39 = -18325;

	t39 = (x157==(x158*(x159<x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x162 = UINT64_MAX;
	int64_t x163 = INT64_MAX;
	volatile uint16_t x164 = UINT16_MAX;
	static volatile int32_t t40 = -215563;

	t40 = (x161==(x162*(x163<x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x166 = INT16_MIN;
	volatile int16_t x167 = -13;
	static volatile uint64_t x168 = 1607LLU;

	t41 = (x165==(x166*(x167<x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 0U;
	int16_t x170 = 17;
	int64_t x172 = INT64_MAX;

	t42 = (x169==(x170*(x171<x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = 0;
	uint16_t x174 = UINT16_MAX;
	int32_t x175 = -1;
	volatile uint64_t x176 = 8041235160LLU;
	volatile int32_t t43 = 39;

	t43 = (x173==(x174*(x175<x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x178 = UINT64_MAX;
	volatile int32_t x179 = INT32_MIN;
	int32_t t44 = -1632149;

	t44 = (x177==(x178*(x179<x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = UINT64_MAX;
	static uint32_t x182 = 10511863U;
	uint32_t x183 = 125467U;
	int32_t x184 = INT32_MIN;

	t45 = (x181==(x182*(x183<x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	volatile int16_t x188 = INT16_MIN;
	volatile int32_t t46 = -2414;

	t46 = (x185==(x186*(x187<x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x190 = -354131;
	int16_t x191 = -1;
	volatile uint16_t x192 = UINT16_MAX;
	volatile int32_t t47 = 22;

	t47 = (x189==(x190*(x191<x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	int32_t x194 = INT32_MIN;
	int8_t x195 = -1;
	uint64_t x196 = 2091235819826206LLU;
	volatile int32_t t48 = -291332;

	t48 = (x193==(x194*(x195<x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = UINT64_MAX;
	volatile int16_t x198 = -1;
	static int64_t x199 = INT64_MAX;
	static volatile int32_t t49 = 14891;

	t49 = (x197==(x198*(x199<x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 3963U;
	int8_t x202 = INT8_MIN;
	uint64_t x203 = 15LLU;
	uint32_t x204 = 857981116U;
	int32_t t50 = 48746259;

	t50 = (x201==(x202*(x203<x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	volatile int8_t x206 = INT8_MIN;

	t51 = (x205==(x206*(x207<x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	int16_t x210 = INT16_MIN;
	int8_t x211 = -1;
	volatile uint8_t x212 = 13U;
	int32_t t52 = -3298;

	t52 = (x209==(x210*(x211<x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	volatile uint32_t x214 = 661U;
	static int64_t x215 = 584286671017LL;
	int32_t t53 = 721210;

	t53 = (x213==(x214*(x215<x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -122;
	int8_t x218 = 1;
	uint16_t x219 = 21399U;
	int8_t x220 = INT8_MIN;
	int32_t t54 = 8418546;

	t54 = (x217==(x218*(x219<x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1696325;
	volatile uint8_t x222 = UINT8_MAX;
	static uint16_t x224 = 301U;
	int32_t t55 = -255;

	t55 = (x221==(x222*(x223<x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x225 = -2;
	int16_t x226 = INT16_MIN;
	static volatile int64_t x227 = INT64_MAX;
	int64_t x228 = -512870675LL;
	int32_t t56 = -19277;

	t56 = (x225==(x226*(x227<x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x230 = 11U;
	static int8_t x231 = 9;
	static int8_t x232 = -44;
	int32_t t57 = 2828;

	t57 = (x229==(x230*(x231<x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -21;
	int16_t x234 = INT16_MAX;
	uint32_t x235 = UINT32_MAX;
	int16_t x236 = 101;
	int32_t t58 = -232;

	t58 = (x233==(x234*(x235<x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = INT16_MAX;
	static volatile uint8_t x238 = 3U;
	static int64_t x239 = INT64_MAX;
	volatile int32_t t59 = 1;

	t59 = (x237==(x238*(x239<x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x241 = 94212050557LLU;
	uint32_t x242 = 74527041U;
	uint64_t x243 = 720860428531069454LLU;
	uint64_t x244 = 54044209824466880LLU;
	static int32_t t60 = 884;

	t60 = (x241==(x242*(x243<x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x246 = 1240888323609LLU;
	int32_t x248 = -1;
	volatile int32_t t61 = -5039;

	t61 = (x245==(x246*(x247<x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = -1;
	uint8_t x250 = 26U;
	int64_t x251 = -457729959262384LL;
	volatile int32_t t62 = 2194;

	t62 = (x249==(x250*(x251<x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x254 = -31886851065LL;
	volatile int32_t x255 = 28;
	volatile int32_t x256 = INT32_MIN;
	volatile int32_t t63 = -4480;

	t63 = (x253==(x254*(x255<x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MAX;
	uint8_t x258 = UINT8_MAX;
	volatile int64_t x259 = -1LL;
	volatile int8_t x260 = INT8_MIN;
	volatile int32_t t64 = 325348;

	t64 = (x257==(x258*(x259<x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 0U;
	int32_t x262 = 66;
	int32_t x263 = INT32_MIN;
	static int32_t t65 = 7419;

	t65 = (x261==(x262*(x263<x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = 0;
	static int8_t x268 = -1;
	int32_t t66 = -11;

	t66 = (x265==(x266*(x267<x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x270 = INT32_MIN;
	static int16_t x271 = -1;
	volatile int64_t x272 = -3LL;
	static volatile int32_t t67 = 1;

	t67 = (x269==(x270*(x271<x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	int8_t x274 = INT8_MAX;
	int8_t x275 = INT8_MAX;
	int64_t x276 = 14859778LL;
	static volatile int32_t t68 = 129806507;

	t68 = (x273==(x274*(x275<x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x277 = 1117;
	int32_t x278 = -1;
	int16_t x279 = INT16_MIN;
	static int16_t x280 = -1;
	volatile int32_t t69 = -120523973;

	t69 = (x277==(x278*(x279<x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x282 = UINT64_MAX;
	uint64_t x283 = UINT64_MAX;
	int32_t x284 = INT32_MAX;
	volatile int32_t t70 = 1835;

	t70 = (x281==(x282*(x283<x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	uint16_t x286 = 22U;
	uint16_t x288 = UINT16_MAX;
	int32_t t71 = 12325;

	t71 = (x285==(x286*(x287<x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x289 = UINT16_MAX;
	uint64_t x290 = UINT64_MAX;
	int32_t x291 = INT32_MIN;
	volatile int32_t t72 = -27309;

	t72 = (x289==(x290*(x291<x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -822578631677867LL;
	static uint16_t x294 = UINT16_MAX;
	volatile int32_t x295 = 4913444;
	uint8_t x296 = UINT8_MAX;
	static int32_t t73 = -1;

	t73 = (x293==(x294*(x295<x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x298 = INT64_MIN;
	int64_t x300 = INT64_MAX;
	volatile int32_t t74 = 55156;

	t74 = (x297==(x298*(x299<x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x302 = INT64_MAX;
	int16_t x303 = 2;
	int8_t x304 = -1;
	int32_t t75 = 28;

	t75 = (x301==(x302*(x303<x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = UINT32_MAX;
	int32_t x306 = 1381724;
	uint64_t x307 = 4091437898508863LLU;
	static int8_t x308 = -1;
	volatile int32_t t76 = -9694;

	t76 = (x305==(x306*(x307<x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 8U;
	static volatile int16_t x312 = INT16_MIN;
	volatile int32_t t77 = 8732396;

	t77 = (x309==(x310*(x311<x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = 198;
	uint32_t x314 = 38U;
	uint32_t x315 = UINT32_MAX;
	int8_t x316 = INT8_MIN;
	static volatile int32_t t78 = -63277357;

	t78 = (x313==(x314*(x315<x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = INT8_MIN;
	uint32_t x318 = 2U;
	int64_t x319 = INT64_MIN;
	volatile int16_t x320 = -9;

	t79 = (x317==(x318*(x319<x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x321 = -1;
	uint64_t x323 = UINT64_MAX;
	int16_t x324 = -1;
	int32_t t80 = -24233;

	t80 = (x321==(x322*(x323<x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MAX;
	uint64_t x326 = 119501027544232LLU;
	int64_t x327 = -1LL;
	volatile int32_t x328 = -67223;
	volatile int32_t t81 = -2945074;

	t81 = (x325==(x326*(x327<x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x331 = -1;
	static int8_t x332 = -1;
	volatile int32_t t82 = 6767355;

	t82 = (x329==(x330*(x331<x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	int32_t x334 = -1;
	int32_t x335 = INT32_MIN;
	uint32_t x336 = 12799004U;
	int32_t t83 = -92;

	t83 = (x333==(x334*(x335<x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = UINT32_MAX;
	int32_t x338 = INT32_MAX;
	int32_t x340 = INT32_MAX;
	static volatile int32_t t84 = 50150;

	t84 = (x337==(x338*(x339<x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	volatile int16_t x342 = INT16_MIN;
	volatile int16_t x343 = INT16_MIN;
	int8_t x344 = INT8_MAX;

	t85 = (x341==(x342*(x343<x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = -1LL;
	int16_t x346 = INT16_MIN;
	int64_t x347 = INT64_MIN;
	int16_t x348 = INT16_MAX;
	static int32_t t86 = 1424;

	t86 = (x345==(x346*(x347<x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MAX;
	static int64_t x351 = INT64_MAX;
	uint64_t x352 = UINT64_MAX;
	int32_t t87 = -1072673712;

	t87 = (x349==(x350*(x351<x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 0U;
	volatile uint16_t x354 = 5U;
	int64_t x355 = -1LL;
	int64_t x356 = INT64_MAX;
	int32_t t88 = 570427907;

	t88 = (x353==(x354*(x355<x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x359 = 11399775LL;
	int8_t x360 = -4;

	t89 = (x357==(x358*(x359<x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	int16_t x362 = -1;
	uint32_t x363 = UINT32_MAX;
	static int32_t t90 = -3961481;

	t90 = (x361==(x362*(x363<x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 350512842644788LLU;
	int64_t x366 = INT64_MIN;
	uint16_t x367 = UINT16_MAX;
	int32_t t91 = -1515261;

	t91 = (x365==(x366*(x367<x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MAX;
	uint16_t x370 = UINT16_MAX;
	int32_t x371 = INT32_MAX;
	int16_t x372 = INT16_MIN;
	int32_t t92 = -872591414;

	t92 = (x369==(x370*(x371<x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	static int8_t x374 = INT8_MIN;
	volatile uint64_t x375 = UINT64_MAX;
	volatile uint16_t x376 = 80U;
	int32_t t93 = -400;

	t93 = (x373==(x374*(x375<x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = 22617;
	uint16_t x379 = 33U;
	static uint32_t x380 = UINT32_MAX;
	int32_t t94 = -85;

	t94 = (x377==(x378*(x379<x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	volatile int8_t x382 = 3;
	volatile uint16_t x384 = UINT16_MAX;
	volatile int32_t t95 = -103962;

	t95 = (x381==(x382*(x383<x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	volatile int64_t x386 = INT64_MIN;
	int32_t t96 = -61;

	t96 = (x385==(x386*(x387<x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x389 = INT64_MIN;
	uint64_t x390 = 52736099932LLU;
	volatile uint16_t x391 = 683U;
	uint16_t x392 = UINT16_MAX;
	int32_t t97 = 53;

	t97 = (x389==(x390*(x391<x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x394 = 56;
	uint64_t x396 = 5668421298893LLU;
	volatile int32_t t98 = -533436623;

	t98 = (x393==(x394*(x395<x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	uint8_t x398 = 13U;
	volatile int8_t x399 = INT8_MIN;
	static volatile int64_t x400 = -1LL;
	int32_t t99 = -8;

	t99 = (x397==(x398*(x399<x400)));

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

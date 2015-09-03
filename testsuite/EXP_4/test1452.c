#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = -36;
volatile int32_t t0 = 55020;
uint32_t x12 = 1752155U;
uint64_t x15 = 296749833276937241LLU;
uint16_t x20 = 4U;
static int32_t x23 = INT32_MIN;
int16_t x26 = INT16_MIN;
int8_t x31 = INT8_MAX;
volatile int32_t t7 = 969;
int16_t x34 = INT16_MAX;
uint64_t x39 = 6485088325121LLU;
volatile int32_t x43 = INT32_MIN;
volatile uint8_t x44 = 77U;
uint32_t x50 = 1U;
int8_t x52 = -36;
int32_t t12 = 655492;
static volatile uint32_t x54 = 10U;
int32_t x57 = INT32_MIN;
uint32_t x60 = 4000U;
volatile int64_t x63 = INT64_MIN;
volatile int32_t t16 = -912105140;
int64_t x77 = INT64_MAX;
static int32_t x85 = INT32_MIN;
int64_t x90 = INT64_MAX;
int64_t x97 = INT64_MIN;
volatile uint16_t x100 = 18U;
int16_t x103 = INT16_MIN;
volatile int16_t x112 = -1;
int32_t t27 = 1;
int64_t x117 = INT64_MAX;
static int32_t x125 = INT32_MAX;
volatile int32_t x132 = -1;
int8_t x136 = 0;
static int16_t x138 = 23;
uint16_t x140 = UINT16_MAX;
int16_t x145 = -1;
uint8_t x152 = UINT8_MAX;
static int32_t x175 = 7282;
static int32_t x180 = INT32_MAX;
int32_t x182 = -1;
uint32_t x186 = 30U;
int32_t t46 = 1;
volatile int16_t x190 = INT16_MAX;
uint16_t x194 = 253U;
int8_t x199 = INT8_MIN;
static uint8_t x200 = UINT8_MAX;
static uint32_t x203 = 9606U;
uint16_t x205 = 2734U;
uint16_t x206 = 6U;
int8_t x209 = INT8_MIN;
volatile int8_t x234 = 48;
int16_t x238 = 0;
static int16_t x239 = 10601;
static int32_t x242 = INT32_MAX;
int64_t x243 = -2049219600LL;
int8_t x245 = INT8_MIN;
int16_t x247 = INT16_MIN;
int32_t t61 = -127803;
static int8_t x250 = 3;
static uint32_t x252 = 2592U;
volatile int32_t t62 = -875095583;
uint32_t x258 = 9U;
volatile int32_t x267 = 5266452;
uint32_t x269 = 38910U;
int64_t x272 = INT64_MIN;
volatile int32_t t67 = -338574326;
int64_t x274 = -1LL;
int8_t x279 = INT8_MIN;
int32_t x280 = INT32_MAX;
volatile int32_t t70 = 432;
int32_t t72 = 7;
uint32_t x300 = 218595U;
volatile int32_t t74 = -2739;
static uint8_t x302 = UINT8_MAX;
uint8_t x308 = UINT8_MAX;
uint8_t x309 = 42U;
volatile int64_t x312 = -1LL;
int16_t x314 = INT16_MAX;
volatile uint8_t x316 = 13U;
static uint32_t x322 = 2536847U;
volatile int32_t x323 = INT32_MIN;
static int32_t t83 = -73;
uint64_t x337 = 26449336583775700LLU;
static uint16_t x338 = UINT16_MAX;
volatile uint8_t x340 = UINT8_MAX;
int32_t x356 = INT32_MIN;
static int32_t t89 = -577;
int8_t x363 = -1;
int64_t x367 = INT64_MAX;
uint8_t x370 = UINT8_MAX;
static volatile int8_t x375 = INT8_MIN;
int32_t t93 = 5;
uint64_t x380 = 3LLU;
volatile int64_t x384 = 494460293509294203LL;
static uint64_t x388 = UINT64_MAX;
static volatile int32_t t96 = 1398;
volatile uint32_t x393 = 62685335U;
volatile int32_t t98 = -7726136;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	int32_t x2 = -38993;
	int64_t x3 = 14492830894611LL;

	t0 = (x1<(x2==(x3<x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = 0U;
	volatile uint64_t x6 = 3244098LLU;
	int16_t x7 = 11371;
	uint16_t x8 = UINT16_MAX;
	static int32_t t1 = -2955;

	t1 = (x5<(x6==(x7<x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 125333961LLU;
	volatile int16_t x10 = INT16_MIN;
	volatile uint64_t x11 = UINT64_MAX;
	static int32_t t2 = 25986;

	t2 = (x9<(x10==(x11<x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	volatile int64_t x14 = 281426530174730307LL;
	int32_t x16 = INT32_MAX;
	int32_t t3 = 2885;

	t3 = (x13<(x14==(x15<x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	uint32_t x18 = 1U;
	int32_t x19 = INT32_MIN;
	static int32_t t4 = 6;

	t4 = (x17<(x18==(x19<x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	int16_t x22 = INT16_MIN;
	uint16_t x24 = UINT16_MAX;
	int32_t t5 = -23;

	t5 = (x21<(x22==(x23<x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	int64_t x27 = -652558989065817311LL;
	uint64_t x28 = 663718408055635LLU;
	int32_t t6 = -19091875;

	t6 = (x25<(x26==(x27<x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 76;
	static int16_t x30 = -1;
	int64_t x32 = -238133702LL;

	t7 = (x29<(x30==(x31<x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MIN;
	static uint16_t x35 = 1317U;
	volatile int64_t x36 = 10151774745LL;
	int32_t t8 = -7;

	t8 = (x33<(x34==(x35<x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = -1LL;
	int8_t x38 = INT8_MAX;
	volatile int64_t x40 = INT64_MIN;
	int32_t t9 = 7685953;

	t9 = (x37<(x38==(x39<x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	volatile int8_t x42 = INT8_MIN;
	volatile int32_t t10 = 488710956;

	t10 = (x41<(x42==(x43<x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	int8_t x46 = INT8_MIN;
	static volatile int8_t x47 = INT8_MIN;
	int8_t x48 = -2;
	static volatile int32_t t11 = 4;

	t11 = (x45<(x46==(x47<x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	int16_t x51 = INT16_MAX;

	t12 = (x49<(x50==(x51<x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -1LL;
	uint32_t x55 = 383U;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = -876364324;

	t13 = (x53<(x54==(x55<x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = 0;
	static int16_t x59 = 3490;
	int32_t t14 = 788;

	t14 = (x57<(x58==(x59<x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x61 = -1;
	volatile int32_t x62 = INT32_MAX;
	int32_t x64 = INT32_MIN;
	static int32_t t15 = -79413929;

	t15 = (x61<(x62==(x63<x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	volatile uint8_t x66 = 0U;
	int16_t x67 = INT16_MIN;
	volatile int16_t x68 = 0;

	t16 = (x65<(x66==(x67<x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	uint8_t x70 = 11U;
	int64_t x71 = -10597660275342LL;
	uint64_t x72 = 0LLU;
	int32_t t17 = -960110;

	t17 = (x69<(x70==(x71<x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	static int8_t x74 = -1;
	uint32_t x75 = UINT32_MAX;
	uint64_t x76 = UINT64_MAX;
	int32_t t18 = 12;

	t18 = (x73<(x74==(x75<x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x78 = UINT64_MAX;
	static int8_t x79 = INT8_MAX;
	int8_t x80 = INT8_MIN;
	int32_t t19 = -187045085;

	t19 = (x77<(x78==(x79<x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	uint16_t x82 = 12204U;
	int16_t x83 = -1;
	uint32_t x84 = UINT32_MAX;
	volatile int32_t t20 = -2;

	t20 = (x81<(x82==(x83<x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x86 = 0LLU;
	int32_t x87 = INT32_MIN;
	uint32_t x88 = UINT32_MAX;
	int32_t t21 = 0;

	t21 = (x85<(x86==(x87<x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 9431530LLU;
	int32_t x91 = INT32_MIN;
	volatile uint16_t x92 = UINT16_MAX;
	int32_t t22 = -109572;

	t22 = (x89<(x90==(x91<x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	uint32_t x94 = 22433U;
	static uint32_t x95 = UINT32_MAX;
	uint64_t x96 = 1LLU;
	static volatile int32_t t23 = 53;

	t23 = (x93<(x94==(x95<x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x98 = 306610590710525203LLU;
	int32_t x99 = INT32_MAX;
	int32_t t24 = -659;

	t24 = (x97<(x98==(x99<x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	static uint32_t x102 = 1U;
	int16_t x104 = 1;
	volatile int32_t t25 = 1471;

	t25 = (x101<(x102==(x103<x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	volatile int32_t x106 = INT32_MIN;
	int32_t x107 = INT32_MIN;
	int8_t x108 = 0;
	int32_t t26 = 2722628;

	t26 = (x105<(x106==(x107<x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	static int16_t x110 = INT16_MIN;
	static uint32_t x111 = 18978U;

	t27 = (x109<(x110==(x111<x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = 23622LL;
	int64_t x114 = INT64_MAX;
	int64_t x115 = INT64_MIN;
	static int8_t x116 = -1;
	volatile int32_t t28 = 417978062;

	t28 = (x113<(x114==(x115<x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = INT64_MAX;
	int32_t x119 = INT32_MAX;
	volatile uint64_t x120 = UINT64_MAX;
	int32_t t29 = -449711708;

	t29 = (x117<(x118==(x119<x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MAX;
	uint8_t x122 = UINT8_MAX;
	static int8_t x123 = INT8_MAX;
	int16_t x124 = INT16_MIN;
	volatile int32_t t30 = -48140;

	t30 = (x121<(x122==(x123<x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x126 = 7LLU;
	volatile int64_t x127 = INT64_MIN;
	uint16_t x128 = 4U;
	volatile int32_t t31 = 132974266;

	t31 = (x125<(x126==(x127<x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = 4;
	volatile uint32_t x130 = UINT32_MAX;
	volatile int16_t x131 = 1;
	int32_t t32 = 82651;

	t32 = (x129<(x130==(x131<x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = INT16_MIN;
	volatile int8_t x134 = INT8_MIN;
	volatile uint64_t x135 = UINT64_MAX;
	volatile int32_t t33 = -3910677;

	t33 = (x133<(x134==(x135<x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	volatile int16_t x139 = -5679;
	volatile int32_t t34 = -10697;

	t34 = (x137<(x138==(x139<x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = UINT32_MAX;
	static int32_t x142 = 1;
	static volatile int8_t x143 = INT8_MIN;
	uint64_t x144 = 16252037LLU;
	volatile int32_t t35 = 473057591;

	t35 = (x141<(x142==(x143<x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x146 = -2;
	int64_t x147 = -1LL;
	volatile uint64_t x148 = UINT64_MAX;
	int32_t t36 = -953274647;

	t36 = (x145<(x146==(x147<x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = INT64_MIN;
	int8_t x150 = INT8_MIN;
	uint64_t x151 = 15686998LLU;
	volatile int32_t t37 = 0;

	t37 = (x149<(x150==(x151<x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = INT64_MIN;
	static volatile int16_t x154 = -1;
	int16_t x155 = -1;
	int64_t x156 = INT64_MIN;
	int32_t t38 = 5;

	t38 = (x153<(x154==(x155<x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	volatile uint16_t x158 = UINT16_MAX;
	int32_t x159 = -1;
	int32_t x160 = -1;
	int32_t t39 = -86;

	t39 = (x157<(x158==(x159<x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -40;
	static uint8_t x162 = 9U;
	int8_t x163 = INT8_MAX;
	uint16_t x164 = 8994U;
	volatile int32_t t40 = 186;

	t40 = (x161<(x162==(x163<x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x165 = 25125425LLU;
	volatile uint8_t x166 = UINT8_MAX;
	volatile int16_t x167 = INT16_MIN;
	int64_t x168 = 76662648273922LL;
	volatile int32_t t41 = 360808;

	t41 = (x165<(x166==(x167<x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -1;
	uint32_t x170 = UINT32_MAX;
	static int64_t x171 = INT64_MAX;
	int16_t x172 = INT16_MAX;
	int32_t t42 = -238829226;

	t42 = (x169<(x170==(x171<x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 0U;
	static uint32_t x174 = 150U;
	int8_t x176 = INT8_MIN;
	volatile int32_t t43 = -65762168;

	t43 = (x173<(x174==(x175<x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 55018464637883LL;
	int64_t x178 = -1LL;
	static int64_t x179 = 8LL;
	int32_t t44 = -47316;

	t44 = (x177<(x178==(x179<x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	int8_t x183 = -10;
	int16_t x184 = -22;
	int32_t t45 = -17275;

	t45 = (x181<(x182==(x183<x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MAX;
	uint8_t x187 = 0U;
	int16_t x188 = -1;

	t46 = (x185<(x186==(x187<x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = 0;
	static volatile int16_t x191 = INT16_MIN;
	uint64_t x192 = 2778869036LLU;
	int32_t t47 = 388132778;

	t47 = (x189<(x190==(x191<x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x193 = -2;
	static int32_t x195 = INT32_MIN;
	int64_t x196 = 23825761LL;
	int32_t t48 = 106149518;

	t48 = (x193<(x194==(x195<x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MIN;
	uint32_t x198 = 6115U;
	int32_t t49 = -945;

	t49 = (x197<(x198==(x199<x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -1;
	uint16_t x202 = UINT16_MAX;
	static uint16_t x204 = 25852U;
	int32_t t50 = 23;

	t50 = (x201<(x202==(x203<x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x207 = INT32_MAX;
	uint8_t x208 = 6U;
	int32_t t51 = 306757559;

	t51 = (x205<(x206==(x207<x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x210 = -1;
	int32_t x211 = -311;
	uint32_t x212 = 33U;
	volatile int32_t t52 = 12801;

	t52 = (x209<(x210==(x211<x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = INT64_MIN;
	int64_t x214 = INT64_MAX;
	int64_t x215 = 1508697873983925812LL;
	int16_t x216 = INT16_MIN;
	volatile int32_t t53 = -12552626;

	t53 = (x213<(x214==(x215<x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = UINT16_MAX;
	int64_t x218 = -1LL;
	volatile int16_t x219 = INT16_MIN;
	int8_t x220 = INT8_MIN;
	int32_t t54 = -1312522;

	t54 = (x217<(x218==(x219<x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -805814264283666LL;
	int16_t x222 = INT16_MIN;
	uint16_t x223 = 2025U;
	int8_t x224 = 27;
	int32_t t55 = -264807405;

	t55 = (x221<(x222==(x223<x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	uint8_t x226 = 5U;
	int8_t x227 = INT8_MAX;
	static int8_t x228 = INT8_MIN;
	int32_t t56 = 887012113;

	t56 = (x225<(x226==(x227<x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MAX;
	int8_t x230 = INT8_MIN;
	int16_t x231 = INT16_MIN;
	static volatile uint64_t x232 = 2805403439LLU;
	static volatile int32_t t57 = -4297;

	t57 = (x229<(x230==(x231<x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x233 = 37954742280125345LLU;
	int16_t x235 = INT16_MAX;
	volatile int64_t x236 = 702414LL;
	int32_t t58 = 11858302;

	t58 = (x233<(x234==(x235<x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MAX;
	volatile int16_t x240 = -1;
	int32_t t59 = -1223717;

	t59 = (x237<(x238==(x239<x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = UINT8_MAX;
	volatile int16_t x244 = INT16_MIN;
	static volatile int32_t t60 = 10294381;

	t60 = (x241<(x242==(x243<x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x246 = 58U;
	volatile int8_t x248 = -1;

	t61 = (x245<(x246==(x247<x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -1;
	uint8_t x251 = 63U;

	t62 = (x249<(x250==(x251<x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = 4676360615922LL;
	int8_t x254 = INT8_MIN;
	static volatile int64_t x255 = -43678955817469398LL;
	uint64_t x256 = 42266179140165734LLU;
	int32_t t63 = 0;

	t63 = (x253<(x254==(x255<x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 1U;
	int32_t x259 = INT32_MIN;
	volatile int64_t x260 = INT64_MIN;
	int32_t t64 = 8063;

	t64 = (x257<(x258==(x259<x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = INT32_MAX;
	static volatile int16_t x262 = INT16_MAX;
	uint8_t x263 = 27U;
	uint16_t x264 = UINT16_MAX;
	static volatile int32_t t65 = -183;

	t65 = (x261<(x262==(x263<x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1LL;
	static volatile int8_t x266 = -1;
	volatile uint64_t x268 = 175817540LLU;
	volatile int32_t t66 = 53;

	t66 = (x265<(x266==(x267<x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x270 = 917805U;
	static int32_t x271 = -1;

	t67 = (x269<(x270==(x271<x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = 2138767231906461LL;
	uint64_t x275 = 107870592LLU;
	volatile int64_t x276 = 1892LL;
	int32_t t68 = 12;

	t68 = (x273<(x274==(x275<x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = UINT8_MAX;
	uint16_t x278 = 3U;
	static volatile int32_t t69 = 0;

	t69 = (x277<(x278==(x279<x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = 53042019;
	volatile int64_t x282 = INT64_MAX;
	int8_t x283 = 13;
	uint64_t x284 = 433572891LLU;

	t70 = (x281<(x282==(x283<x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -1765LL;
	uint16_t x286 = 10U;
	uint8_t x287 = UINT8_MAX;
	int64_t x288 = INT64_MIN;
	volatile int32_t t71 = 334;

	t71 = (x285<(x286==(x287<x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MAX;
	int64_t x290 = INT64_MIN;
	int64_t x291 = -1LL;
	static uint8_t x292 = 1U;

	t72 = (x289<(x290==(x291<x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = -2916786;
	uint64_t x294 = UINT64_MAX;
	int8_t x295 = -28;
	int64_t x296 = 334461468369678399LL;
	volatile int32_t t73 = 3598;

	t73 = (x293<(x294==(x295<x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	uint32_t x298 = 18U;
	volatile int32_t x299 = INT32_MIN;

	t74 = (x297<(x298==(x299<x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -1LL;
	uint8_t x303 = 10U;
	int16_t x304 = INT16_MIN;
	static int32_t t75 = 14590354;

	t75 = (x301<(x302==(x303<x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 0;
	int32_t x306 = -18;
	int64_t x307 = -1LL;
	volatile int32_t t76 = 7;

	t76 = (x305<(x306==(x307<x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x310 = -86;
	int16_t x311 = -1;
	int32_t t77 = -119486;

	t77 = (x309<(x310==(x311<x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	static int32_t x315 = -184148;
	volatile int32_t t78 = 3;

	t78 = (x313<(x314==(x315<x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x317 = 0U;
	volatile uint16_t x318 = UINT16_MAX;
	volatile int8_t x319 = 13;
	int32_t x320 = -1;
	static volatile int32_t t79 = -561879;

	t79 = (x317<(x318==(x319<x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 1U;
	uint32_t x324 = 720069623U;
	volatile int32_t t80 = 50991870;

	t80 = (x321<(x322==(x323<x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	int64_t x326 = -1LL;
	volatile uint32_t x327 = 2U;
	volatile int8_t x328 = INT8_MIN;
	int32_t t81 = 10510245;

	t81 = (x325<(x326==(x327<x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	int32_t x330 = INT32_MIN;
	int32_t x331 = INT32_MIN;
	uint32_t x332 = 3523U;
	volatile int32_t t82 = -2645057;

	t82 = (x329<(x330==(x331<x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = INT64_MIN;
	static int32_t x334 = INT32_MAX;
	uint64_t x335 = 3171241467LLU;
	static int16_t x336 = -9903;

	t83 = (x333<(x334==(x335<x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x339 = 1U;
	int32_t t84 = -1554;

	t84 = (x337<(x338==(x339<x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = UINT16_MAX;
	int8_t x342 = INT8_MAX;
	int32_t x343 = -116814470;
	uint8_t x344 = 5U;
	int32_t t85 = -1022580848;

	t85 = (x341<(x342==(x343<x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -99;
	static uint8_t x346 = UINT8_MAX;
	int64_t x347 = INT64_MAX;
	static int16_t x348 = INT16_MAX;
	volatile int32_t t86 = -944222;

	t86 = (x345<(x346==(x347<x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	int16_t x350 = 0;
	int16_t x351 = INT16_MIN;
	static int8_t x352 = INT8_MIN;
	int32_t t87 = 58;

	t87 = (x349<(x350==(x351<x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x353 = -1;
	static int64_t x354 = -1LL;
	int8_t x355 = INT8_MIN;
	volatile int32_t t88 = -1;

	t88 = (x353<(x354==(x355<x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MAX;
	int8_t x358 = -1;
	int64_t x359 = -1LL;
	int64_t x360 = INT64_MIN;

	t89 = (x357<(x358==(x359<x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = 98883815;
	int8_t x362 = INT8_MIN;
	int64_t x364 = -1LL;
	static volatile int32_t t90 = 61545028;

	t90 = (x361<(x362==(x363<x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = -1LL;
	static uint32_t x366 = 202615640U;
	uint32_t x368 = 1585U;
	int32_t t91 = -19;

	t91 = (x365<(x366==(x367<x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = 485598199LL;
	volatile int64_t x371 = INT64_MAX;
	int8_t x372 = -1;
	static int32_t t92 = 7361;

	t92 = (x369<(x370==(x371<x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = UINT64_MAX;
	uint32_t x374 = 20003978U;
	int32_t x376 = INT32_MAX;

	t93 = (x373<(x374==(x375<x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x377 = UINT64_MAX;
	int64_t x378 = INT64_MIN;
	static int16_t x379 = INT16_MIN;
	int32_t t94 = 291;

	t94 = (x377<(x378==(x379<x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = -1;
	int32_t x382 = INT32_MIN;
	static volatile int16_t x383 = INT16_MIN;
	int32_t t95 = -2431977;

	t95 = (x381<(x382==(x383<x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 64740U;
	static int32_t x386 = 16;
	uint64_t x387 = 377823019230484LLU;

	t96 = (x385<(x386==(x387<x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = INT64_MIN;
	int64_t x390 = INT64_MIN;
	int64_t x391 = INT64_MAX;
	static uint32_t x392 = 25489U;
	volatile int32_t t97 = -125507;

	t97 = (x389<(x390==(x391<x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x394 = 0;
	int32_t x395 = INT32_MIN;
	volatile int8_t x396 = INT8_MIN;

	t98 = (x393<(x394==(x395<x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = -1;
	volatile int8_t x398 = -1;
	int32_t x399 = INT32_MIN;
	uint64_t x400 = UINT64_MAX;
	int32_t t99 = 28;

	t99 = (x397<(x398==(x399<x400)));

	if (t99 != 1) { NG(); } else { ; }
	
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


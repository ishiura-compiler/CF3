#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x3 = UINT8_MAX;
uint64_t x11 = 2076885294410LLU;
uint64_t x12 = 397877653405787957LLU;
static uint64_t x14 = UINT64_MAX;
volatile int32_t t4 = 3150;
int64_t x27 = INT64_MAX;
volatile int16_t x30 = INT16_MIN;
int16_t x31 = INT16_MAX;
int16_t x36 = INT16_MAX;
volatile int32_t t8 = 412;
static int32_t x44 = -1;
uint8_t x46 = UINT8_MAX;
int16_t x49 = INT16_MIN;
static int32_t t12 = -7;
volatile int32_t t14 = 1135;
int64_t x63 = 121LL;
static volatile int32_t t15 = 653713421;
int16_t x69 = INT16_MIN;
int32_t t17 = -13;
int16_t x73 = INT16_MIN;
uint32_t x78 = 360144U;
int32_t t19 = 34929;
volatile int32_t t21 = -976;
int32_t x89 = -1;
static int32_t x94 = -1;
static int64_t x98 = -1LL;
int16_t x103 = 862;
uint8_t x105 = 3U;
int16_t x110 = -1;
int32_t t27 = -87313215;
uint8_t x120 = UINT8_MAX;
static int32_t t30 = -968216;
int16_t x125 = INT16_MAX;
uint64_t x135 = 8330375835125LLU;
volatile uint16_t x136 = 1U;
int64_t x144 = -158668LL;
uint16_t x146 = 2678U;
uint8_t x148 = 84U;
static int32_t x160 = -3235;
static int64_t x162 = -1LL;
volatile int64_t x164 = INT64_MIN;
int32_t t40 = -14;
int32_t x166 = -1;
static int32_t t41 = -717436;
volatile uint8_t x173 = UINT8_MAX;
int64_t x174 = -265989315LL;
uint8_t x180 = UINT8_MAX;
volatile int32_t t45 = -1;
volatile int32_t t46 = -13;
uint64_t x190 = UINT64_MAX;
static uint32_t x191 = 104688818U;
volatile int32_t x192 = -1093;
int16_t x194 = -1;
int8_t x208 = -1;
int32_t t53 = 1;
int8_t x217 = -1;
int16_t x227 = INT16_MAX;
volatile int8_t x228 = -1;
int16_t x232 = -8184;
volatile int64_t x239 = -1LL;
uint64_t x241 = 73LLU;
volatile uint8_t x244 = 15U;
volatile int32_t t61 = 1;
int8_t x250 = 1;
static uint32_t x251 = 1046U;
volatile int32_t t62 = 89;
int64_t x257 = INT64_MAX;
static uint8_t x270 = UINT8_MAX;
int32_t t67 = 3735;
static int64_t x281 = INT64_MAX;
int32_t x283 = -188;
static int32_t t70 = 1415;
int8_t x285 = INT8_MAX;
static uint64_t x289 = 2492539LLU;
int64_t x290 = -704251552659962871LL;
uint32_t x302 = UINT32_MAX;
uint16_t x306 = UINT16_MAX;
uint64_t x316 = UINT64_MAX;
static int16_t x319 = INT16_MIN;
int32_t t80 = 6091326;
uint32_t x331 = 4242190U;
int8_t x343 = INT8_MIN;
static int32_t t83 = -514;
volatile int16_t x345 = INT16_MIN;
volatile int32_t x357 = INT32_MIN;
volatile uint16_t x364 = 5U;
uint64_t x371 = 105LLU;
volatile int32_t t91 = 858528643;
uint8_t x377 = 99U;
int16_t x378 = INT16_MIN;
int64_t x392 = INT64_MIN;
int8_t x396 = INT8_MAX;
static int32_t t96 = 51;
static int16_t x402 = INT16_MAX;
int32_t t99 = -3;


void f0(void) {
	int8_t x1 = -1;
	uint16_t x2 = 886U;
	static volatile uint16_t x4 = 4U;
	int32_t t0 = 1525;

	t0 = (x1<=(x2<(x3%x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 10921735LL;
	int32_t x6 = -1;
	int8_t x7 = 0;
	uint32_t x8 = 18842293U;
	int32_t t1 = 1;

	t1 = (x5<=(x6<(x7%x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	int64_t x10 = INT64_MIN;
	int32_t t2 = 223;

	t2 = (x9<=(x10<(x11%x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = INT32_MAX;
	int16_t x15 = -1;
	int32_t x16 = -482171;
	volatile int32_t t3 = 931737;

	t3 = (x13<=(x14<(x15%x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1928497;
	int32_t x18 = -1;
	uint32_t x19 = 43394635U;
	volatile int64_t x20 = INT64_MIN;

	t4 = (x17<=(x18<(x19%x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = 11;
	int64_t x22 = INT64_MIN;
	volatile int16_t x23 = 1;
	uint32_t x24 = 1U;
	static volatile int32_t t5 = 22055753;

	t5 = (x21<=(x22<(x23%x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 40748546LLU;
	volatile int8_t x26 = INT8_MAX;
	uint8_t x28 = 16U;
	int32_t t6 = -17910566;

	t6 = (x25<=(x26<(x27%x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x29 = 1005;
	uint16_t x32 = 3384U;
	int32_t t7 = 12990307;

	t7 = (x29<=(x30<(x31%x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 123U;
	static int32_t x34 = INT32_MIN;
	static int32_t x35 = 1;

	t8 = (x33<=(x34<(x35%x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	uint64_t x38 = UINT64_MAX;
	static int8_t x39 = INT8_MAX;
	uint8_t x40 = 14U;
	volatile int32_t t9 = -241915055;

	t9 = (x37<=(x38<(x39%x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	uint16_t x42 = UINT16_MAX;
	volatile uint64_t x43 = UINT64_MAX;
	volatile int32_t t10 = -529245;

	t10 = (x41<=(x42<(x43%x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x45 = 530589367075576427LLU;
	uint16_t x47 = UINT16_MAX;
	int8_t x48 = INT8_MIN;
	static int32_t t11 = 64732;

	t11 = (x45<=(x46<(x47%x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = INT64_MAX;
	int64_t x51 = INT64_MIN;
	volatile uint64_t x52 = UINT64_MAX;

	t12 = (x49<=(x50<(x51%x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 2;
	uint32_t x54 = 10402U;
	int32_t x55 = -6751;
	uint64_t x56 = 1130385782495LLU;
	int32_t t13 = 957;

	t13 = (x53<=(x54<(x55%x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 7U;
	int16_t x58 = INT16_MIN;
	uint16_t x59 = 5U;
	int16_t x60 = -1;

	t14 = (x57<=(x58<(x59%x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x61 = 478U;
	static volatile int64_t x62 = INT64_MAX;
	int64_t x64 = INT64_MIN;

	t15 = (x61<=(x62<(x63%x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = INT16_MIN;
	volatile int32_t x66 = INT32_MIN;
	int8_t x67 = INT8_MIN;
	int64_t x68 = -874148912965479LL;
	static volatile int32_t t16 = 343738;

	t16 = (x65<=(x66<(x67%x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = 626861620662720732LL;
	static int8_t x71 = INT8_MIN;
	volatile int32_t x72 = INT32_MIN;

	t17 = (x69<=(x70<(x71%x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = -1;
	volatile int8_t x75 = INT8_MAX;
	int32_t x76 = INT32_MAX;
	static volatile int32_t t18 = -4083213;

	t18 = (x73<=(x74<(x75%x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = 1;
	static int16_t x79 = INT16_MIN;
	volatile int8_t x80 = -1;

	t19 = (x77<=(x78<(x79%x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	static int16_t x82 = INT16_MIN;
	int16_t x83 = INT16_MAX;
	volatile uint16_t x84 = 98U;
	static volatile int32_t t20 = -63218411;

	t20 = (x81<=(x82<(x83%x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 860586U;
	volatile uint8_t x86 = 6U;
	volatile int64_t x87 = -16452542983718LL;
	int32_t x88 = INT32_MAX;

	t21 = (x85<=(x86<(x87%x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = INT8_MIN;
	volatile uint8_t x91 = 1U;
	int16_t x92 = INT16_MIN;
	int32_t t22 = -1312510;

	t22 = (x89<=(x90<(x91%x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = 1;
	static uint8_t x95 = UINT8_MAX;
	int8_t x96 = INT8_MAX;
	volatile int32_t t23 = 3886016;

	t23 = (x93<=(x94<(x95%x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 308228256U;
	volatile uint8_t x99 = 96U;
	int16_t x100 = -1;
	volatile int32_t t24 = 7516;

	t24 = (x97<=(x98<(x99%x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MAX;
	int32_t x102 = -1019679;
	volatile int16_t x104 = -1;
	int32_t t25 = 219;

	t25 = (x101<=(x102<(x103%x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = INT64_MAX;
	int8_t x107 = INT8_MIN;
	volatile uint16_t x108 = UINT16_MAX;
	int32_t t26 = 61846;

	t26 = (x105<=(x106<(x107%x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = INT16_MIN;
	int32_t x111 = -241287764;
	int32_t x112 = 1448;

	t27 = (x109<=(x110<(x111%x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 0U;
	int32_t x114 = 121284;
	static int32_t x115 = INT32_MAX;
	int8_t x116 = -1;
	static volatile int32_t t28 = 156936357;

	t28 = (x113<=(x114<(x115%x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	int32_t x118 = INT32_MIN;
	uint8_t x119 = UINT8_MAX;
	static int32_t t29 = 1349;

	t29 = (x117<=(x118<(x119%x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1;
	static int64_t x122 = -1LL;
	int32_t x123 = -1;
	int64_t x124 = INT64_MAX;

	t30 = (x121<=(x122<(x123%x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x126 = -2801362;
	int8_t x127 = -29;
	uint32_t x128 = 904199U;
	static int32_t t31 = -61140;

	t31 = (x125<=(x126<(x127%x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	volatile int16_t x130 = INT16_MIN;
	static volatile uint8_t x131 = UINT8_MAX;
	uint32_t x132 = 3U;
	volatile int32_t t32 = -122968;

	t32 = (x129<=(x130<(x131%x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MAX;
	uint16_t x134 = 1U;
	volatile int32_t t33 = -24;

	t33 = (x133<=(x134<(x135%x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 74U;
	volatile int16_t x138 = -634;
	int8_t x139 = -2;
	int64_t x140 = INT64_MIN;
	volatile int32_t t34 = -64;

	t34 = (x137<=(x138<(x139%x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = UINT32_MAX;
	int32_t x142 = 7;
	int8_t x143 = 1;
	int32_t t35 = -126609;

	t35 = (x141<=(x142<(x143%x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 1LLU;
	int8_t x147 = -1;
	int32_t t36 = 119075230;

	t36 = (x145<=(x146<(x147%x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = INT32_MIN;
	int32_t x150 = -1;
	int8_t x151 = -1;
	int32_t x152 = -1;
	volatile int32_t t37 = 686766;

	t37 = (x149<=(x150<(x151%x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	int32_t x154 = INT32_MAX;
	int8_t x155 = -29;
	int16_t x156 = -1;
	volatile int32_t t38 = 4021;

	t38 = (x153<=(x154<(x155%x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 1U;
	static int64_t x158 = -305563351896603LL;
	int16_t x159 = INT16_MIN;
	static int32_t t39 = -11012405;

	t39 = (x157<=(x158<(x159%x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = -3;
	volatile int8_t x163 = -2;

	t40 = (x161<=(x162<(x163%x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x165 = 849U;
	int8_t x167 = 0;
	int8_t x168 = INT8_MIN;

	t41 = (x165<=(x166<(x167%x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x169 = 117923402680LLU;
	int32_t x170 = INT32_MAX;
	int16_t x171 = -5;
	uint8_t x172 = UINT8_MAX;
	int32_t t42 = -1748;

	t42 = (x169<=(x170<(x171%x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x175 = INT16_MAX;
	int64_t x176 = INT64_MIN;
	volatile int32_t t43 = 13024707;

	t43 = (x173<=(x174<(x175%x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 211766U;
	int8_t x178 = INT8_MIN;
	volatile uint8_t x179 = 2U;
	static volatile int32_t t44 = 12;

	t44 = (x177<=(x178<(x179%x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	static uint16_t x182 = UINT16_MAX;
	uint64_t x183 = UINT64_MAX;
	int16_t x184 = -2;

	t45 = (x181<=(x182<(x183%x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = 3773;
	int32_t x186 = -1;
	int16_t x187 = -1;
	uint16_t x188 = 2U;

	t46 = (x185<=(x186<(x187%x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 3009821;
	volatile int32_t t47 = -419917372;

	t47 = (x189<=(x190<(x191%x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = 16757004LL;
	int8_t x195 = -1;
	int64_t x196 = INT64_MAX;
	volatile int32_t t48 = 1050862994;

	t48 = (x193<=(x194<(x195%x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MAX;
	static uint16_t x198 = UINT16_MAX;
	int32_t x199 = INT32_MAX;
	static int32_t x200 = INT32_MIN;
	volatile int32_t t49 = 23;

	t49 = (x197<=(x198<(x199%x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x201 = 1563U;
	int64_t x202 = INT64_MIN;
	uint64_t x203 = UINT64_MAX;
	int16_t x204 = INT16_MIN;
	int32_t t50 = 7;

	t50 = (x201<=(x202<(x203%x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = 243487;
	int32_t x206 = -1;
	uint16_t x207 = 84U;
	int32_t t51 = -5057616;

	t51 = (x205<=(x206<(x207%x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = INT16_MIN;
	int64_t x210 = INT64_MIN;
	uint32_t x211 = UINT32_MAX;
	int8_t x212 = INT8_MIN;
	int32_t t52 = 1524;

	t52 = (x209<=(x210<(x211%x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	int8_t x214 = INT8_MIN;
	int32_t x215 = INT32_MAX;
	int64_t x216 = -1LL;

	t53 = (x213<=(x214<(x215%x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x218 = -24;
	static uint32_t x219 = 268527404U;
	static int32_t x220 = -916043807;
	volatile int32_t t54 = 10358693;

	t54 = (x217<=(x218<(x219%x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 217U;
	int16_t x222 = -1;
	int32_t x223 = 858053361;
	static int8_t x224 = -1;
	int32_t t55 = 3232880;

	t55 = (x221<=(x222<(x223%x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MAX;
	uint16_t x226 = 713U;
	volatile int32_t t56 = 1;

	t56 = (x225<=(x226<(x227%x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x229 = INT16_MIN;
	static volatile uint32_t x230 = 3138716U;
	volatile int8_t x231 = 2;
	int32_t t57 = 1253590;

	t57 = (x229<=(x230<(x231%x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x233 = 64U;
	int32_t x234 = INT32_MIN;
	int8_t x235 = -1;
	static int64_t x236 = -226970154LL;
	volatile int32_t t58 = -213087;

	t58 = (x233<=(x234<(x235%x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 1322LLU;
	static int8_t x238 = INT8_MIN;
	static int16_t x240 = INT16_MIN;
	int32_t t59 = 4036;

	t59 = (x237<=(x238<(x239%x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x242 = UINT64_MAX;
	static uint8_t x243 = 23U;
	int32_t t60 = -6400;

	t60 = (x241<=(x242<(x243%x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 51U;
	uint32_t x246 = UINT32_MAX;
	int32_t x247 = -1;
	volatile uint64_t x248 = 57707504309349644LLU;

	t61 = (x245<=(x246<(x247%x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -42821;
	static volatile int64_t x252 = 1LL;

	t62 = (x249<=(x250<(x251%x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -3158297310738679996LL;
	uint32_t x254 = 915096490U;
	uint8_t x255 = 92U;
	int64_t x256 = INT64_MIN;
	static int32_t t63 = 7;

	t63 = (x253<=(x254<(x255%x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x258 = 235U;
	int32_t x259 = INT32_MIN;
	uint64_t x260 = 2014579748762854LLU;
	int32_t t64 = 169;

	t64 = (x257<=(x258<(x259%x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 20963U;
	int16_t x262 = INT16_MAX;
	static int64_t x263 = INT64_MAX;
	uint8_t x264 = 7U;
	volatile int32_t t65 = -2745949;

	t65 = (x261<=(x262<(x263%x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x265 = 2U;
	static uint32_t x266 = 922494U;
	uint64_t x267 = 107233920LLU;
	static uint8_t x268 = 107U;
	int32_t t66 = 116142;

	t66 = (x265<=(x266<(x267%x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 1U;
	static int32_t x271 = -934824969;
	int8_t x272 = -1;

	t67 = (x269<=(x270<(x271%x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x273 = 366603U;
	int32_t x274 = -1;
	static volatile uint16_t x275 = 11698U;
	uint64_t x276 = 76625545132799LLU;
	int32_t t68 = -352934;

	t68 = (x273<=(x274<(x275%x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x277 = 3U;
	int8_t x278 = -1;
	int8_t x279 = -1;
	volatile int8_t x280 = 41;
	volatile int32_t t69 = -996193;

	t69 = (x277<=(x278<(x279%x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x282 = INT64_MIN;
	static int32_t x284 = INT32_MAX;

	t70 = (x281<=(x282<(x283%x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x286 = -1;
	int64_t x287 = -8LL;
	int16_t x288 = INT16_MIN;
	static volatile int32_t t71 = -110;

	t71 = (x285<=(x286<(x287%x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x291 = -1;
	uint8_t x292 = 27U;
	volatile int32_t t72 = -78490354;

	t72 = (x289<=(x290<(x291%x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 4U;
	int8_t x294 = 0;
	int8_t x295 = 12;
	volatile int64_t x296 = INT64_MAX;
	int32_t t73 = -104858475;

	t73 = (x293<=(x294<(x295%x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x297 = UINT8_MAX;
	int16_t x298 = INT16_MIN;
	uint32_t x299 = UINT32_MAX;
	volatile int16_t x300 = -52;
	int32_t t74 = 793877;

	t74 = (x297<=(x298<(x299%x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x301 = UINT32_MAX;
	int16_t x303 = INT16_MAX;
	uint64_t x304 = 2975927833448140393LLU;
	volatile int32_t t75 = -285;

	t75 = (x301<=(x302<(x303%x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	int16_t x307 = INT16_MIN;
	volatile uint16_t x308 = UINT16_MAX;
	volatile int32_t t76 = -555997;

	t76 = (x305<=(x306<(x307%x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x309 = 1;
	int16_t x310 = INT16_MIN;
	volatile int64_t x311 = -283238960261LL;
	uint16_t x312 = 6167U;
	static volatile int32_t t77 = -4;

	t77 = (x309<=(x310<(x311%x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = 11671469592275802LL;
	uint64_t x314 = 564188LLU;
	volatile int64_t x315 = 3041347928834834325LL;
	volatile int32_t t78 = -285854;

	t78 = (x313<=(x314<(x315%x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 30U;
	volatile int64_t x318 = -257903LL;
	static volatile int64_t x320 = -1LL;
	static volatile int32_t t79 = 56641697;

	t79 = (x317<=(x318<(x319%x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x321 = 1U;
	uint8_t x322 = 15U;
	volatile uint8_t x323 = 0U;
	uint32_t x324 = UINT32_MAX;

	t80 = (x321<=(x322<(x323%x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x329 = INT32_MIN;
	int32_t x330 = -1;
	uint8_t x332 = 12U;
	static volatile int32_t t81 = 191381;

	t81 = (x329<=(x330<(x331%x332)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x333 = UINT32_MAX;
	volatile int8_t x334 = 55;
	volatile int64_t x335 = INT64_MIN;
	uint32_t x336 = 197676U;
	static int32_t t82 = 54190;

	t82 = (x333<=(x334<(x335%x336)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x341 = INT8_MIN;
	static int8_t x342 = -1;
	uint64_t x344 = 17LLU;

	t83 = (x341<=(x342<(x343%x344)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x346 = -1;
	int8_t x347 = INT8_MIN;
	int8_t x348 = INT8_MIN;
	int32_t t84 = -249013;

	t84 = (x345<=(x346<(x347%x348)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x349 = 82U;
	uint8_t x350 = 63U;
	int16_t x351 = INT16_MAX;
	static uint64_t x352 = UINT64_MAX;
	int32_t t85 = -7693489;

	t85 = (x349<=(x350<(x351%x352)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x353 = UINT32_MAX;
	int16_t x354 = -1;
	int16_t x355 = INT16_MAX;
	uint16_t x356 = 29820U;
	int32_t t86 = -464;

	t86 = (x353<=(x354<(x355%x356)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x358 = -3;
	volatile uint8_t x359 = 3U;
	volatile uint32_t x360 = UINT32_MAX;
	static volatile int32_t t87 = -93270;

	t87 = (x357<=(x358<(x359%x360)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x361 = UINT16_MAX;
	static int32_t x362 = INT32_MAX;
	uint32_t x363 = 21578675U;
	static volatile int32_t t88 = 126147940;

	t88 = (x361<=(x362<(x363%x364)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = -1LL;
	int8_t x366 = 1;
	int32_t x367 = 214965315;
	static uint8_t x368 = 15U;
	volatile int32_t t89 = 90;

	t89 = (x365<=(x366<(x367%x368)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x369 = INT8_MAX;
	uint16_t x370 = UINT16_MAX;
	volatile int8_t x372 = INT8_MIN;
	volatile int32_t t90 = 234640;

	t90 = (x369<=(x370<(x371%x372)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x373 = 0U;
	int64_t x374 = INT64_MIN;
	int32_t x375 = -1;
	int16_t x376 = -1;

	t91 = (x373<=(x374<(x375%x376)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x379 = 7U;
	uint32_t x380 = UINT32_MAX;
	static volatile int32_t t92 = 0;

	t92 = (x377<=(x378<(x379%x380)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x381 = 0;
	uint8_t x382 = UINT8_MAX;
	int16_t x383 = -284;
	static int8_t x384 = -30;
	int32_t t93 = -69270;

	t93 = (x381<=(x382<(x383%x384)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x385 = -27;
	static uint64_t x386 = 1579180585099145LLU;
	int64_t x387 = INT64_MIN;
	volatile int16_t x388 = INT16_MIN;
	static volatile int32_t t94 = 28;

	t94 = (x385<=(x386<(x387%x388)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x389 = INT32_MIN;
	volatile int8_t x390 = INT8_MIN;
	uint32_t x391 = 5U;
	static int32_t t95 = 6;

	t95 = (x389<=(x390<(x391%x392)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x393 = INT8_MIN;
	static int8_t x394 = INT8_MIN;
	static int32_t x395 = 2946;

	t96 = (x393<=(x394<(x395%x396)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x397 = INT8_MAX;
	int8_t x398 = INT8_MIN;
	int16_t x399 = INT16_MAX;
	uint16_t x400 = UINT16_MAX;
	volatile int32_t t97 = 27886;

	t97 = (x397<=(x398<(x399%x400)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x401 = INT32_MAX;
	int16_t x403 = INT16_MIN;
	static int8_t x404 = -1;
	static int32_t t98 = 0;

	t98 = (x401<=(x402<(x403%x404)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x405 = -1LL;
	volatile int32_t x406 = INT32_MIN;
	int16_t x407 = 1876;
	int64_t x408 = -1LL;

	t99 = (x405<=(x406<(x407%x408)));

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


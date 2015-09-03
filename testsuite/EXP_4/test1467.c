#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x6 = INT8_MIN;
int64_t x8 = -1LL;
int64_t x11 = 1725LL;
int64_t x13 = -1LL;
uint8_t x22 = 0U;
int8_t x31 = 1;
int8_t x36 = -27;
int32_t x39 = -753875;
int8_t x45 = -29;
uint32_t x46 = UINT32_MAX;
int64_t x48 = INT64_MAX;
volatile int32_t t11 = 2557065;
uint64_t t12 = 16693415727765LLU;
int64_t x53 = INT64_MIN;
int64_t t13 = -137LL;
static volatile uint64_t x58 = 15845093082018LLU;
static int64_t x59 = INT64_MIN;
int64_t t16 = 192913065444144LL;
static volatile int32_t t18 = -3685;
volatile int64_t t19 = 2897171555099238LL;
int16_t x84 = INT16_MIN;
static uint8_t x102 = 3U;
int64_t x104 = 439LL;
static volatile int16_t x111 = INT16_MIN;
volatile int32_t t27 = -1;
volatile uint64_t x114 = 108058063662561234LLU;
int64_t x116 = INT64_MIN;
static volatile int16_t x117 = 1917;
static int64_t x118 = INT64_MIN;
volatile int8_t x122 = 10;
static uint64_t x126 = 63493444404425LLU;
int64_t x128 = INT64_MIN;
int8_t x134 = -1;
uint32_t x147 = 988137U;
static volatile uint32_t x150 = UINT32_MAX;
int64_t x153 = 231LL;
volatile int64_t t38 = -1LL;
volatile int16_t x165 = INT16_MIN;
int32_t x176 = -1;
int32_t x182 = INT32_MIN;
static int16_t x184 = INT16_MIN;
uint64_t x185 = UINT64_MAX;
uint32_t x192 = 26U;
uint64_t x197 = UINT64_MAX;
uint64_t t49 = 121786989LLU;
int64_t x203 = INT64_MIN;
uint8_t x204 = UINT8_MAX;
static int8_t x205 = 43;
volatile int32_t x213 = INT32_MIN;
int32_t x215 = -1;
uint32_t x220 = 14603207U;
volatile int32_t x221 = -1;
static int32_t t55 = 14694265;
int8_t x232 = INT8_MIN;
int8_t x236 = -2;
static int32_t x239 = INT32_MIN;
static int16_t x253 = INT16_MAX;
int16_t x254 = -2105;
uint16_t x265 = UINT16_MAX;
static int16_t x266 = -7;
int32_t x271 = 2191;
volatile uint32_t x273 = UINT32_MAX;
int8_t x278 = 0;
int16_t x290 = INT16_MIN;
uint32_t x293 = 347853U;
uint32_t t73 = 18542U;
uint8_t x305 = 48U;
int64_t x311 = -1LL;
int32_t t77 = 65008249;
int64_t x315 = INT64_MIN;
int32_t t79 = -10;
int64_t x325 = -8181291LL;
static int32_t x327 = INT32_MIN;
int64_t x336 = -7LL;
uint32_t x339 = UINT32_MAX;
int64_t t84 = -5994800975LL;
volatile int64_t x341 = -39067732624875LL;
int32_t x343 = -1;
volatile int64_t t86 = -360259590260LL;
int16_t x349 = INT16_MAX;
volatile int16_t x352 = 316;
static volatile int32_t t88 = 55362;
volatile int32_t x367 = INT32_MIN;
uint64_t t91 = 1454474115792405LLU;
int64_t x370 = -20545177510478LL;
uint8_t x381 = 1U;
static int8_t x386 = -1;
static volatile int64_t t96 = -22574708515LL;
static volatile uint32_t x391 = 6082U;
volatile int16_t x394 = 1;
int32_t x396 = -1;


void f0(void) {
	uint8_t x1 = 24U;
	int16_t x2 = -1;
	volatile int16_t x3 = INT16_MAX;
	int64_t x4 = -1LL;
	int32_t t0 = -4;

	t0 = (x1&(x2<(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	static volatile int16_t x7 = INT16_MIN;
	int32_t t1 = 1424;

	t1 = (x5&(x6<(x7<x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = 4821019689887LL;
	int32_t x10 = -1;
	uint8_t x12 = 33U;
	int64_t t2 = 147679767714LL;

	t2 = (x9&(x10<(x11<x12)));

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x14 = INT64_MIN;
	int32_t x15 = INT32_MAX;
	int32_t x16 = INT32_MIN;
	int64_t t3 = -3LL;

	t3 = (x13&(x14<(x15<x16)));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x17 = INT16_MIN;
	int16_t x18 = -1;
	uint64_t x19 = 1119934LLU;
	static volatile int16_t x20 = INT16_MAX;
	int32_t t4 = 0;

	t4 = (x17&(x18<(x19<x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	static uint16_t x23 = 1241U;
	uint32_t x24 = 1675U;
	int32_t t5 = -774774117;

	t5 = (x21&(x22<(x23<x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 2;
	int16_t x26 = 0;
	uint64_t x27 = UINT64_MAX;
	volatile uint8_t x28 = 48U;
	int32_t t6 = 12862;

	t6 = (x25&(x26<(x27<x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -10598835820LL;
	int16_t x30 = INT16_MIN;
	uint32_t x32 = 996348U;
	int64_t t7 = -934665154373LL;

	t7 = (x29&(x30<(x31<x32)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MAX;
	uint64_t x34 = 219455677793422691LLU;
	int16_t x35 = -1;
	int32_t t8 = -15989;

	t8 = (x33&(x34<(x35<x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = -1LL;
	uint32_t x38 = UINT32_MAX;
	int8_t x40 = INT8_MAX;
	int64_t t9 = 3156432101097729LL;

	t9 = (x37&(x38<(x39<x40)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 3;
	int16_t x42 = INT16_MAX;
	uint64_t x43 = 6677500734LLU;
	int16_t x44 = 14;
	static volatile int32_t t10 = -3013;

	t10 = (x41&(x42<(x43<x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x47 = -1;

	t11 = (x45&(x46<(x47<x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 5779LLU;
	int32_t x50 = 238;
	uint16_t x51 = 1654U;
	static int64_t x52 = 279192315716243LL;

	t12 = (x49&(x50<(x51<x52)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x54 = UINT32_MAX;
	static int8_t x55 = 19;
	int16_t x56 = INT16_MAX;

	t13 = (x53&(x54<(x55<x56)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 54U;
	int16_t x60 = 199;
	int32_t t14 = 62317961;

	t14 = (x57&(x58<(x59<x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -2129833;
	volatile uint16_t x62 = 0U;
	int16_t x63 = INT16_MIN;
	int8_t x64 = INT8_MIN;
	int32_t t15 = -1101;

	t15 = (x61&(x62<(x63<x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	uint64_t x66 = UINT64_MAX;
	uint16_t x67 = 0U;
	static int16_t x68 = -1;

	t16 = (x65&(x66<(x67<x68)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	uint32_t x70 = 2U;
	int8_t x71 = -1;
	static uint8_t x72 = 45U;
	int32_t t17 = 3;

	t17 = (x69&(x70<(x71<x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x73 = 0U;
	int8_t x74 = INT8_MAX;
	static uint32_t x75 = 57267853U;
	uint8_t x76 = UINT8_MAX;

	t18 = (x73&(x74<(x75<x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	static uint64_t x78 = 2220290419LLU;
	uint64_t x79 = 3890211LLU;
	volatile uint16_t x80 = 11U;

	t19 = (x77&(x78<(x79<x80)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	volatile int32_t x82 = 619545489;
	uint8_t x83 = UINT8_MAX;
	static volatile int64_t t20 = 12778344373942LL;

	t20 = (x81&(x82<(x83<x84)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = 7;
	int32_t x86 = -1;
	int16_t x87 = 29;
	int64_t x88 = INT64_MIN;
	volatile int32_t t21 = 3;

	t21 = (x85&(x86<(x87<x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = 185;
	uint32_t x90 = 109U;
	volatile int16_t x91 = INT16_MIN;
	static volatile uint16_t x92 = 4675U;
	int32_t t22 = -13931809;

	t22 = (x89&(x90<(x91<x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	static int8_t x94 = -22;
	uint8_t x95 = 19U;
	int64_t x96 = -1LL;
	int64_t t23 = -7012126331721072LL;

	t23 = (x93&(x94<(x95<x96)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MIN;
	int32_t x98 = -11;
	volatile int8_t x99 = INT8_MIN;
	static int16_t x100 = INT16_MAX;
	volatile int64_t t24 = 303919306296343LL;

	t24 = (x97&(x98<(x99<x100)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = UINT32_MAX;
	volatile uint64_t x103 = UINT64_MAX;
	uint32_t t25 = 6293754U;

	t25 = (x101&(x102<(x103<x104)));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	int64_t x106 = 1LL;
	static uint32_t x107 = UINT32_MAX;
	uint16_t x108 = 26U;
	volatile int32_t t26 = -33528188;

	t26 = (x105&(x106<(x107<x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	static int8_t x110 = INT8_MIN;
	int8_t x112 = INT8_MAX;

	t27 = (x109&(x110<(x111<x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MAX;
	int8_t x115 = -1;
	volatile int32_t t28 = -1760880;

	t28 = (x113&(x114<(x115<x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x119 = INT16_MAX;
	int32_t x120 = INT32_MIN;
	int32_t t29 = -439016754;

	t29 = (x117&(x118<(x119<x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = UINT16_MAX;
	int16_t x123 = INT16_MIN;
	static int8_t x124 = INT8_MIN;
	volatile int32_t t30 = -285;

	t30 = (x121&(x122<(x123<x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = 0;
	static int16_t x127 = INT16_MAX;
	volatile int32_t t31 = -120524;

	t31 = (x125&(x126<(x127<x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	int32_t x130 = -1;
	int64_t x131 = INT64_MIN;
	static int16_t x132 = -1;
	int32_t t32 = 19796;

	t32 = (x129&(x130<(x131<x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x133 = 321U;
	uint64_t x135 = 53164435478786LLU;
	static int32_t x136 = INT32_MIN;
	volatile uint32_t t33 = 62535487U;

	t33 = (x133&(x134<(x135<x136)));

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	static uint16_t x138 = 6U;
	int32_t x139 = INT32_MIN;
	volatile uint8_t x140 = 84U;
	int64_t t34 = -126723950720068765LL;

	t34 = (x137&(x138<(x139<x140)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 6U;
	int16_t x142 = INT16_MIN;
	int8_t x143 = -1;
	static int32_t x144 = INT32_MAX;
	int32_t t35 = -37560;

	t35 = (x141&(x142<(x143<x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = -1;
	int32_t x146 = INT32_MIN;
	uint32_t x148 = 39U;
	int32_t t36 = 879329;

	t36 = (x145&(x146<(x147<x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MAX;
	int8_t x151 = 13;
	static volatile uint32_t x152 = 6548U;
	int32_t t37 = 3482;

	t37 = (x149&(x150<(x151<x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x154 = 103734U;
	static int8_t x155 = 62;
	static int64_t x156 = -300152886809847793LL;

	t38 = (x153&(x154<(x155<x156)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = INT8_MIN;
	volatile int16_t x158 = INT16_MAX;
	int32_t x159 = -1;
	volatile uint32_t x160 = 2570288U;
	int32_t t39 = -480;

	t39 = (x157&(x158<(x159<x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	static int32_t x162 = INT32_MAX;
	uint64_t x163 = UINT64_MAX;
	int16_t x164 = -511;
	static int32_t t40 = 523445;

	t40 = (x161&(x162<(x163<x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint64_t x166 = UINT64_MAX;
	int32_t x167 = -5317;
	static uint8_t x168 = UINT8_MAX;
	volatile int32_t t41 = 56660;

	t41 = (x165&(x166<(x167<x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x169 = -1LL;
	static int32_t x170 = INT32_MAX;
	int8_t x171 = -1;
	int64_t x172 = -1LL;
	static int64_t t42 = 0LL;

	t42 = (x169&(x170<(x171<x172)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x173 = -1LL;
	int32_t x174 = INT32_MIN;
	static uint8_t x175 = UINT8_MAX;
	int64_t t43 = 111986285301LL;

	t43 = (x173&(x174<(x175<x176)));

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = INT64_MIN;
	int8_t x178 = 0;
	uint8_t x179 = UINT8_MAX;
	int64_t x180 = INT64_MIN;
	int64_t t44 = -171571LL;

	t44 = (x177&(x178<(x179<x180)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 0;
	int64_t x183 = INT64_MIN;
	int32_t t45 = -5;

	t45 = (x181&(x182<(x183<x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x186 = INT16_MIN;
	int32_t x187 = -166;
	volatile uint64_t x188 = 2790LLU;
	uint64_t t46 = 241836118295510428LLU;

	t46 = (x185&(x186<(x187<x188)));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = INT16_MIN;
	static int8_t x190 = 1;
	uint64_t x191 = UINT64_MAX;
	static volatile int32_t t47 = -748668;

	t47 = (x189&(x190<(x191<x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 3664U;
	static volatile uint8_t x194 = 0U;
	volatile int16_t x195 = INT16_MAX;
	static int8_t x196 = 3;
	volatile int32_t t48 = 1181;

	t48 = (x193&(x194<(x195<x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint32_t x198 = 7202U;
	static int16_t x199 = INT16_MIN;
	static int32_t x200 = 81;

	t49 = (x197&(x198<(x199<x200)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = INT16_MIN;
	static volatile int32_t x202 = -1;
	volatile int32_t t50 = 712;

	t50 = (x201&(x202<(x203<x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x206 = 3781U;
	static int16_t x207 = INT16_MAX;
	int16_t x208 = INT16_MAX;
	volatile int32_t t51 = 0;

	t51 = (x205&(x206<(x207<x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -1;
	static uint16_t x210 = 7569U;
	static uint16_t x211 = 3U;
	volatile int64_t x212 = -224LL;
	static int32_t t52 = -1;

	t52 = (x209&(x210<(x211<x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x214 = INT8_MAX;
	int64_t x216 = INT64_MIN;
	volatile int32_t t53 = -22;

	t53 = (x213&(x214<(x215<x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 1731U;
	int8_t x218 = INT8_MAX;
	int32_t x219 = -38635739;
	volatile int32_t t54 = -3580292;

	t54 = (x217&(x218<(x219<x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x222 = INT32_MIN;
	volatile uint16_t x223 = 270U;
	uint8_t x224 = 14U;

	t55 = (x221&(x222<(x223<x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = 530689934270LL;
	volatile uint64_t x226 = 0LLU;
	volatile uint32_t x227 = 4143211U;
	uint16_t x228 = 24008U;
	static int64_t t56 = 200895058LL;

	t56 = (x225&(x226<(x227<x228)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = 267906;
	static int64_t x230 = 4283166937971567LL;
	static int32_t x231 = INT32_MIN;
	static int32_t t57 = -390585;

	t57 = (x229&(x230<(x231<x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MAX;
	uint16_t x234 = UINT16_MAX;
	int64_t x235 = INT64_MIN;
	static int64_t t58 = -233009499151LL;

	t58 = (x233&(x234<(x235<x236)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = UINT32_MAX;
	int8_t x238 = INT8_MIN;
	int16_t x240 = INT16_MIN;
	static volatile uint32_t t59 = 590217U;

	t59 = (x237&(x238<(x239<x240)));

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = 1LL;
	int8_t x242 = 58;
	int64_t x243 = -1LL;
	int64_t x244 = -237367759722LL;
	static int64_t t60 = -2552363194812LL;

	t60 = (x241&(x242<(x243<x244)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MAX;
	uint64_t x246 = 95LLU;
	int32_t x247 = -2;
	int16_t x248 = 1;
	int32_t t61 = -1;

	t61 = (x245&(x246<(x247<x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = INT64_MAX;
	int16_t x250 = 1548;
	static uint8_t x251 = UINT8_MAX;
	volatile uint32_t x252 = UINT32_MAX;
	volatile int64_t t62 = 5092441325LL;

	t62 = (x249&(x250<(x251<x252)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x255 = 715;
	volatile uint64_t x256 = UINT64_MAX;
	volatile int32_t t63 = -2;

	t63 = (x253&(x254<(x255<x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 145035377U;
	static int8_t x258 = INT8_MIN;
	volatile uint32_t x259 = 593U;
	volatile int8_t x260 = INT8_MAX;
	uint32_t t64 = 168U;

	t64 = (x257&(x258<(x259<x260)));

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 27154960;
	uint8_t x262 = 5U;
	int64_t x263 = INT64_MIN;
	static uint64_t x264 = 336409406590LLU;
	volatile int32_t t65 = 17014;

	t65 = (x261&(x262<(x263<x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x267 = -1;
	uint8_t x268 = 11U;
	int32_t t66 = -248146252;

	t66 = (x265&(x266<(x267<x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x269 = -23;
	uint16_t x270 = 162U;
	static uint8_t x272 = 0U;
	int32_t t67 = 238392;

	t67 = (x269&(x270<(x271<x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x274 = 2;
	int8_t x275 = 57;
	int8_t x276 = INT8_MIN;
	uint32_t t68 = 100U;

	t68 = (x273&(x274<(x275<x276)));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -1LL;
	static int64_t x279 = 24014350733348657LL;
	int64_t x280 = -1223425310742643LL;
	volatile int64_t t69 = -205413125LL;

	t69 = (x277&(x278<(x279<x280)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x281 = -1;
	volatile int16_t x282 = 328;
	volatile int8_t x283 = INT8_MIN;
	static volatile int8_t x284 = 26;
	volatile int32_t t70 = -73;

	t70 = (x281&(x282<(x283<x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	int8_t x286 = 17;
	int32_t x287 = -1;
	uint32_t x288 = 60505263U;
	int32_t t71 = 126;

	t71 = (x285&(x286<(x287<x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 76972U;
	int16_t x291 = -1;
	int64_t x292 = -1LL;
	uint32_t t72 = 11326U;

	t72 = (x289&(x290<(x291<x292)));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x294 = INT16_MIN;
	int8_t x295 = INT8_MIN;
	uint8_t x296 = UINT8_MAX;

	t73 = (x293&(x294<(x295<x296)));

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x297 = 5U;
	int16_t x298 = INT16_MIN;
	uint8_t x299 = UINT8_MAX;
	int32_t x300 = -49209;
	volatile uint32_t t74 = 49580223U;

	t74 = (x297&(x298<(x299<x300)));

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -2515;
	uint8_t x302 = 12U;
	uint64_t x303 = UINT64_MAX;
	uint8_t x304 = 5U;
	volatile int32_t t75 = 1848;

	t75 = (x301&(x302<(x303<x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = 0;
	uint16_t x307 = 457U;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t76 = -92;

	t76 = (x305&(x306<(x307<x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = -1935;
	int64_t x310 = INT64_MIN;
	int16_t x312 = INT16_MAX;

	t77 = (x309&(x310<(x311<x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -3979;
	uint8_t x314 = 0U;
	int16_t x316 = INT16_MIN;
	int32_t t78 = 1;

	t78 = (x313&(x314<(x315<x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x317 = INT32_MIN;
	static uint16_t x318 = 4U;
	int8_t x319 = INT8_MIN;
	int16_t x320 = 1377;

	t79 = (x317&(x318<(x319<x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 46U;
	static int64_t x322 = 172033745559920LL;
	int8_t x323 = 52;
	uint32_t x324 = 2205U;
	static volatile int32_t t80 = 116676;

	t80 = (x321&(x322<(x323<x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x326 = UINT8_MAX;
	uint8_t x328 = 1U;
	int64_t t81 = 168934296884118LL;

	t81 = (x325&(x326<(x327<x328)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	int32_t x330 = -3653684;
	int8_t x331 = -1;
	int8_t x332 = 1;
	int64_t t82 = -56381090LL;

	t82 = (x329&(x330<(x331<x332)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 45642559249169973LLU;
	volatile int16_t x334 = INT16_MIN;
	static int64_t x335 = -51874LL;
	volatile uint64_t t83 = 15338683131LLU;

	t83 = (x333&(x334<(x335<x336)));

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = INT64_MIN;
	static int64_t x338 = -1LL;
	int16_t x340 = INT16_MIN;

	t84 = (x337&(x338<(x339<x340)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x342 = INT8_MIN;
	uint16_t x344 = 1346U;
	int64_t t85 = -756309969782LL;

	t85 = (x341&(x342<(x343<x344)));

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = 3266LL;
	uint32_t x346 = 81400822U;
	uint16_t x347 = 23U;
	int32_t x348 = -247;

	t86 = (x345&(x346<(x347<x348)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x350 = -127024621058663LL;
	uint32_t x351 = 25U;
	static int32_t t87 = -63043;

	t87 = (x349&(x350<(x351<x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x353 = INT8_MIN;
	int32_t x354 = -1;
	static int64_t x355 = INT64_MAX;
	volatile int8_t x356 = 39;

	t88 = (x353&(x354<(x355<x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -17;
	int32_t x358 = INT32_MAX;
	static int8_t x359 = INT8_MIN;
	uint32_t x360 = 263262230U;
	volatile int32_t t89 = -1033010965;

	t89 = (x357&(x358<(x359<x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -7756;
	volatile int8_t x362 = INT8_MIN;
	static uint64_t x363 = 6116629548257388488LLU;
	int64_t x364 = INT64_MAX;
	int32_t t90 = 509;

	t90 = (x361&(x362<(x363<x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x365 = UINT64_MAX;
	int64_t x366 = -23154LL;
	volatile uint8_t x368 = 98U;

	t91 = (x365&(x366<(x367<x368)));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = INT64_MIN;
	volatile int16_t x371 = INT16_MIN;
	volatile int16_t x372 = INT16_MIN;
	volatile int64_t t92 = 52705286842LL;

	t92 = (x369&(x370<(x371<x372)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = -335622262412025LL;
	volatile uint64_t x374 = UINT64_MAX;
	volatile int32_t x375 = INT32_MAX;
	int8_t x376 = 2;
	volatile int64_t t93 = 2624LL;

	t93 = (x373&(x374<(x375<x376)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	int64_t x378 = -32326263863LL;
	int16_t x379 = -1;
	static int8_t x380 = -1;
	int64_t t94 = 99830595477LL;

	t94 = (x377&(x378<(x379<x380)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x382 = INT64_MAX;
	uint8_t x383 = UINT8_MAX;
	volatile int8_t x384 = 1;
	volatile int32_t t95 = -1886;

	t95 = (x381&(x382<(x383<x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	static uint8_t x387 = 113U;
	volatile int32_t x388 = 6821;

	t96 = (x385&(x386<(x387<x388)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 2186U;
	int8_t x390 = 31;
	int16_t x392 = INT16_MAX;
	static volatile int32_t t97 = 3;

	t97 = (x389&(x390<(x391<x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -1LL;
	uint64_t x395 = UINT64_MAX;
	volatile int64_t t98 = -2011LL;

	t98 = (x393&(x394<(x395<x396)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = -1;
	int16_t x398 = 81;
	int64_t x399 = INT64_MIN;
	int16_t x400 = INT16_MIN;
	volatile int32_t t99 = 0;

	t99 = (x397&(x398<(x399<x400)));

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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x10 = -1;
int32_t t2 = -1;
int64_t x13 = -1718LL;
uint64_t x25 = UINT64_MAX;
static uint32_t x27 = 1U;
volatile int32_t t8 = -80901;
int8_t x39 = -1;
int64_t t9 = -481483682348LL;
int16_t x46 = INT16_MIN;
volatile int64_t x53 = 11352LL;
int64_t x57 = -1LL;
volatile int32_t t16 = 1496979;
uint8_t x74 = 15U;
static int32_t x77 = -36480;
static int8_t x80 = 0;
static int32_t t18 = -83568;
int64_t x84 = INT64_MIN;
int64_t t19 = 1088778717202742LL;
int32_t t20 = -902664342;
int32_t t23 = -21;
uint8_t x110 = UINT8_MAX;
static uint64_t x112 = UINT64_MAX;
int32_t x113 = -1;
int16_t x120 = -1972;
volatile int32_t t29 = 43348;
uint8_t x125 = UINT8_MAX;
static int32_t x129 = INT32_MAX;
int64_t x130 = INT64_MAX;
int16_t x132 = INT16_MIN;
int16_t x143 = INT16_MAX;
static int64_t x147 = -8093573536032019LL;
static int8_t x148 = -1;
static int32_t x151 = -1;
volatile uint32_t t35 = 40503U;
static uint16_t x155 = 573U;
int16_t x157 = INT16_MIN;
volatile int16_t x160 = INT16_MAX;
static int8_t x164 = INT8_MIN;
static volatile int32_t t38 = -282229196;
int8_t x170 = -1;
volatile uint32_t t40 = 0U;
int64_t x175 = INT64_MAX;
static uint64_t x176 = UINT64_MAX;
static int8_t x180 = INT8_MIN;
int8_t x182 = -3;
static uint16_t x185 = UINT16_MAX;
int16_t x189 = INT16_MIN;
int32_t t45 = -12547415;
int16_t x195 = 6145;
int64_t x196 = INT64_MAX;
static uint8_t x197 = 7U;
static int32_t x199 = INT32_MIN;
int32_t t47 = -130272465;
int16_t x202 = INT16_MAX;
volatile uint8_t x203 = UINT8_MAX;
uint64_t x204 = UINT64_MAX;
uint16_t x211 = UINT16_MAX;
volatile int32_t t51 = -3592;
static int8_t x218 = INT8_MIN;
uint16_t x222 = 404U;
uint16_t x223 = UINT16_MAX;
int64_t x228 = -173LL;
volatile int32_t t54 = -111256794;
int8_t x235 = -1;
int16_t x243 = -1;
uint32_t x244 = 45U;
volatile int32_t t59 = -492674;
volatile uint32_t t62 = 3233665U;
volatile int8_t x268 = INT8_MAX;
static int8_t x269 = 15;
int32_t x277 = -1;
int16_t x278 = -1;
volatile int32_t t67 = -182090623;
static volatile int32_t t69 = 3907;
int32_t x291 = INT32_MIN;
static int8_t x302 = INT8_MIN;
volatile int16_t x309 = -4;
static volatile int32_t t75 = -89;
volatile int32_t t77 = -107782806;
volatile int64_t x325 = INT64_MIN;
static uint64_t x332 = 112116439989511487LLU;
int64_t x338 = INT64_MIN;
volatile int64_t t83 = 3613598LL;
int16_t x352 = INT16_MAX;
volatile uint64_t x357 = 75LLU;
static uint64_t t87 = 162598742LLU;
int32_t x369 = -1;
uint64_t x373 = UINT64_MAX;
int32_t x380 = INT32_MIN;
volatile int32_t t93 = -609;
uint64_t x391 = 8066633544LLU;
int32_t x401 = 14753;
static uint16_t x402 = 12344U;
uint64_t x404 = 14630907086860LLU;
int8_t x405 = -25;


void f0(void) {
	uint32_t x1 = 12423947U;
	static volatile int8_t x2 = INT8_MIN;
	volatile int16_t x3 = 1;
	uint16_t x4 = 111U;
	static volatile uint32_t t0 = 262215U;

	t0 = (x1+(x2<(x3<x4)));

	if (t0 != 12423948U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	uint32_t x6 = UINT32_MAX;
	int64_t x7 = INT64_MIN;
	int16_t x8 = -17;
	int32_t t1 = 15;

	t1 = (x5+(x6<(x7<x8)));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	uint64_t x11 = 7167952782043013LLU;
	volatile uint64_t x12 = 447029181LLU;

	t2 = (x9+(x10<(x11<x12)));

	if (t2 != 256) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x14 = 7U;
	int32_t x15 = 465;
	int16_t x16 = INT16_MIN;
	volatile int64_t t3 = 1741LL;

	t3 = (x13+(x14<(x15<x16)));

	if (t3 != -1718LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -6766925779638264LL;
	int32_t x18 = INT32_MAX;
	int32_t x19 = 9;
	int8_t x20 = 0;
	int64_t t4 = -81815607468LL;

	t4 = (x17+(x18<(x19<x20)));

	if (t4 != -6766925779638264LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = -1;
	int8_t x22 = -1;
	volatile int32_t x23 = INT32_MIN;
	static volatile int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -54335;

	t5 = (x21+(x22<(x23<x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = -1;
	int64_t x28 = INT64_MAX;
	uint64_t t6 = 86930848LLU;

	t6 = (x25+(x26<(x27<x28)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = -1;
	uint32_t x30 = 18816U;
	static uint8_t x31 = 127U;
	int8_t x32 = INT8_MAX;
	volatile int32_t t7 = 3449;

	t7 = (x29+(x30<(x31<x32)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 28614U;
	static volatile uint32_t x34 = 30U;
	int32_t x35 = -1;
	uint8_t x36 = 28U;

	t8 = (x33+(x34<(x35<x36)));

	if (t8 != 28614) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 294LL;
	int64_t x38 = -1LL;
	volatile int8_t x40 = INT8_MIN;

	t9 = (x37+(x38<(x39<x40)));

	if (t9 != 295LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x45 = UINT8_MAX;
	uint16_t x47 = 849U;
	int16_t x48 = -458;
	static int32_t t10 = 1;

	t10 = (x45+(x46<(x47<x48)));

	if (t10 != 256) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = 31;
	int16_t x50 = INT16_MIN;
	int16_t x51 = -6270;
	int16_t x52 = INT16_MIN;
	volatile int32_t t11 = -258524;

	t11 = (x49+(x50<(x51<x52)));

	if (t11 != 32) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x54 = 407;
	int8_t x55 = -1;
	static volatile uint16_t x56 = 74U;
	static int64_t t12 = -420983000LL;

	t12 = (x53+(x54<(x55<x56)));

	if (t12 != 11352LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x58 = INT32_MIN;
	int64_t x59 = -1LL;
	int8_t x60 = INT8_MAX;
	static int64_t t13 = 28844711115LL;

	t13 = (x57+(x58<(x59<x60)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x61 = 1;
	static int8_t x62 = -1;
	int16_t x63 = INT16_MAX;
	int64_t x64 = INT64_MAX;
	volatile int32_t t14 = 7309;

	t14 = (x61+(x62<(x63<x64)));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x65 = -1;
	uint8_t x66 = UINT8_MAX;
	uint16_t x67 = 0U;
	static uint64_t x68 = UINT64_MAX;
	volatile int32_t t15 = -327;

	t15 = (x65+(x66<(x67<x68)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x69 = -841;
	static int16_t x70 = INT16_MAX;
	int32_t x71 = 50533;
	int64_t x72 = INT64_MIN;

	t16 = (x69+(x70<(x71<x72)));

	if (t16 != -841) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MIN;
	int8_t x75 = -1;
	int64_t x76 = INT64_MIN;
	volatile int32_t t17 = 299510519;

	t17 = (x73+(x74<(x75<x76)));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x78 = 0U;
	static int64_t x79 = -1LL;

	t18 = (x77+(x78<(x79<x80)));

	if (t18 != -36479) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x81 = -1LL;
	static int8_t x82 = -14;
	static uint8_t x83 = UINT8_MAX;

	t19 = (x81+(x82<(x83<x84)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 544U;
	uint32_t x86 = 191931U;
	int32_t x87 = INT32_MIN;
	volatile uint16_t x88 = 20359U;

	t20 = (x85+(x86<(x87<x88)));

	if (t20 != 544) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x89 = INT64_MAX;
	uint16_t x90 = 7U;
	uint8_t x91 = 0U;
	volatile int16_t x92 = INT16_MAX;
	static volatile int64_t t21 = INT64_MAX;

	t21 = (x89+(x90<(x91<x92)));

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MAX;
	uint16_t x94 = UINT16_MAX;
	int8_t x95 = INT8_MAX;
	static int32_t x96 = INT32_MIN;
	int64_t t22 = INT64_MAX;

	t22 = (x93+(x94<(x95<x96)));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MIN;
	int16_t x98 = INT16_MIN;
	int16_t x99 = 352;
	int64_t x100 = INT64_MIN;

	t23 = (x97+(x98<(x99<x100)));

	if (t23 != -127) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x101 = 61U;
	int16_t x102 = INT16_MIN;
	int32_t x103 = -6569611;
	int8_t x104 = 26;
	static volatile int32_t t24 = -130101447;

	t24 = (x101+(x102<(x103<x104)));

	if (t24 != 62) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = UINT32_MAX;
	int64_t x106 = INT64_MIN;
	static volatile int16_t x107 = INT16_MAX;
	int8_t x108 = INT8_MIN;
	uint32_t t25 = 1970U;

	t25 = (x105+(x106<(x107<x108)));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = INT32_MIN;
	int64_t x111 = 2577552787294520LL;
	int32_t t26 = INT32_MIN;

	t26 = (x109+(x110<(x111<x112)));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x114 = 26919;
	int32_t x115 = INT32_MAX;
	int32_t x116 = INT32_MAX;
	static int32_t t27 = 38812997;

	t27 = (x113+(x114<(x115<x116)));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x117 = 5230016703926995309LLU;
	volatile int16_t x118 = INT16_MIN;
	int32_t x119 = INT32_MIN;
	volatile uint64_t t28 = 2673970518LLU;

	t28 = (x117+(x118<(x119<x120)));

	if (t28 != 5230016703926995310LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x121 = INT8_MIN;
	static int8_t x122 = INT8_MIN;
	int8_t x123 = 5;
	static int16_t x124 = INT16_MAX;

	t29 = (x121+(x122<(x123<x124)));

	if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x126 = INT16_MIN;
	int64_t x127 = INT64_MAX;
	int64_t x128 = -473769972696LL;
	int32_t t30 = -3280;

	t30 = (x125+(x126<(x127<x128)));

	if (t30 != 256) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x131 = UINT64_MAX;
	int32_t t31 = INT32_MAX;

	t31 = (x129+(x130<(x131<x132)));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = -2445;
	volatile uint8_t x138 = 10U;
	uint32_t x139 = 1930965U;
	int64_t x140 = INT64_MIN;
	volatile int32_t t32 = -4731;

	t32 = (x137+(x138<(x139<x140)));

	if (t32 != -2445) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x141 = 1U;
	volatile int8_t x142 = INT8_MIN;
	static uint32_t x144 = 1959300210U;
	uint32_t t33 = 122206521U;

	t33 = (x141+(x142<(x143<x144)));

	if (t33 != 2U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x145 = UINT8_MAX;
	static int8_t x146 = INT8_MIN;
	int32_t t34 = -7;

	t34 = (x145+(x146<(x147<x148)));

	if (t34 != 256) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x149 = UINT32_MAX;
	int32_t x150 = INT32_MIN;
	static int64_t x152 = 276LL;

	t35 = (x149+(x150<(x151<x152)));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = -1;
	int64_t x154 = -625079LL;
	uint64_t x156 = UINT64_MAX;
	int32_t t36 = 485;

	t36 = (x153+(x154<(x155<x156)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x158 = -169;
	uint32_t x159 = 1456686U;
	int32_t t37 = -5;

	t37 = (x157+(x158<(x159<x160)));

	if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = INT16_MAX;
	int32_t x162 = INT32_MIN;
	volatile int32_t x163 = -507;

	t38 = (x161+(x162<(x163<x164)));

	if (t38 != 32768) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = -3703793064699046831LL;
	static int16_t x166 = -1;
	volatile int16_t x167 = -1;
	int8_t x168 = INT8_MIN;
	volatile int64_t t39 = -99850271639675181LL;

	t39 = (x165+(x166<(x167<x168)));

	if (t39 != -3703793064699046830LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x169 = UINT32_MAX;
	volatile int8_t x171 = 1;
	uint8_t x172 = UINT8_MAX;

	t40 = (x169+(x170<(x171<x172)));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = 7594LL;
	volatile int32_t x174 = INT32_MAX;
	int64_t t41 = 188153284711LL;

	t41 = (x173+(x174<(x175<x176)));

	if (t41 != 7594LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = INT8_MAX;
	int32_t x178 = INT32_MIN;
	static uint16_t x179 = 786U;
	volatile int32_t t42 = -1;

	t42 = (x177+(x178<(x179<x180)));

	if (t42 != 128) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MIN;
	volatile int8_t x183 = INT8_MIN;
	int32_t x184 = INT32_MIN;
	static volatile int32_t t43 = 235761754;

	t43 = (x181+(x182<(x183<x184)));

	if (t43 != -32767) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x186 = UINT32_MAX;
	static int64_t x187 = INT64_MIN;
	int64_t x188 = INT64_MIN;
	volatile int32_t t44 = 3465047;

	t44 = (x185+(x186<(x187<x188)));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x190 = -7944662363506374LL;
	volatile int32_t x191 = -1;
	int64_t x192 = -376710307LL;

	t45 = (x189+(x190<(x191<x192)));

	if (t45 != -32767) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = INT16_MIN;
	int32_t x194 = -534;
	volatile int32_t t46 = -995806;

	t46 = (x193+(x194<(x195<x196)));

	if (t46 != -32767) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x198 = INT64_MIN;
	volatile uint16_t x200 = 16U;

	t47 = (x197+(x198<(x199<x200)));

	if (t47 != 8) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x201 = UINT8_MAX;
	volatile int32_t t48 = -26;

	t48 = (x201+(x202<(x203<x204)));

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = 0;
	static int16_t x206 = -1;
	int16_t x207 = 75;
	int16_t x208 = 4;
	volatile int32_t t49 = -19568;

	t49 = (x205+(x206<(x207<x208)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x209 = 194778U;
	int16_t x210 = 0;
	int64_t x212 = -1LL;
	volatile uint32_t t50 = 5U;

	t50 = (x209+(x210<(x211<x212)));

	if (t50 != 194778U) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x213 = -1;
	volatile int8_t x214 = INT8_MIN;
	volatile uint32_t x215 = 12724009U;
	uint32_t x216 = 10U;

	t51 = (x213+(x214<(x215<x216)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = -1;
	int16_t x219 = -3;
	int64_t x220 = -1LL;
	volatile int32_t t52 = -5689;

	t52 = (x217+(x218<(x219<x220)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = -1671;
	uint8_t x224 = 6U;
	static int32_t t53 = 940077;

	t53 = (x221+(x222<(x223<x224)));

	if (t53 != -1671) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x225 = INT16_MAX;
	int64_t x226 = -1754212024861400445LL;
	uint64_t x227 = 9839649LLU;

	t54 = (x225+(x226<(x227<x228)));

	if (t54 != 32768) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = -3;
	volatile int64_t x230 = -1LL;
	volatile int32_t x231 = 60;
	int32_t x232 = INT32_MIN;
	volatile int32_t t55 = 4986;

	t55 = (x229+(x230<(x231<x232)));

	if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x233 = 0LLU;
	uint64_t x234 = 2191674593040861266LLU;
	volatile int32_t x236 = INT32_MAX;
	static uint64_t t56 = 333LLU;

	t56 = (x233+(x234<(x235<x236)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x237 = INT64_MIN;
	int8_t x238 = 5;
	static uint16_t x239 = 54U;
	static uint32_t x240 = 834U;
	volatile int64_t t57 = INT64_MIN;

	t57 = (x237+(x238<(x239<x240)));

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x241 = INT8_MIN;
	int8_t x242 = -1;
	volatile int32_t t58 = -9415;

	t58 = (x241+(x242<(x243<x244)));

	if (t58 != -127) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = INT8_MIN;
	int32_t x246 = -1;
	static int8_t x247 = INT8_MIN;
	static int64_t x248 = 449982921LL;

	t59 = (x245+(x246<(x247<x248)));

	if (t59 != -127) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = INT16_MIN;
	volatile uint64_t x250 = 54LLU;
	int16_t x251 = -1;
	static int16_t x252 = INT16_MIN;
	int32_t t60 = 279986489;

	t60 = (x249+(x250<(x251<x252)));

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x253 = 2U;
	static uint8_t x254 = 15U;
	int16_t x255 = 1663;
	static volatile uint16_t x256 = 730U;
	volatile uint32_t t61 = 993366U;

	t61 = (x253+(x254<(x255<x256)));

	if (t61 != 2U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x257 = 324083U;
	uint32_t x258 = 1008683U;
	static uint64_t x259 = 3474083731LLU;
	int32_t x260 = 44454;

	t62 = (x257+(x258<(x259<x260)));

	if (t62 != 324083U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = 17;
	int8_t x262 = -1;
	int8_t x263 = INT8_MAX;
	int16_t x264 = INT16_MIN;
	volatile int32_t t63 = 521398663;

	t63 = (x261+(x262<(x263<x264)));

	if (t63 != 18) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = INT16_MIN;
	int64_t x266 = 612384147587683329LL;
	volatile uint32_t x267 = UINT32_MAX;
	int32_t t64 = -51;

	t64 = (x265+(x266<(x267<x268)));

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x270 = -1;
	int32_t x271 = -1;
	uint32_t x272 = 2780508U;
	static int32_t t65 = -353663633;

	t65 = (x269+(x270<(x271<x272)));

	if (t65 != 16) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = 3LL;
	volatile int8_t x274 = INT8_MIN;
	volatile int64_t x275 = INT64_MIN;
	volatile int32_t x276 = 18786499;
	static volatile int64_t t66 = -1LL;

	t66 = (x273+(x274<(x275<x276)));

	if (t66 != 4LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x279 = -1;
	static volatile int64_t x280 = 361492389766LL;

	t67 = (x277+(x278<(x279<x280)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x281 = UINT64_MAX;
	static int32_t x282 = INT32_MAX;
	int8_t x283 = INT8_MAX;
	int16_t x284 = 1202;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (x281+(x282<(x283<x284)));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x285 = UINT8_MAX;
	static int8_t x286 = -58;
	int8_t x287 = INT8_MIN;
	uint8_t x288 = 9U;

	t69 = (x285+(x286<(x287<x288)));

	if (t69 != 256) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x289 = INT32_MAX;
	static uint64_t x290 = 438330477869LLU;
	uint8_t x292 = 1U;
	int32_t t70 = INT32_MAX;

	t70 = (x289+(x290<(x291<x292)));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x297 = UINT16_MAX;
	uint16_t x298 = 1641U;
	volatile uint16_t x299 = UINT16_MAX;
	int16_t x300 = INT16_MIN;
	static volatile int32_t t71 = 7770;

	t71 = (x297+(x298<(x299<x300)));

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x301 = 0U;
	volatile int32_t x303 = INT32_MIN;
	static volatile int8_t x304 = -3;
	int32_t t72 = -97621;

	t72 = (x301+(x302<(x303<x304)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x305 = 1U;
	volatile int16_t x306 = -12;
	int16_t x307 = INT16_MAX;
	static int8_t x308 = INT8_MIN;
	int32_t t73 = 1658;

	t73 = (x305+(x306<(x307<x308)));

	if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x310 = 4U;
	int32_t x311 = INT32_MIN;
	uint8_t x312 = UINT8_MAX;
	volatile int32_t t74 = -202909;

	t74 = (x309+(x310<(x311<x312)));

	if (t74 != -4) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = INT16_MIN;
	uint32_t x314 = UINT32_MAX;
	int32_t x315 = INT32_MIN;
	uint64_t x316 = 18322211LLU;

	t75 = (x313+(x314<(x315<x316)));

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x317 = 3089;
	uint64_t x318 = UINT64_MAX;
	uint16_t x319 = UINT16_MAX;
	int32_t x320 = -1047596;
	int32_t t76 = -10660;

	t76 = (x317+(x318<(x319<x320)));

	if (t76 != 3089) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x321 = -28;
	volatile int32_t x322 = 16075;
	uint64_t x323 = 1498665873387198LLU;
	int64_t x324 = -60586LL;

	t77 = (x321+(x322<(x323<x324)));

	if (t77 != -28) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x326 = 104U;
	int64_t x327 = -1LL;
	int8_t x328 = INT8_MIN;
	int64_t t78 = INT64_MIN;

	t78 = (x325+(x326<(x327<x328)));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x329 = -29;
	volatile int8_t x330 = INT8_MIN;
	int32_t x331 = -1;
	volatile int32_t t79 = 7;

	t79 = (x329+(x330<(x331<x332)));

	if (t79 != -28) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x333 = -1;
	uint16_t x334 = 477U;
	static int64_t x335 = INT64_MIN;
	uint64_t x336 = 87008LLU;
	int32_t t80 = -89;

	t80 = (x333+(x334<(x335<x336)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x337 = INT8_MIN;
	uint8_t x339 = UINT8_MAX;
	volatile uint16_t x340 = 8U;
	static volatile int32_t t81 = 16114735;

	t81 = (x337+(x338<(x339<x340)));

	if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x341 = UINT32_MAX;
	uint16_t x342 = UINT16_MAX;
	uint32_t x343 = 329U;
	uint16_t x344 = UINT16_MAX;
	uint32_t t82 = UINT32_MAX;

	t82 = (x341+(x342<(x343<x344)));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x345 = -2675529443178LL;
	static int64_t x346 = -1LL;
	int32_t x347 = INT32_MIN;
	int64_t x348 = -51LL;

	t83 = (x345+(x346<(x347<x348)));

	if (t83 != -2675529443177LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x349 = 45U;
	static volatile int32_t x350 = -1060834;
	static int8_t x351 = INT8_MAX;
	int32_t t84 = -19061799;

	t84 = (x349+(x350<(x351<x352)));

	if (t84 != 46) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x353 = INT32_MIN;
	uint8_t x354 = 5U;
	int8_t x355 = INT8_MAX;
	uint8_t x356 = 28U;
	int32_t t85 = INT32_MIN;

	t85 = (x353+(x354<(x355<x356)));

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x358 = -1LL;
	int32_t x359 = -1;
	volatile int64_t x360 = INT64_MAX;
	static uint64_t t86 = 2050871LLU;

	t86 = (x357+(x358<(x359<x360)));

	if (t86 != 76LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x361 = 25252LLU;
	int64_t x362 = INT64_MAX;
	volatile uint8_t x363 = 1U;
	volatile int16_t x364 = 189;

	t87 = (x361+(x362<(x363<x364)));

	if (t87 != 25252LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x365 = 43470500;
	int16_t x366 = INT16_MIN;
	volatile int64_t x367 = INT64_MAX;
	volatile int16_t x368 = INT16_MAX;
	volatile int32_t t88 = -996380;

	t88 = (x365+(x366<(x367<x368)));

	if (t88 != 43470501) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x370 = INT16_MIN;
	int32_t x371 = 32187;
	int32_t x372 = INT32_MIN;
	volatile int32_t t89 = -216;

	t89 = (x369+(x370<(x371<x372)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x374 = 50842001U;
	int16_t x375 = -1;
	static uint16_t x376 = 11U;
	uint64_t t90 = UINT64_MAX;

	t90 = (x373+(x374<(x375<x376)));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x377 = INT8_MIN;
	int64_t x378 = INT64_MIN;
	static int64_t x379 = INT64_MIN;
	volatile int32_t t91 = 528905243;

	t91 = (x377+(x378<(x379<x380)));

	if (t91 != -127) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x381 = 127204LLU;
	volatile int8_t x382 = INT8_MAX;
	int8_t x383 = INT8_MIN;
	int32_t x384 = -1;
	volatile uint64_t t92 = 7044822649433853832LLU;

	t92 = (x381+(x382<(x383<x384)));

	if (t92 != 127204LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x385 = 54U;
	uint32_t x386 = 107122005U;
	static uint8_t x387 = 2U;
	static uint64_t x388 = 29658262LLU;

	t93 = (x385+(x386<(x387<x388)));

	if (t93 != 54) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x389 = INT16_MIN;
	static int32_t x390 = -1;
	int16_t x392 = -1638;
	volatile int32_t t94 = 1685;

	t94 = (x389+(x390<(x391<x392)));

	if (t94 != -32767) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x393 = INT64_MIN;
	uint16_t x394 = 612U;
	int8_t x395 = INT8_MIN;
	uint32_t x396 = 457010U;
	volatile int64_t t95 = INT64_MIN;

	t95 = (x393+(x394<(x395<x396)));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x397 = 6U;
	static int64_t x398 = 235734169578659153LL;
	static int8_t x399 = 36;
	int32_t x400 = INT32_MIN;
	static volatile int32_t t96 = 3289;

	t96 = (x397+(x398<(x399<x400)));

	if (t96 != 6) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x403 = 4LLU;
	volatile int32_t t97 = -798805;

	t97 = (x401+(x402<(x403<x404)));

	if (t97 != 14753) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x406 = 2890;
	int16_t x407 = INT16_MIN;
	volatile int32_t x408 = INT32_MIN;
	static volatile int32_t t98 = -482;

	t98 = (x405+(x406<(x407<x408)));

	if (t98 != -25) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x409 = 811U;
	static int8_t x410 = INT8_MIN;
	static int8_t x411 = INT8_MAX;
	volatile int8_t x412 = -4;
	volatile int32_t t99 = -213341;

	t99 = (x409+(x410<(x411<x412)));

	if (t99 != 812) { NG(); } else { ; }
	
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


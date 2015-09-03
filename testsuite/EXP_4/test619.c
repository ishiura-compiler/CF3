#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = INT32_MAX;
volatile int32_t t1 = -1951458;
int16_t x11 = -14;
int64_t x14 = 12665306143LL;
int8_t x25 = INT8_MAX;
static int64_t x28 = 32644050474LL;
static volatile int32_t t6 = -42229;
int32_t x34 = INT32_MIN;
int16_t x36 = INT16_MIN;
int32_t x39 = INT32_MAX;
volatile int32_t x43 = INT32_MIN;
int64_t x44 = -3LL;
int32_t t10 = -11640493;
volatile int32_t t11 = -54;
uint64_t x54 = 4499635308901917LLU;
uint64_t x57 = 1LLU;
int32_t t14 = 32883365;
volatile int8_t x61 = INT8_MAX;
static int32_t t16 = -1;
uint8_t x69 = 10U;
int8_t x70 = -2;
int8_t x71 = 1;
static uint8_t x75 = 0U;
int16_t x77 = -13922;
volatile int32_t t19 = -531351639;
static volatile int32_t x85 = INT32_MIN;
volatile int32_t t21 = 1;
uint32_t x92 = 432U;
uint16_t x97 = UINT16_MAX;
static uint32_t x99 = 1460578U;
volatile int32_t t24 = -5516;
static uint8_t x101 = 44U;
volatile int8_t x102 = INT8_MAX;
static int8_t x108 = 1;
int32_t t27 = 0;
volatile int64_t x113 = INT64_MIN;
int32_t t28 = -121;
int64_t x130 = INT64_MAX;
int8_t x145 = 30;
int64_t x148 = -1LL;
static int32_t x155 = INT32_MAX;
static int32_t x158 = INT32_MIN;
static int8_t x167 = INT8_MIN;
int64_t x169 = INT64_MIN;
uint16_t x170 = 7U;
uint8_t x173 = UINT8_MAX;
volatile uint32_t x178 = UINT32_MAX;
uint64_t x179 = UINT64_MAX;
static int8_t x182 = -7;
volatile int32_t t45 = -737284;
static int8_t x189 = INT8_MIN;
int32_t x193 = INT32_MIN;
int32_t t48 = -248860839;
uint8_t x203 = 0U;
int32_t x215 = INT32_MAX;
static uint8_t x217 = 2U;
int16_t x218 = 62;
uint8_t x224 = 1U;
int32_t t57 = -240065916;
volatile int32_t t60 = -272258;
static uint8_t x249 = 3U;
volatile int32_t t61 = 3662717;
static int8_t x262 = -20;
int8_t x267 = INT8_MAX;
int32_t t65 = -4;
int8_t x274 = INT8_MIN;
int64_t x276 = -1LL;
static uint8_t x277 = UINT8_MAX;
int32_t t68 = 126330;
volatile int32_t x285 = -1;
static int16_t x295 = -310;
int32_t x300 = INT32_MIN;
static volatile int32_t t73 = -22702457;
int32_t x307 = INT32_MIN;
static int32_t x309 = INT32_MIN;
int16_t x310 = INT16_MIN;
int32_t x312 = -1;
int32_t t75 = 4008;
int32_t x325 = INT32_MIN;
int32_t x326 = -31252;
volatile uint8_t x331 = 122U;
int32_t x334 = INT32_MIN;
int8_t x335 = 1;
int32_t t81 = 58350;
volatile uint8_t x341 = 6U;
int64_t x343 = -1LL;
static volatile int32_t t83 = 788208;
static volatile int64_t x352 = INT64_MIN;
volatile int64_t x356 = -110LL;
static int64_t x363 = INT64_MIN;
int32_t t88 = -811166;
volatile int32_t t89 = -62;
int32_t x374 = INT32_MIN;
int8_t x381 = INT8_MIN;
int64_t x382 = INT64_MIN;
int32_t t93 = -12;
uint16_t x387 = 0U;
volatile int32_t t94 = 39205793;
static int16_t x389 = INT16_MIN;
int16_t x390 = INT16_MAX;
volatile uint64_t x391 = UINT64_MAX;
int32_t x393 = 1;
volatile int16_t x394 = INT16_MAX;
int8_t x402 = INT8_MIN;
uint16_t x407 = 2114U;


void f0(void) {
	volatile uint16_t x1 = 1426U;
	int64_t x2 = 243911349630559LL;
	uint16_t x3 = UINT16_MAX;
	static int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 955285610;

	t0 = (x1==(x2<(x3/x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int8_t x6 = 0;
	uint64_t x8 = 73274417783802LLU;

	t1 = (x5==(x6<(x7/x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	volatile int64_t x10 = -1LL;
	static uint64_t x12 = UINT64_MAX;
	static int32_t t2 = -839;

	t2 = (x9==(x10<(x11/x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 253478LLU;
	int8_t x15 = INT8_MIN;
	uint64_t x16 = UINT64_MAX;
	int32_t t3 = 10761890;

	t3 = (x13==(x14<(x15/x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 338U;
	volatile int64_t x18 = INT64_MIN;
	int16_t x19 = 0;
	volatile uint8_t x20 = 4U;
	volatile int32_t t4 = 108673077;

	t4 = (x17==(x18<(x19/x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int64_t x22 = -231175468LL;
	uint8_t x23 = 8U;
	int8_t x24 = -1;
	int32_t t5 = -489841;

	t5 = (x21==(x22<(x23/x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x26 = INT64_MIN;
	uint16_t x27 = 5U;

	t6 = (x25==(x26<(x27/x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	uint16_t x30 = 0U;
	static uint8_t x31 = 23U;
	static uint64_t x32 = 33707065120826LLU;
	int32_t t7 = 4;

	t7 = (x29==(x30<(x31/x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 225410871458492751LLU;
	int64_t x35 = INT64_MAX;
	int32_t t8 = 0;

	t8 = (x33==(x34<(x35/x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	int32_t x38 = INT32_MAX;
	int16_t x40 = 11;
	volatile int32_t t9 = 5;

	t9 = (x37==(x38<(x39/x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = -24358LL;
	uint32_t x42 = 56710449U;

	t10 = (x41==(x42<(x43/x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -36411;
	int8_t x46 = INT8_MAX;
	uint32_t x47 = UINT32_MAX;
	volatile int16_t x48 = INT16_MAX;

	t11 = (x45==(x46<(x47/x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = -8;
	static int32_t x50 = 10;
	int8_t x51 = INT8_MAX;
	int16_t x52 = -1073;
	static volatile int32_t t12 = 3;

	t12 = (x49==(x50<(x51/x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 128230879LLU;
	volatile int32_t x55 = -499;
	int8_t x56 = -1;
	int32_t t13 = 17;

	t13 = (x53==(x54<(x55/x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x58 = 59U;
	volatile int32_t x59 = -13028;
	int64_t x60 = -7501074096455LL;

	t14 = (x57==(x58<(x59/x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x62 = 3U;
	uint64_t x63 = 9111558976LLU;
	uint32_t x64 = 7359U;
	int32_t t15 = -1301;

	t15 = (x61==(x62<(x63/x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MAX;
	volatile uint32_t x66 = 952U;
	int32_t x67 = INT32_MIN;
	uint16_t x68 = 48U;

	t16 = (x65==(x66<(x67/x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x72 = INT16_MIN;
	int32_t t17 = 1;

	t17 = (x69==(x70<(x71/x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 1009U;
	static int32_t x74 = INT32_MIN;
	uint64_t x76 = 17299571212033LLU;
	volatile int32_t t18 = -905524;

	t18 = (x73==(x74<(x75/x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x78 = 28500U;
	volatile uint16_t x79 = 17U;
	uint16_t x80 = 2600U;

	t19 = (x77==(x78<(x79/x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	static volatile int16_t x82 = 2;
	uint8_t x83 = 58U;
	int16_t x84 = INT16_MIN;
	int32_t t20 = 13;

	t20 = (x81==(x82<(x83/x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = 1;
	int32_t x87 = INT32_MAX;
	int8_t x88 = -17;

	t21 = (x85==(x86<(x87/x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = 1;
	uint16_t x90 = 3392U;
	int32_t x91 = INT32_MIN;
	int32_t t22 = -28;

	t22 = (x89==(x90<(x91/x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 94U;
	int8_t x94 = -1;
	uint64_t x95 = 166843LLU;
	static int32_t x96 = -67618;
	int32_t t23 = -1249910;

	t23 = (x93==(x94<(x95/x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x98 = 8555101655968751LLU;
	uint32_t x100 = 1268U;

	t24 = (x97==(x98<(x99/x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x103 = -612115690;
	volatile uint64_t x104 = UINT64_MAX;
	static volatile int32_t t25 = 49066;

	t25 = (x101==(x102<(x103/x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = UINT8_MAX;
	uint64_t x106 = 6030172LLU;
	uint8_t x107 = 5U;
	int32_t t26 = 47;

	t26 = (x105==(x106<(x107/x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 76281U;
	int8_t x110 = 1;
	uint32_t x111 = 2252U;
	int16_t x112 = -20;

	t27 = (x109==(x110<(x111/x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x114 = UINT32_MAX;
	int64_t x115 = -2666379604887133564LL;
	static uint16_t x116 = 883U;

	t28 = (x113==(x114<(x115/x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	uint32_t x118 = 493U;
	static uint16_t x119 = 2U;
	uint32_t x120 = 923451759U;
	volatile int32_t t29 = -1430927;

	t29 = (x117==(x118<(x119/x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 42U;
	volatile uint64_t x122 = 1218132519531LLU;
	int16_t x123 = -12;
	int32_t x124 = INT32_MAX;
	volatile int32_t t30 = 392;

	t30 = (x121==(x122<(x123/x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	static uint16_t x126 = 1247U;
	static volatile int32_t x127 = 2502735;
	uint32_t x128 = 20U;
	volatile int32_t t31 = -447;

	t31 = (x125==(x126<(x127/x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x129 = 89011331056619LLU;
	int64_t x131 = INT64_MIN;
	int8_t x132 = INT8_MIN;
	volatile int32_t t32 = 1753443;

	t32 = (x129==(x130<(x131/x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = -1;
	int32_t x134 = -1;
	volatile int32_t x135 = 1100;
	static int64_t x136 = INT64_MIN;
	int32_t t33 = 3930467;

	t33 = (x133==(x134<(x135/x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	volatile int8_t x138 = INT8_MIN;
	static int8_t x139 = -7;
	volatile uint8_t x140 = 1U;
	volatile int32_t t34 = -1399448;

	t34 = (x137==(x138<(x139/x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -4047159493744LL;
	int32_t x142 = 18;
	int8_t x143 = INT8_MIN;
	volatile int64_t x144 = INT64_MIN;
	int32_t t35 = -236;

	t35 = (x141==(x142<(x143/x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = 11;
	int32_t x147 = INT32_MIN;
	int32_t t36 = -51;

	t36 = (x145==(x146<(x147/x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = 4254;
	int64_t x150 = INT64_MIN;
	uint64_t x151 = 103609LLU;
	int8_t x152 = -1;
	static volatile int32_t t37 = 1;

	t37 = (x149==(x150<(x151/x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = 7;
	uint32_t x154 = 166712334U;
	static uint16_t x156 = 5061U;
	static int32_t t38 = -1;

	t38 = (x153==(x154<(x155/x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MAX;
	int64_t x159 = -1LL;
	static uint32_t x160 = 9U;
	static volatile int32_t t39 = 444609;

	t39 = (x157==(x158<(x159/x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = 31424581LL;
	static int64_t x162 = 1937604846167067LL;
	uint16_t x163 = UINT16_MAX;
	uint16_t x164 = 48U;
	int32_t t40 = 41;

	t40 = (x161==(x162<(x163/x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x165 = -1;
	int64_t x166 = INT64_MIN;
	static int64_t x168 = INT64_MIN;
	volatile int32_t t41 = 85;

	t41 = (x165==(x166<(x167/x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x171 = INT16_MAX;
	static int32_t x172 = INT32_MIN;
	volatile int32_t t42 = -19742;

	t42 = (x169==(x170<(x171/x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x174 = INT64_MAX;
	uint16_t x175 = 54U;
	int8_t x176 = -3;
	int32_t t43 = 956581801;

	t43 = (x173==(x174<(x175/x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x177 = UINT64_MAX;
	int8_t x180 = INT8_MIN;
	volatile int32_t t44 = -3687142;

	t44 = (x177==(x178<(x179/x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	uint8_t x183 = 2U;
	int16_t x184 = INT16_MIN;

	t45 = (x181==(x182<(x183/x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x190 = UINT8_MAX;
	int16_t x191 = -1;
	static int8_t x192 = INT8_MIN;
	int32_t t46 = 179;

	t46 = (x189==(x190<(x191/x192)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x194 = -1;
	int16_t x195 = INT16_MAX;
	int8_t x196 = INT8_MAX;
	int32_t t47 = -49;

	t47 = (x193==(x194<(x195/x196)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = INT16_MAX;
	static int16_t x198 = INT16_MIN;
	int64_t x199 = INT64_MIN;
	int64_t x200 = -431178LL;

	t48 = (x197==(x198<(x199/x200)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x201 = 6888820U;
	volatile int32_t x202 = -28965301;
	int64_t x204 = INT64_MAX;
	volatile int32_t t49 = -66500349;

	t49 = (x201==(x202<(x203/x204)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x205 = INT16_MIN;
	uint64_t x206 = 32709310679490049LLU;
	volatile int8_t x207 = 2;
	static uint64_t x208 = 310712647LLU;
	static int32_t t50 = -4050;

	t50 = (x205==(x206<(x207/x208)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x209 = INT64_MIN;
	uint64_t x210 = UINT64_MAX;
	int32_t x211 = INT32_MAX;
	static volatile int16_t x212 = INT16_MIN;
	volatile int32_t t51 = -1013;

	t51 = (x209==(x210<(x211/x212)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = -1;
	int64_t x214 = -1LL;
	int16_t x216 = -1;
	static int32_t t52 = 703435;

	t52 = (x213==(x214<(x215/x216)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x219 = INT64_MIN;
	static volatile uint32_t x220 = UINT32_MAX;
	volatile int32_t t53 = 58432;

	t53 = (x217==(x218<(x219/x220)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x221 = UINT32_MAX;
	int8_t x222 = INT8_MIN;
	static int32_t x223 = -8422;
	int32_t t54 = 215415;

	t54 = (x221==(x222<(x223/x224)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x225 = 2215;
	static int64_t x226 = 197LL;
	static int64_t x227 = -218964732LL;
	int32_t x228 = 203836;
	volatile int32_t t55 = -900;

	t55 = (x225==(x226<(x227/x228)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = INT64_MIN;
	volatile int8_t x230 = -1;
	int64_t x231 = INT64_MIN;
	int32_t x232 = 467143506;
	volatile int32_t t56 = -5164;

	t56 = (x229==(x230<(x231/x232)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = -432;
	static volatile int16_t x234 = INT16_MIN;
	uint16_t x235 = UINT16_MAX;
	volatile uint8_t x236 = 126U;

	t57 = (x233==(x234<(x235/x236)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x237 = -1;
	volatile uint8_t x238 = 51U;
	int16_t x239 = INT16_MIN;
	int8_t x240 = INT8_MIN;
	static volatile int32_t t58 = 99;

	t58 = (x237==(x238<(x239/x240)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x241 = UINT32_MAX;
	static int32_t x242 = INT32_MIN;
	static int8_t x243 = INT8_MIN;
	static uint64_t x244 = 573650416864346LLU;
	int32_t t59 = 12888313;

	t59 = (x241==(x242<(x243/x244)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x245 = UINT32_MAX;
	int16_t x246 = INT16_MAX;
	int8_t x247 = INT8_MIN;
	int8_t x248 = -5;

	t60 = (x245==(x246<(x247/x248)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x250 = 442U;
	int32_t x251 = -1;
	int64_t x252 = -1LL;

	t61 = (x249==(x250<(x251/x252)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x253 = UINT64_MAX;
	static int16_t x254 = -168;
	static uint64_t x255 = 115262506055LLU;
	static uint32_t x256 = 23193U;
	volatile int32_t t62 = 14343;

	t62 = (x253==(x254<(x255/x256)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x257 = 6LLU;
	int64_t x258 = -64276296346395LL;
	int8_t x259 = -1;
	int16_t x260 = INT16_MIN;
	volatile int32_t t63 = 395;

	t63 = (x257==(x258<(x259/x260)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x261 = INT32_MIN;
	int8_t x263 = INT8_MIN;
	uint32_t x264 = 1348014U;
	volatile int32_t t64 = 251401;

	t64 = (x261==(x262<(x263/x264)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x265 = INT16_MIN;
	uint8_t x266 = UINT8_MAX;
	uint8_t x268 = 100U;

	t65 = (x265==(x266<(x267/x268)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x269 = 0U;
	int32_t x270 = -976;
	uint16_t x271 = UINT16_MAX;
	int32_t x272 = -1;
	int32_t t66 = 79561972;

	t66 = (x269==(x270<(x271/x272)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x273 = 1U;
	int8_t x275 = -1;
	volatile int32_t t67 = 15506574;

	t67 = (x273==(x274<(x275/x276)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x278 = INT16_MAX;
	int32_t x279 = INT32_MIN;
	static int16_t x280 = INT16_MIN;

	t68 = (x277==(x278<(x279/x280)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x286 = -263;
	static int8_t x287 = -1;
	int8_t x288 = INT8_MIN;
	volatile int32_t t69 = -1469132;

	t69 = (x285==(x286<(x287/x288)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x289 = INT64_MIN;
	static uint8_t x290 = 125U;
	uint64_t x291 = 7508031247LLU;
	uint16_t x292 = UINT16_MAX;
	int32_t t70 = 2875539;

	t70 = (x289==(x290<(x291/x292)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x293 = 12;
	volatile uint16_t x294 = 756U;
	int16_t x296 = -1;
	volatile int32_t t71 = 745389;

	t71 = (x293==(x294<(x295/x296)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = 1948833020328452777LL;
	int16_t x298 = 618;
	int64_t x299 = INT64_MIN;
	static volatile int32_t t72 = 186547239;

	t72 = (x297==(x298<(x299/x300)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x301 = UINT8_MAX;
	int64_t x302 = -169144971596596374LL;
	int32_t x303 = -1735150;
	volatile int64_t x304 = INT64_MIN;

	t73 = (x301==(x302<(x303/x304)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x305 = 7LLU;
	volatile int16_t x306 = -37;
	static int16_t x308 = -739;
	volatile int32_t t74 = 2483643;

	t74 = (x305==(x306<(x307/x308)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x311 = 45U;

	t75 = (x309==(x310<(x311/x312)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x313 = INT8_MIN;
	volatile int8_t x314 = INT8_MIN;
	static volatile int64_t x315 = -13561143914088LL;
	int64_t x316 = 824442536998LL;
	static volatile int32_t t76 = 227166547;

	t76 = (x313==(x314<(x315/x316)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x317 = 2;
	int16_t x318 = INT16_MIN;
	volatile int8_t x319 = INT8_MAX;
	int8_t x320 = INT8_MAX;
	int32_t t77 = 32793591;

	t77 = (x317==(x318<(x319/x320)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x321 = 2U;
	static int16_t x322 = -6;
	volatile uint8_t x323 = 0U;
	int16_t x324 = -1;
	volatile int32_t t78 = -53249;

	t78 = (x321==(x322<(x323/x324)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x327 = -5423828303LL;
	int64_t x328 = INT64_MAX;
	volatile int32_t t79 = 1483;

	t79 = (x325==(x326<(x327/x328)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = INT32_MIN;
	int16_t x330 = -10568;
	uint8_t x332 = 13U;
	static int32_t t80 = 73;

	t80 = (x329==(x330<(x331/x332)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = -3LL;
	int32_t x336 = -14811424;

	t81 = (x333==(x334<(x335/x336)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x337 = INT16_MAX;
	static int16_t x338 = 987;
	static int8_t x339 = INT8_MIN;
	volatile uint32_t x340 = 99742620U;
	int32_t t82 = 1;

	t82 = (x337==(x338<(x339/x340)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x342 = INT16_MIN;
	static uint32_t x344 = UINT32_MAX;

	t83 = (x341==(x342<(x343/x344)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x345 = 3456U;
	uint16_t x346 = UINT16_MAX;
	int8_t x347 = INT8_MIN;
	uint32_t x348 = 3923U;
	volatile int32_t t84 = 1649396;

	t84 = (x345==(x346<(x347/x348)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x349 = INT8_MAX;
	int8_t x350 = INT8_MIN;
	int32_t x351 = 485549;
	volatile int32_t t85 = 2511715;

	t85 = (x349==(x350<(x351/x352)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x353 = 17;
	volatile int8_t x354 = INT8_MIN;
	volatile int16_t x355 = INT16_MIN;
	int32_t t86 = 24995;

	t86 = (x353==(x354<(x355/x356)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x357 = -1LL;
	uint16_t x358 = UINT16_MAX;
	uint32_t x359 = 5607U;
	int32_t x360 = -1;
	volatile int32_t t87 = -23009;

	t87 = (x357==(x358<(x359/x360)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x361 = -4622236;
	int32_t x362 = INT32_MAX;
	volatile int16_t x364 = INT16_MIN;

	t88 = (x361==(x362<(x363/x364)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x365 = INT16_MIN;
	static uint32_t x366 = UINT32_MAX;
	int32_t x367 = 93314;
	int64_t x368 = -1LL;

	t89 = (x365==(x366<(x367/x368)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x369 = INT64_MAX;
	int16_t x370 = -2;
	static volatile uint16_t x371 = UINT16_MAX;
	uint16_t x372 = UINT16_MAX;
	int32_t t90 = 181960197;

	t90 = (x369==(x370<(x371/x372)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x373 = 32U;
	static uint16_t x375 = UINT16_MAX;
	int32_t x376 = INT32_MAX;
	static int32_t t91 = 3534;

	t91 = (x373==(x374<(x375/x376)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x377 = 3;
	int8_t x378 = INT8_MIN;
	volatile uint8_t x379 = UINT8_MAX;
	int64_t x380 = INT64_MIN;
	int32_t t92 = 33080;

	t92 = (x377==(x378<(x379/x380)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x383 = 171;
	int32_t x384 = INT32_MIN;

	t93 = (x381==(x382<(x383/x384)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x385 = 1;
	int16_t x386 = -3;
	int64_t x388 = 41LL;

	t94 = (x385==(x386<(x387/x388)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x392 = -1;
	volatile int32_t t95 = -32026;

	t95 = (x389==(x390<(x391/x392)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x395 = INT32_MAX;
	int8_t x396 = INT8_MIN;
	volatile int32_t t96 = 16737903;

	t96 = (x393==(x394<(x395/x396)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x397 = 6331LLU;
	volatile int32_t x398 = 13;
	int16_t x399 = -4;
	int64_t x400 = INT64_MIN;
	static volatile int32_t t97 = 300362;

	t97 = (x397==(x398<(x399/x400)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x401 = 46920409578820867LLU;
	static volatile int8_t x403 = -1;
	int32_t x404 = INT32_MAX;
	int32_t t98 = 254348;

	t98 = (x401==(x402<(x403/x404)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x405 = 15U;
	int32_t x406 = -1;
	int64_t x408 = -1LL;
	volatile int32_t t99 = -26;

	t99 = (x405==(x406<(x407/x408)));

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


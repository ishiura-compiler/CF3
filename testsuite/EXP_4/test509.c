#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x7 = INT64_MAX;
int32_t x9 = -344315600;
int64_t x11 = INT64_MIN;
volatile int64_t x20 = -132148957340840778LL;
static int64_t x26 = INT64_MIN;
volatile int64_t t5 = 9698117389LL;
int16_t x36 = INT16_MIN;
int8_t x38 = 0;
volatile int16_t x39 = INT16_MAX;
static uint8_t x55 = 88U;
int32_t x59 = INT32_MAX;
volatile uint64_t t12 = 7865884491953349935LLU;
int64_t x67 = -1LL;
volatile int64_t x73 = INT64_MAX;
int64_t t16 = 19LL;
uint8_t x85 = 23U;
int64_t x87 = 134474307669886LL;
volatile uint32_t x90 = 2U;
uint64_t t19 = 1847873955000994742LLU;
int64_t x94 = INT64_MIN;
volatile uint64_t t20 = 6492798514LLU;
int32_t x97 = INT32_MIN;
int16_t x115 = INT16_MIN;
int32_t x119 = 3113941;
static int64_t t26 = 250682105LL;
uint16_t x126 = UINT16_MAX;
int16_t x127 = INT16_MAX;
uint32_t t28 = 412U;
static uint32_t x131 = 538770114U;
int64_t x134 = 421442LL;
uint8_t x145 = 47U;
uint32_t x146 = 3U;
static int16_t x147 = 226;
uint64_t x149 = UINT64_MAX;
int8_t x150 = -2;
volatile uint64_t t34 = 50294LLU;
static uint32_t x159 = 23460876U;
volatile uint64_t t35 = 1031917237469LLU;
static int64_t t36 = -18LL;
int16_t x189 = 593;
static uint32_t x200 = 2U;
uint32_t t42 = 125632490U;
static volatile uint8_t x207 = UINT8_MAX;
int32_t x209 = -1;
static uint64_t x210 = UINT64_MAX;
static uint8_t x211 = 1U;
uint16_t x214 = UINT16_MAX;
static int8_t x215 = INT8_MIN;
volatile int64_t t46 = -3491LL;
int32_t x219 = INT32_MIN;
static int64_t x230 = -24LL;
int8_t x238 = INT8_MAX;
int16_t x241 = INT16_MAX;
static uint64_t x242 = UINT64_MAX;
static uint64_t t52 = 188615717LLU;
int16_t x245 = -80;
int8_t x247 = INT8_MIN;
uint64_t x250 = UINT64_MAX;
int32_t x253 = 776;
volatile int32_t x254 = -1;
int64_t t55 = 3089751115042LL;
volatile int64_t x264 = -104623LL;
int8_t x276 = INT8_MIN;
static int64_t t59 = 29512LL;
static volatile int64_t t60 = -19993528LL;
int8_t x281 = INT8_MAX;
uint16_t x283 = 1723U;
static volatile int64_t x284 = INT64_MIN;
volatile int64_t t62 = -22208707LL;
static int64_t x296 = INT64_MIN;
uint64_t t63 = 913139519716876LLU;
static uint64_t x298 = 1190418419LLU;
uint8_t x299 = UINT8_MAX;
volatile uint64_t t65 = 139LLU;
uint16_t x309 = UINT16_MAX;
int8_t x313 = -1;
int16_t x314 = -2002;
static int32_t x317 = -1;
uint8_t x318 = 76U;
volatile uint64_t x320 = 1930685745LLU;
int64_t x328 = 7LL;
int8_t x343 = INT8_MIN;
static uint64_t x346 = 11533470491073LLU;
volatile uint64_t t76 = 480345150288LLU;
volatile int64_t x353 = -106803159643596LL;
int64_t x359 = INT64_MIN;
volatile uint64_t t79 = 2376769728LLU;
int32_t x364 = INT32_MAX;
volatile int64_t t80 = 77746839486335114LL;
uint32_t x370 = UINT32_MAX;
static uint8_t x371 = 28U;
int32_t x379 = INT32_MAX;
static uint64_t x380 = 150054777915LLU;
volatile uint16_t x389 = 791U;
uint32_t x398 = 24604846U;
volatile uint32_t x400 = UINT32_MAX;
uint64_t x401 = 1253638898LLU;
uint16_t x407 = 17U;
uint32_t x414 = 271457607U;
int16_t x415 = INT16_MIN;
volatile uint32_t t91 = 22099U;
volatile int8_t x423 = INT8_MIN;
uint32_t t93 = 1324627U;
static int8_t x429 = INT8_MIN;
uint16_t x430 = 6679U;
int32_t t94 = 55;
static uint64_t x440 = 110457007870208LLU;
volatile uint32_t t96 = 0U;
int64_t x452 = INT64_MAX;
int16_t x456 = INT16_MAX;


void f0(void) {
	int32_t x5 = 800;
	int16_t x6 = -1;
	volatile int16_t x8 = INT16_MIN;
	static int64_t t0 = -120208050853094LL;

	t0 = (x5-(x6+(x7/x8)));

	if (t0 != 281474976711456LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x10 = INT16_MIN;
	int16_t x12 = -3316;
	static int64_t t1 = -196LL;

	t1 = (x9-(x10+(x11/x12)));

	if (t1 != -2781475626808397LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x17 = INT8_MAX;
	int8_t x18 = -8;
	static uint64_t x19 = 2053151118625371119LLU;
	volatile uint64_t t2 = 1371966017LLU;

	t2 = (x17-(x18+(x19/x20)));

	if (t2 != 135LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x21 = -1;
	uint32_t x22 = UINT32_MAX;
	int64_t x23 = INT64_MAX;
	int8_t x24 = INT8_MIN;
	static int64_t t3 = 4752583LL;

	t3 = (x21-(x22+(x23/x24)));

	if (t3 != 72057589742960639LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = INT32_MIN;
	int8_t x27 = INT8_MIN;
	volatile int64_t x28 = INT64_MIN;
	int64_t t4 = 119133LL;

	t4 = (x25-(x26+(x27/x28)));

	if (t4 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x29 = UINT16_MAX;
	int16_t x30 = -1;
	int64_t x31 = -6977785796444LL;
	volatile int8_t x32 = INT8_MAX;

	t5 = (x29-(x30+(x31/x32)));

	if (t5 != 54943260783LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x33 = 0U;
	int64_t x34 = INT64_MIN;
	int32_t x35 = INT32_MIN;
	volatile int64_t t6 = 1901943200378811LL;

	t6 = (x33-(x34+(x35/x36)));

	if (t6 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = -25;
	int16_t x40 = -4666;
	volatile int32_t t7 = -250;

	t7 = (x37-(x38+(x39/x40)));

	if (t7 != -18) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x41 = INT64_MAX;
	uint32_t x42 = 1781733U;
	int8_t x43 = INT8_MIN;
	static int32_t x44 = INT32_MIN;
	int64_t t8 = 24173784349065270LL;

	t8 = (x41-(x42+(x43/x44)));

	if (t8 != 9223372036852994074LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x45 = -704LL;
	static int32_t x46 = -1;
	uint32_t x47 = UINT32_MAX;
	volatile int16_t x48 = INT16_MAX;
	int64_t t9 = -897292402LL;

	t9 = (x45-(x46+(x47/x48)));

	if (t9 != -131779LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x49 = INT32_MIN;
	int16_t x50 = INT16_MIN;
	int16_t x51 = INT16_MIN;
	uint32_t x52 = UINT32_MAX;
	volatile uint32_t t10 = 43U;

	t10 = (x49-(x50+(x51/x52)));

	if (t10 != 2147516416U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = -1;
	static uint32_t x54 = 8U;
	static int16_t x56 = -1;
	static uint32_t t11 = 5435U;

	t11 = (x53-(x54+(x55/x56)));

	if (t11 != 79U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = 1348;
	int16_t x58 = INT16_MAX;
	uint64_t x60 = UINT64_MAX;

	t12 = (x57-(x58+(x59/x60)));

	if (t12 != 18446744073709520197LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = 28U;
	uint64_t x62 = 9538941962957645LLU;
	uint16_t x63 = 4U;
	volatile uint16_t x64 = UINT16_MAX;
	uint64_t t13 = 3733148LLU;

	t13 = (x61-(x62+(x63/x64)));

	if (t13 != 18437205131746593999LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = UINT32_MAX;
	int32_t x66 = INT32_MIN;
	static int8_t x68 = INT8_MIN;
	int64_t t14 = 10664933LL;

	t14 = (x65-(x66+(x67/x68)));

	if (t14 != 6442450943LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = INT16_MAX;
	volatile int8_t x70 = -1;
	int8_t x71 = -1;
	int64_t x72 = INT64_MIN;
	int64_t t15 = -5LL;

	t15 = (x69-(x70+(x71/x72)));

	if (t15 != 32768LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x74 = INT8_MAX;
	uint8_t x75 = 19U;
	int16_t x76 = INT16_MIN;

	t16 = (x73-(x74+(x75/x76)));

	if (t16 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = -23;
	int8_t x82 = 9;
	int16_t x83 = 14280;
	static uint64_t x84 = 2187246620424LLU;
	volatile uint64_t t17 = 543LLU;

	t17 = (x81-(x82+(x83/x84)));

	if (t17 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x86 = UINT64_MAX;
	uint64_t x88 = 7656LLU;
	volatile uint64_t t18 = 140061997375470LLU;

	t18 = (x85-(x86+(x87/x88)));

	if (t18 != 18446744056144986898LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x89 = UINT16_MAX;
	uint16_t x91 = 2U;
	uint64_t x92 = UINT64_MAX;

	t19 = (x89-(x90+(x91/x92)));

	if (t19 != 65533LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = INT16_MIN;
	int16_t x95 = INT16_MIN;
	uint64_t x96 = UINT64_MAX;

	t20 = (x93-(x94+(x95/x96)));

	if (t20 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x98 = 1785977269829578LLU;
	volatile int16_t x99 = -1;
	volatile uint32_t x100 = UINT32_MAX;
	static uint64_t t21 = 4648993LLU;

	t21 = (x97-(x98+(x99/x100)));

	if (t21 != 18444958094292238389LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = INT64_MIN;
	volatile int32_t x102 = -118;
	uint16_t x103 = 119U;
	int8_t x104 = -1;
	int64_t t22 = -1LL;

	t22 = (x101-(x102+(x103/x104)));

	if (t22 != -9223372036854775571LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x105 = -1;
	static int16_t x106 = INT16_MIN;
	int8_t x107 = -6;
	uint64_t x108 = 519040541750682987LLU;
	uint64_t t23 = 12704607565LLU;

	t23 = (x105-(x106+(x107/x108)));

	if (t23 != 32732LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x109 = INT8_MIN;
	volatile uint64_t x110 = 1057048045LLU;
	volatile int64_t x111 = INT64_MIN;
	static volatile uint32_t x112 = UINT32_MAX;
	uint64_t t24 = 14511873020477283LLU;

	t24 = (x109-(x110+(x111/x112)));

	if (t24 != 1090435475LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = 0U;
	static volatile int16_t x114 = -9;
	int8_t x116 = INT8_MIN;
	volatile int32_t t25 = 788;

	t25 = (x113-(x114+(x115/x116)));

	if (t25 != -247) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x117 = -4229LL;
	static volatile uint8_t x118 = 0U;
	uint8_t x120 = UINT8_MAX;

	t26 = (x117-(x118+(x119/x120)));

	if (t26 != -16440LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = -18075;
	static uint16_t x122 = 9734U;
	uint8_t x123 = UINT8_MAX;
	static uint16_t x124 = 78U;
	volatile int32_t t27 = 21532;

	t27 = (x121-(x122+(x123/x124)));

	if (t27 != -27812) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = 12588;
	volatile uint32_t x128 = 15U;

	t28 = (x125-(x126+(x127/x128)));

	if (t28 != 4294912165U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x129 = UINT64_MAX;
	volatile int64_t x130 = INT64_MIN;
	uint8_t x132 = UINT8_MAX;
	volatile uint64_t t29 = 1912LLU;

	t29 = (x129-(x130+(x131/x132)));

	if (t29 != 9223372036852662984LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x133 = 820061428890352LL;
	int32_t x135 = INT32_MAX;
	uint64_t x136 = 100LLU;
	volatile uint64_t t30 = 4062881LLU;

	t30 = (x133-(x134+(x135/x136)));

	if (t30 != 820061406994074LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x137 = 42U;
	int32_t x138 = -4;
	volatile int16_t x139 = 15222;
	int16_t x140 = INT16_MIN;
	static volatile uint32_t t31 = 1629U;

	t31 = (x137-(x138+(x139/x140)));

	if (t31 != 46U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x148 = 9LL;
	int64_t t32 = -2824766LL;

	t32 = (x145-(x146+(x147/x148)));

	if (t32 != 19LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x151 = 137U;
	int16_t x152 = -1104;
	static volatile uint64_t t33 = 26271005039265560LLU;

	t33 = (x149-(x150+(x151/x152)));

	if (t33 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x153 = 16066LLU;
	int32_t x154 = 1003358464;
	static int64_t x155 = -1LL;
	volatile int32_t x156 = -88;

	t34 = (x153-(x154+(x155/x156)));

	if (t34 != 18446744072706209218LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x157 = INT16_MAX;
	volatile uint64_t x158 = 3378757944426LLU;
	int64_t x160 = INT64_MIN;

	t35 = (x157-(x158+(x159/x160)));

	if (t35 != 18446740694951639957LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x165 = -1;
	int32_t x166 = INT32_MAX;
	volatile int32_t x167 = INT32_MIN;
	int64_t x168 = -1LL;

	t36 = (x165-(x166+(x167/x168)));

	if (t36 != -4294967296LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x169 = -1;
	int32_t x170 = 15;
	volatile uint32_t x171 = 7U;
	int8_t x172 = 1;
	static uint32_t t37 = 712870172U;

	t37 = (x169-(x170+(x171/x172)));

	if (t37 != 4294967273U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x173 = 30U;
	int64_t x174 = 45891662274729LL;
	static int64_t x175 = -366794646953LL;
	int16_t x176 = INT16_MIN;
	volatile int64_t t38 = -1LL;

	t38 = (x173-(x174+(x175/x176)));

	if (t38 != -45891673468383LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x185 = INT16_MAX;
	static int16_t x186 = 11681;
	int64_t x187 = -829224386374477LL;
	int8_t x188 = -14;
	int64_t t39 = -42753LL;

	t39 = (x185-(x186+(x187/x188)));

	if (t39 != -59230313291376LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x190 = 13608034922790691LLU;
	static int64_t x191 = INT64_MAX;
	uint64_t x192 = 68939487680384041LLU;
	volatile uint64_t t40 = 6LLU;

	t40 = (x189-(x190+(x191/x192)));

	if (t40 != 18433136038786761385LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x193 = 114U;
	int8_t x194 = -43;
	uint32_t x195 = 115179450U;
	int32_t x196 = 201816354;
	uint32_t t41 = 659639643U;

	t41 = (x193-(x194+(x195/x196)));

	if (t41 != 157U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x197 = INT16_MIN;
	int32_t x198 = INT32_MAX;
	static uint32_t x199 = 99U;

	t42 = (x197-(x198+(x199/x200)));

	if (t42 != 2147450832U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x201 = INT64_MIN;
	static int16_t x202 = 619;
	volatile int16_t x203 = INT16_MIN;
	uint8_t x204 = 6U;
	int64_t t43 = -240053598801LL;

	t43 = (x201-(x202+(x203/x204)));

	if (t43 != -9223372036854770966LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x205 = 7858067486LLU;
	uint16_t x206 = 164U;
	static uint32_t x208 = UINT32_MAX;
	volatile uint64_t t44 = 121026210739915LLU;

	t44 = (x205-(x206+(x207/x208)));

	if (t44 != 7858067322LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x212 = INT32_MAX;
	volatile uint64_t t45 = 1LLU;

	t45 = (x209-(x210+(x211/x212)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x213 = -236226398310LL;
	static volatile int16_t x216 = INT16_MIN;

	t46 = (x213-(x214+(x215/x216)));

	if (t46 != -236226463845LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x217 = 0U;
	static uint64_t x218 = 4697843010321LLU;
	static int64_t x220 = INT64_MIN;
	static volatile uint64_t t47 = 401248634062LLU;

	t47 = (x217-(x218+(x219/x220)));

	if (t47 != 18446739375866541295LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x221 = UINT64_MAX;
	int8_t x222 = INT8_MIN;
	int32_t x223 = INT32_MIN;
	uint16_t x224 = UINT16_MAX;
	uint64_t t48 = 1043288818346726LLU;

	t48 = (x221-(x222+(x223/x224)));

	if (t48 != 32895LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x229 = -3849900LL;
	static int32_t x231 = 37822;
	volatile int8_t x232 = -1;
	int64_t t49 = -286652LL;

	t49 = (x229-(x230+(x231/x232)));

	if (t49 != -3812054LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x233 = -57;
	int64_t x234 = INT64_MIN;
	static uint32_t x235 = 2033U;
	volatile uint16_t x236 = 23323U;
	static volatile int64_t t50 = -1619LL;

	t50 = (x233-(x234+(x235/x236)));

	if (t50 != 9223372036854775751LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x237 = UINT8_MAX;
	uint32_t x239 = 64042836U;
	static uint16_t x240 = UINT16_MAX;
	volatile uint32_t t51 = 16455844U;

	t51 = (x237-(x238+(x239/x240)));

	if (t51 != 4294966447U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x243 = -1;
	static int16_t x244 = 17;

	t52 = (x241-(x242+(x243/x244)));

	if (t52 != 32768LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x246 = -11008LL;
	int16_t x248 = INT16_MIN;
	volatile int64_t t53 = 323892264838388LL;

	t53 = (x245-(x246+(x247/x248)));

	if (t53 != 10928LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x249 = 19;
	static uint16_t x251 = 1830U;
	uint32_t x252 = 28655U;
	uint64_t t54 = 0LLU;

	t54 = (x249-(x250+(x251/x252)));

	if (t54 != 20LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x255 = -1LL;
	static uint8_t x256 = 2U;

	t55 = (x253-(x254+(x255/x256)));

	if (t55 != 777LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x257 = 8426U;
	uint8_t x258 = 54U;
	static int16_t x259 = INT16_MAX;
	volatile uint64_t x260 = 302685LLU;
	volatile uint64_t t56 = 829182LLU;

	t56 = (x257-(x258+(x259/x260)));

	if (t56 != 8372LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x261 = -1;
	int8_t x262 = INT8_MIN;
	int16_t x263 = INT16_MIN;
	volatile int64_t t57 = -10105973274759001LL;

	t57 = (x261-(x262+(x263/x264)));

	if (t57 != 127LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x269 = INT32_MIN;
	uint64_t x270 = 2260177847LLU;
	uint64_t x271 = 4921933288690748880LLU;
	volatile uint64_t x272 = 274360LLU;
	uint64_t t58 = 8LLU;

	t58 = (x269-(x270+(x271/x272)));

	if (t58 != 18446726129612107753LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x273 = INT32_MIN;
	volatile uint32_t x274 = 389U;
	int64_t x275 = 3701LL;

	t59 = (x273-(x274+(x275/x276)));

	if (t59 != -2147484009LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x277 = 2703718U;
	volatile int8_t x278 = -1;
	uint8_t x279 = UINT8_MAX;
	static int64_t x280 = 3642LL;

	t60 = (x277-(x278+(x279/x280)));

	if (t60 != 2703719LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x282 = INT8_MIN;
	static int64_t t61 = -908031419888365LL;

	t61 = (x281-(x282+(x283/x284)));

	if (t61 != 255LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x285 = -1;
	int16_t x286 = INT16_MIN;
	static int64_t x287 = -1LL;
	int8_t x288 = -12;

	t62 = (x285-(x286+(x287/x288)));

	if (t62 != 32767LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x293 = 4079432475LLU;
	uint32_t x294 = UINT32_MAX;
	static int16_t x295 = -30;

	t63 = (x293-(x294+(x295/x296)));

	if (t63 != 18446744073494016796LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x297 = INT32_MAX;
	volatile int32_t x300 = INT32_MIN;
	uint64_t t64 = 108613654084168LLU;

	t64 = (x297-(x298+(x299/x300)));

	if (t64 != 957065228LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x301 = 7162386570913386168LLU;
	static uint16_t x302 = 8994U;
	int16_t x303 = 833;
	int32_t x304 = 37;

	t65 = (x301-(x302+(x303/x304)));

	if (t65 != 7162386570913377152LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x305 = UINT16_MAX;
	volatile int32_t x306 = INT32_MIN;
	static volatile int32_t x307 = -490077805;
	int64_t x308 = INT64_MAX;
	int64_t t66 = 5601035484782LL;

	t66 = (x305-(x306+(x307/x308)));

	if (t66 != 2147549183LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x310 = 0U;
	uint32_t x311 = 9U;
	volatile int8_t x312 = -1;
	volatile uint32_t t67 = 24757U;

	t67 = (x309-(x310+(x311/x312)));

	if (t67 != 65535U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x315 = -1;
	static volatile int64_t x316 = INT64_MIN;
	int64_t t68 = 3028092073469631LL;

	t68 = (x313-(x314+(x315/x316)));

	if (t68 != 2001LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x319 = INT32_MIN;
	static volatile uint64_t t69 = 6584932173786800LLU;

	t69 = (x317-(x318+(x319/x320)));

	if (t69 != 18446744064155047851LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x321 = 1536391495513580LL;
	int32_t x322 = INT32_MIN;
	volatile int16_t x323 = INT16_MAX;
	static int8_t x324 = INT8_MAX;
	int64_t t70 = 603079125402LL;

	t70 = (x321-(x322+(x323/x324)));

	if (t70 != 1536393642996970LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x325 = INT64_MAX;
	static int8_t x326 = 0;
	int16_t x327 = 893;
	int64_t t71 = 1LL;

	t71 = (x325-(x326+(x327/x328)));

	if (t71 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x329 = INT32_MIN;
	int64_t x330 = -2133107475LL;
	int64_t x331 = INT64_MAX;
	uint8_t x332 = 2U;
	static int64_t t72 = -5110519537803042LL;

	t72 = (x329-(x330+(x331/x332)));

	if (t72 != -4611686018441764076LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x333 = UINT32_MAX;
	volatile uint64_t x334 = 59832938048712LLU;
	static uint16_t x335 = UINT16_MAX;
	volatile uint8_t x336 = UINT8_MAX;
	uint64_t t73 = 4503LLU;

	t73 = (x333-(x334+(x335/x336)));

	if (t73 != 18446684245066469942LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x337 = -1LL;
	static int16_t x338 = 0;
	int32_t x339 = 85979628;
	uint64_t x340 = UINT64_MAX;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = (x337-(x338+(x339/x340)));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x341 = 0;
	uint8_t x342 = 114U;
	uint32_t x344 = 1U;
	uint32_t t75 = 6U;

	t75 = (x341-(x342+(x343/x344)));

	if (t75 != 14U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x345 = INT16_MAX;
	int64_t x347 = INT64_MAX;
	int64_t x348 = 144181789812491564LL;

	t76 = (x345-(x346+(x347/x348)));

	if (t76 != 18446732540239093247LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x349 = INT16_MIN;
	int32_t x350 = INT32_MIN;
	int32_t x351 = INT32_MAX;
	static uint64_t x352 = UINT64_MAX;
	volatile uint64_t t77 = 335043343410121779LLU;

	t77 = (x349-(x350+(x351/x352)));

	if (t77 != 2147450880LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x354 = INT8_MIN;
	int64_t x355 = 2475567LL;
	int64_t x356 = -1LL;
	volatile int64_t t78 = 3412253581433325LL;

	t78 = (x353-(x354+(x355/x356)));

	if (t78 != -106803157167901LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x357 = 1869730LLU;
	static int8_t x358 = INT8_MIN;
	volatile int32_t x360 = 18339479;

	t79 = (x357-(x358+(x359/x360)));

	if (t79 != 502926300636LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x361 = 5607LL;
	int8_t x362 = INT8_MIN;
	int8_t x363 = INT8_MAX;

	t80 = (x361-(x362+(x363/x364)));

	if (t80 != 5735LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x369 = INT64_MAX;
	int8_t x372 = INT8_MIN;
	volatile int64_t t81 = 215184LL;

	t81 = (x369-(x370+(x371/x372)));

	if (t81 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x377 = UINT16_MAX;
	int64_t x378 = INT64_MIN;
	static volatile uint64_t t82 = 2165681775584039LLU;

	t82 = (x377-(x378+(x379/x380)));

	if (t82 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x381 = INT32_MAX;
	volatile int32_t x382 = 55060;
	uint8_t x383 = UINT8_MAX;
	static int16_t x384 = INT16_MIN;
	int32_t t83 = 1;

	t83 = (x381-(x382+(x383/x384)));

	if (t83 != 2147428587) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x385 = -12;
	volatile int32_t x386 = 47;
	static uint64_t x387 = UINT64_MAX;
	static int32_t x388 = INT32_MIN;
	static volatile uint64_t t84 = 247688189LLU;

	t84 = (x385-(x386+(x387/x388)));

	if (t84 != 18446744073709551556LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x390 = 107U;
	uint8_t x391 = 14U;
	static int16_t x392 = -1;
	volatile int32_t t85 = 8040257;

	t85 = (x389-(x390+(x391/x392)));

	if (t85 != 698) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x393 = INT64_MIN;
	int8_t x394 = INT8_MAX;
	static int16_t x395 = INT16_MAX;
	int64_t x396 = -1LL;
	int64_t t86 = -623902LL;

	t86 = (x393-(x394+(x395/x396)));

	if (t86 != -9223372036854743168LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint8_t x397 = 5U;
	static volatile uint32_t x399 = 42411U;
	volatile uint32_t t87 = 66383666U;

	t87 = (x397-(x398+(x399/x400)));

	if (t87 != 4270362455U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x402 = 1183687664170LL;
	int64_t x403 = -408787514686592171LL;
	static int8_t x404 = INT8_MAX;
	volatile uint64_t t88 = 8736265148525337LLU;

	t88 = (x401-(x402+(x403/x404)));

	if (t88 != 3217616894215611LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x405 = UINT32_MAX;
	int32_t x406 = 474970105;
	volatile int16_t x408 = -4;
	volatile uint32_t t89 = 6914U;

	t89 = (x405-(x406+(x407/x408)));

	if (t89 != 3819997194U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x409 = INT64_MIN;
	volatile int8_t x410 = -1;
	static uint8_t x411 = 13U;
	int32_t x412 = INT32_MIN;
	volatile int64_t t90 = -918293555LL;

	t90 = (x409-(x410+(x411/x412)));

	if (t90 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x413 = UINT8_MAX;
	static int16_t x416 = INT16_MIN;

	t91 = (x413-(x414+(x415/x416)));

	if (t91 != 4023509943U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x421 = 226365868088LLU;
	volatile uint8_t x422 = UINT8_MAX;
	int16_t x424 = -1;
	volatile uint64_t t92 = 3810010443LLU;

	t92 = (x421-(x422+(x423/x424)));

	if (t92 != 226365867705LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x425 = 1;
	uint32_t x426 = 16812U;
	int16_t x427 = INT16_MIN;
	volatile uint16_t x428 = 36U;

	t93 = (x425-(x426+(x427/x428)));

	if (t93 != 4294951395U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x431 = INT8_MIN;
	int32_t x432 = -698657404;

	t94 = (x429-(x430+(x431/x432)));

	if (t94 != -6807) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x437 = -1;
	static int32_t x438 = INT32_MIN;
	uint16_t x439 = UINT16_MAX;
	uint64_t t95 = 22879947LLU;

	t95 = (x437-(x438+(x439/x440)));

	if (t95 != 2147483647LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x441 = 49U;
	int32_t x442 = 0;
	volatile int32_t x443 = INT32_MIN;
	int16_t x444 = -6;

	t96 = (x441-(x442+(x443/x444)));

	if (t96 != 3937053404U) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x445 = INT8_MIN;
	static volatile uint8_t x446 = 27U;
	volatile int16_t x447 = -1;
	uint64_t x448 = 375712612186609580LLU;
	uint64_t t97 = 14446LLU;

	t97 = (x445-(x446+(x447/x448)));

	if (t97 != 18446744073709551412LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x449 = INT32_MIN;
	volatile uint32_t x450 = 1181453509U;
	int8_t x451 = -1;
	int64_t t98 = -2861311699298862842LL;

	t98 = (x449-(x450+(x451/x452)));

	if (t98 != -3328937157LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x453 = -145366787LL;
	uint64_t x454 = 222LLU;
	volatile int16_t x455 = 1;
	volatile uint64_t t99 = 1440903095463978583LLU;

	t99 = (x453-(x454+(x455/x456)));

	if (t99 != 18446744073564184607LLU) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x1 = 188;
int32_t x10 = INT32_MIN;
static int64_t x13 = INT64_MAX;
volatile int16_t x32 = -1;
uint16_t x44 = 7476U;
int32_t x57 = 1128753;
static int16_t x67 = INT16_MAX;
uint16_t x75 = 118U;
int64_t x84 = -1LL;
int32_t t10 = -52605320;
static int8_t x104 = INT8_MIN;
static int8_t x108 = INT8_MIN;
int32_t t12 = 943;
int64_t x116 = 56494027LL;
uint64_t x125 = 8358624596917LLU;
int32_t x126 = INT32_MIN;
int16_t x127 = 49;
static uint16_t x131 = 477U;
uint64_t t16 = 191714426369111911LLU;
uint8_t x148 = 40U;
int32_t t17 = -985395;
volatile int64_t t18 = INT64_MAX;
int32_t x162 = INT32_MIN;
static volatile uint32_t x175 = 28U;
static uint16_t x176 = UINT16_MAX;
int32_t x196 = -29685496;
volatile int8_t x203 = INT8_MIN;
static int8_t x215 = INT8_MAX;
int64_t x221 = 0LL;
volatile int64_t x222 = -1LL;
volatile int64_t t26 = 70365624LL;
volatile uint8_t x236 = UINT8_MAX;
int64_t x237 = 3LL;
volatile int64_t t29 = INT64_MAX;
int16_t x253 = INT16_MAX;
uint8_t x275 = 3U;
int32_t x287 = INT32_MIN;
uint64_t x288 = UINT64_MAX;
int64_t x291 = INT64_MIN;
int16_t x306 = -1;
volatile int32_t x309 = INT32_MAX;
static int16_t x310 = INT16_MIN;
static int32_t t37 = INT32_MAX;
static int64_t x317 = INT64_MAX;
int32_t t40 = 500490749;
uint64_t x333 = UINT64_MAX;
volatile int64_t x335 = INT64_MIN;
volatile int32_t t42 = -2722155;
int8_t x355 = INT8_MAX;
volatile int16_t x357 = INT16_MAX;
uint16_t x361 = 698U;
int32_t x364 = -1;
uint32_t x370 = 2716211U;
uint64_t x381 = 7201881371530LLU;
int16_t x382 = -1;
int16_t x384 = INT16_MIN;
int8_t x389 = INT8_MAX;
uint64_t x394 = UINT64_MAX;
int8_t x395 = INT8_MIN;
uint32_t t50 = 9395U;
static int64_t x401 = 21LL;
int8_t x403 = INT8_MAX;
volatile int32_t x405 = 18678783;
volatile uint32_t t54 = UINT32_MAX;
uint32_t x426 = 56U;
volatile uint32_t x433 = 838U;
int16_t x436 = 14;
uint32_t t58 = 1564U;
int16_t x441 = INT16_MAX;
static int32_t t59 = 64565863;
uint32_t x485 = UINT32_MAX;
static int32_t x510 = INT32_MAX;
static volatile int64_t x517 = INT64_MAX;
int64_t x524 = 72105333LL;
int8_t x532 = -1;
volatile uint64_t x541 = 34246372587LLU;
uint16_t x542 = 3U;
int16_t x565 = 0;
volatile uint16_t x566 = 393U;
uint8_t x577 = UINT8_MAX;
volatile int32_t x578 = -1;
static uint16_t x605 = UINT16_MAX;
uint32_t t85 = UINT32_MAX;
uint16_t x634 = 376U;
uint64_t x637 = UINT64_MAX;
static int32_t x638 = INT32_MIN;
volatile uint64_t t87 = UINT64_MAX;
int32_t t88 = -942;
int32_t x650 = INT32_MIN;
int8_t x652 = -1;
uint16_t x657 = 470U;
uint8_t x658 = UINT8_MAX;
int32_t t90 = 44548;
uint8_t x669 = 12U;
int16_t x689 = 5;
int32_t x690 = -1;
static int8_t x691 = INT8_MIN;
uint16_t x692 = 984U;
volatile int32_t t94 = -1;
int8_t x705 = 1;
static volatile int32_t t96 = 189576818;
static int64_t x745 = 16040908LL;
int8_t x746 = INT8_MAX;
int64_t t99 = 7847608178LL;


void f0(void) {
	static int32_t x2 = 9353394;
	static int16_t x3 = INT16_MIN;
	volatile int64_t x4 = -28646699047LL;
	int32_t t0 = -119;

	t0 = (x1<<((x2==x3)/x4));

	if (t0 != 188) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = 29;
	int8_t x11 = INT8_MAX;
	static int32_t x12 = INT32_MIN;
	volatile int32_t t1 = -2594;

	t1 = (x9<<((x10==x11)/x12));

	if (t1 != 29) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x14 = 3423U;
	uint32_t x15 = 3U;
	int32_t x16 = 2083;
	int64_t t2 = INT64_MAX;

	t2 = (x13<<((x14==x15)/x16));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = 180051337243311LL;
	int32_t x26 = INT32_MAX;
	static int16_t x27 = INT16_MIN;
	uint16_t x28 = 980U;
	volatile int64_t t3 = 3214508LL;

	t3 = (x25<<((x26==x27)/x28));

	if (t3 != 180051337243311LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x29 = 1458614LLU;
	static int8_t x30 = -1;
	int16_t x31 = 0;
	uint64_t t4 = 2LLU;

	t4 = (x29<<((x30==x31)/x32));

	if (t4 != 1458614LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x41 = 15U;
	int8_t x42 = INT8_MIN;
	volatile int16_t x43 = 1;
	int32_t t5 = 45;

	t5 = (x41<<((x42==x43)/x44));

	if (t5 != 15) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x45 = UINT64_MAX;
	static int32_t x46 = -406232;
	volatile uint64_t x47 = 358335851498849LLU;
	int32_t x48 = -50;
	uint64_t t6 = UINT64_MAX;

	t6 = (x45<<((x46==x47)/x48));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x58 = INT32_MIN;
	volatile int32_t x59 = 4384;
	int64_t x60 = INT64_MIN;
	int32_t t7 = -11;

	t7 = (x57<<((x58==x59)/x60));

	if (t7 != 1128753) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x65 = 6U;
	int64_t x66 = INT64_MIN;
	int8_t x68 = INT8_MIN;
	int32_t t8 = 7727484;

	t8 = (x65<<((x66==x67)/x68));

	if (t8 != 6) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x73 = 5781248551LLU;
	uint64_t x74 = UINT64_MAX;
	volatile int32_t x76 = 16360797;
	uint64_t t9 = 37LLU;

	t9 = (x73<<((x74==x75)/x76));

	if (t9 != 5781248551LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x81 = UINT8_MAX;
	int8_t x82 = INT8_MIN;
	int32_t x83 = -1;

	t10 = (x81<<((x82==x83)/x84));

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x101 = UINT8_MAX;
	static volatile int64_t x102 = -1LL;
	volatile int64_t x103 = -1LL;
	volatile int32_t t11 = -59573;

	t11 = (x101<<((x102==x103)/x104));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x105 = INT8_MAX;
	uint32_t x106 = 5U;
	volatile int8_t x107 = INT8_MAX;

	t12 = (x105<<((x106==x107)/x108));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x113 = UINT8_MAX;
	volatile uint32_t x114 = 1000496237U;
	int32_t x115 = INT32_MIN;
	volatile int32_t t13 = -16216183;

	t13 = (x113<<((x114==x115)/x116));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x128 = UINT32_MAX;
	volatile uint64_t t14 = 2427LLU;

	t14 = (x125<<((x126==x127)/x128));

	if (t14 != 8358624596917LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x129 = UINT8_MAX;
	uint8_t x130 = 53U;
	int16_t x132 = INT16_MIN;
	int32_t t15 = -280690904;

	t15 = (x129<<((x130==x131)/x132));

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint64_t x133 = 2280676LLU;
	static int8_t x134 = 0;
	int8_t x135 = INT8_MAX;
	int32_t x136 = INT32_MIN;

	t16 = (x133<<((x134==x135)/x136));

	if (t16 != 2280676LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x145 = UINT16_MAX;
	uint32_t x146 = 1399163590U;
	uint32_t x147 = 895335334U;

	t17 = (x145<<((x146==x147)/x148));

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x153 = INT64_MAX;
	static volatile int64_t x154 = -1LL;
	static uint16_t x155 = 25U;
	int16_t x156 = -1;

	t18 = (x153<<((x154==x155)/x156));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x161 = INT16_MAX;
	int32_t x163 = INT32_MAX;
	volatile uint8_t x164 = UINT8_MAX;
	int32_t t19 = -1610549;

	t19 = (x161<<((x162==x163)/x164));

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x173 = UINT64_MAX;
	int64_t x174 = 10769215LL;
	uint64_t t20 = UINT64_MAX;

	t20 = (x173<<((x174==x175)/x176));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x177 = 29;
	static int32_t x178 = -16066;
	volatile int16_t x179 = -1;
	uint64_t x180 = 205138817LLU;
	int32_t t21 = 1795;

	t21 = (x177<<((x178==x179)/x180));

	if (t21 != 29) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x193 = 84226U;
	int16_t x194 = INT16_MAX;
	int8_t x195 = -5;
	uint32_t t22 = 46090U;

	t22 = (x193<<((x194==x195)/x196));

	if (t22 != 84226U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x201 = 0U;
	int16_t x202 = 0;
	uint16_t x204 = 404U;
	int32_t t23 = 52;

	t23 = (x201<<((x202==x203)/x204));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x205 = UINT16_MAX;
	volatile uint64_t x206 = 2903LLU;
	volatile int8_t x207 = INT8_MIN;
	uint32_t x208 = UINT32_MAX;
	static int32_t t24 = -3184;

	t24 = (x205<<((x206==x207)/x208));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x213 = UINT8_MAX;
	int8_t x214 = INT8_MIN;
	static uint32_t x216 = UINT32_MAX;
	int32_t t25 = 418323627;

	t25 = (x213<<((x214==x215)/x216));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x223 = INT32_MIN;
	static uint16_t x224 = 4059U;

	t26 = (x221<<((x222==x223)/x224));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x233 = 61LLU;
	int64_t x234 = INT64_MAX;
	int16_t x235 = -15;
	volatile uint64_t t27 = 375698LLU;

	t27 = (x233<<((x234==x235)/x236));

	if (t27 != 61LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x238 = INT8_MIN;
	uint16_t x239 = 23067U;
	uint64_t x240 = 129773269124722LLU;
	volatile int64_t t28 = -887664081693LL;

	t28 = (x237<<((x238==x239)/x240));

	if (t28 != 3LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x245 = INT64_MAX;
	int16_t x246 = 13;
	static volatile uint32_t x247 = UINT32_MAX;
	uint16_t x248 = 120U;

	t29 = (x245<<((x246==x247)/x248));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x254 = INT16_MIN;
	int32_t x255 = 8728738;
	uint8_t x256 = 13U;
	volatile int32_t t30 = -865142542;

	t30 = (x253<<((x254==x255)/x256));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x273 = UINT16_MAX;
	int64_t x274 = INT64_MIN;
	static int8_t x276 = INT8_MIN;
	volatile int32_t t31 = -72871295;

	t31 = (x273<<((x274==x275)/x276));

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint64_t x281 = 864130301LLU;
	static uint64_t x282 = 715192882888802LLU;
	volatile uint32_t x283 = 14102801U;
	int64_t x284 = -1LL;
	static volatile uint64_t t32 = 205272825LLU;

	t32 = (x281<<((x282==x283)/x284));

	if (t32 != 864130301LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x285 = 14744615U;
	volatile int8_t x286 = INT8_MAX;
	volatile uint32_t t33 = 1804457U;

	t33 = (x285<<((x286==x287)/x288));

	if (t33 != 14744615U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x289 = 13;
	int8_t x290 = INT8_MIN;
	static uint64_t x292 = UINT64_MAX;
	int32_t t34 = -783;

	t34 = (x289<<((x290==x291)/x292));

	if (t34 != 13) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x297 = 34847347;
	int64_t x298 = INT64_MAX;
	int64_t x299 = INT64_MAX;
	uint16_t x300 = UINT16_MAX;
	int32_t t35 = -11;

	t35 = (x297<<((x298==x299)/x300));

	if (t35 != 34847347) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x305 = 1598505198411LLU;
	int8_t x307 = INT8_MIN;
	int16_t x308 = -1;
	volatile uint64_t t36 = 142836420752128160LLU;

	t36 = (x305<<((x306==x307)/x308));

	if (t36 != 1598505198411LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x311 = -1LL;
	int16_t x312 = INT16_MIN;

	t37 = (x309<<((x310==x311)/x312));

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x318 = INT8_MIN;
	int16_t x319 = -3346;
	uint32_t x320 = UINT32_MAX;
	int64_t t38 = INT64_MAX;

	t38 = (x317<<((x318==x319)/x320));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x325 = UINT64_MAX;
	int32_t x326 = 4143386;
	int8_t x327 = 3;
	int32_t x328 = -3;
	uint64_t t39 = UINT64_MAX;

	t39 = (x325<<((x326==x327)/x328));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x329 = 29U;
	uint8_t x330 = UINT8_MAX;
	int32_t x331 = INT32_MAX;
	static int32_t x332 = INT32_MAX;

	t40 = (x329<<((x330==x331)/x332));

	if (t40 != 29) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x334 = INT8_MIN;
	int64_t x336 = -1LL;
	uint64_t t41 = UINT64_MAX;

	t41 = (x333<<((x334==x335)/x336));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x345 = 2U;
	int8_t x346 = -1;
	uint64_t x347 = UINT64_MAX;
	static int16_t x348 = INT16_MIN;

	t42 = (x345<<((x346==x347)/x348));

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x353 = 0U;
	uint64_t x354 = 54970835301LLU;
	volatile uint16_t x356 = UINT16_MAX;
	int32_t t43 = 0;

	t43 = (x353<<((x354==x355)/x356));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x358 = INT32_MIN;
	uint8_t x359 = 58U;
	volatile int8_t x360 = INT8_MIN;
	static int32_t t44 = 228189121;

	t44 = (x357<<((x358==x359)/x360));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x362 = UINT64_MAX;
	static volatile int16_t x363 = INT16_MAX;
	volatile int32_t t45 = 1156553;

	t45 = (x361<<((x362==x363)/x364));

	if (t45 != 698) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x369 = UINT8_MAX;
	int64_t x371 = -1192743826739647891LL;
	int32_t x372 = INT32_MIN;
	int32_t t46 = 1925952;

	t46 = (x369<<((x370==x371)/x372));

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x377 = INT8_MAX;
	volatile int64_t x378 = 85819933783LL;
	int32_t x379 = 18;
	uint64_t x380 = 63707800LLU;
	volatile int32_t t47 = -67;

	t47 = (x377<<((x378==x379)/x380));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x383 = INT64_MIN;
	static volatile uint64_t t48 = 4691446599069365545LLU;

	t48 = (x381<<((x382==x383)/x384));

	if (t48 != 7201881371530LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x390 = 2;
	volatile uint32_t x391 = 45542U;
	uint8_t x392 = 22U;
	static volatile int32_t t49 = -3187211;

	t49 = (x389<<((x390==x391)/x392));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x393 = 149U;
	int64_t x396 = INT64_MAX;

	t50 = (x393<<((x394==x395)/x396));

	if (t50 != 149U) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x397 = INT32_MAX;
	static int32_t x398 = INT32_MIN;
	static int16_t x399 = INT16_MAX;
	int32_t x400 = -15;
	volatile int32_t t51 = INT32_MAX;

	t51 = (x397<<((x398==x399)/x400));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x402 = UINT16_MAX;
	static int16_t x404 = INT16_MAX;
	static volatile int64_t t52 = 138LL;

	t52 = (x401<<((x402==x403)/x404));

	if (t52 != 21LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x406 = UINT64_MAX;
	int8_t x407 = INT8_MIN;
	volatile uint16_t x408 = 284U;
	static volatile int32_t t53 = 1712;

	t53 = (x405<<((x406==x407)/x408));

	if (t53 != 18678783) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x413 = UINT32_MAX;
	uint64_t x414 = 1755866428LLU;
	volatile int32_t x415 = -1;
	uint16_t x416 = 2U;

	t54 = (x413<<((x414==x415)/x416));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x421 = INT32_MAX;
	int16_t x422 = INT16_MIN;
	int32_t x423 = -1;
	int8_t x424 = INT8_MAX;
	int32_t t55 = INT32_MAX;

	t55 = (x421<<((x422==x423)/x424));

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x425 = UINT64_MAX;
	uint64_t x427 = 256908LLU;
	int64_t x428 = INT64_MIN;
	uint64_t t56 = UINT64_MAX;

	t56 = (x425<<((x426==x427)/x428));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x434 = 6631680U;
	volatile uint8_t x435 = 41U;
	volatile uint32_t t57 = 966U;

	t57 = (x433<<((x434==x435)/x436));

	if (t57 != 838U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x437 = 5261U;
	int32_t x438 = INT32_MIN;
	int16_t x439 = INT16_MIN;
	volatile int32_t x440 = INT32_MIN;

	t58 = (x437<<((x438==x439)/x440));

	if (t58 != 5261U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x442 = UINT8_MAX;
	volatile int32_t x443 = 69141;
	uint32_t x444 = 85U;

	t59 = (x441<<((x442==x443)/x444));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x445 = 8797644U;
	uint64_t x446 = UINT64_MAX;
	static uint64_t x447 = UINT64_MAX;
	int8_t x448 = 31;
	uint32_t t60 = 29925926U;

	t60 = (x445<<((x446==x447)/x448));

	if (t60 != 8797644U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x453 = 0U;
	int64_t x454 = -46246670754LL;
	int64_t x455 = -7569LL;
	int64_t x456 = 75589399LL;
	int32_t t61 = 4072299;

	t61 = (x453<<((x454==x455)/x456));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x461 = INT64_MAX;
	static uint8_t x462 = 20U;
	uint16_t x463 = UINT16_MAX;
	int32_t x464 = INT32_MIN;
	static volatile int64_t t62 = INT64_MAX;

	t62 = (x461<<((x462==x463)/x464));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x465 = 106117U;
	volatile int8_t x466 = -1;
	static int64_t x467 = INT64_MAX;
	int64_t x468 = 8902525894LL;
	volatile uint32_t t63 = 57U;

	t63 = (x465<<((x466==x467)/x468));

	if (t63 != 106117U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x469 = 3LLU;
	int64_t x470 = 9637501LL;
	int16_t x471 = INT16_MIN;
	uint16_t x472 = 14314U;
	volatile uint64_t t64 = 134649650LLU;

	t64 = (x469<<((x470==x471)/x472));

	if (t64 != 3LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x473 = UINT32_MAX;
	static int32_t x474 = -1;
	int16_t x475 = -2;
	int8_t x476 = INT8_MAX;
	volatile uint32_t t65 = UINT32_MAX;

	t65 = (x473<<((x474==x475)/x476));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x481 = 28U;
	int32_t x482 = INT32_MIN;
	uint8_t x483 = 6U;
	int64_t x484 = INT64_MIN;
	volatile int32_t t66 = 5599064;

	t66 = (x481<<((x482==x483)/x484));

	if (t66 != 28) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x486 = -1;
	static int32_t x487 = INT32_MIN;
	static volatile int8_t x488 = INT8_MIN;
	uint32_t t67 = UINT32_MAX;

	t67 = (x485<<((x486==x487)/x488));

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x493 = INT64_MAX;
	int32_t x494 = INT32_MIN;
	uint8_t x495 = 1U;
	static volatile int32_t x496 = INT32_MIN;
	int64_t t68 = INT64_MAX;

	t68 = (x493<<((x494==x495)/x496));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x501 = 4628;
	int16_t x502 = 83;
	static uint16_t x503 = 18U;
	uint16_t x504 = 11U;
	volatile int32_t t69 = 38077;

	t69 = (x501<<((x502==x503)/x504));

	if (t69 != 4628) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x509 = 121241415936580535LL;
	int32_t x511 = 3;
	int16_t x512 = INT16_MAX;
	int64_t t70 = 349793018380330954LL;

	t70 = (x509<<((x510==x511)/x512));

	if (t70 != 121241415936580535LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x518 = UINT8_MAX;
	uint64_t x519 = 1636200033155LLU;
	volatile int32_t x520 = INT32_MIN;
	static int64_t t71 = INT64_MAX;

	t71 = (x517<<((x518==x519)/x520));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x521 = INT32_MAX;
	int8_t x522 = -1;
	volatile uint16_t x523 = 410U;
	int32_t t72 = INT32_MAX;

	t72 = (x521<<((x522==x523)/x524));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x525 = 0U;
	static volatile int32_t x526 = INT32_MIN;
	static volatile int8_t x527 = 3;
	volatile int16_t x528 = -1;
	volatile int32_t t73 = -170638;

	t73 = (x525<<((x526==x527)/x528));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x529 = UINT64_MAX;
	int32_t x530 = INT32_MAX;
	static int8_t x531 = INT8_MIN;
	uint64_t t74 = UINT64_MAX;

	t74 = (x529<<((x530==x531)/x532));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x533 = 103217LLU;
	uint64_t x534 = UINT64_MAX;
	uint64_t x535 = UINT64_MAX;
	int64_t x536 = INT64_MIN;
	uint64_t t75 = 26394417418969LLU;

	t75 = (x533<<((x534==x535)/x536));

	if (t75 != 103217LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x543 = UINT8_MAX;
	int32_t x544 = INT32_MIN;
	uint64_t t76 = 400653LLU;

	t76 = (x541<<((x542==x543)/x544));

	if (t76 != 34246372587LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x545 = UINT16_MAX;
	uint32_t x546 = UINT32_MAX;
	int64_t x547 = -664002903645710821LL;
	uint16_t x548 = UINT16_MAX;
	int32_t t77 = -3774528;

	t77 = (x545<<((x546==x547)/x548));

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x553 = INT16_MAX;
	int64_t x554 = -1LL;
	int64_t x555 = 2648126376958LL;
	static int32_t x556 = -1;
	int32_t t78 = -103;

	t78 = (x553<<((x554==x555)/x556));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x567 = INT16_MAX;
	static volatile uint64_t x568 = UINT64_MAX;
	int32_t t79 = 1;

	t79 = (x565<<((x566==x567)/x568));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x569 = UINT64_MAX;
	static int64_t x570 = INT64_MIN;
	int16_t x571 = INT16_MIN;
	volatile int64_t x572 = -1LL;
	uint64_t t80 = UINT64_MAX;

	t80 = (x569<<((x570==x571)/x572));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x573 = INT64_MAX;
	int32_t x574 = INT32_MIN;
	int32_t x575 = INT32_MIN;
	int16_t x576 = INT16_MIN;
	static int64_t t81 = INT64_MAX;

	t81 = (x573<<((x574==x575)/x576));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x579 = INT16_MAX;
	int8_t x580 = 25;
	static int32_t t82 = 4062;

	t82 = (x577<<((x578==x579)/x580));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x581 = 50207728710237250LL;
	uint64_t x582 = 116999833149LLU;
	static uint64_t x583 = UINT64_MAX;
	static volatile int8_t x584 = -24;
	int64_t t83 = -6922435236953606LL;

	t83 = (x581<<((x582==x583)/x584));

	if (t83 != 50207728710237250LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x606 = INT16_MAX;
	volatile int64_t x607 = INT64_MIN;
	int64_t x608 = INT64_MAX;
	int32_t t84 = 228139;

	t84 = (x605<<((x606==x607)/x608));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x609 = UINT32_MAX;
	int32_t x610 = -12;
	static int16_t x611 = INT16_MIN;
	uint8_t x612 = 118U;

	t85 = (x609<<((x610==x611)/x612));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x633 = INT64_MAX;
	uint8_t x635 = UINT8_MAX;
	int64_t x636 = -1LL;
	volatile int64_t t86 = INT64_MAX;

	t86 = (x633<<((x634==x635)/x636));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x639 = UINT32_MAX;
	static int64_t x640 = INT64_MIN;

	t87 = (x637<<((x638==x639)/x640));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x645 = 97U;
	int16_t x646 = INT16_MAX;
	static int16_t x647 = -1;
	int8_t x648 = 59;

	t88 = (x645<<((x646==x647)/x648));

	if (t88 != 97) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x649 = 6U;
	volatile int16_t x651 = -1;
	uint32_t t89 = 52636U;

	t89 = (x649<<((x650==x651)/x652));

	if (t89 != 6U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x659 = INT8_MIN;
	static volatile int8_t x660 = INT8_MAX;

	t90 = (x657<<((x658==x659)/x660));

	if (t90 != 470) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x670 = UINT32_MAX;
	uint8_t x671 = 11U;
	int32_t x672 = INT32_MIN;
	int32_t t91 = -24859;

	t91 = (x669<<((x670==x671)/x672));

	if (t91 != 12) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x677 = 196382U;
	static uint64_t x678 = 159LLU;
	static uint16_t x679 = 517U;
	static uint32_t x680 = UINT32_MAX;
	uint32_t t92 = 5451U;

	t92 = (x677<<((x678==x679)/x680));

	if (t92 != 196382U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t t93 = 0;

	t93 = (x689<<((x690==x691)/x692));

	if (t93 != 5) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x693 = 14U;
	static volatile int64_t x694 = INT64_MIN;
	uint32_t x695 = 199U;
	int8_t x696 = INT8_MIN;

	t94 = (x693<<((x694==x695)/x696));

	if (t94 != 14) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x697 = 30344LLU;
	static volatile uint16_t x698 = 660U;
	volatile int64_t x699 = -1LL;
	volatile int16_t x700 = INT16_MAX;
	uint64_t t95 = 336430LLU;

	t95 = (x697<<((x698==x699)/x700));

	if (t95 != 30344LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x706 = INT32_MAX;
	int16_t x707 = 569;
	volatile int64_t x708 = 156311694LL;

	t96 = (x705<<((x706==x707)/x708));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x709 = 0;
	volatile uint8_t x710 = 39U;
	int8_t x711 = -1;
	static int64_t x712 = INT64_MAX;
	int32_t t97 = -10134;

	t97 = (x709<<((x710==x711)/x712));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x741 = UINT32_MAX;
	uint64_t x742 = 104576956041LLU;
	int16_t x743 = INT16_MIN;
	int16_t x744 = -97;
	uint32_t t98 = UINT32_MAX;

	t98 = (x741<<((x742==x743)/x744));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x747 = 1;
	static volatile int64_t x748 = INT64_MIN;

	t99 = (x745<<((x746==x747)/x748));

	if (t99 != 16040908LL) { NG(); } else { ; }
	
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


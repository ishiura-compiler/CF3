#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x10 = 5516U;
uint32_t x13 = 11082283U;
volatile uint16_t x16 = UINT16_MAX;
volatile uint32_t t1 = 15012U;
int8_t x17 = 16;
static int16_t x19 = -836;
static int16_t x22 = 303;
int32_t x24 = -1;
static int16_t x32 = INT16_MIN;
uint64_t x36 = UINT64_MAX;
uint16_t x37 = 27250U;
static uint64_t x39 = 3103189895LLU;
volatile int16_t x40 = INT16_MIN;
int64_t x46 = INT64_MIN;
static int32_t x47 = -32198001;
static int32_t t8 = -6;
uint64_t x56 = 1941058332LLU;
static int16_t x77 = INT16_MAX;
volatile int32_t t11 = 8202094;
uint8_t x81 = UINT8_MAX;
int8_t x84 = INT8_MAX;
uint32_t x103 = 2U;
uint32_t x106 = 815U;
volatile uint32_t t14 = 426285162U;
volatile int8_t x121 = -12;
static int32_t x122 = INT32_MIN;
uint16_t x130 = UINT16_MAX;
static volatile int8_t x137 = -62;
int8_t x155 = INT8_MIN;
volatile int32_t x170 = INT32_MAX;
int32_t x171 = INT32_MIN;
static uint16_t x178 = 1U;
uint32_t x190 = UINT32_MAX;
int16_t x191 = INT16_MIN;
int32_t t24 = 226;
int8_t x253 = -6;
int16_t x274 = INT16_MAX;
volatile int64_t x282 = -2LL;
uint64_t x283 = 3881176174138993240LLU;
static int32_t x284 = INT32_MIN;
int64_t x285 = 0LL;
volatile int8_t x288 = -1;
int64_t x302 = INT64_MAX;
int32_t x326 = -1;
uint32_t x328 = 65348773U;
static int32_t t36 = -3014951;
int32_t x331 = 0;
uint32_t x349 = 89721U;
int16_t x350 = -164;
int16_t x351 = INT16_MIN;
int8_t x352 = 0;
int32_t x374 = -88;
uint8_t x380 = 5U;
uint32_t x386 = 1748362401U;
uint16_t x401 = 18U;
int64_t x404 = -1LL;
int8_t x405 = -27;
static int16_t x416 = -1;
static uint32_t x433 = 55U;
static int64_t x441 = -88LL;
static uint16_t x449 = UINT16_MAX;
int8_t x485 = INT8_MIN;
uint64_t x488 = UINT64_MAX;
int16_t x489 = -873;
int64_t x513 = -187114925987754250LL;
int32_t x535 = INT32_MIN;
int16_t x536 = INT16_MIN;
int8_t x543 = 1;
int16_t x551 = INT16_MAX;
volatile int32_t t61 = -882912;
int64_t x562 = INT64_MIN;
int64_t t63 = 3582LL;
uint16_t x569 = 1U;
volatile int32_t t64 = 21088854;
uint32_t x596 = 3034696U;
static volatile uint8_t x611 = 31U;
volatile int32_t t70 = -1;
uint64_t x648 = 1913LLU;
volatile uint8_t x654 = UINT8_MAX;
volatile int32_t t73 = 6791742;
uint8_t x667 = 61U;
volatile int32_t t74 = -5085543;
int8_t x671 = INT8_MIN;
uint64_t x700 = UINT64_MAX;
static volatile uint16_t x709 = 17176U;
volatile int64_t x712 = 6880LL;
int32_t t81 = 11;
uint8_t x722 = UINT8_MAX;
int64_t t83 = 0LL;
volatile int8_t x739 = INT8_MIN;
int64_t x778 = -67077LL;
static int16_t x780 = INT16_MAX;
int64_t t86 = -532113917965570770LL;
static uint32_t x783 = 11645U;
static int32_t x784 = INT32_MIN;
int64_t x788 = -590LL;
volatile int16_t x797 = -5;
volatile int16_t x798 = 98;
uint64_t x800 = UINT64_MAX;
uint64_t x815 = 303LLU;
volatile int16_t x863 = -2055;
int32_t t97 = -709938457;


void f0(void) {
	int64_t x9 = INT64_MAX;
	int16_t x11 = INT16_MAX;
	uint64_t x12 = 1753041818232LLU;
	int64_t t0 = -5770305174616790LL;

	t0 = ((x9&x10)%(x11<x12));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x14 = 4834449U;
	volatile uint8_t x15 = 1U;

	t1 = ((x13&x14)%(x15<x16));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x18 = -1;
	int8_t x20 = 60;
	int32_t t2 = 300391306;

	t2 = ((x17&x18)%(x19<x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = 0;
	volatile int16_t x23 = INT16_MIN;
	int32_t t3 = 78818;

	t3 = ((x21&x22)%(x23<x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x29 = INT32_MAX;
	volatile int32_t x30 = 94;
	int32_t x31 = INT32_MIN;
	static int32_t t4 = 947529736;

	t4 = ((x29&x30)%(x31<x32));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x33 = UINT8_MAX;
	int8_t x34 = INT8_MAX;
	uint8_t x35 = 0U;
	volatile int32_t t5 = -1902;

	t5 = ((x33&x34)%(x35<x36));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x38 = UINT8_MAX;
	int32_t t6 = -126780813;

	t6 = ((x37&x38)%(x39<x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x45 = -409300543LL;
	static int8_t x48 = -7;
	volatile int64_t t7 = 78941084499953LL;

	t7 = ((x45&x46)%(x47<x48));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x49 = INT32_MIN;
	static uint16_t x50 = 2460U;
	int16_t x51 = -7;
	static uint32_t x52 = UINT32_MAX;

	t8 = ((x49&x50)%(x51<x52));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x53 = 114489U;
	int32_t x54 = 28617340;
	uint8_t x55 = 0U;
	volatile uint32_t t9 = 77984U;

	t9 = ((x53&x54)%(x55<x56));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x65 = 43421LL;
	int64_t x66 = INT64_MIN;
	int16_t x67 = INT16_MIN;
	static int32_t x68 = INT32_MAX;
	int64_t t10 = 5LL;

	t10 = ((x65&x66)%(x67<x68));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x78 = -1;
	int8_t x79 = INT8_MIN;
	uint8_t x80 = UINT8_MAX;

	t11 = ((x77&x78)%(x79<x80));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x82 = 22U;
	int64_t x83 = INT64_MIN;
	static volatile int32_t t12 = -4047342;

	t12 = ((x81&x82)%(x83<x84));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x101 = 3346887U;
	static int32_t x102 = INT32_MIN;
	uint64_t x104 = UINT64_MAX;
	volatile uint32_t t13 = 1684U;

	t13 = ((x101&x102)%(x103<x104));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x105 = 1U;
	static int32_t x107 = -42366;
	static int16_t x108 = INT16_MIN;

	t14 = ((x105&x106)%(x107<x108));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x123 = -200;
	volatile int32_t x124 = INT32_MAX;
	int32_t t15 = -102;

	t15 = ((x121&x122)%(x123<x124));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x129 = 9U;
	volatile int16_t x131 = INT16_MIN;
	uint8_t x132 = 4U;
	static volatile int32_t t16 = 160;

	t16 = ((x129&x130)%(x131<x132));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x138 = 1;
	uint8_t x139 = 0U;
	uint16_t x140 = UINT16_MAX;
	volatile int32_t t17 = 5;

	t17 = ((x137&x138)%(x139<x140));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x145 = -1;
	int16_t x146 = INT16_MIN;
	int64_t x147 = INT64_MIN;
	static int16_t x148 = 1;
	int32_t t18 = 506135031;

	t18 = ((x145&x146)%(x147<x148));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x153 = -1;
	int16_t x154 = -1;
	static int16_t x156 = INT16_MAX;
	int32_t t19 = 0;

	t19 = ((x153&x154)%(x155<x156));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x169 = -1;
	static int32_t x172 = -3;
	static volatile int32_t t20 = -49466;

	t20 = ((x169&x170)%(x171<x172));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x177 = INT16_MIN;
	int16_t x179 = 3;
	int8_t x180 = INT8_MAX;
	volatile int32_t t21 = 7353;

	t21 = ((x177&x178)%(x179<x180));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x189 = INT8_MIN;
	static int8_t x192 = INT8_MAX;
	uint32_t t22 = 646U;

	t22 = ((x189&x190)%(x191<x192));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x193 = 0U;
	int16_t x194 = -1;
	volatile int16_t x195 = INT16_MIN;
	int8_t x196 = INT8_MIN;
	int32_t t23 = 1;

	t23 = ((x193&x194)%(x195<x196));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x209 = 28141U;
	int32_t x210 = 426084;
	uint32_t x211 = 87165U;
	volatile int64_t x212 = INT64_MAX;

	t24 = ((x209&x210)%(x211<x212));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x229 = 845083204U;
	int32_t x230 = 1;
	int8_t x231 = INT8_MIN;
	static int64_t x232 = -1LL;
	uint32_t t25 = 2423112U;

	t25 = ((x229&x230)%(x231<x232));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x233 = 159U;
	int32_t x234 = INT32_MAX;
	int32_t x235 = -342962;
	volatile int16_t x236 = -1;
	int32_t t26 = -326570;

	t26 = ((x233&x234)%(x235<x236));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x241 = -103;
	static volatile int8_t x242 = -1;
	static int8_t x243 = -1;
	int16_t x244 = 17;
	static volatile int32_t t27 = 1380189;

	t27 = ((x241&x242)%(x243<x244));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x254 = -120;
	volatile int32_t x255 = INT32_MIN;
	uint16_t x256 = 7641U;
	int32_t t28 = -726712012;

	t28 = ((x253&x254)%(x255<x256));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x273 = 162825;
	static int32_t x275 = -1;
	static uint16_t x276 = 15889U;
	volatile int32_t t29 = -9;

	t29 = ((x273&x274)%(x275<x276));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x281 = INT64_MIN;
	int64_t t30 = -3357295981080284LL;

	t30 = ((x281&x282)%(x283<x284));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x286 = INT64_MIN;
	volatile int16_t x287 = INT16_MIN;
	int64_t t31 = -656LL;

	t31 = ((x285&x286)%(x287<x288));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x297 = UINT16_MAX;
	int16_t x298 = INT16_MIN;
	static int32_t x299 = -311;
	static int8_t x300 = -1;
	volatile int32_t t32 = 3579197;

	t32 = ((x297&x298)%(x299<x300));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x301 = 62U;
	int64_t x303 = -1LL;
	int16_t x304 = INT16_MAX;
	int64_t t33 = 939519838748487LL;

	t33 = ((x301&x302)%(x303<x304));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x317 = UINT16_MAX;
	int16_t x318 = INT16_MAX;
	static volatile uint32_t x319 = UINT32_MAX;
	uint64_t x320 = 547441346872LLU;
	int32_t t34 = 690944767;

	t34 = ((x317&x318)%(x319<x320));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x321 = INT64_MIN;
	int8_t x322 = INT8_MIN;
	uint8_t x323 = 29U;
	uint32_t x324 = 11514U;
	volatile int64_t t35 = -59388LL;

	t35 = ((x321&x322)%(x323<x324));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x325 = INT16_MAX;
	uint8_t x327 = 3U;

	t36 = ((x325&x326)%(x327<x328));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x329 = INT16_MIN;
	int16_t x330 = INT16_MAX;
	static uint64_t x332 = 65043088779005LLU;
	static int32_t t37 = 0;

	t37 = ((x329&x330)%(x331<x332));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x345 = 55365LL;
	static int64_t x346 = INT64_MIN;
	int16_t x347 = -1;
	uint8_t x348 = 4U;
	volatile int64_t t38 = 916699152808040LL;

	t38 = ((x345&x346)%(x347<x348));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t t39 = 2657174U;

	t39 = ((x349&x350)%(x351<x352));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x373 = 6654657264397952LLU;
	int32_t x375 = -1;
	int32_t x376 = INT32_MAX;
	volatile uint64_t t40 = 21949691856313LLU;

	t40 = ((x373&x374)%(x375<x376));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x377 = 0U;
	static int8_t x378 = INT8_MIN;
	int64_t x379 = INT64_MIN;
	int32_t t41 = -1;

	t41 = ((x377&x378)%(x379<x380));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x381 = INT64_MIN;
	static uint64_t x382 = 315LLU;
	volatile int64_t x383 = INT64_MIN;
	static uint16_t x384 = 0U;
	volatile uint64_t t42 = 1300935058113586873LLU;

	t42 = ((x381&x382)%(x383<x384));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x385 = -5804LL;
	uint64_t x387 = 1079589953787777964LLU;
	static volatile uint64_t x388 = UINT64_MAX;
	static int64_t t43 = 16431240476875741LL;

	t43 = ((x385&x386)%(x387<x388));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x393 = UINT64_MAX;
	int8_t x394 = 4;
	int8_t x395 = 1;
	uint8_t x396 = 36U;
	volatile uint64_t t44 = 125020010LLU;

	t44 = ((x393&x394)%(x395<x396));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x402 = INT32_MIN;
	int32_t x403 = -336474940;
	int32_t t45 = -5;

	t45 = ((x401&x402)%(x403<x404));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x406 = UINT32_MAX;
	int64_t x407 = 891732LL;
	uint32_t x408 = 92615361U;
	volatile uint32_t t46 = 26385U;

	t46 = ((x405&x406)%(x407<x408));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x413 = 117180745U;
	uint16_t x414 = UINT16_MAX;
	int64_t x415 = INT64_MIN;
	volatile uint32_t t47 = 27783U;

	t47 = ((x413&x414)%(x415<x416));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x421 = 728268;
	int8_t x422 = -1;
	static int64_t x423 = INT64_MIN;
	int16_t x424 = INT16_MAX;
	static volatile int32_t t48 = 135364652;

	t48 = ((x421&x422)%(x423<x424));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x434 = 14U;
	int32_t x435 = INT32_MIN;
	volatile int64_t x436 = -1LL;
	volatile uint32_t t49 = 2127U;

	t49 = ((x433&x434)%(x435<x436));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x442 = 8LL;
	uint32_t x443 = 178717U;
	int16_t x444 = INT16_MIN;
	int64_t t50 = -3LL;

	t50 = ((x441&x442)%(x443<x444));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x445 = INT64_MIN;
	int8_t x446 = INT8_MAX;
	volatile int8_t x447 = INT8_MAX;
	static uint64_t x448 = 1427681366447533635LLU;
	static volatile int64_t t51 = -3399219880652840265LL;

	t51 = ((x445&x446)%(x447<x448));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x450 = -1;
	uint64_t x451 = 0LLU;
	int8_t x452 = -1;
	static int32_t t52 = 5563;

	t52 = ((x449&x450)%(x451<x452));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x453 = INT16_MAX;
	int16_t x454 = -1;
	static volatile int16_t x455 = INT16_MIN;
	volatile int64_t x456 = 535LL;
	int32_t t53 = 6859334;

	t53 = ((x453&x454)%(x455<x456));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x465 = -1LL;
	static int8_t x466 = 1;
	static int16_t x467 = INT16_MIN;
	uint16_t x468 = 15U;
	volatile int64_t t54 = 3509LL;

	t54 = ((x465&x466)%(x467<x468));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x477 = -1;
	int64_t x478 = 1171224934629313LL;
	int32_t x479 = INT32_MIN;
	uint32_t x480 = UINT32_MAX;
	volatile int64_t t55 = -2873LL;

	t55 = ((x477&x478)%(x479<x480));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x486 = -1;
	int16_t x487 = INT16_MIN;
	int32_t t56 = 7996987;

	t56 = ((x485&x486)%(x487<x488));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x490 = 1;
	int16_t x491 = -1;
	volatile int16_t x492 = INT16_MAX;
	volatile int32_t t57 = -1246665;

	t57 = ((x489&x490)%(x491<x492));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x514 = -1LL;
	int8_t x515 = INT8_MIN;
	uint8_t x516 = UINT8_MAX;
	int64_t t58 = -126404412LL;

	t58 = ((x513&x514)%(x515<x516));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x533 = 6658U;
	volatile int64_t x534 = 12782990LL;
	int64_t t59 = -477750293LL;

	t59 = ((x533&x534)%(x535<x536));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x541 = -1;
	int32_t x542 = INT32_MIN;
	uint64_t x544 = 1658493976LLU;
	static volatile int32_t t60 = -11549;

	t60 = ((x541&x542)%(x543<x544));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x549 = -40;
	volatile uint16_t x550 = 3U;
	static volatile uint32_t x552 = UINT32_MAX;

	t61 = ((x549&x550)%(x551<x552));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x557 = 46309291U;
	uint8_t x558 = 6U;
	int32_t x559 = INT32_MAX;
	uint32_t x560 = UINT32_MAX;
	uint32_t t62 = 598360011U;

	t62 = ((x557&x558)%(x559<x560));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x561 = INT16_MAX;
	int8_t x563 = INT8_MAX;
	int64_t x564 = INT64_MAX;

	t63 = ((x561&x562)%(x563<x564));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x570 = 22U;
	int16_t x571 = INT16_MIN;
	int8_t x572 = INT8_MIN;

	t64 = ((x569&x570)%(x571<x572));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x573 = 57U;
	uint32_t x574 = 321U;
	uint8_t x575 = 10U;
	int8_t x576 = INT8_MAX;
	volatile uint32_t t65 = 0U;

	t65 = ((x573&x574)%(x575<x576));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x593 = INT32_MIN;
	int32_t x594 = INT32_MAX;
	uint32_t x595 = 30501U;
	volatile int32_t t66 = -2137;

	t66 = ((x593&x594)%(x595<x596));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x597 = UINT8_MAX;
	static uint8_t x598 = 2U;
	volatile int64_t x599 = INT64_MIN;
	static int16_t x600 = INT16_MIN;
	static volatile int32_t t67 = -105;

	t67 = ((x597&x598)%(x599<x600));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x609 = 14LLU;
	int32_t x610 = 1;
	uint64_t x612 = UINT64_MAX;
	volatile uint64_t t68 = 1084244007742LLU;

	t68 = ((x609&x610)%(x611<x612));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x613 = 1;
	int64_t x614 = INT64_MIN;
	uint64_t x615 = 969639358LLU;
	int32_t x616 = INT32_MIN;
	volatile int64_t t69 = 12905054454030688LL;

	t69 = ((x613&x614)%(x615<x616));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x621 = INT16_MIN;
	int8_t x622 = INT8_MAX;
	int64_t x623 = -1LL;
	int32_t x624 = 699441;

	t70 = ((x621&x622)%(x623<x624));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x629 = INT64_MIN;
	uint32_t x630 = 1008105U;
	int8_t x631 = 0;
	static uint64_t x632 = 4387LLU;
	volatile int64_t t71 = 204613315772339LL;

	t71 = ((x629&x630)%(x631<x632));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x645 = -1;
	static uint32_t x646 = 49U;
	int8_t x647 = INT8_MAX;
	volatile uint32_t t72 = 183U;

	t72 = ((x645&x646)%(x647<x648));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x653 = INT8_MIN;
	int8_t x655 = INT8_MIN;
	int32_t x656 = -80;

	t73 = ((x653&x654)%(x655<x656));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x665 = -1;
	int8_t x666 = -1;
	volatile int32_t x668 = INT32_MAX;

	t74 = ((x665&x666)%(x667<x668));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x669 = 91456477211LL;
	int16_t x670 = INT16_MAX;
	uint64_t x672 = UINT64_MAX;
	int64_t t75 = 37LL;

	t75 = ((x669&x670)%(x671<x672));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x681 = INT32_MIN;
	static int16_t x682 = INT16_MIN;
	uint64_t x683 = 628848666505231255LLU;
	int8_t x684 = -3;
	static int32_t t76 = -3939;

	t76 = ((x681&x682)%(x683<x684));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x685 = 0U;
	static int64_t x686 = -25LL;
	int16_t x687 = -2;
	int8_t x688 = -1;
	static volatile int64_t t77 = -7LL;

	t77 = ((x685&x686)%(x687<x688));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x697 = 417;
	volatile uint64_t x698 = 445LLU;
	uint32_t x699 = 206522U;
	volatile uint64_t t78 = 21557707795LLU;

	t78 = ((x697&x698)%(x699<x700));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x701 = -1;
	volatile int64_t x702 = INT64_MIN;
	uint16_t x703 = UINT16_MAX;
	static int64_t x704 = INT64_MAX;
	int64_t t79 = 42555035194184LL;

	t79 = ((x701&x702)%(x703<x704));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x710 = INT64_MIN;
	uint8_t x711 = UINT8_MAX;
	int64_t t80 = -8141114971LL;

	t80 = ((x709&x710)%(x711<x712));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x717 = UINT8_MAX;
	int16_t x718 = 0;
	int8_t x719 = INT8_MIN;
	uint16_t x720 = 8543U;

	t81 = ((x717&x718)%(x719<x720));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x721 = UINT64_MAX;
	static int64_t x723 = INT64_MIN;
	uint32_t x724 = UINT32_MAX;
	uint64_t t82 = 108273346224LLU;

	t82 = ((x721&x722)%(x723<x724));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x729 = -11;
	int64_t x730 = -1LL;
	volatile uint64_t x731 = 27752LLU;
	static int64_t x732 = -224788667626LL;

	t83 = ((x729&x730)%(x731<x732));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x737 = 483701679;
	static int8_t x738 = 0;
	int8_t x740 = 10;
	volatile int32_t t84 = 1279;

	t84 = ((x737&x738)%(x739<x740));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x753 = UINT8_MAX;
	uint32_t x754 = 88U;
	static volatile int64_t x755 = -5890LL;
	volatile uint32_t x756 = UINT32_MAX;
	static uint32_t t85 = 2U;

	t85 = ((x753&x754)%(x755<x756));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x777 = -4;
	int64_t x779 = INT64_MIN;

	t86 = ((x777&x778)%(x779<x780));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x781 = -1;
	volatile uint32_t x782 = UINT32_MAX;
	uint32_t t87 = 701672819U;

	t87 = ((x781&x782)%(x783<x784));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x785 = INT16_MAX;
	int32_t x786 = -6978;
	int32_t x787 = INT32_MIN;
	int32_t t88 = -6852;

	t88 = ((x785&x786)%(x787<x788));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x789 = INT16_MIN;
	int8_t x790 = -1;
	volatile uint64_t x791 = 224486596793084068LLU;
	volatile uint64_t x792 = UINT64_MAX;
	int32_t t89 = 445;

	t89 = ((x789&x790)%(x791<x792));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x799 = INT8_MAX;
	volatile int32_t t90 = 287583;

	t90 = ((x797&x798)%(x799<x800));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x801 = INT32_MIN;
	int32_t x802 = INT32_MAX;
	static int32_t x803 = INT32_MIN;
	static int16_t x804 = -1;
	volatile int32_t t91 = 390915;

	t91 = ((x801&x802)%(x803<x804));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x813 = -1;
	int32_t x814 = -141644061;
	int16_t x816 = INT16_MAX;
	int32_t t92 = 11080;

	t92 = ((x813&x814)%(x815<x816));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x817 = UINT16_MAX;
	volatile int32_t x818 = -1;
	int16_t x819 = INT16_MIN;
	static int64_t x820 = -1LL;
	int32_t t93 = 417;

	t93 = ((x817&x818)%(x819<x820));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x841 = INT64_MIN;
	int8_t x842 = INT8_MIN;
	static int16_t x843 = 911;
	uint16_t x844 = 1229U;
	static volatile int64_t t94 = 1067711022297LL;

	t94 = ((x841&x842)%(x843<x844));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x861 = 8196152U;
	int8_t x862 = -1;
	static uint16_t x864 = 561U;
	volatile uint32_t t95 = 1964U;

	t95 = ((x861&x862)%(x863<x864));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x865 = UINT8_MAX;
	static uint64_t x866 = 151141615844032458LLU;
	int64_t x867 = INT64_MIN;
	int8_t x868 = -1;
	static volatile uint64_t t96 = 2750608518LLU;

	t96 = ((x865&x866)%(x867<x868));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x869 = 1830U;
	static int16_t x870 = INT16_MIN;
	int16_t x871 = -490;
	uint16_t x872 = UINT16_MAX;

	t97 = ((x869&x870)%(x871<x872));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x873 = UINT64_MAX;
	static int32_t x874 = INT32_MIN;
	uint8_t x875 = 83U;
	static uint16_t x876 = 23060U;
	volatile uint64_t t98 = 6136896838895051730LLU;

	t98 = ((x873&x874)%(x875<x876));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x877 = INT16_MAX;
	int64_t x878 = INT64_MAX;
	volatile int64_t x879 = INT64_MIN;
	int32_t x880 = -1;
	int64_t t99 = -10240232LL;

	t99 = ((x877&x878)%(x879<x880));

	if (t99 != 0LL) { NG(); } else { ; }
	
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


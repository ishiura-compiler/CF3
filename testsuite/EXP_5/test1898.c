#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x11 = 53;
volatile int64_t t2 = 343880783867LL;
uint8_t x25 = 8U;
int32_t x27 = -81283;
uint8_t x29 = 2U;
int16_t x30 = -1;
static uint64_t x36 = 33731542086926549LLU;
uint32_t t8 = 6U;
int32_t x46 = -1;
volatile int32_t t10 = 328870;
static int8_t x62 = 12;
uint64_t t13 = 256062LLU;
int64_t x76 = INT64_MIN;
static int64_t x103 = 7342151515LL;
uint32_t x104 = 1450783U;
uint64_t t20 = 2101LLU;
volatile uint64_t x110 = 90837900LLU;
volatile uint64_t t22 = 484004325LLU;
int16_t x114 = 2;
int32_t x118 = -1;
uint64_t x126 = 13530851698165LLU;
static int64_t x128 = -1LL;
int8_t x132 = INT8_MIN;
static int8_t x137 = -1;
uint64_t x139 = 35301308058522762LLU;
int64_t x141 = -1LL;
volatile uint32_t t29 = 103129U;
uint16_t x160 = 1621U;
int32_t t33 = 1;
volatile int64_t t34 = -2LL;
int32_t x182 = -3155292;
int64_t x183 = INT64_MIN;
static uint16_t x186 = 4U;
uint8_t x187 = UINT8_MAX;
uint32_t x190 = 57U;
int32_t x192 = INT32_MAX;
int8_t x193 = INT8_MAX;
uint64_t x201 = 85773290319LLU;
uint32_t x202 = 12187965U;
volatile uint8_t x204 = 14U;
uint64_t x205 = 14126963453LLU;
int32_t x206 = INT32_MIN;
int32_t x209 = INT32_MAX;
int8_t x212 = INT8_MAX;
int8_t x213 = -1;
static uint16_t x217 = UINT16_MAX;
int8_t x218 = -1;
int8_t x254 = -1;
uint32_t x255 = UINT32_MAX;
int16_t x261 = -1;
uint32_t x263 = UINT32_MAX;
int32_t x267 = -504121;
static int32_t x270 = INT32_MIN;
volatile int64_t x275 = -12404036336804LL;
int64_t t52 = 842591LL;
volatile int32_t x279 = -1;
static volatile uint64_t t53 = 49075389491305LLU;
volatile uint32_t x282 = 6697U;
uint8_t x287 = UINT8_MAX;
static int32_t x288 = 101;
int64_t x293 = INT64_MIN;
int64_t t56 = -7456741937LL;
int8_t x297 = INT8_MAX;
int32_t x298 = 21980386;
int64_t x301 = INT64_MIN;
int64_t x305 = -260284322724LL;
volatile uint64_t t60 = 331637441312808616LLU;
int16_t x314 = -1;
int32_t t61 = 10376;
int16_t x320 = INT16_MIN;
int32_t x327 = INT32_MAX;
int16_t x345 = INT16_MAX;
int16_t x347 = -1;
uint8_t x353 = 105U;
uint64_t x361 = 135719311926056960LLU;
uint8_t x364 = UINT8_MAX;
uint16_t x370 = 7596U;
uint32_t x372 = 5U;
volatile uint16_t x375 = UINT16_MAX;
static volatile int8_t x378 = INT8_MIN;
volatile uint8_t x386 = UINT8_MAX;
int64_t x388 = INT64_MIN;
int64_t x389 = -1LL;
static int32_t t76 = -224829;
int64_t x407 = INT64_MIN;
uint8_t x411 = UINT8_MAX;
uint64_t t78 = 1638814LLU;
int8_t x424 = INT8_MIN;
uint8_t x433 = 2U;
int8_t x441 = -33;
int64_t x442 = INT64_MAX;
volatile int64_t x449 = INT64_MAX;
uint32_t x451 = 1485U;
uint8_t x452 = 9U;
int64_t x472 = -1LL;
int64_t t91 = 14290128509LL;
uint8_t x485 = UINT8_MAX;
uint64_t x504 = 34804450756393LLU;
volatile uint64_t t96 = 117575147411390211LLU;
volatile int64_t t97 = 0LL;
volatile uint32_t x510 = 1380149024U;
int16_t x515 = 24;


void f0(void) {
	volatile int32_t x1 = -109348574;
	static uint8_t x2 = 24U;
	int16_t x3 = -1;
	static uint16_t x4 = UINT16_MAX;
	int32_t t0 = 14979;

	t0 = (x1^((x2|x3)*x4));

	if (t0 != 109345059) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 659U;
	int32_t x10 = 95;
	static int16_t x12 = 1;
	volatile uint32_t t1 = 4U;

	t1 = (x9^((x10|x11)*x12));

	if (t1 != 748U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = INT8_MIN;
	int64_t x18 = -1LL;
	uint32_t x19 = UINT32_MAX;
	uint32_t x20 = 511168U;

	t2 = (x17^((x18|x19)*x20));

	if (t2 != 511168LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = INT16_MAX;
	int8_t x22 = 38;
	volatile int16_t x23 = INT16_MAX;
	uint16_t x24 = 3048U;
	volatile int32_t t3 = 399739;

	t3 = (x21^((x22|x23)*x24));

	if (t3 != 99847143) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x26 = INT64_MIN;
	volatile int8_t x28 = INT8_MIN;
	int64_t t4 = 4473925485343352LL;

	t4 = (x25^((x26|x27)*x28));

	if (t4 != 10404232LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x31 = 5;
	uint64_t x32 = 2014LLU;
	uint64_t t5 = 37314LLU;

	t5 = (x29^((x30|x31)*x32));

	if (t5 != 18446744073709549600LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x33 = INT16_MIN;
	int8_t x34 = -1;
	int32_t x35 = INT32_MIN;
	uint64_t t6 = 94311LLU;

	t6 = (x33^((x34|x35)*x36));

	if (t6 != 33731542086926123LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x37 = 58U;
	int64_t x38 = INT64_MAX;
	volatile int16_t x39 = 35;
	static volatile uint8_t x40 = 0U;
	volatile int64_t t7 = -1LL;

	t7 = (x37^((x38|x39)*x40));

	if (t7 != 58LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = INT8_MIN;
	uint32_t x42 = 1U;
	int16_t x43 = INT16_MAX;
	uint32_t x44 = 7545549U;

	t8 = (x41^((x42|x43)*x44));

	if (t8 != 1863099059U) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x45 = -1LL;
	int64_t x47 = INT64_MAX;
	uint8_t x48 = 55U;
	volatile int64_t t9 = -231807LL;

	t9 = (x45^((x46|x47)*x48));

	if (t9 != 54LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x53 = -1;
	int32_t x54 = -47;
	int8_t x55 = INT8_MIN;
	int16_t x56 = INT16_MIN;

	t10 = (x53^((x54|x55)*x56));

	if (t10 != -1540097) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = -1225;
	int16_t x58 = -1;
	volatile int64_t x59 = INT64_MIN;
	uint64_t x60 = 797614965266178LLU;
	uint64_t t11 = 17321348258LLU;

	t11 = (x57^((x58|x59)*x60));

	if (t11 != 797614965265353LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x61 = 7370850U;
	int8_t x63 = INT8_MIN;
	int64_t x64 = -1LL;
	volatile int64_t t12 = -1794623789792671564LL;

	t12 = (x61^((x62|x63)*x64));

	if (t12 != 7370774LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = INT16_MIN;
	static int16_t x66 = 0;
	volatile int8_t x67 = -1;
	static uint64_t x68 = UINT64_MAX;

	t13 = (x65^((x66|x67)*x68));

	if (t13 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x69 = UINT16_MAX;
	static int8_t x70 = -1;
	uint16_t x71 = UINT16_MAX;
	uint8_t x72 = 11U;
	int32_t t14 = -256949;

	t14 = (x69^((x70|x71)*x72));

	if (t14 != -65526) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x73 = -1;
	volatile uint64_t x74 = 12818790979759744LLU;
	static uint64_t x75 = 30LLU;
	uint64_t t15 = UINT64_MAX;

	t15 = (x73^((x74|x75)*x76));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x77 = 1U;
	int64_t x78 = -464LL;
	static int16_t x79 = -1;
	uint32_t x80 = 26U;
	int64_t t16 = -129LL;

	t16 = (x77^((x78|x79)*x80));

	if (t16 != -25LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x81 = INT32_MIN;
	int8_t x82 = INT8_MAX;
	int16_t x83 = INT16_MIN;
	volatile int8_t x84 = -62;
	int32_t t17 = -901;

	t17 = (x81^((x82|x83)*x84));

	if (t17 != -2145459906) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x85 = 0U;
	int32_t x86 = -440;
	int16_t x87 = INT16_MAX;
	static int16_t x88 = INT16_MIN;
	int32_t t18 = 34478;

	t18 = (x85^((x86|x87)*x88));

	if (t18 != 32768) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = 23335621709574LLU;
	volatile int16_t x90 = -1;
	static uint64_t x91 = UINT64_MAX;
	int64_t x92 = INT64_MIN;
	volatile uint64_t t19 = 3757790515340375972LLU;

	t19 = (x89^((x90|x91)*x92));

	if (t19 != 9223395372476485382LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x101 = UINT32_MAX;
	uint64_t x102 = 239892LLU;

	t20 = (x101^((x102|x103)*x104));

	if (t20 != 10652217414522494LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x105 = INT16_MIN;
	int8_t x106 = INT8_MAX;
	static volatile uint16_t x107 = 736U;
	volatile int16_t x108 = INT16_MIN;
	int32_t t21 = 9711;

	t21 = (x105^((x106|x107)*x108));

	if (t21 != 25100288) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x109 = 59LLU;
	volatile uint32_t x111 = 2U;
	uint8_t x112 = UINT8_MAX;

	t22 = (x109^((x110|x111)*x112));

	if (t22 != 23163664969LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x113 = 1U;
	uint16_t x115 = 1U;
	static int64_t x116 = -7417653LL;
	int64_t t23 = 446928119693898307LL;

	t23 = (x113^((x114|x115)*x116));

	if (t23 != -22252960LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = INT16_MIN;
	static uint32_t x119 = 776688154U;
	int32_t x120 = -872;
	uint32_t t24 = 504680728U;

	t24 = (x117^((x118|x119)*x120));

	if (t24 != 4294935400U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x125 = 72U;
	static int64_t x127 = INT64_MAX;
	uint64_t t25 = 47997696708438669LLU;

	t25 = (x125^((x126|x127)*x128));

	if (t25 != 9223372036854775881LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x129 = 19LL;
	uint8_t x130 = 13U;
	uint8_t x131 = UINT8_MAX;
	volatile int64_t t26 = 137935946764543LL;

	t26 = (x129^((x130|x131)*x132));

	if (t26 != -32621LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x138 = -338491842LL;
	int32_t x140 = 29883816;
	volatile uint64_t t27 = 23LLU;

	t27 = (x137^((x138|x139)*x140));

	if (t27 != 8023170640727375LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x142 = -1LL;
	uint16_t x143 = 7U;
	int16_t x144 = -1;
	volatile int64_t t28 = -9762049857063LL;

	t28 = (x141^((x142|x143)*x144));

	if (t28 != -2LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x145 = UINT32_MAX;
	uint16_t x146 = 435U;
	int8_t x147 = INT8_MIN;
	static int16_t x148 = -1;

	t29 = (x145^((x146|x147)*x148));

	if (t29 != 4294967218U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x153 = 123340U;
	uint16_t x154 = 8106U;
	int8_t x155 = -1;
	uint32_t x156 = 0U;
	uint32_t t30 = 964795U;

	t30 = (x153^((x154|x155)*x156));

	if (t30 != 123340U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x157 = INT8_MIN;
	int32_t x158 = -1;
	volatile int8_t x159 = INT8_MIN;
	volatile int32_t t31 = 20666;

	t31 = (x157^((x158|x159)*x160));

	if (t31 != 1579) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x161 = UINT8_MAX;
	static uint32_t x162 = 13961859U;
	int8_t x163 = INT8_MIN;
	int16_t x164 = 477;
	uint32_t t32 = 428U;

	t32 = (x161^((x162|x163)*x164));

	if (t32 != 4294907880U) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x169 = INT8_MIN;
	int8_t x170 = 6;
	int16_t x171 = 1;
	int16_t x172 = 10695;

	t33 = (x169^((x170|x171)*x172));

	if (t33 != -74767) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x177 = 25028056LL;
	static uint8_t x178 = 12U;
	int16_t x179 = -1;
	static int32_t x180 = -1;

	t34 = (x177^((x178|x179)*x180));

	if (t34 != 25028057LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x181 = UINT64_MAX;
	int64_t x184 = -7317LL;
	uint64_t t35 = 397LLU;

	t35 = (x181^((x182|x183)*x184));

	if (t35 != 18446744050622280051LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x185 = -1;
	uint32_t x188 = 850U;
	uint32_t t36 = 27067U;

	t36 = (x185^((x186|x187)*x188));

	if (t36 != 4294750545U) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x189 = 497680041943LL;
	uint64_t x191 = UINT64_MAX;
	volatile uint64_t t37 = 86LLU;

	t37 = (x189^((x190|x191)*x192));

	if (t37 != 18446743577104664534LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x194 = -1;
	int32_t x195 = INT32_MAX;
	int8_t x196 = 0;
	volatile int32_t t38 = -16107;

	t38 = (x193^((x194|x195)*x196));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x203 = 841833472U;
	uint64_t t39 = 0LLU;

	t39 = (x201^((x202|x203)*x204));

	if (t39 != 82646618649LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x207 = INT32_MIN;
	volatile uint64_t x208 = UINT64_MAX;
	static volatile uint64_t t40 = 1900728LLU;

	t40 = (x205^((x206|x207)*x208));

	if (t40 != 16274447101LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x210 = 24;
	uint16_t x211 = 2295U;
	volatile int32_t t41 = 9421;

	t41 = (x209^((x210|x211)*x212));

	if (t41 != 2147191166) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x214 = INT16_MAX;
	int64_t x215 = -1957359LL;
	uint32_t x216 = 285U;
	int64_t t42 = -24LL;

	t42 = (x213^((x214|x215)*x216));

	if (t42 != 550994204LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x219 = INT32_MAX;
	int8_t x220 = 27;
	volatile int32_t t43 = 1486;

	t43 = (x217^((x218|x219)*x220));

	if (t43 != -65510) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x229 = 61533U;
	static int64_t x230 = INT64_MAX;
	volatile int64_t x231 = -3468807726LL;
	static uint32_t x232 = 2995U;
	volatile int64_t t44 = -27138LL;

	t44 = (x229^((x230|x231)*x232));

	if (t44 != -64496LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x245 = INT16_MIN;
	int64_t x246 = 8685316LL;
	int32_t x247 = 26735989;
	int32_t x248 = -1;
	int64_t t45 = 10450018347186015LL;

	t45 = (x245^((x246|x247)*x248));

	if (t45 != 26708107LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x249 = 114U;
	int16_t x250 = -61;
	int32_t x251 = 7338513;
	int16_t x252 = INT16_MIN;
	int32_t t46 = 3904;

	t46 = (x249^((x250|x251)*x252));

	if (t46 != 1474674) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x253 = 46326385LLU;
	uint8_t x256 = 12U;
	static uint64_t t47 = 4179321809992240500LLU;

	t47 = (x253^((x254|x255)*x256));

	if (t47 != 4248640901LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x257 = 0U;
	volatile int32_t x258 = -114;
	int32_t x259 = INT32_MIN;
	int16_t x260 = INT16_MIN;
	int32_t t48 = 1585;

	t48 = (x257^((x258|x259)*x260));

	if (t48 != 3735552) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x262 = 4041U;
	uint32_t x264 = 5860223U;
	static volatile uint32_t t49 = 56362526U;

	t49 = (x261^((x262|x263)*x264));

	if (t49 != 5860222U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x265 = -153;
	uint32_t x266 = UINT32_MAX;
	static uint16_t x268 = 20U;
	volatile uint32_t t50 = 3328528U;

	t50 = (x265^((x266|x267)*x268));

	if (t50 != 139U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x269 = INT16_MAX;
	int32_t x271 = INT32_MIN;
	int64_t x272 = -3998612LL;
	int64_t t51 = -6498943LL;

	t51 = (x269^((x270|x271)*x272));

	if (t51 != 8586953884729343LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x273 = UINT32_MAX;
	static uint32_t x274 = 16491929U;
	int32_t x276 = -827;

	t52 = (x273^((x274|x275)*x276));

	if (t52 != 10258137000396526LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x277 = UINT64_MAX;
	static uint32_t x278 = UINT32_MAX;
	uint16_t x280 = UINT16_MAX;

	t53 = (x277^((x278|x279)*x280));

	if (t53 != 18446744069414649854LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x281 = 8121LL;
	uint64_t x283 = 136944LLU;
	int64_t x284 = 1522415LL;
	uint64_t t54 = 291749936665975461LLU;

	t54 = (x281^((x282|x283)*x284));

	if (t54 != 211617205198LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x285 = -89;
	uint8_t x286 = 0U;
	volatile int32_t t55 = 173288;

	t55 = (x285^((x286|x287)*x288));

	if (t55 != -25796) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x294 = UINT16_MAX;
	int32_t x295 = -1;
	int16_t x296 = INT16_MAX;

	t56 = (x293^((x294|x295)*x296));

	if (t56 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x299 = -1;
	volatile uint16_t x300 = UINT16_MAX;
	volatile int32_t t57 = -2494;

	t57 = (x297^((x298|x299)*x300));

	if (t57 != -65410) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x302 = 349548247338LL;
	int8_t x303 = 9;
	static int32_t x304 = -1;
	volatile int64_t t58 = 488217079474593562LL;

	t58 = (x301^((x302|x303)*x304));

	if (t58 != 9223371687306528469LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x306 = -35;
	int8_t x307 = INT8_MAX;
	uint16_t x308 = 54U;
	static int64_t t59 = 5LL;

	t59 = (x305^((x306|x307)*x308));

	if (t59 != 260284322710LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x309 = 4338U;
	int8_t x310 = -24;
	static int32_t x311 = -2445;
	uint64_t x312 = 1LLU;

	t60 = (x309^((x310|x311)*x312));

	if (t60 != 18446744073709547273LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x313 = INT32_MIN;
	uint8_t x315 = UINT8_MAX;
	int16_t x316 = -1;

	t61 = (x313^((x314|x315)*x316));

	if (t61 != -2147483647) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x317 = INT16_MIN;
	int64_t x318 = -2688LL;
	volatile uint16_t x319 = 15526U;
	static volatile int64_t t62 = -56LL;

	t62 = (x317^((x318|x319)*x320));

	if (t62 != -19759104LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x321 = -832;
	static int8_t x322 = -1;
	int16_t x323 = INT16_MIN;
	uint16_t x324 = UINT16_MAX;
	int32_t t63 = 65514;

	t63 = (x321^((x322|x323)*x324));

	if (t63 != 64705) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x325 = INT8_MIN;
	int8_t x326 = INT8_MIN;
	static volatile int8_t x328 = 34;
	volatile int32_t t64 = -9001336;

	t64 = (x325^((x326|x327)*x328));

	if (t64 != 94) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x329 = INT16_MIN;
	uint64_t x330 = 188LLU;
	uint16_t x331 = 5U;
	int8_t x332 = INT8_MAX;
	uint64_t t65 = 3031374997570392LLU;

	t65 = (x329^((x330|x331)*x332));

	if (t65 != 18446744073709542851LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x341 = 35LL;
	int16_t x342 = INT16_MIN;
	static int32_t x343 = INT32_MAX;
	uint64_t x344 = 22381LLU;
	uint64_t t66 = 45966869546749LLU;

	t66 = (x341^((x342|x343)*x344));

	if (t66 != 18446744073709529264LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x346 = INT64_MIN;
	int64_t x348 = -3734118346856689695LL;
	int64_t t67 = -54567978LL;

	t67 = (x345^((x346|x347)*x348));

	if (t67 != 3734118346856665056LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x354 = INT64_MIN;
	int32_t x355 = INT32_MIN;
	volatile uint16_t x356 = 438U;
	static int64_t t68 = 2071593118176LL;

	t68 = (x353^((x354|x355)*x356));

	if (t68 != -940597837719LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x362 = UINT32_MAX;
	int16_t x363 = INT16_MAX;
	uint64_t t69 = 2064216742070235054LLU;

	t69 = (x361^((x362|x363)*x364));

	if (t69 != 135719309761357569LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x369 = 0;
	static volatile int16_t x371 = INT16_MAX;
	uint32_t t70 = 8995635U;

	t70 = (x369^((x370|x371)*x372));

	if (t70 != 163835U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x373 = INT8_MIN;
	int8_t x374 = 34;
	static int32_t x376 = -1;
	volatile int32_t t71 = -3120414;

	t71 = (x373^((x374|x375)*x376));

	if (t71 != 65409) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x377 = 1U;
	int16_t x379 = -1;
	int32_t x380 = -179667893;
	static volatile int32_t t72 = -1;

	t72 = (x377^((x378|x379)*x380));

	if (t72 != 179667892) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x381 = 21U;
	uint32_t x382 = UINT32_MAX;
	int8_t x383 = INT8_MAX;
	static volatile int8_t x384 = INT8_MAX;
	volatile uint32_t t73 = 3943U;

	t73 = (x381^((x382|x383)*x384));

	if (t73 != 4294967188U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x385 = -65;
	uint64_t x387 = 195611762722154954LLU;
	static uint64_t t74 = 3720LLU;

	t74 = (x385^((x386|x387)*x388));

	if (t74 != 9223372036854775743LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x390 = INT8_MIN;
	uint64_t x391 = 10LLU;
	volatile int8_t x392 = -5;
	volatile uint64_t t75 = 263807741079956461LLU;

	t75 = (x389^((x390|x391)*x392));

	if (t75 != 18446744073709551025LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x393 = 3753;
	int32_t x394 = -884192655;
	int32_t x395 = 30;
	uint8_t x396 = 2U;

	t76 = (x393^((x394|x395)*x396));

	if (t76 != -1768383913) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x405 = UINT64_MAX;
	volatile int64_t x406 = INT64_MAX;
	uint16_t x408 = 2U;
	uint64_t t77 = 23782632637824996LLU;

	t77 = (x405^((x406|x407)*x408));

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x409 = 684U;
	uint64_t x410 = UINT64_MAX;
	static volatile uint8_t x412 = 3U;

	t78 = (x409^((x410|x411)*x412));

	if (t78 != 18446744073709550929LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x413 = 49U;
	uint32_t x414 = 4487U;
	int16_t x415 = -1;
	uint16_t x416 = 403U;
	volatile uint32_t t79 = 21345U;

	t79 = (x413^((x414|x415)*x416));

	if (t79 != 4294966876U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x421 = INT32_MIN;
	static volatile int64_t x422 = INT64_MIN;
	int8_t x423 = INT8_MIN;
	int64_t t80 = 344499434222492841LL;

	t80 = (x421^((x422|x423)*x424));

	if (t80 != -2147467264LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x425 = 3424851U;
	int16_t x426 = -4;
	uint64_t x427 = 116576369LLU;
	static volatile uint32_t x428 = 6U;
	uint64_t t81 = 5029LLU;

	t81 = (x425^((x426|x427)*x428));

	if (t81 != 18446744073706126781LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x429 = INT64_MIN;
	static int16_t x430 = INT16_MIN;
	static uint16_t x431 = 181U;
	volatile int16_t x432 = INT16_MIN;
	volatile int64_t t82 = -72285132060LL;

	t82 = (x429^((x430|x431)*x432));

	if (t82 != -9223372035786964992LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x434 = 121U;
	static uint64_t x435 = 53017LLU;
	static int16_t x436 = INT16_MAX;
	uint64_t t83 = 9274437416LLU;

	t83 = (x433^((x434|x435)*x436));

	if (t83 != 1740353669LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x437 = 195514397134171312LLU;
	int32_t x438 = INT32_MIN;
	volatile int32_t x439 = INT32_MAX;
	int32_t x440 = -1;
	static uint64_t t84 = 5580352446546LLU;

	t84 = (x437^((x438|x439)*x440));

	if (t84 != 195514397134171313LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x443 = 0U;
	volatile int8_t x444 = 1;
	static volatile int64_t t85 = 1232761811LL;

	t85 = (x441^((x442|x443)*x444));

	if (t85 != -9223372036854775776LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x445 = 13U;
	int16_t x446 = -1;
	int32_t x447 = -1;
	int16_t x448 = INT16_MIN;
	int32_t t86 = -3115580;

	t86 = (x445^((x446|x447)*x448));

	if (t86 != 32781) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x450 = -1;
	static volatile int64_t t87 = 1986993458123487004LL;

	t87 = (x449^((x450|x451)*x452));

	if (t87 != 9223372032559808520LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x453 = -192;
	int64_t x454 = INT64_MIN;
	int32_t x455 = INT32_MIN;
	static uint64_t x456 = UINT64_MAX;
	volatile uint64_t t88 = 9977988667385878LLU;

	t88 = (x453^((x454|x455)*x456));

	if (t88 != 18446744071562067776LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x469 = -10;
	uint32_t x470 = 5U;
	int8_t x471 = -1;
	static int64_t t89 = -532958408LL;

	t89 = (x469^((x470|x471)*x472));

	if (t89 != 4294967287LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x473 = 6;
	uint32_t x474 = UINT32_MAX;
	static int32_t x475 = -13645;
	int16_t x476 = INT16_MIN;
	uint32_t t90 = 8403951U;

	t90 = (x473^((x474|x475)*x476));

	if (t90 != 32774U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x477 = INT32_MIN;
	int32_t x478 = -3146;
	int64_t x479 = INT64_MIN;
	volatile uint8_t x480 = UINT8_MAX;

	t91 = (x477^((x478|x479)*x480));

	if (t91 != 2146681418LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x481 = INT8_MAX;
	volatile int16_t x482 = -1298;
	int16_t x483 = -67;
	int16_t x484 = INT16_MIN;
	static int32_t t92 = 1282850;

	t92 = (x481^((x482|x483)*x484));

	if (t92 != 32895) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x486 = -9;
	int16_t x487 = 98;
	uint16_t x488 = 453U;
	volatile int32_t t93 = -329;

	t93 = (x485^((x486|x487)*x488));

	if (t93 != -3860) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x489 = 60112415383614247LLU;
	uint8_t x490 = 60U;
	volatile int8_t x491 = 6;
	int64_t x492 = -1LL;
	uint64_t t94 = 219307LLU;

	t94 = (x489^((x490|x491)*x492));

	if (t94 != 18386631658325937381LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x493 = 3;
	uint16_t x494 = 59U;
	int8_t x495 = -1;
	static uint64_t x496 = UINT64_MAX;
	volatile uint64_t t95 = 7263LLU;

	t95 = (x493^((x494|x495)*x496));

	if (t95 != 2LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x501 = -1;
	uint64_t x502 = 104548587602735LLU;
	static volatile int32_t x503 = -1;

	t96 = (x501^((x502|x503)*x504));

	if (t96 != 34804450756392LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x505 = 1U;
	volatile int8_t x506 = -1;
	int32_t x507 = -1;
	int64_t x508 = -374LL;

	t97 = (x505^((x506|x507)*x508));

	if (t97 != 375LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x509 = INT8_MAX;
	int32_t x511 = INT32_MIN;
	int8_t x512 = 2;
	static uint32_t t98 = 108U;

	t98 = (x509^((x510|x511)*x512));

	if (t98 != 2760298047U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x513 = 0U;
	int64_t x514 = INT64_MIN;
	int16_t x516 = -1;
	int64_t t99 = 13974LL;

	t99 = (x513^((x514|x515)*x516));

	if (t99 != 9223372036854775784LL) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x10 = INT8_MAX;
volatile int16_t x11 = 0;
int64_t x14 = INT64_MAX;
int32_t t4 = 56199;
int16_t x22 = -559;
volatile int64_t x27 = -1LL;
uint32_t x34 = 60872U;
int8_t x36 = INT8_MAX;
uint16_t x37 = 8163U;
volatile uint32_t x43 = UINT32_MAX;
uint64_t x47 = 4900LLU;
volatile int32_t t12 = -41430;
int32_t x53 = INT32_MAX;
int64_t x55 = 227458285620403356LL;
static volatile int32_t t14 = -8895278;
int64_t x69 = INT64_MIN;
static volatile int32_t t17 = 182884;
static volatile int32_t t18 = -47526;
int8_t x84 = INT8_MIN;
volatile int16_t x85 = INT16_MIN;
volatile int64_t x86 = 1283LL;
static uint8_t x87 = 4U;
int32_t x94 = INT32_MIN;
int64_t x99 = -1LL;
int16_t x100 = INT16_MIN;
uint64_t x103 = UINT64_MAX;
int32_t t25 = 252708;
volatile int8_t x110 = 1;
static int32_t t28 = -57;
static int32_t x123 = INT32_MIN;
int64_t x129 = 3LL;
volatile int64_t x131 = -1LL;
int8_t x146 = -1;
int16_t x151 = INT16_MIN;
volatile int32_t t36 = -1127;
int16_t x155 = -12146;
static int32_t x167 = INT32_MIN;
int16_t x174 = -7;
static int32_t x175 = INT32_MAX;
uint16_t x182 = 202U;
int32_t t43 = -9072114;
static int32_t t46 = 14763691;
int32_t x205 = INT32_MIN;
int8_t x208 = -18;
int64_t x211 = -10775671LL;
volatile int32_t t51 = -7338310;
uint32_t x223 = UINT32_MAX;
int8_t x230 = INT8_MIN;
uint64_t x232 = UINT64_MAX;
uint8_t x238 = UINT8_MAX;
int32_t t57 = -59657;
uint8_t x257 = 0U;
int64_t x264 = INT64_MAX;
uint16_t x267 = UINT16_MAX;
uint8_t x269 = 4U;
uint32_t x273 = 6456861U;
int8_t x277 = 4;
uint64_t x278 = UINT64_MAX;
uint32_t x284 = 182925056U;
volatile int8_t x285 = -1;
int16_t x294 = INT16_MIN;
static uint32_t x300 = 1930867398U;
volatile uint8_t x307 = UINT8_MAX;
int16_t x308 = -1;
uint8_t x312 = 4U;
uint16_t x315 = 14U;
static uint64_t x321 = UINT64_MAX;
uint64_t x322 = UINT64_MAX;
static int8_t x326 = INT8_MAX;
int16_t x327 = INT16_MIN;
static volatile int32_t t78 = -1;
volatile int8_t x353 = -1;
int32_t t86 = 238121;
static int64_t x365 = 15835309675280300LL;
uint64_t x371 = 2868428943LLU;
volatile uint8_t x373 = UINT8_MAX;
int64_t x376 = INT64_MIN;
int64_t x378 = 56876797780228031LL;
static volatile int32_t t90 = -1;
static uint32_t x390 = UINT32_MAX;
int16_t x391 = -216;
static int32_t t93 = 145083951;
int16_t x396 = -1;
int32_t t94 = 224133;
volatile uint8_t x400 = UINT8_MAX;
volatile int16_t x407 = INT16_MIN;
int64_t x411 = INT64_MAX;
volatile uint64_t x414 = 247838LLU;
int32_t t99 = -2915171;


void f0(void) {
	volatile int64_t x1 = -2953975LL;
	static int8_t x2 = -1;
	int8_t x3 = 0;
	volatile int8_t x4 = -1;
	static int32_t t0 = 20847914;

	t0 = ((x1-(x2|x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int8_t x6 = INT8_MAX;
	int8_t x7 = INT8_MIN;
	static int32_t x8 = INT32_MIN;
	int32_t t1 = 981559469;

	t1 = ((x5-(x6|x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 1499921LL;
	volatile uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = 64065;

	t2 = ((x9-(x10|x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 0U;
	static uint32_t x15 = 7U;
	int16_t x16 = -1;
	volatile int32_t t3 = 1481234;

	t3 = ((x13-(x14|x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	uint64_t x18 = 1LLU;
	uint32_t x19 = 1048U;
	volatile int32_t x20 = INT32_MIN;

	t4 = ((x17-(x18|x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 48;
	int32_t x23 = INT32_MIN;
	uint64_t x24 = 55LLU;
	int32_t t5 = 33117391;

	t5 = ((x21-(x22|x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	static int32_t x26 = 22;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = -1;

	t6 = ((x25-(x26|x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	uint64_t x30 = 3947LLU;
	uint8_t x31 = UINT8_MAX;
	static uint16_t x32 = UINT16_MAX;
	int32_t t7 = 150528143;

	t7 = ((x29-(x30|x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -140769014;
	static uint64_t x35 = UINT64_MAX;
	int32_t t8 = 128060;

	t8 = ((x33-(x34|x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x38 = 21362U;
	int64_t x39 = -1LL;
	uint64_t x40 = UINT64_MAX;
	volatile int32_t t9 = -1288;

	t9 = ((x37-(x38|x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 31131LL;
	uint8_t x42 = 8U;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = 84308;

	t10 = ((x41-(x42|x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	uint16_t x46 = 935U;
	int32_t x48 = 1;
	static volatile int32_t t11 = 420799;

	t11 = ((x45-(x46|x47))<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = -1;
	int8_t x50 = 1;
	int8_t x51 = -1;
	uint8_t x52 = UINT8_MAX;

	t12 = ((x49-(x50|x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = -8080;
	int64_t x56 = 2030539134871LL;
	volatile int32_t t13 = -57295507;

	t13 = ((x53-(x54|x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	volatile int32_t x58 = -2680;
	volatile int8_t x59 = INT8_MIN;
	int8_t x60 = -1;

	t14 = ((x57-(x58|x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 30747886U;
	uint32_t x62 = 1018600464U;
	int64_t x63 = INT64_MIN;
	volatile int64_t x64 = -1LL;
	int32_t t15 = 0;

	t15 = ((x61-(x62|x63))<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	static int16_t x66 = 1;
	static uint8_t x67 = 93U;
	uint64_t x68 = UINT64_MAX;
	static volatile int32_t t16 = -52655101;

	t16 = ((x65-(x66|x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = 14;
	int8_t x71 = -1;
	uint8_t x72 = 7U;

	t17 = ((x69-(x70|x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x73 = 130861473U;
	volatile int16_t x74 = -1;
	int32_t x75 = INT32_MAX;
	uint64_t x76 = 1072150375128LLU;

	t18 = ((x73-(x74|x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 189675;
	static uint16_t x78 = UINT16_MAX;
	static int64_t x79 = INT64_MAX;
	int32_t x80 = -401;
	int32_t t19 = -671425419;

	t19 = ((x77-(x78|x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = -3365;
	static uint8_t x82 = UINT8_MAX;
	uint8_t x83 = 10U;
	volatile int32_t t20 = 0;

	t20 = ((x81-(x82|x83))<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x88 = 135775670U;
	volatile int32_t t21 = -3;

	t21 = ((x85-(x86|x87))<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x89 = 14U;
	int32_t x90 = INT32_MAX;
	static int32_t x91 = INT32_MIN;
	static int16_t x92 = INT16_MAX;
	static int32_t t22 = 2;

	t22 = ((x89-(x90|x91))<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = -45;
	int64_t x95 = INT64_MAX;
	uint64_t x96 = 59443LLU;
	int32_t t23 = -197322;

	t23 = ((x93-(x94|x95))<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -2099;
	int32_t x98 = 0;
	int32_t t24 = -2311;

	t24 = ((x97-(x98|x99))<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	static uint32_t x102 = UINT32_MAX;
	int32_t x104 = INT32_MAX;

	t25 = ((x101-(x102|x103))<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = UINT8_MAX;
	int32_t x106 = INT32_MIN;
	uint16_t x107 = UINT16_MAX;
	uint16_t x108 = UINT16_MAX;
	int32_t t26 = -28905;

	t26 = ((x105-(x106|x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 6U;
	uint8_t x111 = 37U;
	volatile int64_t x112 = INT64_MAX;
	volatile int32_t t27 = 28441;

	t27 = ((x109-(x110|x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MIN;
	uint8_t x118 = 52U;
	int64_t x119 = -405722LL;
	int16_t x120 = INT16_MIN;

	t28 = ((x117-(x118|x119))<=x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x121 = 12189708142362LLU;
	static volatile int64_t x122 = INT64_MAX;
	static int16_t x124 = 10;
	int32_t t29 = 961;

	t29 = ((x121-(x122|x123))<=x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MAX;
	static int16_t x126 = -62;
	static int16_t x127 = INT16_MIN;
	static int32_t x128 = -1;
	int32_t t30 = 0;

	t30 = ((x125-(x126|x127))<=x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x130 = INT16_MAX;
	uint8_t x132 = 7U;
	volatile int32_t t31 = -1996;

	t31 = ((x129-(x130|x131))<=x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = -1;
	int8_t x134 = INT8_MIN;
	int8_t x135 = INT8_MAX;
	uint64_t x136 = 192297497319991039LLU;
	volatile int32_t t32 = -11478;

	t32 = ((x133-(x134|x135))<=x136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = -8218267551686691LL;
	uint64_t x138 = 105095706LLU;
	int64_t x139 = INT64_MAX;
	uint16_t x140 = UINT16_MAX;
	volatile int32_t t33 = -156;

	t33 = ((x137-(x138|x139))<=x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x141 = 79LLU;
	static int32_t x142 = INT32_MIN;
	uint32_t x143 = 1032223U;
	static int16_t x144 = INT16_MIN;
	int32_t t34 = 7157;

	t34 = ((x141-(x142|x143))<=x144);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = 155228U;
	int64_t x147 = 200776LL;
	static int8_t x148 = -1;
	static volatile int32_t t35 = 1;

	t35 = ((x145-(x146|x147))<=x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x149 = 1454324LLU;
	int16_t x150 = INT16_MAX;
	int64_t x152 = 0LL;

	t36 = ((x149-(x150|x151))<=x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = UINT64_MAX;
	int8_t x154 = INT8_MIN;
	int64_t x156 = 70318055LL;
	volatile int32_t t37 = -73978859;

	t37 = ((x153-(x154|x155))<=x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = 296;
	int16_t x162 = INT16_MIN;
	int16_t x163 = -2065;
	volatile int64_t x164 = INT64_MAX;
	static volatile int32_t t38 = 3;

	t38 = ((x161-(x162|x163))<=x164);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x165 = UINT64_MAX;
	static int8_t x166 = -1;
	int64_t x168 = -1LL;
	volatile int32_t t39 = 234081154;

	t39 = ((x165-(x166|x167))<=x168);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x169 = -1218376969122LL;
	int16_t x170 = 127;
	int64_t x171 = -1LL;
	volatile uint8_t x172 = 1U;
	volatile int32_t t40 = -1;

	t40 = ((x169-(x170|x171))<=x172);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x173 = INT16_MIN;
	uint8_t x176 = UINT8_MAX;
	int32_t t41 = 98934;

	t41 = ((x173-(x174|x175))<=x176);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x177 = 1681U;
	static uint64_t x178 = 226365833LLU;
	int16_t x179 = INT16_MIN;
	volatile int32_t x180 = INT32_MIN;
	int32_t t42 = 41112;

	t42 = ((x177-(x178|x179))<=x180);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x181 = INT8_MAX;
	uint8_t x183 = UINT8_MAX;
	int32_t x184 = INT32_MIN;

	t43 = ((x181-(x182|x183))<=x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x189 = INT64_MIN;
	int16_t x190 = INT16_MIN;
	int16_t x191 = -1;
	int16_t x192 = INT16_MIN;
	static int32_t t44 = 31444062;

	t44 = ((x189-(x190|x191))<=x192);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x193 = -1LL;
	uint8_t x194 = 20U;
	int16_t x195 = -17;
	static uint8_t x196 = 3U;
	volatile int32_t t45 = 12568321;

	t45 = ((x193-(x194|x195))<=x196);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = -7105;
	int64_t x198 = INT64_MIN;
	int32_t x199 = 1360;
	int16_t x200 = INT16_MAX;

	t46 = ((x197-(x198|x199))<=x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x201 = 8112U;
	int64_t x202 = INT64_MAX;
	int16_t x203 = -1;
	uint64_t x204 = 283924LLU;
	int32_t t47 = 1;

	t47 = ((x201-(x202|x203))<=x204);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x206 = INT8_MIN;
	int32_t x207 = INT32_MIN;
	int32_t t48 = 568;

	t48 = ((x205-(x206|x207))<=x208);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x209 = 886U;
	uint16_t x210 = UINT16_MAX;
	uint16_t x212 = 16927U;
	static volatile int32_t t49 = 56094;

	t49 = ((x209-(x210|x211))<=x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x213 = -1;
	uint16_t x214 = 0U;
	int8_t x215 = INT8_MIN;
	static uint16_t x216 = UINT16_MAX;
	static volatile int32_t t50 = 92;

	t50 = ((x213-(x214|x215))<=x216);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x217 = -11;
	volatile int64_t x218 = 942961918630699771LL;
	uint32_t x219 = 319U;
	static volatile int64_t x220 = INT64_MIN;

	t51 = ((x217-(x218|x219))<=x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x221 = INT8_MAX;
	uint8_t x222 = 40U;
	uint32_t x224 = 254U;
	int32_t t52 = 27;

	t52 = ((x221-(x222|x223))<=x224);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = INT8_MIN;
	uint32_t x226 = UINT32_MAX;
	int8_t x227 = -1;
	uint32_t x228 = UINT32_MAX;
	volatile int32_t t53 = -2194;

	t53 = ((x225-(x226|x227))<=x228);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x229 = 406644114981182LLU;
	int16_t x231 = INT16_MIN;
	volatile int32_t t54 = -7831234;

	t54 = ((x229-(x230|x231))<=x232);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x233 = INT8_MAX;
	uint8_t x234 = 0U;
	volatile int16_t x235 = INT16_MIN;
	int32_t x236 = 1;
	int32_t t55 = -994;

	t55 = ((x233-(x234|x235))<=x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x237 = UINT16_MAX;
	int16_t x239 = -1;
	uint8_t x240 = UINT8_MAX;
	volatile int32_t t56 = -232270421;

	t56 = ((x237-(x238|x239))<=x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x241 = INT64_MIN;
	int16_t x242 = INT16_MIN;
	int16_t x243 = INT16_MIN;
	int64_t x244 = INT64_MAX;

	t57 = ((x241-(x242|x243))<=x244);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = INT16_MIN;
	volatile uint64_t x246 = UINT64_MAX;
	uint8_t x247 = 0U;
	uint64_t x248 = UINT64_MAX;
	static volatile int32_t t58 = 2;

	t58 = ((x245-(x246|x247))<=x248);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x249 = INT32_MAX;
	int64_t x250 = 224789LL;
	int32_t x251 = INT32_MAX;
	volatile uint16_t x252 = 54U;
	volatile int32_t t59 = 16;

	t59 = ((x249-(x250|x251))<=x252);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x253 = INT16_MAX;
	static int32_t x254 = INT32_MAX;
	volatile int32_t x255 = -27357615;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t60 = 32378045;

	t60 = ((x253-(x254|x255))<=x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x258 = 18603756027974446LLU;
	int64_t x259 = INT64_MIN;
	int8_t x260 = 28;
	volatile int32_t t61 = 76529824;

	t61 = ((x257-(x258|x259))<=x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = INT16_MIN;
	uint32_t x262 = 64090U;
	static int8_t x263 = INT8_MAX;
	static int32_t t62 = 262;

	t62 = ((x261-(x262|x263))<=x264);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = -1;
	int8_t x266 = INT8_MAX;
	static int8_t x268 = INT8_MIN;
	volatile int32_t t63 = 175371137;

	t63 = ((x265-(x266|x267))<=x268);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x270 = INT32_MIN;
	int64_t x271 = INT64_MIN;
	volatile int16_t x272 = -1;
	static int32_t t64 = 6;

	t64 = ((x269-(x270|x271))<=x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x274 = -1LL;
	volatile int64_t x275 = -1LL;
	static uint16_t x276 = UINT16_MAX;
	int32_t t65 = 53558584;

	t65 = ((x273-(x274|x275))<=x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x279 = INT16_MIN;
	int16_t x280 = 0;
	int32_t t66 = -689;

	t66 = ((x277-(x278|x279))<=x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x281 = 18U;
	int64_t x282 = -7LL;
	int8_t x283 = INT8_MIN;
	static volatile int32_t t67 = -3;

	t67 = ((x281-(x282|x283))<=x284);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x286 = 86716;
	volatile uint8_t x287 = UINT8_MAX;
	int16_t x288 = INT16_MIN;
	volatile int32_t t68 = 2819813;

	t68 = ((x285-(x286|x287))<=x288);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x289 = INT8_MIN;
	static int8_t x290 = -3;
	int32_t x291 = INT32_MIN;
	int8_t x292 = INT8_MIN;
	static int32_t t69 = -918;

	t69 = ((x289-(x290|x291))<=x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x293 = 20U;
	int32_t x295 = -32747789;
	int64_t x296 = 3554LL;
	static int32_t t70 = 11;

	t70 = ((x293-(x294|x295))<=x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x297 = 0U;
	int16_t x298 = -1;
	int16_t x299 = -1;
	int32_t t71 = 78624;

	t71 = ((x297-(x298|x299))<=x300);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x301 = INT64_MAX;
	uint64_t x302 = 414LLU;
	uint64_t x303 = 18112220492326937LLU;
	volatile uint16_t x304 = 7186U;
	static int32_t t72 = 3310;

	t72 = ((x301-(x302|x303))<=x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x305 = UINT64_MAX;
	volatile uint8_t x306 = UINT8_MAX;
	int32_t t73 = 1336;

	t73 = ((x305-(x306|x307))<=x308);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x309 = -1LL;
	static int64_t x310 = 101102LL;
	volatile int8_t x311 = INT8_MIN;
	int32_t t74 = -433;

	t74 = ((x309-(x310|x311))<=x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x313 = INT64_MIN;
	uint64_t x314 = UINT64_MAX;
	uint8_t x316 = UINT8_MAX;
	volatile int32_t t75 = 0;

	t75 = ((x313-(x314|x315))<=x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x317 = INT32_MAX;
	static uint64_t x318 = 13376LLU;
	volatile uint16_t x319 = UINT16_MAX;
	volatile uint32_t x320 = UINT32_MAX;
	volatile int32_t t76 = 677714887;

	t76 = ((x317-(x318|x319))<=x320);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x323 = 26U;
	static int32_t x324 = INT32_MIN;
	int32_t t77 = 12473;

	t77 = ((x321-(x322|x323))<=x324);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x325 = 2582U;
	int16_t x328 = INT16_MIN;

	t78 = ((x325-(x326|x327))<=x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x329 = -3;
	static volatile int64_t x330 = -28304LL;
	int32_t x331 = -23;
	static int32_t x332 = INT32_MAX;
	static int32_t t79 = 221298;

	t79 = ((x329-(x330|x331))<=x332);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x337 = 950767816560LLU;
	int8_t x338 = INT8_MIN;
	static uint32_t x339 = 183832U;
	static volatile int32_t x340 = -261206952;
	static volatile int32_t t80 = 12614835;

	t80 = ((x337-(x338|x339))<=x340);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x341 = -1;
	uint8_t x342 = 79U;
	static int64_t x343 = INT64_MIN;
	uint16_t x344 = 4367U;
	static int32_t t81 = 124;

	t81 = ((x341-(x342|x343))<=x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x345 = UINT32_MAX;
	uint32_t x346 = 0U;
	int16_t x347 = INT16_MIN;
	static int16_t x348 = INT16_MIN;
	int32_t t82 = 24542923;

	t82 = ((x345-(x346|x347))<=x348);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x349 = 2773U;
	int64_t x350 = INT64_MAX;
	int32_t x351 = INT32_MAX;
	uint8_t x352 = 1U;
	volatile int32_t t83 = -3500;

	t83 = ((x349-(x350|x351))<=x352);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x354 = 497U;
	int8_t x355 = -1;
	static int16_t x356 = -89;
	static int32_t t84 = -265;

	t84 = ((x353-(x354|x355))<=x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x357 = 14U;
	uint8_t x358 = 1U;
	int32_t x359 = INT32_MAX;
	uint64_t x360 = 62317998LLU;
	int32_t t85 = 547038513;

	t85 = ((x357-(x358|x359))<=x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = -18;
	int64_t x362 = -388952350591LL;
	int16_t x363 = -108;
	uint32_t x364 = 776725U;

	t86 = ((x361-(x362|x363))<=x364);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x366 = -1;
	volatile uint32_t x367 = 20183U;
	int32_t x368 = INT32_MIN;
	volatile int32_t t87 = 25;

	t87 = ((x365-(x366|x367))<=x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x369 = 607;
	volatile int16_t x370 = -193;
	int8_t x372 = 40;
	static int32_t t88 = 1;

	t88 = ((x369-(x370|x371))<=x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x374 = -20740;
	int64_t x375 = -25513643361084258LL;
	int32_t t89 = -3366082;

	t89 = ((x373-(x374|x375))<=x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x377 = INT8_MIN;
	static int32_t x379 = INT32_MIN;
	static volatile int16_t x380 = INT16_MIN;

	t90 = ((x377-(x378|x379))<=x380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint32_t x381 = 13U;
	static int64_t x382 = 142739136787964923LL;
	static volatile int64_t x383 = 33566075124883LL;
	uint8_t x384 = UINT8_MAX;
	static int32_t t91 = -1;

	t91 = ((x381-(x382|x383))<=x384);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x385 = INT8_MIN;
	int16_t x386 = -1;
	static int8_t x387 = INT8_MIN;
	int32_t x388 = INT32_MIN;
	volatile int32_t t92 = -231701715;

	t92 = ((x385-(x386|x387))<=x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x389 = -47;
	uint8_t x392 = 0U;

	t93 = ((x389-(x390|x391))<=x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x393 = UINT32_MAX;
	uint32_t x394 = UINT32_MAX;
	volatile int32_t x395 = -1;

	t94 = ((x393-(x394|x395))<=x396);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint16_t x397 = 337U;
	int64_t x398 = -1LL;
	volatile int8_t x399 = INT8_MAX;
	int32_t t95 = 771077;

	t95 = ((x397-(x398|x399))<=x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x401 = -1;
	int8_t x402 = INT8_MIN;
	volatile int16_t x403 = -1;
	int16_t x404 = 19;
	volatile int32_t t96 = 5031;

	t96 = ((x401-(x402|x403))<=x404);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x405 = INT8_MIN;
	static int16_t x406 = INT16_MAX;
	static int8_t x408 = 15;
	int32_t t97 = 43;

	t97 = ((x405-(x406|x407))<=x408);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x409 = INT32_MIN;
	volatile int32_t x410 = -989001166;
	uint16_t x412 = 3U;
	int32_t t98 = -10884496;

	t98 = ((x409-(x410|x411))<=x412);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x413 = 0;
	static int32_t x415 = INT32_MAX;
	static uint32_t x416 = UINT32_MAX;

	t99 = ((x413-(x414|x415))<=x416);

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


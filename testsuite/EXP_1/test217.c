#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = INT64_MIN;
int64_t x10 = INT64_MIN;
static int32_t t4 = -14650;
int64_t x23 = INT64_MIN;
int32_t x24 = 114126;
static uint64_t x41 = UINT64_MAX;
int32_t t10 = 29993;
int64_t x59 = -5LL;
static int32_t t12 = -88;
volatile uint8_t x64 = 40U;
volatile int64_t x71 = INT64_MAX;
uint32_t x73 = 29691339U;
volatile int32_t t16 = 1536;
volatile int32_t t17 = -4395;
int64_t x86 = 3LL;
volatile int16_t x87 = INT16_MIN;
uint16_t x90 = 1U;
static volatile int16_t x91 = -2;
volatile int32_t t20 = 600623;
static int32_t t21 = 555686;
static int8_t x98 = -3;
int64_t x100 = INT64_MIN;
int8_t x106 = INT8_MAX;
int16_t x109 = 6;
uint8_t x114 = 0U;
uint8_t x116 = 14U;
volatile int64_t x121 = INT64_MIN;
static int32_t t28 = -16;
uint16_t x130 = 29280U;
int16_t x131 = INT16_MIN;
int8_t x143 = -1;
uint32_t x153 = 86084U;
uint32_t x155 = 108344U;
volatile int64_t x160 = INT64_MIN;
int64_t x170 = INT64_MIN;
int64_t x175 = -13558170147785549LL;
int8_t x183 = 1;
int16_t x184 = INT16_MIN;
int64_t x192 = -274693440673LL;
int16_t x197 = 21;
int8_t x204 = INT8_MAX;
int8_t x209 = 11;
static int64_t x210 = INT64_MAX;
static int32_t t50 = 46094;
int16_t x248 = -2;
int64_t x254 = INT64_MAX;
int64_t x263 = 520560167549LL;
static int8_t x264 = INT8_MAX;
int8_t x271 = INT8_MIN;
uint64_t x279 = 983155557625931LLU;
uint32_t x286 = 1531501U;
uint64_t x303 = UINT64_MAX;
volatile int64_t x306 = INT64_MIN;
uint64_t x309 = UINT64_MAX;
uint64_t x317 = UINT64_MAX;
int8_t x318 = 38;
uint16_t x334 = 137U;
static volatile int32_t t72 = 1;
static uint16_t x341 = 0U;
int8_t x344 = -18;
uint8_t x351 = UINT8_MAX;
int16_t x358 = INT16_MIN;
int16_t x364 = -1;
static volatile int32_t x365 = -1;
static int16_t x378 = INT16_MIN;
volatile int32_t x383 = INT32_MIN;
int8_t x388 = INT8_MIN;
int32_t x393 = -472104698;
int64_t x396 = 51226666418413400LL;
int8_t x404 = -1;
static int32_t t85 = 1127726;
static volatile int8_t x413 = -1;
volatile int32_t t87 = -28701;
static int16_t x429 = INT16_MAX;
int32_t x430 = INT32_MAX;
int32_t t89 = -34;
int16_t x441 = INT16_MIN;
static int32_t x444 = INT32_MAX;
int8_t x447 = INT8_MIN;
int64_t x451 = INT64_MIN;
uint16_t x454 = 1U;
uint64_t x458 = UINT64_MAX;
uint16_t x468 = 0U;
volatile int32_t t96 = -16004;
volatile int32_t t97 = -660243900;
int16_t x478 = INT16_MIN;
int32_t t98 = -24;


void f0(void) {
	uint32_t x1 = 759U;
	int16_t x2 = -1;
	uint8_t x3 = UINT8_MAX;
	volatile int32_t t0 = 1027533605;

	t0 = (((x1-x2)/x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = UINT64_MAX;
	uint16_t x6 = UINT16_MAX;
	volatile int16_t x7 = 21;
	int32_t x8 = INT32_MIN;
	int32_t t1 = 1484;

	t1 = (((x5-x6)/x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	volatile int16_t x11 = INT16_MAX;
	int16_t x12 = 6;
	volatile int32_t t2 = 14;

	t2 = (((x9-x10)/x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 1202LL;
	static uint8_t x14 = UINT8_MAX;
	int16_t x15 = INT16_MIN;
	int32_t x16 = 75825;
	static volatile int32_t t3 = -217432;

	t3 = (((x13-x14)/x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 0;
	uint64_t x18 = 7964240815468957LLU;
	int8_t x19 = -1;
	static int64_t x20 = INT64_MIN;

	t4 = (((x17-x18)/x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	static int16_t x22 = INT16_MIN;
	int32_t t5 = -5485;

	t5 = (((x21-x22)/x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = 17;
	int32_t x30 = INT32_MAX;
	int16_t x31 = -1;
	static volatile int32_t x32 = INT32_MIN;
	static int32_t t6 = 2037;

	t6 = (((x29-x30)/x31)<x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = INT32_MIN;
	int64_t x38 = 2704896608361967LL;
	int32_t x39 = INT32_MAX;
	uint16_t x40 = 3U;
	static volatile int32_t t7 = 2121464;

	t7 = (((x37-x38)/x39)<x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x42 = -1LL;
	volatile uint32_t x43 = 1502U;
	int32_t x44 = INT32_MIN;
	volatile int32_t t8 = 437435;

	t8 = (((x41-x42)/x43)<x44);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x45 = -1;
	uint16_t x46 = UINT16_MAX;
	int32_t x47 = -1;
	static uint16_t x48 = UINT16_MAX;
	int32_t t9 = 90;

	t9 = (((x45-x46)/x47)<x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x49 = INT64_MIN;
	static volatile int64_t x50 = INT64_MIN;
	volatile int64_t x51 = INT64_MIN;
	int64_t x52 = INT64_MAX;

	t10 = (((x49-x50)/x51)<x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x53 = INT64_MIN;
	int16_t x54 = -1;
	volatile int64_t x55 = -1LL;
	uint64_t x56 = UINT64_MAX;
	int32_t t11 = -5849;

	t11 = (((x53-x54)/x55)<x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x57 = 102562465627723403LLU;
	int32_t x58 = INT32_MIN;
	int64_t x60 = INT64_MIN;

	t12 = (((x57-x58)/x59)<x60);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = 0U;
	volatile int32_t x62 = -77;
	int64_t x63 = INT64_MIN;
	int32_t t13 = -1359088;

	t13 = (((x61-x62)/x63)<x64);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x65 = INT16_MAX;
	uint8_t x66 = 0U;
	volatile int32_t x67 = INT32_MAX;
	static volatile int16_t x68 = INT16_MIN;
	static volatile int32_t t14 = -1;

	t14 = (((x65-x66)/x67)<x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x69 = 0;
	volatile int16_t x70 = 192;
	int16_t x72 = INT16_MIN;
	static int32_t t15 = 0;

	t15 = (((x69-x70)/x71)<x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x74 = 1311046;
	volatile int16_t x75 = INT16_MIN;
	volatile int16_t x76 = -1747;

	t16 = (((x73-x74)/x75)<x76);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	volatile int32_t x78 = INT32_MIN;
	uint64_t x79 = 4LLU;
	int32_t x80 = -1;

	t17 = (((x77-x78)/x79)<x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x81 = 921608524LLU;
	volatile uint8_t x82 = 25U;
	int32_t x83 = INT32_MAX;
	volatile int64_t x84 = INT64_MIN;
	volatile int32_t t18 = 30;

	t18 = (((x81-x82)/x83)<x84);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = UINT32_MAX;
	int8_t x88 = INT8_MAX;
	volatile int32_t t19 = 0;

	t19 = (((x85-x86)/x87)<x88);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = -1;
	int64_t x92 = INT64_MAX;

	t20 = (((x89-x90)/x91)<x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = 0U;
	int32_t x94 = -1;
	uint16_t x95 = 314U;
	int8_t x96 = INT8_MIN;

	t21 = (((x93-x94)/x95)<x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x97 = 1;
	static int64_t x99 = 65285038LL;
	static volatile int32_t t22 = -8;

	t22 = (((x97-x98)/x99)<x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = 486644721562234LLU;
	int8_t x102 = -1;
	static uint32_t x103 = 127U;
	int16_t x104 = INT16_MIN;
	volatile int32_t t23 = -486;

	t23 = (((x101-x102)/x103)<x104);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = UINT64_MAX;
	int16_t x107 = INT16_MAX;
	int16_t x108 = INT16_MIN;
	int32_t t24 = -243399;

	t24 = (((x105-x106)/x107)<x108);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x110 = -1;
	int64_t x111 = INT64_MIN;
	int16_t x112 = INT16_MIN;
	int32_t t25 = 0;

	t25 = (((x109-x110)/x111)<x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x113 = -835779447LL;
	int64_t x115 = -17631712021948LL;
	static int32_t t26 = -8;

	t26 = (((x113-x114)/x115)<x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = INT8_MIN;
	volatile uint64_t x118 = 149195744256087268LLU;
	static int16_t x119 = INT16_MIN;
	int16_t x120 = 0;
	volatile int32_t t27 = 15;

	t27 = (((x117-x118)/x119)<x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x122 = INT16_MIN;
	uint8_t x123 = 1U;
	int16_t x124 = 3214;

	t28 = (((x121-x122)/x123)<x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x129 = 45399904542LLU;
	int32_t x132 = INT32_MIN;
	volatile int32_t t29 = 126367;

	t29 = (((x129-x130)/x131)<x132);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = INT8_MAX;
	int64_t x134 = -1LL;
	static volatile int8_t x135 = -1;
	int8_t x136 = INT8_MIN;
	volatile int32_t t30 = -1215;

	t30 = (((x133-x134)/x135)<x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x137 = 292596794U;
	static uint32_t x138 = UINT32_MAX;
	int8_t x139 = INT8_MAX;
	int64_t x140 = -1LL;
	volatile int32_t t31 = 1584686;

	t31 = (((x137-x138)/x139)<x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x141 = 28851U;
	volatile int32_t x142 = -1;
	int8_t x144 = -1;
	volatile int32_t t32 = -955060;

	t32 = (((x141-x142)/x143)<x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x145 = -1;
	uint8_t x146 = 59U;
	uint16_t x147 = 8U;
	static int16_t x148 = INT16_MIN;
	volatile int32_t t33 = 404;

	t33 = (((x145-x146)/x147)<x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x149 = INT64_MIN;
	uint64_t x150 = 14201665640LLU;
	static volatile int64_t x151 = 6LL;
	uint16_t x152 = UINT16_MAX;
	static volatile int32_t t34 = -15261;

	t34 = (((x149-x150)/x151)<x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x154 = UINT8_MAX;
	int8_t x156 = INT8_MAX;
	int32_t t35 = -505685207;

	t35 = (((x153-x154)/x155)<x156);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = -1;
	uint64_t x158 = 1101868627921350LLU;
	int32_t x159 = INT32_MIN;
	int32_t t36 = 85624236;

	t36 = (((x157-x158)/x159)<x160);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = 908694LL;
	int32_t x166 = -1;
	int32_t x167 = INT32_MIN;
	int8_t x168 = INT8_MAX;
	volatile int32_t t37 = 16378266;

	t37 = (((x165-x166)/x167)<x168);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x169 = -1;
	static int8_t x171 = INT8_MIN;
	int16_t x172 = INT16_MIN;
	volatile int32_t t38 = -66874404;

	t38 = (((x169-x170)/x171)<x172);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x173 = INT16_MIN;
	volatile int16_t x174 = INT16_MIN;
	int32_t x176 = INT32_MIN;
	volatile int32_t t39 = 4;

	t39 = (((x173-x174)/x175)<x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x181 = 15U;
	uint64_t x182 = 7288868537LLU;
	int32_t t40 = -2044069;

	t40 = (((x181-x182)/x183)<x184);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x189 = 1376;
	static int8_t x190 = INT8_MIN;
	static int32_t x191 = INT32_MAX;
	static int32_t t41 = -996;

	t41 = (((x189-x190)/x191)<x192);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x193 = -1;
	int8_t x194 = INT8_MAX;
	uint8_t x195 = UINT8_MAX;
	int64_t x196 = -1LL;
	int32_t t42 = 214850;

	t42 = (((x193-x194)/x195)<x196);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x198 = INT8_MIN;
	int32_t x199 = INT32_MAX;
	int16_t x200 = 843;
	volatile int32_t t43 = 1;

	t43 = (((x197-x198)/x199)<x200);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x201 = -61;
	uint32_t x202 = UINT32_MAX;
	int32_t x203 = 40;
	int32_t t44 = 18162;

	t44 = (((x201-x202)/x203)<x204);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x205 = 21U;
	uint64_t x206 = UINT64_MAX;
	int16_t x207 = -688;
	volatile uint64_t x208 = UINT64_MAX;
	static volatile int32_t t45 = 743;

	t45 = (((x205-x206)/x207)<x208);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x211 = 1U;
	int8_t x212 = INT8_MIN;
	volatile int32_t t46 = 252744419;

	t46 = (((x209-x210)/x211)<x212);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x217 = 262438338;
	static volatile uint32_t x218 = 2U;
	int16_t x219 = -31;
	static int8_t x220 = INT8_MIN;
	int32_t t47 = 1;

	t47 = (((x217-x218)/x219)<x220);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x221 = UINT32_MAX;
	uint32_t x222 = UINT32_MAX;
	volatile int64_t x223 = INT64_MIN;
	static int32_t x224 = -38335306;
	volatile int32_t t48 = 284534889;

	t48 = (((x221-x222)/x223)<x224);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x225 = INT16_MIN;
	int16_t x226 = 240;
	static volatile uint16_t x227 = UINT16_MAX;
	int64_t x228 = -1LL;
	int32_t t49 = -61601333;

	t49 = (((x225-x226)/x227)<x228);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x229 = INT16_MAX;
	int16_t x230 = INT16_MAX;
	int8_t x231 = INT8_MIN;
	int64_t x232 = -7263088380LL;

	t50 = (((x229-x230)/x231)<x232);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x233 = 808870597841LL;
	static volatile int8_t x234 = -1;
	volatile int8_t x235 = INT8_MIN;
	uint8_t x236 = 2U;
	volatile int32_t t51 = -633740545;

	t51 = (((x233-x234)/x235)<x236);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x245 = INT16_MIN;
	volatile int32_t x246 = INT32_MIN;
	int16_t x247 = INT16_MIN;
	int32_t t52 = 513088;

	t52 = (((x245-x246)/x247)<x248);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x249 = INT64_MIN;
	int16_t x250 = -2716;
	static uint32_t x251 = UINT32_MAX;
	uint64_t x252 = 257456596LLU;
	volatile int32_t t53 = -3698476;

	t53 = (((x249-x250)/x251)<x252);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x253 = 1293771U;
	uint8_t x255 = 29U;
	int8_t x256 = -4;
	volatile int32_t t54 = 563228550;

	t54 = (((x253-x254)/x255)<x256);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x261 = -1LL;
	volatile int32_t x262 = INT32_MIN;
	volatile int32_t t55 = -1;

	t55 = (((x261-x262)/x263)<x264);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x269 = UINT32_MAX;
	int64_t x270 = 9005LL;
	int64_t x272 = INT64_MIN;
	volatile int32_t t56 = -9477593;

	t56 = (((x269-x270)/x271)<x272);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x273 = 23880245U;
	uint16_t x274 = UINT16_MAX;
	static uint32_t x275 = 540U;
	uint8_t x276 = 7U;
	volatile int32_t t57 = 81072201;

	t57 = (((x273-x274)/x275)<x276);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x277 = UINT16_MAX;
	static int32_t x278 = -1;
	uint64_t x280 = UINT64_MAX;
	int32_t t58 = -461791;

	t58 = (((x277-x278)/x279)<x280);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x285 = 2;
	int64_t x287 = -1LL;
	static int16_t x288 = 0;
	volatile int32_t t59 = 29174213;

	t59 = (((x285-x286)/x287)<x288);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x289 = UINT8_MAX;
	uint32_t x290 = UINT32_MAX;
	int16_t x291 = -234;
	uint32_t x292 = 824248U;
	volatile int32_t t60 = 1;

	t60 = (((x289-x290)/x291)<x292);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x293 = UINT8_MAX;
	volatile int32_t x294 = -1;
	volatile uint8_t x295 = 11U;
	int64_t x296 = INT64_MIN;
	int32_t t61 = -1;

	t61 = (((x293-x294)/x295)<x296);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x297 = 1U;
	int16_t x298 = INT16_MIN;
	int16_t x299 = -5550;
	uint16_t x300 = UINT16_MAX;
	static int32_t t62 = -1400838;

	t62 = (((x297-x298)/x299)<x300);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x301 = INT8_MIN;
	int32_t x302 = -867;
	int8_t x304 = -1;
	int32_t t63 = -60;

	t63 = (((x301-x302)/x303)<x304);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x305 = -1LL;
	uint16_t x307 = UINT16_MAX;
	volatile uint16_t x308 = 14U;
	volatile int32_t t64 = 1335;

	t64 = (((x305-x306)/x307)<x308);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x310 = -763953172;
	uint64_t x311 = 92758LLU;
	uint64_t x312 = 4275457910LLU;
	int32_t t65 = 6866159;

	t65 = (((x309-x310)/x311)<x312);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x313 = 1540236675903LL;
	static int32_t x314 = INT32_MAX;
	int64_t x315 = INT64_MAX;
	volatile uint16_t x316 = 14U;
	int32_t t66 = -83194;

	t66 = (((x313-x314)/x315)<x316);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x319 = -2928LL;
	int8_t x320 = -35;
	static volatile int32_t t67 = -126851;

	t67 = (((x317-x318)/x319)<x320);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x321 = 124345892;
	uint32_t x322 = UINT32_MAX;
	int64_t x323 = INT64_MAX;
	volatile int16_t x324 = INT16_MIN;
	volatile int32_t t68 = 270677869;

	t68 = (((x321-x322)/x323)<x324);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x325 = UINT8_MAX;
	uint64_t x326 = 2292258137LLU;
	volatile int64_t x327 = INT64_MIN;
	uint32_t x328 = 71316692U;
	int32_t t69 = 3659697;

	t69 = (((x325-x326)/x327)<x328);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x329 = 7U;
	volatile int32_t x330 = INT32_MIN;
	volatile int8_t x331 = -1;
	uint32_t x332 = 53U;
	volatile int32_t t70 = -70750;

	t70 = (((x329-x330)/x331)<x332);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x333 = INT8_MIN;
	static int16_t x335 = INT16_MIN;
	volatile int8_t x336 = INT8_MAX;
	volatile int32_t t71 = 75;

	t71 = (((x333-x334)/x335)<x336);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x337 = 87U;
	uint64_t x338 = 76977746LLU;
	static uint32_t x339 = UINT32_MAX;
	int8_t x340 = -1;

	t72 = (((x337-x338)/x339)<x340);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x342 = 3U;
	int8_t x343 = INT8_MIN;
	volatile int32_t t73 = -171308;

	t73 = (((x341-x342)/x343)<x344);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x349 = INT8_MIN;
	volatile int32_t x350 = -1;
	uint16_t x352 = 8293U;
	int32_t t74 = 1;

	t74 = (((x349-x350)/x351)<x352);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x353 = 19U;
	uint8_t x354 = 12U;
	int64_t x355 = -1LL;
	uint64_t x356 = UINT64_MAX;
	volatile int32_t t75 = -803336162;

	t75 = (((x353-x354)/x355)<x356);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x357 = INT32_MIN;
	int64_t x359 = -60157689967106304LL;
	static int32_t x360 = 5;
	int32_t t76 = -26;

	t76 = (((x357-x358)/x359)<x360);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x361 = 137417333U;
	int32_t x362 = -1;
	volatile uint32_t x363 = UINT32_MAX;
	int32_t t77 = 35;

	t77 = (((x361-x362)/x363)<x364);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x366 = INT8_MIN;
	int16_t x367 = -26;
	volatile uint16_t x368 = UINT16_MAX;
	volatile int32_t t78 = -54642857;

	t78 = (((x365-x366)/x367)<x368);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x369 = UINT32_MAX;
	uint16_t x370 = 4917U;
	uint32_t x371 = 126142U;
	uint16_t x372 = UINT16_MAX;
	volatile int32_t t79 = -7;

	t79 = (((x369-x370)/x371)<x372);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x377 = 0U;
	uint64_t x379 = UINT64_MAX;
	int8_t x380 = 2;
	int32_t t80 = 44253;

	t80 = (((x377-x378)/x379)<x380);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x381 = -9012;
	static int32_t x382 = INT32_MIN;
	static int8_t x384 = 3;
	volatile int32_t t81 = -10757;

	t81 = (((x381-x382)/x383)<x384);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x385 = 25U;
	volatile int16_t x386 = INT16_MIN;
	int32_t x387 = INT32_MAX;
	static int32_t t82 = -116051;

	t82 = (((x385-x386)/x387)<x388);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x389 = UINT32_MAX;
	volatile uint64_t x390 = 120355LLU;
	static volatile int64_t x391 = INT64_MIN;
	int8_t x392 = -1;
	volatile int32_t t83 = -912804;

	t83 = (((x389-x390)/x391)<x392);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x394 = 253;
	uint64_t x395 = UINT64_MAX;
	volatile int32_t t84 = -80896;

	t84 = (((x393-x394)/x395)<x396);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x401 = INT16_MIN;
	uint32_t x402 = 31799U;
	static int16_t x403 = INT16_MIN;

	t85 = (((x401-x402)/x403)<x404);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x405 = 2;
	volatile int64_t x406 = -1LL;
	volatile int8_t x407 = INT8_MIN;
	int32_t x408 = 1;
	int32_t t86 = -9063903;

	t86 = (((x405-x406)/x407)<x408);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x414 = 31216U;
	volatile int64_t x415 = -16LL;
	volatile int64_t x416 = -222673160LL;

	t87 = (((x413-x414)/x415)<x416);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x431 = -2701;
	uint16_t x432 = 441U;
	int32_t t88 = -7;

	t88 = (((x429-x430)/x431)<x432);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x437 = INT64_MAX;
	int32_t x438 = INT32_MAX;
	volatile uint32_t x439 = 132108816U;
	uint64_t x440 = 19161112LLU;

	t89 = (((x437-x438)/x439)<x440);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x442 = INT16_MIN;
	int8_t x443 = 1;
	int32_t t90 = -499256;

	t90 = (((x441-x442)/x443)<x444);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x445 = INT8_MIN;
	int16_t x446 = -1;
	volatile int64_t x448 = -12245842LL;
	int32_t t91 = 1536;

	t91 = (((x445-x446)/x447)<x448);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x449 = INT64_MAX;
	uint16_t x450 = 10U;
	uint16_t x452 = 1U;
	int32_t t92 = 172;

	t92 = (((x449-x450)/x451)<x452);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x453 = 1;
	volatile int64_t x455 = INT64_MIN;
	volatile uint64_t x456 = 195LLU;
	int32_t t93 = 184;

	t93 = (((x453-x454)/x455)<x456);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x457 = INT32_MAX;
	int64_t x459 = INT64_MIN;
	uint64_t x460 = 474214714728961LLU;
	int32_t t94 = 282;

	t94 = (((x457-x458)/x459)<x460);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x465 = -1;
	int32_t x466 = -1;
	int16_t x467 = INT16_MIN;
	static int32_t t95 = 263572949;

	t95 = (((x465-x466)/x467)<x468);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x469 = INT32_MIN;
	uint32_t x470 = 12329450U;
	static int8_t x471 = 41;
	int64_t x472 = INT64_MAX;

	t96 = (((x469-x470)/x471)<x472);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x473 = -8;
	static int32_t x474 = 49;
	static int32_t x475 = INT32_MAX;
	static volatile uint8_t x476 = 11U;

	t97 = (((x473-x474)/x475)<x476);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x477 = 22U;
	volatile int8_t x479 = 1;
	volatile int32_t x480 = -1;

	t98 = (((x477-x478)/x479)<x480);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x481 = 56392517442674804LL;
	static volatile int32_t x482 = INT32_MIN;
	int8_t x483 = INT8_MIN;
	volatile int16_t x484 = INT16_MIN;
	volatile int32_t t99 = 169335386;

	t99 = (((x481-x482)/x483)<x484);

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


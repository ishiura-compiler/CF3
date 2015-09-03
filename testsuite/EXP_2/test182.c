#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x18 = 2360U;
uint32_t t3 = 27478637U;
int16_t x25 = -1;
uint32_t x26 = 1888U;
int16_t x45 = INT16_MIN;
int64_t t9 = 2LL;
static int64_t x49 = -16074373113LL;
int8_t x52 = -1;
volatile uint64_t x56 = 909633LLU;
static uint8_t x61 = 8U;
int16_t x64 = INT16_MAX;
int32_t x69 = INT32_MIN;
static volatile int32_t x70 = 101318;
int32_t x74 = -674005076;
int16_t x82 = INT16_MIN;
uint8_t x86 = 0U;
int64_t x87 = -1LL;
static int32_t x99 = -1;
volatile uint64_t x102 = 1601566LLU;
uint8_t x104 = 6U;
volatile int16_t x112 = -2;
volatile uint64_t x114 = 1044017934681214LLU;
volatile int32_t t26 = 249;
uint8_t x122 = UINT8_MAX;
int32_t t27 = -115;
int8_t x126 = -1;
uint32_t x128 = UINT32_MAX;
uint32_t t28 = 591U;
int32_t x135 = INT32_MIN;
static volatile uint8_t x139 = 2U;
volatile int64_t x153 = INT64_MIN;
static volatile uint16_t x165 = 1U;
int64_t t33 = 488988550LL;
int64_t x171 = -7665040LL;
int8_t x173 = INT8_MIN;
volatile int32_t x189 = 1155001;
volatile int16_t x192 = -38;
int32_t x195 = -3442560;
volatile uint64_t t39 = 1689433LLU;
static volatile uint32_t t41 = 59208549U;
volatile uint64_t t42 = 278LLU;
volatile int64_t x216 = -1LL;
uint64_t x218 = 21162731LLU;
int8_t x222 = INT8_MIN;
int8_t x224 = INT8_MIN;
uint32_t x228 = 997U;
uint64_t x229 = 161LLU;
int8_t x231 = -57;
uint32_t x232 = UINT32_MAX;
int8_t x239 = 6;
uint8_t x242 = 72U;
volatile int32_t x245 = -1;
volatile int64_t x247 = -36995100894182LL;
int32_t x248 = -1;
int32_t x249 = INT32_MAX;
int64_t x250 = 1LL;
int8_t x253 = INT8_MIN;
int16_t x256 = -1;
uint32_t t53 = 1778236534U;
static int16_t x259 = INT16_MIN;
int32_t x274 = 0;
volatile uint32_t t56 = 678981784U;
volatile int16_t x280 = -1;
int16_t x281 = INT16_MIN;
int8_t x319 = INT8_MIN;
int64_t x331 = 17597LL;
static int32_t x344 = -260227988;
int8_t x351 = INT8_MIN;
static int32_t x352 = INT32_MAX;
volatile int32_t x363 = -1140958;
int64_t t73 = -34LL;
int8_t x371 = 6;
static int64_t x387 = -435239091518LL;
static uint32_t x388 = UINT32_MAX;
uint64_t x389 = 2582LLU;
uint8_t x397 = 1U;
uint32_t x398 = 14U;
int64_t x400 = -115861LL;
int8_t x405 = -1;
volatile int32_t x407 = INT32_MAX;
int64_t x409 = -20815554LL;
int8_t x432 = -1;
static volatile uint16_t x438 = UINT16_MAX;
uint64_t x441 = 371486615557677LLU;
uint16_t x445 = 479U;
int8_t x448 = INT8_MAX;
uint64_t t88 = 489704342LLU;
uint8_t x451 = UINT8_MAX;
uint32_t x452 = UINT32_MAX;
static uint8_t x465 = UINT8_MAX;
volatile uint64_t t93 = 1016916078LLU;
uint32_t x484 = 327514318U;
static volatile uint64_t t95 = 25622256764915208LLU;
int64_t t96 = -15LL;
int16_t x508 = -9;
int32_t x512 = INT32_MIN;
int64_t t99 = 54685LL;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint64_t x2 = 66109556489LLU;
	static volatile int16_t x3 = -1;
	int32_t x4 = INT32_MIN;
	uint64_t t0 = 231210330LLU;

	t0 = ((x1+(x2-x3))^x4);

	if (t0 != 18446744010970089226LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MAX;
	volatile int16_t x6 = 803;
	uint16_t x7 = 51U;
	int16_t x8 = INT16_MIN;
	static int32_t t1 = 0;

	t1 = ((x5+(x6-x7))^x8);

	if (t1 != -31889) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	int64_t x14 = INT64_MIN;
	int32_t x15 = INT32_MIN;
	int64_t x16 = INT64_MIN;
	int64_t t2 = -202384861729028LL;

	t2 = ((x13+(x14-x15))^x16);

	if (t2 != 2147450880LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -3;
	int32_t x19 = -1;
	uint32_t x20 = UINT32_MAX;

	t3 = ((x17+(x18-x19))^x20);

	if (t3 != 4294964937U) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x21 = -1;
	static int8_t x22 = -1;
	int8_t x23 = -1;
	volatile int16_t x24 = -1;
	int32_t t4 = -7;

	t4 = ((x21+(x22-x23))^x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x27 = 668U;
	uint32_t x28 = 1067U;
	uint32_t t5 = 149U;

	t5 = ((x25+(x26-x27))^x28);

	if (t5 != 232U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x29 = 10U;
	int32_t x30 = -158737;
	int16_t x31 = -1;
	int32_t x32 = 21048;
	volatile int32_t t6 = -1894;

	t6 = ((x29+(x30-x31))^x32);

	if (t6 != -147006) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x33 = 6;
	volatile uint64_t x34 = UINT64_MAX;
	uint8_t x35 = 29U;
	static int16_t x36 = -492;
	volatile uint64_t t7 = 6LLU;

	t7 = ((x33+(x34-x35))^x36);

	if (t7 != 508LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = UINT64_MAX;
	int8_t x42 = INT8_MIN;
	int32_t x43 = INT32_MIN;
	int64_t x44 = 357674049991390LL;
	uint64_t t8 = 0LLU;

	t8 = ((x41+(x42-x43))^x44);

	if (t8 != 357672080510369LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x46 = 10823465LL;
	volatile int32_t x47 = INT32_MIN;
	int64_t x48 = -786364096546350LL;

	t9 = ((x45+(x46-x47))^x48);

	if (t9 != -786361938813189LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x50 = -1LL;
	static uint64_t x51 = UINT64_MAX;
	uint64_t t10 = 1LLU;

	t10 = ((x49+(x50-x51))^x52);

	if (t10 != 16074373112LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = 334347522901943LLU;
	int8_t x54 = -20;
	int16_t x55 = INT16_MAX;
	uint64_t t11 = 13351777120LLU;

	t11 = ((x53+(x54-x55))^x56);

	if (t11 != 334347523122917LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = 1;
	int8_t x58 = 7;
	int16_t x59 = -15;
	int32_t x60 = 28;
	volatile int32_t t12 = 0;

	t12 = ((x57+(x58-x59))^x60);

	if (t12 != 11) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x62 = 9533145;
	uint32_t x63 = 1641U;
	volatile uint32_t t13 = 301U;

	t13 = ((x61+(x62-x63))^x64);

	if (t13 != 9506695U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x71 = INT8_MAX;
	int32_t x72 = -1;
	static volatile int32_t t14 = 269760;

	t14 = ((x69+(x70-x71))^x72);

	if (t14 != 2147382456) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = 408502411;
	int32_t x75 = 0;
	volatile int64_t x76 = INT64_MIN;
	static int64_t t15 = 13464839893419936LL;

	t15 = ((x73+(x74-x75))^x76);

	if (t15 != 9223372036589273143LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = 55;
	int64_t x78 = INT64_MIN;
	int32_t x79 = -1;
	volatile uint8_t x80 = 26U;
	volatile int64_t t16 = -3LL;

	t16 = ((x77+(x78-x79))^x80);

	if (t16 != -9223372036854775774LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = 44;
	volatile uint16_t x83 = UINT16_MAX;
	static uint16_t x84 = UINT16_MAX;
	static int32_t t17 = -169058503;

	t17 = ((x81+(x82-x83))^x84);

	if (t17 != -98350) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x85 = INT16_MIN;
	volatile int8_t x88 = INT8_MAX;
	static int64_t t18 = 1LL;

	t18 = ((x85+(x86-x87))^x88);

	if (t18 != -32642LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x89 = 5;
	volatile int8_t x90 = -1;
	int16_t x91 = -1;
	int32_t x92 = -1;
	volatile int32_t t19 = -1752;

	t19 = ((x89+(x90-x91))^x92);

	if (t19 != -6) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x93 = 15U;
	static uint16_t x94 = UINT16_MAX;
	int8_t x95 = INT8_MAX;
	static int64_t x96 = INT64_MIN;
	static volatile int64_t t20 = -114317LL;

	t20 = ((x93+(x94-x95))^x96);

	if (t20 != -9223372036854710385LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x97 = -2;
	volatile int64_t x98 = 287612422510LL;
	int32_t x100 = -1;
	int64_t t21 = -2576952029506907764LL;

	t21 = ((x97+(x98-x99))^x100);

	if (t21 != -287612422510LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x101 = UINT8_MAX;
	static uint64_t x103 = 94LLU;
	uint64_t t22 = 118100909283227LLU;

	t22 = ((x101+(x102-x103))^x104);

	if (t22 != 1601721LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = -1;
	int8_t x106 = INT8_MAX;
	uint64_t x107 = UINT64_MAX;
	static int16_t x108 = INT16_MIN;
	uint64_t t23 = 6007836LLU;

	t23 = ((x105+(x106-x107))^x108);

	if (t23 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x109 = -1;
	int32_t x110 = INT32_MIN;
	static int64_t x111 = INT64_MIN;
	volatile int64_t t24 = 2695326LL;

	t24 = ((x109+(x110-x111))^x112);

	if (t24 != -9223372034707292159LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x113 = INT16_MIN;
	volatile uint32_t x115 = 373763405U;
	int8_t x116 = 1;
	static volatile uint64_t t25 = 29121639LLU;

	t25 = ((x113+(x114-x115))^x116);

	if (t25 != 1044017560885040LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x117 = INT32_MIN;
	int8_t x118 = INT8_MIN;
	volatile int16_t x119 = INT16_MIN;
	static int16_t x120 = INT16_MIN;

	t26 = ((x117+(x118-x119))^x120);

	if (t26 != 2147483520) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x121 = INT16_MAX;
	static uint16_t x123 = 2117U;
	volatile int8_t x124 = 0;

	t27 = ((x121+(x122-x123))^x124);

	if (t27 != 30905) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x125 = 381U;
	volatile uint32_t x127 = UINT32_MAX;

	t28 = ((x125+(x126-x127))^x128);

	if (t28 != 4294966914U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x133 = UINT16_MAX;
	int64_t x134 = INT64_MIN;
	static volatile uint8_t x136 = 49U;
	int64_t t29 = -58695760755793591LL;

	t29 = ((x133+(x134-x135))^x136);

	if (t29 != -9223372034707226674LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x137 = UINT64_MAX;
	int8_t x138 = -4;
	uint8_t x140 = UINT8_MAX;
	volatile uint64_t t30 = 38522LLU;

	t30 = ((x137+(x138-x139))^x140);

	if (t30 != 18446744073709551366LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x149 = -22186;
	volatile int8_t x150 = -1;
	int16_t x151 = -1284;
	volatile uint64_t x152 = 32873118LLU;
	uint64_t t31 = 27401229448560906LLU;

	t31 = ((x149+(x150-x151))^x152);

	if (t31 != 18446744073676666055LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x154 = 1860U;
	uint8_t x155 = 44U;
	volatile int32_t x156 = INT32_MAX;
	volatile int64_t t32 = 77859706255579LL;

	t32 = ((x153+(x154-x155))^x156);

	if (t32 != -9223372034707293977LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x166 = INT16_MIN;
	volatile int8_t x167 = -1;
	volatile int64_t x168 = 207847LL;

	t33 = ((x165+(x166-x167))^x168);

	if (t33 != -218139LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x169 = 12U;
	int32_t x170 = INT32_MIN;
	int32_t x172 = INT32_MAX;
	int64_t t34 = -15579035978125458LL;

	t34 = ((x169+(x170-x171))^x172);

	if (t34 != -7665053LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x174 = -1;
	static int32_t x175 = INT32_MIN;
	int64_t x176 = 29230689810120628LL;
	int64_t t35 = 116LL;

	t35 = ((x173+(x174-x175))^x176);

	if (t35 != 29230689183596747LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x177 = 15LL;
	static uint8_t x178 = UINT8_MAX;
	static uint64_t x179 = 5070915LLU;
	uint16_t x180 = UINT16_MAX;
	static uint64_t t36 = 36293LLU;

	t36 = ((x177+(x178-x179))^x180);

	if (t36 != 18446744073704464180LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x181 = -105767894017131198LL;
	static int8_t x182 = INT8_MIN;
	static int64_t x183 = INT64_MIN;
	uint16_t x184 = 2U;
	volatile int64_t t37 = -1740614098077693LL;

	t37 = ((x181+(x182-x183))^x184);

	if (t37 != 9117604142837644480LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x190 = -1;
	volatile int16_t x191 = INT16_MIN;
	volatile int32_t t38 = -3605050;

	t38 = ((x189+(x190-x191))^x192);

	if (t38 != -1187742) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x193 = 2;
	static uint64_t x194 = 55950773552399LLU;
	uint8_t x196 = 2U;

	t39 = ((x193+(x194-x195))^x196);

	if (t39 != 55950776994963LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x197 = -1;
	int16_t x198 = INT16_MIN;
	volatile int64_t x199 = 1000LL;
	volatile uint16_t x200 = 233U;
	volatile int64_t t40 = -19530669LL;

	t40 = ((x197+(x198-x199))^x200);

	if (t40 != -33538LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x201 = 206268039U;
	volatile uint8_t x202 = 5U;
	volatile int16_t x203 = INT16_MAX;
	uint16_t x204 = 14U;

	t41 = ((x201+(x202-x203))^x204);

	if (t41 != 206235267U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x205 = -48;
	static int8_t x206 = -1;
	volatile uint64_t x207 = UINT64_MAX;
	volatile int64_t x208 = 4074131234786LL;

	t42 = ((x205+(x206-x207))^x208);

	if (t42 != 18446739999578316850LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x209 = 74U;
	int16_t x210 = INT16_MIN;
	uint16_t x211 = 542U;
	int8_t x212 = INT8_MIN;
	uint32_t t43 = 2398U;

	t43 = ((x209+(x210-x211))^x212);

	if (t43 != 33196U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x213 = UINT32_MAX;
	int64_t x214 = INT64_MIN;
	int64_t x215 = -32166708795697LL;
	int64_t t44 = 2297534244628513503LL;

	t44 = ((x213+(x214-x215))^x216);

	if (t44 != 9223339865851012815LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x217 = INT8_MAX;
	uint32_t x219 = 256403166U;
	int32_t x220 = 889235;
	volatile uint64_t t45 = 3LLU;

	t45 = ((x217+(x218-x219))^x220);

	if (t45 != 18446744073474086175LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x221 = 5U;
	uint64_t x223 = UINT64_MAX;
	uint64_t t46 = 12549798420803LLU;

	t46 = ((x221+(x222-x223))^x224);

	if (t46 != 6LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x225 = -1;
	int32_t x226 = 591527747;
	int8_t x227 = INT8_MAX;
	uint32_t t47 = 497472461U;

	t47 = ((x225+(x226-x227))^x228);

	if (t47 != 591527206U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x230 = UINT8_MAX;
	uint64_t t48 = 34867285910582290LLU;

	t48 = ((x229+(x230-x231))^x232);

	if (t48 != 4294966822LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x237 = UINT8_MAX;
	int16_t x238 = -1581;
	volatile int64_t x240 = INT64_MIN;
	static int64_t t49 = 241286097444LL;

	t49 = ((x237+(x238-x239))^x240);

	if (t49 != 9223372036854774476LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x241 = -24LL;
	int32_t x243 = -1;
	static volatile int16_t x244 = 0;
	int64_t t50 = -51310677LL;

	t50 = ((x241+(x242-x243))^x244);

	if (t50 != 49LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x246 = UINT64_MAX;
	volatile uint64_t t51 = 867978695379LLU;

	t51 = ((x245+(x246-x247))^x248);

	if (t51 != 18446707078608657435LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x251 = 42LLU;
	int16_t x252 = INT16_MIN;
	uint64_t t52 = 202572733275LLU;

	t52 = ((x249+(x250-x251))^x252);

	if (t52 != 18446744071562100694LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x254 = 1926170;
	uint32_t x255 = UINT32_MAX;

	t53 = ((x253+(x254-x255))^x256);

	if (t53 != 4293041252U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x257 = 9;
	int16_t x258 = 273;
	int64_t x260 = -1LL;
	int64_t t54 = -278843996LL;

	t54 = ((x257+(x258-x259))^x260);

	if (t54 != -33051LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x265 = INT8_MIN;
	static volatile uint16_t x266 = 0U;
	volatile int32_t x267 = -1;
	int32_t x268 = 160587994;
	volatile int32_t t55 = 34616215;

	t55 = ((x265+(x266-x267))^x268);

	if (t55 != -160587941) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x273 = 115U;
	uint32_t x275 = UINT32_MAX;
	uint8_t x276 = 6U;

	t56 = ((x273+(x274-x275))^x276);

	if (t56 != 114U) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint8_t x277 = 5U;
	uint64_t x278 = 161236115657LLU;
	int8_t x279 = INT8_MIN;
	static volatile uint64_t t57 = 763477716227LLU;

	t57 = ((x277+(x278-x279))^x280);

	if (t57 != 18446743912473435825LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x282 = 19U;
	int16_t x283 = INT16_MAX;
	int8_t x284 = INT8_MIN;
	static uint32_t t58 = 1894U;

	t58 = ((x281+(x282-x283))^x284);

	if (t58 != 65428U) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x285 = INT8_MIN;
	static uint16_t x286 = 13478U;
	volatile int8_t x287 = -3;
	volatile int8_t x288 = -1;
	int32_t t59 = 194;

	t59 = ((x285+(x286-x287))^x288);

	if (t59 != -13354) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x289 = INT64_MIN;
	uint8_t x290 = 0U;
	volatile uint32_t x291 = UINT32_MAX;
	int64_t x292 = INT64_MAX;
	volatile int64_t t60 = 66964753410561LL;

	t60 = ((x289+(x290-x291))^x292);

	if (t60 != -2LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x297 = 3961U;
	static int8_t x298 = -1;
	int16_t x299 = INT16_MIN;
	int32_t x300 = INT32_MIN;
	int32_t t61 = 157828423;

	t61 = ((x297+(x298-x299))^x300);

	if (t61 != -2147446920) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x301 = 1;
	int64_t x302 = INT64_MAX;
	uint8_t x303 = 5U;
	int16_t x304 = INT16_MIN;
	volatile int64_t t62 = -3308786922707977441LL;

	t62 = ((x301+(x302-x303))^x304);

	if (t62 != -9223372036854743045LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x309 = -3;
	int8_t x310 = INT8_MIN;
	int16_t x311 = -1;
	int16_t x312 = -11509;
	int32_t t63 = 22;

	t63 = ((x309+(x310-x311))^x312);

	if (t63 != 11381) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x313 = 2128;
	uint64_t x314 = 1362LLU;
	int32_t x315 = -1;
	static int64_t x316 = INT64_MIN;
	volatile uint64_t t64 = 8030575752974LLU;

	t64 = ((x313+(x314-x315))^x316);

	if (t64 != 9223372036854779299LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x317 = 1U;
	uint32_t x318 = UINT32_MAX;
	int8_t x320 = 0;
	volatile uint32_t t65 = 1197348401U;

	t65 = ((x317+(x318-x319))^x320);

	if (t65 != 128U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x325 = -2;
	static int16_t x326 = -1;
	int8_t x327 = 17;
	volatile int8_t x328 = 7;
	volatile int32_t t66 = 0;

	t66 = ((x325+(x326-x327))^x328);

	if (t66 != -21) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x329 = UINT32_MAX;
	volatile int8_t x330 = -1;
	int64_t x332 = INT64_MIN;
	int64_t t67 = -2681293673766063650LL;

	t67 = ((x329+(x330-x331))^x332);

	if (t67 != -9223372032559826111LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x337 = -5;
	int16_t x338 = -3402;
	uint32_t x339 = 26U;
	static uint16_t x340 = 11599U;
	uint32_t t68 = 98549U;

	t68 = ((x337+(x338-x339))^x340);

	if (t68 != 4294959064U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x341 = 2;
	uint16_t x342 = 0U;
	volatile int16_t x343 = INT16_MIN;
	int32_t t69 = 0;

	t69 = ((x341+(x342-x343))^x344);

	if (t69 != -260195218) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x345 = 1180U;
	static uint16_t x346 = 0U;
	int16_t x347 = INT16_MIN;
	volatile int32_t x348 = INT32_MAX;
	volatile uint32_t t70 = 44U;

	t70 = ((x345+(x346-x347))^x348);

	if (t70 != 2147449699U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x349 = INT16_MAX;
	volatile int8_t x350 = INT8_MIN;
	volatile int32_t t71 = -69808;

	t71 = ((x349+(x350-x351))^x352);

	if (t71 != 2147450880) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x353 = UINT16_MAX;
	int8_t x354 = -1;
	uint8_t x355 = 19U;
	uint32_t x356 = 475350U;
	volatile uint32_t t72 = 9U;

	t72 = ((x353+(x354-x355))^x356);

	if (t72 != 507709U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x361 = 7280348840LL;
	int64_t x362 = -107369LL;
	int16_t x364 = -1;

	t73 = ((x361+(x362-x363))^x364);

	if (t73 != -7281382430LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x369 = 75U;
	int16_t x370 = INT16_MAX;
	uint8_t x372 = UINT8_MAX;
	int32_t t74 = 34654439;

	t74 = ((x369+(x370-x371))^x372);

	if (t74 != 32955) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x377 = 739LLU;
	int64_t x378 = INT64_MIN;
	int8_t x379 = -42;
	volatile int32_t x380 = 118102;
	static volatile uint64_t t75 = 17LLU;

	t75 = ((x377+(x378-x379))^x380);

	if (t75 != 9223372036854894171LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x385 = -3;
	int32_t x386 = 177300659;
	int64_t t76 = -54913889212970060LL;

	t76 = ((x385+(x386-x387))^x388);

	if (t76 != 436461968913LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x390 = 3U;
	uint16_t x391 = UINT16_MAX;
	static volatile uint16_t x392 = 6U;
	volatile uint64_t t77 = 28LLU;

	t77 = ((x389+(x390-x391))^x392);

	if (t77 != 18446744073709488668LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x399 = -1;
	volatile int64_t t78 = -285617258287002449LL;

	t78 = ((x397+(x398-x399))^x400);

	if (t78 != -115845LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x401 = INT8_MAX;
	int8_t x402 = INT8_MIN;
	int32_t x403 = -1;
	uint64_t x404 = UINT64_MAX;
	uint64_t t79 = UINT64_MAX;

	t79 = ((x401+(x402-x403))^x404);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x406 = INT16_MAX;
	static int8_t x408 = INT8_MIN;
	int32_t t80 = 128421;

	t80 = ((x405+(x406-x407))^x408);

	if (t80 != 2147451007) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x410 = -1;
	uint8_t x411 = 26U;
	uint16_t x412 = 238U;
	static volatile int64_t t81 = 10605290LL;

	t81 = ((x409+(x410-x411))^x412);

	if (t81 != -20815411LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x413 = 4U;
	uint16_t x414 = 2U;
	int64_t x415 = 1767749LL;
	volatile uint32_t x416 = 81U;
	volatile int64_t t82 = 30594LL;

	t82 = ((x413+(x414-x415))^x416);

	if (t82 != -1767792LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x417 = INT64_MIN;
	static uint32_t x418 = UINT32_MAX;
	int32_t x419 = 412872165;
	static int16_t x420 = INT16_MIN;
	int64_t t83 = 3438LL;

	t83 = ((x417+(x418-x419))^x420);

	if (t83 != 9223372032972657178LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x421 = 19488U;
	static uint16_t x422 = 20965U;
	uint32_t x423 = UINT32_MAX;
	int64_t x424 = INT64_MAX;
	int64_t t84 = 5LL;

	t84 = ((x421+(x422-x423))^x424);

	if (t84 != 9223372036854735353LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x429 = INT8_MAX;
	volatile uint8_t x430 = 11U;
	volatile int64_t x431 = -1LL;
	int64_t t85 = 4138521215662882069LL;

	t85 = ((x429+(x430-x431))^x432);

	if (t85 != -140LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x437 = UINT64_MAX;
	static int64_t x439 = 3LL;
	int8_t x440 = INT8_MIN;
	uint64_t t86 = 58520421552LLU;

	t86 = ((x437+(x438-x439))^x440);

	if (t86 != 18446744073709486203LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x442 = 515U;
	static int8_t x443 = -3;
	static volatile int16_t x444 = -1;
	uint64_t t87 = 137103LLU;

	t87 = ((x441+(x442-x443))^x444);

	if (t87 != 18446372587093993420LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x446 = UINT32_MAX;
	static uint64_t x447 = 397232234LLU;

	t88 = ((x445+(x446-x447))^x448);

	if (t88 != 3897735435LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x449 = 0;
	static int16_t x450 = -1;
	static uint32_t t89 = 10572U;

	t89 = ((x449+(x450-x451))^x452);

	if (t89 != 255U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x461 = INT8_MIN;
	volatile uint32_t x462 = 20429U;
	int16_t x463 = INT16_MIN;
	int64_t x464 = 50619076636297401LL;
	int64_t t90 = 91194732020158LL;

	t90 = ((x461+(x462-x463))^x464);

	if (t90 != 50619076636248052LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x466 = 10013909;
	int8_t x467 = -1;
	int64_t x468 = INT64_MIN;
	int64_t t91 = -1922667LL;

	t91 = ((x465+(x466-x467))^x468);

	if (t91 != -9223372036844761643LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x473 = 55U;
	volatile uint64_t x474 = UINT64_MAX;
	uint16_t x475 = UINT16_MAX;
	int8_t x476 = INT8_MAX;
	volatile uint64_t t92 = 7368740315433518402LLU;

	t92 = ((x473+(x474-x475))^x476);

	if (t92 != 18446744073709486152LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x477 = 2960272484094967LLU;
	static volatile int16_t x478 = -22;
	uint32_t x479 = 343U;
	int32_t x480 = INT32_MIN;

	t93 = ((x477+(x478-x479))^x480);

	if (t93 != 18443783796053136010LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x481 = INT16_MIN;
	static int64_t x482 = -108345965136540LL;
	volatile uint32_t x483 = 26U;
	static int64_t t94 = 1636023182275LL;

	t94 = ((x481+(x482-x483))^x484);

	if (t94 != -108346208236156LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x485 = UINT8_MAX;
	int32_t x486 = -711;
	volatile int8_t x487 = 20;
	uint64_t x488 = 11968357747LLU;

	t95 = ((x485+(x486-x487))^x488);

	if (t95 != 18446744061741194071LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x489 = 1;
	int64_t x490 = INT64_MAX;
	int64_t x491 = 115366LL;
	uint16_t x492 = UINT16_MAX;

	t96 = ((x489+(x490-x491))^x492);

	if (t96 != 9223372036854694565LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x497 = 49;
	uint32_t x498 = 195404U;
	volatile int32_t x499 = INT32_MAX;
	int32_t x500 = INT32_MIN;
	volatile uint32_t t97 = 57271512U;

	t97 = ((x497+(x498-x499))^x500);

	if (t97 != 195454U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x505 = 25U;
	static int32_t x506 = -1;
	int8_t x507 = INT8_MIN;
	int32_t t98 = 75;

	t98 = ((x505+(x506-x507))^x508);

	if (t98 != -145) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x509 = 5U;
	int32_t x510 = INT32_MIN;
	int64_t x511 = -47848157640937677LL;

	t99 = ((x509+(x510-x511))^x512);

	if (t99 != -47848154710126382LL) { NG(); } else { ; }
	
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


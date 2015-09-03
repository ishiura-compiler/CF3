#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = -75938381678757349LL;
int8_t x19 = INT8_MAX;
volatile int16_t x22 = 4208;
uint64_t t4 = 48877LLU;
int32_t x54 = 165944;
static int64_t x59 = INT64_MIN;
static int64_t x65 = -1LL;
int32_t x76 = INT32_MIN;
static int16_t x77 = INT16_MAX;
int16_t x82 = -1;
int8_t x83 = 9;
int64_t t19 = -1154420280LL;
volatile int32_t x94 = -1;
static int8_t x100 = INT8_MIN;
uint64_t t21 = 198907LLU;
static volatile uint8_t x104 = UINT8_MAX;
uint64_t x106 = UINT64_MAX;
uint64_t x107 = UINT64_MAX;
int8_t x111 = -31;
volatile int32_t x116 = -6017817;
volatile uint32_t x117 = 221U;
volatile int64_t x118 = INT64_MIN;
int64_t x119 = 431140278212LL;
int16_t x125 = INT16_MIN;
volatile uint32_t t28 = 506U;
int8_t x134 = INT8_MIN;
volatile int8_t x137 = 1;
static int64_t x141 = INT64_MIN;
static volatile int16_t x142 = -1;
volatile uint64_t x143 = UINT64_MAX;
uint64_t t32 = 457808444LLU;
static uint16_t x147 = 11U;
int16_t x149 = 0;
volatile uint32_t t34 = 51463U;
static volatile uint32_t x157 = 183178312U;
int16_t x158 = INT16_MAX;
int16_t x161 = 13784;
static volatile int32_t t37 = 2970948;
int64_t x165 = INT64_MAX;
int64_t x168 = INT64_MIN;
uint32_t x170 = 9243773U;
uint64_t x187 = UINT64_MAX;
uint64_t x206 = UINT64_MAX;
int32_t x215 = 8;
static int32_t t46 = -1;
int32_t t49 = 201;
uint64_t x230 = 3248672993623132252LLU;
int64_t x232 = -10937LL;
uint16_t x239 = 442U;
static uint64_t x244 = 7459757826235967LLU;
volatile uint32_t x251 = 24U;
uint16_t x252 = 0U;
uint64_t x256 = 692912LLU;
int16_t x258 = INT16_MIN;
uint16_t x260 = UINT16_MAX;
volatile uint8_t x268 = 1U;
int16_t x274 = INT16_MIN;
uint32_t t60 = 524U;
int16_t x288 = INT16_MAX;
uint8_t x293 = 54U;
static volatile uint64_t x297 = 8172368378675335LLU;
static uint64_t x299 = UINT64_MAX;
int64_t x301 = -1LL;
int8_t x308 = INT8_MAX;
int32_t x313 = INT32_MIN;
volatile uint8_t x314 = 7U;
int64_t x328 = 65LL;
volatile int32_t x332 = INT32_MIN;
int32_t x336 = INT32_MAX;
int32_t x341 = 30;
volatile uint32_t x343 = UINT32_MAX;
int16_t x345 = INT16_MAX;
volatile int64_t t78 = -30196356015LL;
static int32_t x353 = INT32_MIN;
uint8_t x355 = 15U;
int8_t x366 = INT8_MIN;
int64_t t81 = -4863757410334808LL;
int16_t x369 = 1528;
volatile uint32_t x370 = 979U;
static int64_t x377 = -1LL;
int32_t t84 = -123;
int32_t t85 = 0;
volatile uint64_t t86 = 15LLU;
int16_t x397 = INT16_MAX;
uint32_t x400 = UINT32_MAX;
uint32_t x404 = 264065U;
int32_t x406 = -1197456;
static int8_t x408 = INT8_MAX;
volatile int64_t t90 = 50600843630LL;
static int32_t x418 = INT32_MIN;
int8_t x419 = INT8_MIN;
uint64_t x421 = 75LLU;
int16_t x422 = INT16_MAX;
int16_t x436 = 0;


void f0(void) {
	int64_t x5 = INT64_MIN;
	int64_t x6 = -1LL;
	volatile int32_t x7 = -22130;
	static int8_t x8 = INT8_MAX;

	t0 = (x5^((x6|x7)+x8));

	if (t0 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = 3893281;
	static int16_t x10 = INT16_MAX;
	uint32_t x11 = 10711U;
	static volatile uint16_t x12 = UINT16_MAX;
	volatile uint32_t t1 = 738442679U;

	t1 = (x9^((x10|x11)+x12));

	if (t1 != 3807199U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = 2886;
	int8_t x18 = 50;
	uint64_t x20 = UINT64_MAX;
	uint64_t t2 = 203009256892552LLU;

	t2 = (x17^((x18|x19)+x20));

	if (t2 != 2872LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x21 = UINT64_MAX;
	int8_t x23 = INT8_MIN;
	uint32_t x24 = UINT32_MAX;
	volatile uint64_t t3 = 6116767053242942LLU;

	t3 = (x21^((x22|x23)+x24));

	if (t3 != 18446744069414584336LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = INT64_MIN;
	uint64_t x26 = UINT64_MAX;
	uint16_t x27 = 66U;
	int64_t x28 = -1LL;

	t4 = (x25^((x26|x27)+x28));

	if (t4 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = 0;
	volatile int32_t x30 = INT32_MIN;
	uint32_t x31 = UINT32_MAX;
	volatile uint16_t x32 = 55U;
	volatile uint32_t t5 = 6765U;

	t5 = (x29^((x30|x31)+x32));

	if (t5 != 54U) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x33 = 12;
	int64_t x34 = INT64_MIN;
	static int64_t x35 = INT64_MAX;
	int8_t x36 = INT8_MIN;
	int64_t t6 = -282961145555984939LL;

	t6 = (x33^((x34|x35)+x36));

	if (t6 != -141LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = -1;
	int32_t x38 = INT32_MIN;
	static int32_t x39 = -9071059;
	int16_t x40 = INT16_MIN;
	volatile int32_t t7 = 62903893;

	t7 = (x37^((x38|x39)+x40));

	if (t7 != 9103826) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x41 = UINT32_MAX;
	uint32_t x42 = 339U;
	int8_t x43 = INT8_MAX;
	int32_t x44 = -1;
	volatile uint32_t t8 = 1092275065U;

	t8 = (x41^((x42|x43)+x44));

	if (t8 != 4294966913U) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x45 = INT32_MAX;
	int8_t x46 = INT8_MIN;
	int32_t x47 = INT32_MIN;
	uint8_t x48 = UINT8_MAX;
	static volatile int32_t t9 = 466590267;

	t9 = (x45^((x46|x47)+x48));

	if (t9 != 2147483520) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = 12812U;
	int16_t x50 = INT16_MIN;
	int32_t x51 = -1;
	static volatile int32_t x52 = -1;
	uint32_t t10 = 857432U;

	t10 = (x49^((x50|x51)+x52));

	if (t10 != 4294954482U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x53 = INT32_MIN;
	static int32_t x55 = -38017;
	int16_t x56 = INT16_MAX;
	volatile int32_t t11 = -7636;

	t11 = (x53^((x54|x55)+x56));

	if (t11 != -2147456130) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x57 = 29U;
	volatile int16_t x58 = 1;
	int32_t x60 = INT32_MAX;
	int64_t t12 = -2212580684136208098LL;

	t12 = (x57^((x58|x59)+x60));

	if (t12 != -9223372034707292131LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = -1LL;
	int8_t x62 = INT8_MAX;
	int32_t x63 = -61950;
	int8_t x64 = INT8_MAX;
	volatile int64_t t13 = 573354398LL;

	t13 = (x61^((x62|x63)+x64));

	if (t13 != 61697LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x66 = 426U;
	int8_t x67 = INT8_MIN;
	volatile int16_t x68 = INT16_MIN;
	volatile int64_t t14 = 356LL;

	t14 = (x65^((x66|x67)+x68));

	if (t14 != 32853LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = 20;
	int32_t x74 = INT32_MIN;
	static uint32_t x75 = 96863U;
	volatile uint32_t t15 = 4478002U;

	t15 = (x73^((x74|x75)+x76));

	if (t15 != 96843U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x78 = 97061LLU;
	uint32_t x79 = UINT32_MAX;
	int64_t x80 = INT64_MIN;
	static volatile uint64_t t16 = 350532LLU;

	t16 = (x77^((x78|x79)+x80));

	if (t16 != 9223372041149710336LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = 57;
	volatile int8_t x84 = 1;
	volatile int32_t t17 = -45439;

	t17 = (x81^((x82|x83)+x84));

	if (t17 != 57) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x85 = INT8_MIN;
	volatile int8_t x86 = 0;
	uint16_t x87 = UINT16_MAX;
	int64_t x88 = 2073214392LL;
	static volatile int64_t t18 = -2028299291751LL;

	t18 = (x85^((x86|x87)+x88));

	if (t18 != -2073279945LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = 1;
	int16_t x90 = 611;
	volatile int64_t x91 = -1LL;
	volatile int64_t x92 = -1LL;

	t19 = (x89^((x90|x91)+x92));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x93 = 591U;
	int8_t x95 = 1;
	static uint16_t x96 = 50U;
	int32_t t20 = -12780;

	t20 = (x93^((x94|x95)+x96));

	if (t20 != 638) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x97 = 64U;
	static volatile uint16_t x98 = 22U;
	volatile uint64_t x99 = 7558242511160164LLU;

	t21 = (x97^((x98|x99)+x100));

	if (t21 != 7558242511159990LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x101 = UINT8_MAX;
	uint8_t x102 = 2U;
	int64_t x103 = -1LL;
	volatile int64_t t22 = 3855843804496LL;

	t22 = (x101^((x102|x103)+x104));

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x105 = 1501U;
	int8_t x108 = -7;
	volatile uint64_t t23 = 183461325621169LLU;

	t23 = (x105^((x106|x107)+x108));

	if (t23 != 18446744073709550117LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x109 = UINT16_MAX;
	volatile int32_t x110 = 1604;
	volatile uint16_t x112 = 10U;
	int32_t t24 = -3;

	t24 = (x109^((x110|x111)+x112));

	if (t24 != -65520) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x113 = INT32_MIN;
	uint64_t x114 = UINT64_MAX;
	int64_t x115 = -12557031881LL;
	volatile uint64_t t25 = 0LLU;

	t25 = (x113^((x114|x115)+x116));

	if (t25 != 2141465830LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x120 = INT16_MAX;
	int64_t t26 = -14084431560110LL;

	t26 = (x117^((x118|x119)+x120));

	if (t26 != -9223371605714464994LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x121 = -1;
	static int8_t x122 = -1;
	int16_t x123 = -2;
	static volatile int64_t x124 = -1LL;
	int64_t t27 = -1844699LL;

	t27 = (x121^((x122|x123)+x124));

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x126 = 17;
	uint32_t x127 = UINT32_MAX;
	int8_t x128 = -1;

	t28 = (x125^((x126|x127)+x128));

	if (t28 != 32766U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = 207165;
	int16_t x130 = -1;
	uint16_t x131 = 15805U;
	int16_t x132 = -1;
	volatile int32_t t29 = -6077;

	t29 = (x129^((x130|x131)+x132));

	if (t29 != -207165) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = -1;
	static uint16_t x135 = UINT16_MAX;
	static int32_t x136 = -1;
	int32_t t30 = 144568;

	t30 = (x133^((x134|x135)+x136));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x138 = INT64_MIN;
	int64_t x139 = -82LL;
	int16_t x140 = 3;
	volatile int64_t t31 = -3346438455731410196LL;

	t31 = (x137^((x138|x139)+x140));

	if (t31 != -80LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x144 = INT16_MIN;

	t32 = (x141^((x142|x143)+x144));

	if (t32 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x145 = UINT32_MAX;
	uint64_t x146 = UINT64_MAX;
	int64_t x148 = -1LL;
	static volatile uint64_t t33 = 4LLU;

	t33 = (x145^((x146|x147)+x148));

	if (t33 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x150 = -1;
	int32_t x151 = INT32_MIN;
	static uint32_t x152 = 33589U;

	t34 = (x149^((x150|x151)+x152));

	if (t34 != 33588U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = INT8_MIN;
	int16_t x154 = INT16_MIN;
	int32_t x155 = INT32_MIN;
	uint8_t x156 = 0U;
	static volatile int32_t t35 = -7533;

	t35 = (x153^((x154|x155)+x156));

	if (t35 != 32640) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x159 = INT8_MAX;
	volatile int16_t x160 = -1;
	volatile uint32_t t36 = 1889677U;

	t36 = (x157^((x158|x159)+x160));

	if (t36 != 183200694U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x162 = 0U;
	uint8_t x163 = 0U;
	int16_t x164 = INT16_MAX;

	t37 = (x161^((x162|x163)+x164));

	if (t37 != 18983) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x166 = INT8_MAX;
	uint8_t x167 = 94U;
	volatile int64_t t38 = 1049302495311890LL;

	t38 = (x165^((x166|x167)+x168));

	if (t38 != -128LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x169 = 3992;
	uint16_t x171 = 19506U;
	static int32_t x172 = -87;
	static uint32_t t39 = 3022U;

	t39 = (x169^((x170|x171)+x172));

	if (t39 != 9257904U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = INT64_MIN;
	static int32_t x186 = INT32_MIN;
	int8_t x188 = -23;
	volatile uint64_t t40 = 878164LLU;

	t40 = (x185^((x186|x187)+x188));

	if (t40 != 9223372036854775784LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x189 = 400093534;
	int32_t x190 = INT32_MIN;
	uint32_t x191 = 272982466U;
	static volatile uint32_t x192 = UINT32_MAX;
	uint32_t t41 = 930382300U;

	t41 = (x189^((x190|x191)+x192));

	if (t41 != 2275250335U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x193 = INT16_MAX;
	uint16_t x194 = UINT16_MAX;
	static int64_t x195 = INT64_MIN;
	static int8_t x196 = INT8_MIN;
	volatile int64_t t42 = 3202283331LL;

	t42 = (x193^((x194|x195)+x196));

	if (t42 != -9223372036854742912LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x201 = INT16_MIN;
	int64_t x202 = -1LL;
	uint16_t x203 = UINT16_MAX;
	int8_t x204 = INT8_MIN;
	static int64_t t43 = -6185957LL;

	t43 = (x201^((x202|x203)+x204));

	if (t43 != 32639LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x205 = INT32_MAX;
	volatile int32_t x207 = 58377626;
	volatile uint8_t x208 = 42U;
	volatile uint64_t t44 = 129801558397994LLU;

	t44 = (x205^((x206|x207)+x208));

	if (t44 != 2147483606LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x209 = INT16_MAX;
	volatile int8_t x210 = INT8_MIN;
	int16_t x211 = 12227;
	int16_t x212 = INT16_MIN;
	static volatile int32_t t45 = 730636;

	t45 = (x209^((x210|x211)+x212));

	if (t45 != -65476) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x213 = 1;
	int32_t x214 = INT32_MIN;
	int8_t x216 = -1;

	t46 = (x213^((x214|x215)+x216));

	if (t46 != -2147483642) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x217 = 1U;
	int32_t x218 = -1;
	static uint32_t x219 = UINT32_MAX;
	uint16_t x220 = 5611U;
	static volatile uint32_t t47 = 8U;

	t47 = (x217^((x218|x219)+x220));

	if (t47 != 5611U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x221 = 56LL;
	uint32_t x222 = 75916809U;
	int32_t x223 = 15;
	uint8_t x224 = 111U;
	int64_t t48 = 11363794LL;

	t48 = (x221^((x222|x223)+x224));

	if (t48 != 75916870LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x225 = 0U;
	uint16_t x226 = UINT16_MAX;
	int8_t x227 = INT8_MIN;
	uint8_t x228 = 14U;

	t49 = (x225^((x226|x227)+x228));

	if (t49 != 13) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x229 = INT16_MIN;
	int8_t x231 = INT8_MIN;
	static volatile uint64_t t50 = 28LLU;

	t50 = (x229^((x230|x231)+x232));

	if (t50 != 21795LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x233 = 2U;
	int8_t x234 = 13;
	uint8_t x235 = UINT8_MAX;
	static int64_t x236 = -467LL;
	volatile int64_t t51 = -45LL;

	t51 = (x233^((x234|x235)+x236));

	if (t51 != -210LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x237 = -51LL;
	volatile uint16_t x238 = UINT16_MAX;
	int64_t x240 = INT64_MIN;
	volatile int64_t t52 = 7929722240108936LL;

	t52 = (x237^((x238|x239)+x240));

	if (t52 != 9223372036854710322LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x241 = 13329212581844190LL;
	uint16_t x242 = UINT16_MAX;
	volatile int64_t x243 = -249622558216330152LL;
	uint64_t t53 = 16620609149034173LLU;

	t53 = (x241^((x242|x243)+x244));

	if (t53 != 18198185101269682912LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x245 = UINT32_MAX;
	uint16_t x246 = UINT16_MAX;
	uint16_t x247 = 8423U;
	uint64_t x248 = 377489503663LLU;
	volatile uint64_t t54 = 2624265505LLU;

	t54 = (x245^((x246|x247)+x248));

	if (t54 != 374129707601LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x249 = INT8_MIN;
	static uint32_t x250 = 72717419U;
	uint32_t t55 = 404U;

	t55 = (x249^((x250|x251)+x252));

	if (t55 != 4222249979U) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x253 = INT16_MIN;
	static volatile uint16_t x254 = 0U;
	uint8_t x255 = 3U;
	uint64_t t56 = 218595411162252020LLU;

	t56 = (x253^((x254|x255)+x256));

	if (t56 != 18446744073708835507LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x257 = 28;
	int64_t x259 = INT64_MIN;
	volatile int64_t t57 = 42490937726177932LL;

	t57 = (x257^((x258|x259)+x260));

	if (t57 != 32739LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x265 = 1U;
	static int16_t x266 = INT16_MIN;
	int8_t x267 = 1;
	static int32_t t58 = 7871002;

	t58 = (x265^((x266|x267)+x268));

	if (t58 != -32765) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x269 = 1502327413LLU;
	static int32_t x270 = -778;
	int8_t x271 = 29;
	uint8_t x272 = UINT8_MAX;
	volatile uint64_t t59 = 3001134374580648LLU;

	t59 = (x269^((x270|x271)+x272));

	if (t59 != 18446744072207224715LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x273 = UINT32_MAX;
	static volatile int8_t x275 = 29;
	int8_t x276 = INT8_MIN;

	t60 = (x273^((x274|x275)+x276));

	if (t60 != 32866U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x277 = INT64_MIN;
	int32_t x278 = 3153850;
	int8_t x279 = -1;
	int16_t x280 = INT16_MIN;
	static volatile int64_t t61 = -202389LL;

	t61 = (x277^((x278|x279)+x280));

	if (t61 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x281 = UINT16_MAX;
	static int32_t x282 = 44;
	int16_t x283 = INT16_MIN;
	volatile int64_t x284 = -1LL;
	volatile int64_t t62 = -4172913273683128LL;

	t62 = (x281^((x282|x283)+x284));

	if (t62 != -32812LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x285 = -9297;
	uint8_t x286 = 0U;
	int32_t x287 = -12409;
	static volatile int32_t t63 = -29461;

	t63 = (x285^((x286|x287)+x288));

	if (t63 != -27607) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x289 = UINT64_MAX;
	static int64_t x290 = INT64_MIN;
	static uint64_t x291 = 787352701870652LLU;
	volatile uint16_t x292 = 31U;
	static uint64_t t64 = 462LLU;

	t64 = (x289^((x290|x291)+x292));

	if (t64 != 9222584684152905124LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x294 = 3689U;
	volatile int64_t x295 = 395609LL;
	int64_t x296 = -5LL;
	int64_t t65 = -17189976489218389LL;

	t65 = (x293^((x294|x295)+x296));

	if (t65 != 397122LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x298 = INT32_MAX;
	int64_t x300 = -1LL;
	volatile uint64_t t66 = 571414682293LLU;

	t66 = (x297^((x298|x299)+x300));

	if (t66 != 18438571705330876281LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x302 = 27526223LLU;
	volatile int32_t x303 = -2910;
	int64_t x304 = -1LL;
	static volatile uint64_t t67 = 28132855LLU;

	t67 = (x301^((x302|x303)+x304));

	if (t67 != 2833LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x305 = INT64_MIN;
	uint16_t x306 = 1U;
	static uint64_t x307 = UINT64_MAX;
	uint64_t t68 = 32691694LLU;

	t68 = (x305^((x306|x307)+x308));

	if (t68 != 9223372036854775934LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x309 = INT16_MIN;
	uint64_t x310 = UINT64_MAX;
	int32_t x311 = 123836;
	uint16_t x312 = 31U;
	uint64_t t69 = 46037314869LLU;

	t69 = (x309^((x310|x311)+x312));

	if (t69 != 18446744073709518878LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x315 = 111640372;
	int8_t x316 = -8;
	volatile int32_t t70 = -16134;

	t70 = (x313^((x314|x315)+x316));

	if (t70 != -2035843281) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x317 = INT8_MIN;
	uint8_t x318 = UINT8_MAX;
	int16_t x319 = -1;
	volatile uint16_t x320 = 5810U;
	volatile int32_t t71 = -369904153;

	t71 = (x317^((x318|x319)+x320));

	if (t71 != -5839) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x321 = -59826540;
	static int16_t x322 = INT16_MIN;
	volatile int16_t x323 = INT16_MIN;
	static uint64_t x324 = 83827LLU;
	volatile uint64_t t72 = 81539LLU;

	t72 = (x321^((x322|x323)+x324));

	if (t72 != 18446744073649773031LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x325 = INT64_MAX;
	int8_t x326 = INT8_MAX;
	uint8_t x327 = 1U;
	int64_t t73 = -11LL;

	t73 = (x325^((x326|x327)+x328));

	if (t73 != 9223372036854775615LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = -1;
	uint32_t x330 = 81U;
	int8_t x331 = INT8_MIN;
	uint32_t t74 = 16849178U;

	t74 = (x329^((x330|x331)+x332));

	if (t74 != 2147483694U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x333 = -88943475LL;
	int32_t x334 = INT32_MAX;
	uint64_t x335 = UINT64_MAX;
	static volatile uint64_t t75 = 900LLU;

	t75 = (x333^((x334|x335)+x336));

	if (t75 != 18446744071651011443LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x337 = INT32_MIN;
	uint16_t x338 = 4U;
	volatile uint8_t x339 = 4U;
	int16_t x340 = INT16_MIN;
	int32_t t76 = -1809;

	t76 = (x337^((x338|x339)+x340));

	if (t76 != 2147450884) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x342 = UINT64_MAX;
	static int64_t x344 = -66497965851LL;
	uint64_t t77 = 195401388096038LLU;

	t77 = (x341^((x342|x343)+x344));

	if (t77 != 18446744007211585786LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x346 = 12U;
	uint32_t x347 = UINT32_MAX;
	int64_t x348 = INT64_MIN;

	t78 = (x345^((x346|x347)+x348));

	if (t78 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x354 = UINT8_MAX;
	static uint16_t x356 = 98U;
	volatile int32_t t79 = -290244;

	t79 = (x353^((x354|x355)+x356));

	if (t79 != -2147483295) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x361 = INT8_MIN;
	uint32_t x362 = UINT32_MAX;
	static int32_t x363 = INT32_MIN;
	int16_t x364 = -1;
	volatile uint32_t t80 = 98U;

	t80 = (x361^((x362|x363)+x364));

	if (t80 != 126U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x365 = INT64_MIN;
	int32_t x367 = INT32_MIN;
	int32_t x368 = -245250;

	t81 = (x365^((x366|x367)+x368));

	if (t81 != 9223372036854530430LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x371 = -1;
	uint32_t x372 = 31U;
	volatile uint32_t t82 = 10823348U;

	t82 = (x369^((x370|x371)+x372));

	if (t82 != 1510U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x378 = 1U;
	static uint32_t x379 = UINT32_MAX;
	static int32_t x380 = 809688;
	volatile int64_t t83 = 406690429LL;

	t83 = (x377^((x378|x379)+x380));

	if (t83 != -809688LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x381 = 67U;
	int16_t x382 = 17;
	volatile uint8_t x383 = 126U;
	int32_t x384 = -947;

	t84 = (x381^((x382|x383)+x384));

	if (t84 != -881) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x385 = -1493;
	int8_t x386 = INT8_MAX;
	static int16_t x387 = 6;
	volatile int16_t x388 = -618;

	t85 = (x385^((x386|x387)+x388));

	if (t85 != 1086) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x389 = 2580571072395979693LLU;
	volatile int16_t x390 = 28;
	int32_t x391 = INT32_MIN;
	int16_t x392 = INT16_MAX;

	t86 = (x389^((x390|x391)+x392));

	if (t86 != 15866173001575639990LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x393 = INT16_MAX;
	int32_t x394 = INT32_MIN;
	int16_t x395 = -61;
	uint32_t x396 = 175880335U;
	uint32_t t87 = 331173558U;

	t87 = (x393^((x394|x395)+x396));

	if (t87 != 175884205U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x398 = -1;
	int8_t x399 = 14;
	volatile uint32_t t88 = 3U;

	t88 = (x397^((x398|x399)+x400));

	if (t88 != 4294934529U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x401 = INT32_MAX;
	int32_t x402 = -16277060;
	volatile int32_t x403 = -1;
	uint32_t t89 = 1938421580U;

	t89 = (x401^((x402|x403)+x404));

	if (t89 != 2147219583U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x405 = 3U;
	static int64_t x407 = INT64_MAX;

	t90 = (x405^((x406|x407)+x408));

	if (t90 != 125LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x409 = 22;
	int8_t x410 = 1;
	int8_t x411 = INT8_MIN;
	volatile uint16_t x412 = 1610U;
	volatile int32_t t91 = -185;

	t91 = (x409^((x410|x411)+x412));

	if (t91 != 1501) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x413 = UINT64_MAX;
	uint64_t x414 = 353613321LLU;
	int64_t x415 = INT64_MAX;
	int64_t x416 = INT64_MAX;
	uint64_t t92 = 17009420292LLU;

	t92 = (x413^((x414|x415)+x416));

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x417 = -99;
	int32_t x420 = -36248;
	volatile int32_t t93 = -1;

	t93 = (x417^((x418|x419)+x420));

	if (t93 != 36469) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x423 = INT8_MIN;
	static uint8_t x424 = UINT8_MAX;
	uint64_t t94 = 1996194697029880LLU;

	t94 = (x421^((x422|x423)+x424));

	if (t94 != 181LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x425 = 59672851LL;
	int64_t x426 = -1LL;
	int8_t x427 = INT8_MIN;
	int8_t x428 = INT8_MAX;
	int64_t t95 = 30594578924LL;

	t95 = (x425^((x426|x427)+x428));

	if (t95 != 59672941LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x429 = UINT16_MAX;
	int8_t x430 = 43;
	static volatile int32_t x431 = INT32_MAX;
	static uint32_t x432 = 19294646U;
	static volatile uint32_t t96 = 405531U;

	t96 = (x429^((x430|x431)+x432));

	if (t96 != 2166789706U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x433 = UINT8_MAX;
	int16_t x434 = 10;
	volatile uint8_t x435 = 1U;
	volatile int32_t t97 = -546766;

	t97 = (x433^((x434|x435)+x436));

	if (t97 != 244) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x441 = -1;
	int64_t x442 = INT64_MIN;
	volatile uint16_t x443 = UINT16_MAX;
	uint16_t x444 = 6U;
	volatile int64_t t98 = -538879185508LL;

	t98 = (x441^((x442|x443)+x444));

	if (t98 != 9223372036854710266LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x445 = -1;
	int16_t x446 = 0;
	int64_t x447 = -1LL;
	int8_t x448 = 1;
	int64_t t99 = 868347LL;

	t99 = (x445^((x446|x447)+x448));

	if (t99 != -1LL) { NG(); } else { ; }
	
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


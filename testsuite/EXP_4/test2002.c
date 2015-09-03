#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
volatile uint32_t x7 = 53178U;
int32_t x8 = INT32_MAX;
volatile int32_t t2 = -3;
int64_t x13 = 240945521261LL;
int16_t x20 = INT16_MIN;
static volatile uint64_t x21 = 1LLU;
int16_t x22 = -4;
static volatile uint32_t t6 = 5897833U;
volatile uint32_t x30 = UINT32_MAX;
volatile uint16_t x32 = UINT16_MAX;
int8_t x34 = INT8_MAX;
static volatile int8_t x40 = -5;
static uint64_t x41 = UINT64_MAX;
int64_t x43 = INT64_MIN;
uint64_t t10 = UINT64_MAX;
static int32_t x53 = INT32_MAX;
int8_t x58 = INT8_MAX;
uint32_t t14 = 28U;
static volatile int64_t x62 = INT64_MAX;
int8_t x66 = INT8_MIN;
int32_t x68 = INT32_MAX;
volatile int32_t t16 = -2021;
uint64_t t17 = 243168147157916LLU;
int64_t x75 = INT64_MAX;
int64_t t18 = -773068209779LL;
int32_t x84 = INT32_MIN;
static volatile uint8_t x88 = 0U;
static volatile int16_t x95 = -1;
static volatile uint64_t x96 = UINT64_MAX;
volatile int64_t t24 = -32042LL;
volatile int32_t t25 = -3141;
uint64_t x112 = 2492983085913966778LLU;
int64_t x116 = INT64_MAX;
static int64_t t28 = 559065LL;
int32_t x122 = INT32_MIN;
int8_t x124 = INT8_MAX;
static int64_t x126 = 72LL;
int64_t t31 = -9LL;
volatile int64_t x132 = -105238585582825LL;
int8_t x135 = -1;
int8_t x138 = 1;
uint16_t x141 = 1244U;
uint64_t x144 = 172429LLU;
uint16_t x147 = 54U;
uint16_t x149 = 237U;
int32_t x150 = -322549;
int32_t x152 = INT32_MIN;
int8_t x153 = -1;
int16_t x158 = INT16_MIN;
static volatile int64_t x162 = 96240174511592208LL;
static int8_t x163 = -1;
volatile int16_t x169 = -85;
volatile int64_t t42 = -2133184551LL;
int16_t x181 = -3;
int64_t t45 = 7473800LL;
volatile int64_t x187 = INT64_MAX;
volatile int64_t t46 = 852LL;
static uint8_t x192 = UINT8_MAX;
uint8_t x193 = 42U;
uint8_t x196 = UINT8_MAX;
int8_t x212 = 12;
static uint32_t x216 = 233U;
volatile int64_t t54 = -345959LL;
int32_t x222 = INT32_MIN;
volatile uint16_t x234 = 3U;
uint64_t x238 = 20LLU;
static uint32_t x239 = 120741U;
static int64_t x240 = -1482839108239248714LL;
volatile uint64_t t61 = 1695402530LLU;
int64_t x249 = INT64_MIN;
int32_t x251 = INT32_MIN;
int32_t x252 = -2;
static int16_t x263 = -1;
int64_t x272 = INT64_MIN;
int64_t x275 = 10600426905343LL;
int64_t t70 = 10242768281LL;
int8_t x285 = -26;
uint8_t x289 = 2U;
int16_t x294 = INT16_MIN;
static volatile int32_t t73 = 1541;
uint16_t x303 = 92U;
volatile int64_t x306 = INT64_MIN;
int64_t t77 = -420295LL;
int16_t x315 = INT16_MAX;
int32_t x324 = INT32_MAX;
static int32_t x332 = INT32_MIN;
int64_t x339 = INT64_MIN;
volatile uint64_t t84 = 308149232295459LLU;
int64_t x345 = -1LL;
int64_t t86 = INT64_MAX;
volatile int64_t x349 = 1LL;
int64_t x350 = -511908648706126962LL;
uint8_t x353 = 19U;
volatile int32_t x356 = INT32_MAX;
uint8_t x365 = 6U;
int8_t x387 = INT8_MIN;
volatile uint32_t t96 = 988843U;
int16_t x391 = INT16_MIN;
uint64_t t97 = 157LLU;
volatile uint16_t x397 = 3282U;


void f0(void) {
	volatile uint64_t x2 = 22322529LLU;
	int16_t x3 = INT16_MAX;
	int16_t x4 = INT16_MIN;
	uint64_t t0 = 8800294219574466675LLU;

	t0 = (x1^(x2&(x3|x4)));

	if (t0 != 18446744073687229153LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	volatile int32_t x6 = INT32_MIN;
	static volatile uint32_t t1 = UINT32_MAX;

	t1 = (x5^(x6&(x7|x8)));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 20122U;
	int8_t x10 = -1;
	volatile int32_t x11 = -1;
	int16_t x12 = INT16_MIN;

	t2 = (x9^(x10&(x11|x12)));

	if (t2 != -20123) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = 0;
	uint64_t x15 = 84065793213195290LLU;
	static volatile uint32_t x16 = 52774U;
	uint64_t t3 = 40439002983396607LLU;

	t3 = (x13^(x14&(x15|x16)));

	if (t3 != 240945521261LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MIN;
	volatile uint32_t x18 = 42618U;
	uint32_t x19 = UINT32_MAX;
	uint32_t t4 = 233731U;

	t4 = (x17^(x18&(x19|x20)));

	if (t4 != 4294924794U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x23 = INT16_MIN;
	static uint32_t x24 = 17176576U;
	volatile uint64_t t5 = 53282378955559023LLU;

	t5 = (x21^(x22&(x23|x24)));

	if (t5 != 4294940673LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -15364;
	int16_t x26 = INT16_MIN;
	static int32_t x27 = -1;
	uint32_t x28 = 87U;

	t6 = (x25^(x26&(x27|x28)));

	if (t6 != 17404U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 0;
	uint64_t x31 = 1564250LLU;
	uint64_t t7 = 763LLU;

	t7 = (x29^(x30&(x31|x32)));

	if (t7 != 1572863LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = -48867518820LL;
	int64_t x35 = INT64_MIN;
	uint64_t x36 = 150978712545161LLU;
	uint64_t t8 = 1018165157472907774LLU;

	t8 = (x33^(x34&(x35|x36)));

	if (t8 != 18446744024842032789LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = -1;
	volatile uint8_t x38 = 18U;
	int32_t x39 = 3566951;
	int32_t t9 = 115192854;

	t9 = (x37^(x38&(x39|x40)));

	if (t9 != -19) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = INT16_MAX;
	int32_t x44 = INT32_MIN;

	t10 = (x41^(x42&(x43|x44)));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 3U;
	uint64_t x46 = 51135LLU;
	int8_t x47 = INT8_MIN;
	int8_t x48 = INT8_MAX;
	static volatile uint64_t t11 = 1165586LLU;

	t11 = (x45^(x46&(x47|x48)));

	if (t11 != 51132LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = 43U;
	volatile uint32_t x50 = 138806U;
	static int8_t x51 = -1;
	volatile int16_t x52 = 1;
	uint32_t t12 = 11627U;

	t12 = (x49^(x50&(x51|x52)));

	if (t12 != 138781U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x54 = 70U;
	volatile int8_t x55 = -1;
	static volatile uint32_t x56 = UINT32_MAX;
	volatile uint32_t t13 = 1024722U;

	t13 = (x53^(x54&(x55|x56)));

	if (t13 != 2147483577U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	static uint32_t x59 = 13433U;
	static int8_t x60 = INT8_MIN;

	t14 = (x57^(x58&(x59|x60)));

	if (t14 != 4294967174U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -4088;
	int16_t x63 = -1;
	int32_t x64 = -473;
	static volatile int64_t t15 = 259209230517008424LL;

	t15 = (x61^(x62&(x63|x64)));

	if (t15 != -9223372036854771721LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	static int8_t x67 = 0;

	t16 = (x65^(x66&(x67|x68)));

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	static uint64_t x70 = 132181062176074LLU;
	uint64_t x71 = 1668LLU;
	int16_t x72 = INT16_MAX;

	t17 = (x69^(x70&(x71|x72)));

	if (t17 != 2147463861LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = INT8_MAX;
	int64_t x74 = INT64_MIN;
	uint16_t x76 = 0U;

	t18 = (x73^(x74&(x75|x76)));

	if (t18 != 127LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = INT64_MIN;
	uint64_t x78 = 4513027013279005179LLU;
	int8_t x79 = INT8_MIN;
	int64_t x80 = INT64_MIN;
	uint64_t t19 = 5657726010193231350LLU;

	t19 = (x77^(x78&(x79|x80)));

	if (t19 != 13736399050133780864LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	int8_t x82 = -1;
	static int32_t x83 = INT32_MIN;
	uint64_t t20 = 0LLU;

	t20 = (x81^(x82&(x83|x84)));

	if (t20 != 2147483647LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = INT16_MAX;
	int32_t x86 = -87695345;
	static int32_t x87 = -1364;
	volatile int32_t t21 = 227086;

	t21 = (x85^(x86&(x87|x88)));

	if (t21 != -87711757) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 1900LLU;
	int16_t x90 = INT16_MAX;
	uint32_t x91 = UINT32_MAX;
	int32_t x92 = INT32_MIN;
	uint64_t t22 = 7125409164LLU;

	t22 = (x89^(x90&(x91|x92)));

	if (t22 != 30867LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = INT8_MIN;
	uint32_t x94 = 42813871U;
	uint64_t t23 = 52LLU;

	t23 = (x93^(x94&(x95|x96)));

	if (t23 != 18446744073666737711LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 697854309U;
	uint16_t x98 = 31U;
	volatile int64_t x99 = INT64_MIN;
	int32_t x100 = INT32_MAX;

	t24 = (x97^(x98&(x99|x100)));

	if (t24 != 697854330LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MAX;
	uint16_t x102 = UINT16_MAX;
	static volatile int32_t x103 = INT32_MIN;
	int32_t x104 = -1;

	t25 = (x101^(x102&(x103|x104)));

	if (t25 != 2147418112) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = INT64_MIN;
	static int8_t x106 = 0;
	int64_t x107 = 20407188871587864LL;
	uint64_t x108 = 506501LLU;
	uint64_t t26 = 2LLU;

	t26 = (x105^(x106&(x107|x108)));

	if (t26 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = INT32_MIN;
	int16_t x110 = 0;
	int32_t x111 = INT32_MAX;
	uint64_t t27 = 1005364697847LLU;

	t27 = (x109^(x110&(x111|x112)));

	if (t27 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = 1;
	volatile int32_t x114 = -249191296;
	int8_t x115 = 61;

	t28 = (x113^(x114&(x115|x116)));

	if (t28 != 9223372036605584513LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x117 = INT32_MAX;
	volatile int64_t x118 = INT64_MIN;
	int8_t x119 = -1;
	int8_t x120 = 2;
	volatile int64_t t29 = 154216318014997LL;

	t29 = (x117^(x118&(x119|x120)));

	if (t29 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 25U;
	int32_t x123 = INT32_MIN;
	uint32_t t30 = 31395U;

	t30 = (x121^(x122&(x123|x124)));

	if (t30 != 2147483673U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -40;
	static int64_t x127 = 7LL;
	int8_t x128 = INT8_MAX;

	t31 = (x125^(x126&(x127|x128)));

	if (t31 != -112LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = 27;
	uint16_t x130 = 0U;
	int16_t x131 = INT16_MIN;
	int64_t t32 = 1043877589781755124LL;

	t32 = (x129^(x130&(x131|x132)));

	if (t32 != 27LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x133 = INT32_MAX;
	int16_t x134 = INT16_MAX;
	static int16_t x136 = INT16_MAX;
	int32_t t33 = -248151033;

	t33 = (x133^(x134&(x135|x136)));

	if (t33 != 2147450880) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x137 = -3204471488157LL;
	volatile int8_t x139 = 0;
	int16_t x140 = -1;
	int64_t t34 = 727509260714LL;

	t34 = (x137^(x138&(x139|x140)));

	if (t34 != -3204471488158LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x142 = 145U;
	static uint64_t x143 = 33424697908LLU;
	uint64_t t35 = 5239850588374LLU;

	t35 = (x141^(x142&(x143|x144)));

	if (t35 != 1101LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = 16241;
	int16_t x146 = -1;
	static volatile int64_t x148 = INT64_MIN;
	volatile int64_t t36 = 1LL;

	t36 = (x145^(x146&(x147|x148)));

	if (t36 != -9223372036854759609LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x151 = INT8_MIN;
	volatile int32_t t37 = -113999748;

	t37 = (x149^(x150&(x151|x152)));

	if (t37 != -322323) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x154 = INT16_MIN;
	static int64_t x155 = -1LL;
	int64_t x156 = -1126281387144LL;
	int64_t t38 = 75LL;

	t38 = (x153^(x154&(x155|x156)));

	if (t38 != 32767LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = 0;
	volatile int8_t x159 = -1;
	static int64_t x160 = INT64_MIN;
	int64_t t39 = 10768LL;

	t39 = (x157^(x158&(x159|x160)));

	if (t39 != -32768LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 98326778302142LLU;
	uint64_t x164 = 801083698411LLU;
	uint64_t t40 = 6936295076572429672LLU;

	t40 = (x161^(x162&(x163|x164)));

	if (t40 != 96177033986694574LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = UINT16_MAX;
	uint64_t x166 = 92104594458LLU;
	int8_t x167 = INT8_MAX;
	uint8_t x168 = 1U;
	uint64_t t41 = 135571835LLU;

	t41 = (x165^(x166&(x167|x168)));

	if (t41 != 65509LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x170 = INT16_MIN;
	static int8_t x171 = INT8_MAX;
	int64_t x172 = INT64_MAX;

	t42 = (x169^(x170&(x171|x172)));

	if (t42 != -9223372036854743125LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = -18;
	static int32_t x174 = -1;
	int64_t x175 = -1880LL;
	uint16_t x176 = UINT16_MAX;
	volatile int64_t t43 = -315LL;

	t43 = (x173^(x174&(x175|x176)));

	if (t43 != 17LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 2;
	uint8_t x178 = 1U;
	int32_t x179 = INT32_MAX;
	static volatile int64_t x180 = INT64_MAX;
	static volatile int64_t t44 = -520592965855LL;

	t44 = (x177^(x178&(x179|x180)));

	if (t44 != 3LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = INT8_MAX;
	int64_t x183 = INT64_MAX;
	int32_t x184 = INT32_MIN;

	t45 = (x181^(x182&(x183|x184)));

	if (t45 != -126LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x185 = UINT8_MAX;
	int16_t x186 = INT16_MIN;
	volatile uint8_t x188 = 8U;

	t46 = (x185^(x186&(x187|x188)));

	if (t46 != 9223372036854743295LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = INT64_MAX;
	uint32_t x190 = 12370U;
	static uint8_t x191 = 1U;
	int64_t t47 = 113532248326LL;

	t47 = (x189^(x190&(x191|x192)));

	if (t47 != 9223372036854775725LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x194 = -6306359LL;
	static volatile uint64_t x195 = 271416509667143406LLU;
	volatile uint64_t t48 = 889438LLU;

	t48 = (x193^(x194&(x195|x196)));

	if (t48 != 271416509660841187LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -3502497;
	uint32_t x198 = 9752589U;
	static volatile uint32_t x199 = 535231U;
	volatile int8_t x200 = INT8_MAX;
	uint32_t t49 = 3456U;

	t49 = (x197^(x198&(x199|x200)));

	if (t49 != 4291464786U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = 0;
	int64_t x202 = INT64_MAX;
	static uint32_t x203 = UINT32_MAX;
	volatile uint8_t x204 = UINT8_MAX;
	static volatile int64_t t50 = -180082LL;

	t50 = (x201^(x202&(x203|x204)));

	if (t50 != 4294967295LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MAX;
	volatile int32_t x206 = INT32_MAX;
	volatile int64_t x207 = INT64_MIN;
	static int16_t x208 = INT16_MAX;
	int64_t t51 = -31LL;

	t51 = (x205^(x206&(x207|x208)));

	if (t51 != 32640LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 20757U;
	static volatile uint8_t x210 = 0U;
	volatile uint64_t x211 = 3133LLU;
	uint64_t t52 = 176966549904105377LLU;

	t52 = (x209^(x210&(x211|x212)));

	if (t52 != 20757LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x213 = 2U;
	int8_t x214 = INT8_MAX;
	int32_t x215 = INT32_MIN;
	static volatile uint32_t t53 = 41484347U;

	t53 = (x213^(x214&(x215|x216)));

	if (t53 != 107U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MAX;
	int64_t x218 = 6704926LL;
	int16_t x219 = INT16_MAX;
	static volatile int32_t x220 = INT32_MAX;

	t54 = (x217^(x218&(x219|x220)));

	if (t54 != 9223372036848070881LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	static int16_t x223 = INT16_MAX;
	int32_t x224 = INT32_MIN;
	static volatile int32_t t55 = 1;

	t55 = (x221^(x222&(x223|x224)));

	if (t55 != 2147483520) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MAX;
	int32_t x226 = INT32_MIN;
	int8_t x227 = -1;
	int16_t x228 = INT16_MIN;
	int64_t t56 = -179929977158LL;

	t56 = (x225^(x226&(x227|x228)));

	if (t56 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = UINT32_MAX;
	uint16_t x230 = 1U;
	int64_t x231 = -6516970068260LL;
	uint8_t x232 = 40U;
	int64_t t57 = 6LL;

	t57 = (x229^(x230&(x231|x232)));

	if (t57 != 4294967295LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	int16_t x235 = -1;
	volatile int32_t x236 = -1714;
	volatile int32_t t58 = -28739845;

	t58 = (x233^(x234&(x235|x236)));

	if (t58 != -125) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 26177U;
	volatile uint64_t t59 = 458641255225652634LLU;

	t59 = (x237^(x238&(x239|x240)));

	if (t59 != 26197LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = INT16_MIN;
	uint32_t x242 = 47248U;
	static int16_t x243 = INT16_MAX;
	int64_t x244 = -1LL;
	int64_t t60 = 84382331LL;

	t60 = (x241^(x242&(x243|x244)));

	if (t60 != -51056LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = 46;
	uint8_t x246 = 0U;
	int8_t x247 = INT8_MAX;
	uint64_t x248 = UINT64_MAX;

	t61 = (x245^(x246&(x247|x248)));

	if (t61 != 46LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x250 = 0U;
	static volatile int64_t t62 = INT64_MIN;

	t62 = (x249^(x250&(x251|x252)));

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x253 = 708856977015876256LLU;
	uint64_t x254 = 98523LLU;
	static volatile int8_t x255 = INT8_MAX;
	int16_t x256 = -1139;
	static uint64_t t63 = 35150426465781265LLU;

	t63 = (x253^(x254&(x255|x256)));

	if (t63 != 708856977015908987LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -1LL;
	uint32_t x258 = 119U;
	int8_t x259 = -1;
	uint8_t x260 = 18U;
	static int64_t t64 = 1091221949831367LL;

	t64 = (x257^(x258&(x259|x260)));

	if (t64 != -120LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MAX;
	int16_t x262 = -1;
	uint8_t x264 = 0U;
	static volatile int32_t t65 = 54391045;

	t65 = (x261^(x262&(x263|x264)));

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = UINT32_MAX;
	volatile int64_t x266 = INT64_MAX;
	uint8_t x267 = 0U;
	uint16_t x268 = 95U;
	static int64_t t66 = -7938859020LL;

	t66 = (x265^(x266&(x267|x268)));

	if (t66 != 4294967200LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 164923388U;
	int32_t x270 = INT32_MAX;
	volatile int8_t x271 = -1;
	int64_t t67 = -3099563LL;

	t67 = (x269^(x270&(x271|x272)));

	if (t67 != 1982560259LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 473U;
	uint32_t x274 = 94806278U;
	static uint32_t x276 = 25976U;
	int64_t t68 = -554123201578993LL;

	t68 = (x273^(x274&(x275|x276)));

	if (t68 != 10887391LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	uint16_t x278 = 25500U;
	static int16_t x279 = INT16_MIN;
	int8_t x280 = INT8_MAX;
	int32_t t69 = 203016282;

	t69 = (x277^(x278&(x279|x280)));

	if (t69 != -29) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -1;
	static volatile int64_t x282 = -1LL;
	int8_t x283 = -5;
	volatile int32_t x284 = -1;

	t70 = (x281^(x282&(x283|x284)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x286 = -1489;
	volatile uint16_t x287 = 26873U;
	static volatile int32_t x288 = -103126700;
	int32_t t71 = -265950669;

	t71 = (x285^(x286&(x287|x288)));

	if (t71 != 103126987) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = INT16_MIN;
	volatile int8_t x291 = 51;
	static uint16_t x292 = 3U;
	int32_t t72 = 34731;

	t72 = (x289^(x290&(x291|x292)));

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 4U;
	uint16_t x295 = UINT16_MAX;
	static volatile int16_t x296 = -1;

	t73 = (x293^(x294&(x295|x296)));

	if (t73 != -32764) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x297 = -1LL;
	uint8_t x298 = 22U;
	uint16_t x299 = 38U;
	volatile int32_t x300 = INT32_MIN;
	static int64_t t74 = -79LL;

	t74 = (x297^(x298&(x299|x300)));

	if (t74 != -7LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x301 = 182125LLU;
	static int64_t x302 = -1LL;
	int16_t x304 = -121;
	static volatile uint64_t t75 = 1438946187688LLU;

	t75 = (x301^(x302&(x303|x304)));

	if (t75 != 18446744073709369522LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	int16_t x307 = 98;
	uint64_t x308 = UINT64_MAX;
	uint64_t t76 = 1329007034918706LLU;

	t76 = (x305^(x306&(x307|x308)));

	if (t76 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 377U;
	volatile int16_t x310 = INT16_MAX;
	int64_t x311 = -1601063LL;
	static int64_t x312 = INT64_MAX;

	t77 = (x309^(x310&(x311|x312)));

	if (t77 != 32390LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = 0;
	static uint8_t x314 = UINT8_MAX;
	uint16_t x316 = UINT16_MAX;
	int32_t t78 = 4206996;

	t78 = (x313^(x314&(x315|x316)));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = INT64_MIN;
	static int32_t x318 = INT32_MIN;
	uint64_t x319 = UINT64_MAX;
	int8_t x320 = INT8_MIN;
	uint64_t t79 = 1546545LLU;

	t79 = (x317^(x318&(x319|x320)));

	if (t79 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MAX;
	int32_t x322 = -1;
	int16_t x323 = -1;
	volatile int32_t t80 = 2148;

	t80 = (x321^(x322&(x323|x324)));

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MIN;
	static int64_t x326 = INT64_MIN;
	static int32_t x327 = INT32_MIN;
	volatile uint16_t x328 = UINT16_MAX;
	int64_t t81 = 27334LL;

	t81 = (x325^(x326&(x327|x328)));

	if (t81 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x329 = 16316;
	int8_t x330 = INT8_MIN;
	int8_t x331 = 15;
	static int32_t t82 = 247486;

	t82 = (x329^(x330&(x331|x332)));

	if (t82 != -2147467332) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = INT32_MIN;
	int64_t x334 = INT64_MIN;
	static uint8_t x335 = 111U;
	int64_t x336 = 39178LL;
	static volatile int64_t t83 = -222380LL;

	t83 = (x333^(x334&(x335|x336)));

	if (t83 != -2147483648LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 56624LLU;
	uint64_t x338 = 0LLU;
	volatile int8_t x340 = INT8_MIN;

	t84 = (x337^(x338&(x339|x340)));

	if (t84 != 56624LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 19297U;
	int16_t x342 = INT16_MIN;
	static int32_t x343 = 1722;
	volatile uint32_t x344 = 91508931U;
	volatile uint32_t t85 = 1395369U;

	t85 = (x341^(x342&(x343|x344)));

	if (t85 != 91507553U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x346 = INT64_MIN;
	uint16_t x347 = 21U;
	int32_t x348 = -1;

	t86 = (x345^(x346&(x347|x348)));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x351 = -2;
	int32_t x352 = INT32_MIN;
	volatile int64_t t87 = 331509348490306802LL;

	t87 = (x349^(x350&(x351|x352)));

	if (t87 != -511908648706126961LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x354 = -1;
	int16_t x355 = INT16_MAX;
	static int32_t t88 = -15898114;

	t88 = (x353^(x354&(x355|x356)));

	if (t88 != 2147483628) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint32_t x357 = UINT32_MAX;
	int8_t x358 = 8;
	int64_t x359 = INT64_MAX;
	volatile uint16_t x360 = UINT16_MAX;
	volatile int64_t t89 = 17571833270LL;

	t89 = (x357^(x358&(x359|x360)));

	if (t89 != 4294967287LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 6802U;
	uint8_t x362 = UINT8_MAX;
	uint8_t x363 = 15U;
	static volatile uint8_t x364 = UINT8_MAX;
	volatile int32_t t90 = 3817;

	t90 = (x361^(x362&(x363|x364)));

	if (t90 != 6765) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x366 = 40702U;
	static int8_t x367 = INT8_MIN;
	int8_t x368 = INT8_MAX;
	static uint32_t t91 = 131009214U;

	t91 = (x365^(x366&(x367|x368)));

	if (t91 != 40696U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 1230666U;
	static volatile uint8_t x370 = 30U;
	uint64_t x371 = 1675058830LLU;
	uint64_t x372 = 3463489368734963LLU;
	volatile uint64_t t92 = 2384627896082653180LLU;

	t92 = (x369^(x370&(x371|x372)));

	if (t92 != 1230676LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = -323LL;
	uint16_t x374 = 126U;
	volatile int32_t x375 = 6392;
	uint32_t x376 = 3275U;
	int64_t t93 = -250739157097499399LL;

	t93 = (x373^(x374&(x375|x376)));

	if (t93 != -313LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = INT32_MIN;
	int8_t x378 = 1;
	static uint16_t x379 = 1673U;
	uint16_t x380 = UINT16_MAX;
	int32_t t94 = -4978;

	t94 = (x377^(x378&(x379|x380)));

	if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x381 = 0;
	uint32_t x382 = UINT32_MAX;
	int16_t x383 = 111;
	static uint64_t x384 = 7629988LLU;
	volatile uint64_t t95 = 401780094LLU;

	t95 = (x381^(x382&(x383|x384)));

	if (t95 != 7630063LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 56119807U;
	uint32_t x386 = 3522248U;
	int8_t x388 = -1;

	t96 = (x385^(x386&(x387|x388)));

	if (t96 != 57536311U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -360;
	int32_t x390 = INT32_MIN;
	static uint64_t x392 = 4912026066669172LLU;

	t97 = (x389^(x390&(x391|x392)));

	if (t97 != 2147483288LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -34;
	int16_t x394 = -1;
	static volatile int32_t x395 = INT32_MAX;
	int8_t x396 = 7;
	volatile int32_t t98 = -11699;

	t98 = (x393^(x394&(x395|x396)));

	if (t98 != -2147483615) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x398 = UINT32_MAX;
	static uint16_t x399 = 13087U;
	int64_t x400 = -1LL;
	volatile int64_t t99 = -168866866LL;

	t99 = (x397^(x398&(x399|x400)));

	if (t99 != 4294964013LL) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = 1;
uint64_t x18 = 2098131466832LLU;
int32_t x20 = INT32_MIN;
volatile int64_t t6 = -8331248751779008LL;
int16_t x33 = INT16_MIN;
volatile uint64_t x36 = 31715297LLU;
volatile uint32_t t10 = 58002376U;
volatile int64_t x75 = INT64_MAX;
uint32_t x76 = 1U;
uint64_t x79 = 408728797398LLU;
uint32_t x82 = 225U;
static int8_t x93 = -1;
int16_t x96 = INT16_MAX;
int16_t x100 = -31;
volatile int32_t x106 = INT32_MIN;
int16_t x107 = -1;
uint16_t x110 = 1U;
static int8_t x111 = -1;
static uint32_t x115 = 1387045171U;
static uint64_t x116 = 13611499067LLU;
uint32_t x117 = 1764967U;
int16_t x120 = INT16_MIN;
volatile uint8_t x121 = UINT8_MAX;
int8_t x127 = -1;
int16_t x135 = INT16_MAX;
uint16_t x137 = 87U;
uint8_t x138 = UINT8_MAX;
uint32_t x142 = 198U;
uint32_t x157 = UINT32_MAX;
int8_t x158 = -6;
static int64_t x160 = INT64_MIN;
int64_t x175 = -6140345364781697LL;
int64_t x176 = INT64_MIN;
uint8_t x177 = UINT8_MAX;
volatile int32_t x181 = 14;
uint32_t x182 = UINT32_MAX;
static int8_t x183 = INT8_MAX;
int8_t x186 = -2;
int64_t x191 = -1LL;
int64_t x196 = -280367LL;
volatile int32_t x199 = 97899866;
volatile uint64_t t50 = 129148LLU;
volatile uint64_t t51 = 5680339076419949081LLU;
int16_t x216 = INT16_MAX;
static int8_t x218 = 3;
int64_t x221 = -116999786578LL;
volatile int64_t t55 = 30446079673LL;
uint32_t t57 = 19U;
int8_t x236 = INT8_MAX;
int64_t t60 = 68577LL;
int64_t x248 = INT64_MAX;
static volatile int32_t t63 = 14602;
static volatile uint8_t x260 = 3U;
volatile uint64_t x270 = 2084199436939381038LLU;
uint16_t x271 = 20U;
int16_t x273 = INT16_MIN;
int32_t x281 = INT32_MIN;
int32_t t70 = 0;
int64_t x290 = -1LL;
int64_t x294 = INT64_MIN;
uint64_t t73 = 88510563357966LLU;
volatile uint8_t x311 = 31U;
static uint32_t x322 = 67842859U;
uint16_t x323 = UINT16_MAX;
static uint64_t x325 = 37535751904696769LLU;
static uint32_t x326 = 0U;
int32_t x329 = 2514;
uint32_t x330 = 15U;
int64_t x335 = INT64_MIN;
uint64_t t83 = 1490LLU;
volatile int64_t x342 = INT64_MAX;
uint8_t x343 = UINT8_MAX;
int64_t x344 = INT64_MIN;
static volatile int64_t t84 = -9865645018275655LL;
uint16_t x345 = UINT16_MAX;
static int32_t t85 = -14892407;
volatile int16_t x357 = 4218;
int32_t x361 = -1;
uint32_t x366 = 345282U;
static uint16_t x367 = UINT16_MAX;
volatile int64_t t89 = -57299433LL;
static uint8_t x372 = UINT8_MAX;
static uint64_t x384 = 4000LLU;
uint32_t x392 = 132219480U;
uint16_t x393 = 1757U;
int32_t x394 = INT32_MAX;
int8_t x402 = -1;
int32_t x406 = INT32_MIN;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int16_t x2 = -1;
	int8_t x3 = -1;
	uint32_t x4 = UINT32_MAX;
	volatile uint32_t t0 = 15273U;

	t0 = ((x1^(x2|x3))%x4);

	if (t0 != 4294967168U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	static int32_t x6 = 9311267;
	static int16_t x8 = INT16_MAX;
	volatile int32_t t1 = 1149;

	t1 = ((x5^(x6|x7))%x8);

	if (t1 != -5440) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = UINT8_MAX;
	uint32_t x10 = 10903U;
	int64_t x11 = INT64_MIN;
	int16_t x12 = INT16_MIN;
	int64_t t2 = 0LL;

	t2 = ((x9^(x10|x11))%x12);

	if (t2 != -21912LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	static int16_t x14 = INT16_MIN;
	static int64_t x15 = INT64_MAX;
	int64_t x16 = INT64_MIN;
	volatile int64_t t3 = -188297118093LL;

	t3 = ((x13^(x14|x15))%x16);

	if (t3 != -65536LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 14824U;
	int32_t x19 = INT32_MIN;
	static volatile uint64_t t4 = 20629LLU;

	t4 = ((x17^(x18|x19))%x20);

	if (t4 != 39928760LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MAX;
	static int8_t x22 = -6;
	volatile int16_t x23 = INT16_MIN;
	static uint32_t x24 = 8112U;
	volatile int64_t t5 = 30772422379175919LL;

	t5 = ((x21^(x22|x23))%x24);

	if (t5 != -1563LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x25 = -1LL;
	uint8_t x26 = 2U;
	int64_t x27 = INT64_MIN;
	int64_t x28 = -1LL;

	t6 = ((x25^(x26|x27))%x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = 13U;
	int64_t x30 = INT64_MAX;
	int64_t x31 = -232LL;
	uint64_t x32 = UINT64_MAX;
	uint64_t t7 = 449787504LLU;

	t7 = ((x29^(x30|x31))%x32);

	if (t7 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = INT8_MIN;
	volatile int64_t x35 = INT64_MAX;
	uint64_t t8 = 440587393428939799LLU;

	t8 = ((x33^(x34|x35))%x36);

	if (t8 != 32767LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1814;
	int64_t x38 = 1153501946LL;
	volatile uint64_t x39 = 381LLU;
	int16_t x40 = INT16_MIN;
	uint64_t t9 = 162506711LLU;

	t9 = ((x37^(x38|x39))%x40);

	if (t9 != 18446744072556049173LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = 3638957U;
	int32_t x42 = -8;
	uint8_t x43 = 111U;
	uint16_t x44 = 6997U;

	t10 = ((x41^(x42|x43))%x44);

	if (t10 != 5265U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = UINT64_MAX;
	uint64_t x46 = UINT64_MAX;
	static int16_t x47 = INT16_MAX;
	static uint8_t x48 = 6U;
	uint64_t t11 = 19967632931104LLU;

	t11 = ((x45^(x46|x47))%x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int32_t x50 = -1;
	uint8_t x51 = 109U;
	volatile uint8_t x52 = 55U;
	static volatile int32_t t12 = 1;

	t12 = ((x49^(x50|x51))%x52);

	if (t12 != 42) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MIN;
	int8_t x54 = 1;
	int64_t x55 = -1LL;
	static int32_t x56 = INT32_MIN;
	int64_t t13 = 6366060356952367LL;

	t13 = ((x53^(x54|x55))%x56);

	if (t13 != 32767LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	uint16_t x58 = 0U;
	volatile int32_t x59 = -4658;
	int32_t x60 = INT32_MAX;
	static int64_t t14 = 28384552156071LL;

	t14 = ((x57^(x58|x59))%x60);

	if (t14 != 4657LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int64_t x62 = INT64_MAX;
	volatile int32_t x63 = -361376718;
	volatile int8_t x64 = INT8_MAX;
	int64_t t15 = 64020259194LL;

	t15 = ((x61^(x62|x63))%x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x65 = 7045U;
	volatile int8_t x66 = INT8_MIN;
	volatile int32_t x67 = INT32_MAX;
	int16_t x68 = INT16_MAX;
	static uint32_t t16 = 443U;

	t16 = ((x65^(x66|x67))%x68);

	if (t16 != 25725U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	int8_t x70 = INT8_MIN;
	int16_t x71 = 1;
	int16_t x72 = -2;
	uint64_t t17 = 1326595016LLU;

	t17 = ((x69^(x70|x71))%x72);

	if (t17 != 126LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = -1;
	static volatile int64_t x74 = INT64_MAX;
	static int64_t t18 = -239843058321596366LL;

	t18 = ((x73^(x74|x75))%x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -25;
	int16_t x78 = -1;
	int32_t x80 = -1;
	volatile uint64_t t19 = 1107769927446903223LLU;

	t19 = ((x77^(x78|x79))%x80);

	if (t19 != 24LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = INT64_MIN;
	volatile int64_t x83 = -1LL;
	int16_t x84 = -78;
	static int64_t t20 = -8LL;

	t20 = ((x81^(x82|x83))%x84);

	if (t20 != 7LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = 393LL;
	static int8_t x86 = INT8_MAX;
	int32_t x87 = 292;
	volatile int64_t x88 = INT64_MIN;
	int64_t t21 = 93071305198214LL;

	t21 = ((x85^(x86|x87))%x88);

	if (t21 != 246LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MAX;
	uint32_t x90 = 31773U;
	uint16_t x91 = UINT16_MAX;
	uint32_t x92 = 585U;
	static volatile uint32_t t22 = 518921896U;

	t22 = ((x89^(x90|x91))%x92);

	if (t22 != 473U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x94 = 7518116LLU;
	volatile uint8_t x95 = UINT8_MAX;
	uint64_t t23 = 33478596617929154LLU;

	t23 = ((x93^(x94|x95))%x96);

	if (t23 != 18218LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 4659861033951LLU;
	int32_t x98 = INT32_MAX;
	uint8_t x99 = 16U;
	uint64_t t24 = 7194886425160LLU;

	t24 = ((x97^(x98|x99))%x100);

	if (t24 != 4658070514720LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = INT16_MIN;
	uint64_t x102 = 1907017654521762LLU;
	int32_t x103 = -1065878;
	volatile uint64_t x104 = UINT64_MAX;
	volatile uint64_t t25 = 10938532231221722LLU;

	t25 = ((x101^(x102|x103))%x104);

	if (t25 != 1081322LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = 62521LL;
	int64_t x108 = INT64_MIN;
	volatile int64_t t26 = 522424573LL;

	t26 = ((x105^(x106|x107))%x108);

	if (t26 != -62522LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 112167632093LLU;
	static volatile uint8_t x112 = 1U;
	uint64_t t27 = 2461894791762433673LLU;

	t27 = ((x109^(x110|x111))%x112);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 330765059U;
	int8_t x114 = -62;
	uint64_t t28 = 377228474389225LLU;

	t28 = ((x113^(x114|x115))%x116);

	if (t28 != 3964202224LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x118 = 87U;
	uint32_t x119 = 14U;
	volatile uint32_t t29 = 14962251U;

	t29 = ((x117^(x118|x119))%x120);

	if (t29 != 1764920U) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x122 = 305;
	int8_t x123 = INT8_MAX;
	volatile uint16_t x124 = UINT16_MAX;
	volatile int32_t t30 = 37023;

	t30 = ((x121^(x122|x123))%x124);

	if (t30 != 384) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	volatile int8_t x126 = INT8_MIN;
	uint8_t x128 = UINT8_MAX;
	volatile int32_t t31 = 2279204;

	t31 = ((x125^(x126|x127))%x128);

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 0U;
	static volatile uint32_t x130 = 572U;
	volatile int64_t x131 = 62600LL;
	int64_t x132 = 260802865106003411LL;
	int64_t t32 = 90364223799524LL;

	t32 = ((x129^(x130|x131))%x132);

	if (t32 != 63164LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	static int32_t x134 = INT32_MIN;
	uint8_t x136 = 21U;
	volatile int32_t t33 = 0;

	t33 = ((x133^(x134|x135))%x136);

	if (t33 != 16) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x139 = 54;
	static uint8_t x140 = UINT8_MAX;
	int32_t t34 = 55843;

	t34 = ((x137^(x138|x139))%x140);

	if (t34 != 168) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -1LL;
	static int16_t x143 = 1507;
	static int8_t x144 = INT8_MIN;
	int64_t t35 = 3421297839258735356LL;

	t35 = ((x141^(x142|x143))%x144);

	if (t35 != -104LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MAX;
	uint64_t x146 = UINT64_MAX;
	uint8_t x147 = UINT8_MAX;
	uint32_t x148 = 97U;
	volatile uint64_t t36 = 7338187068976LLU;

	t36 = ((x145^(x146|x147))%x148);

	if (t36 != 30LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MAX;
	volatile int32_t x150 = INT32_MIN;
	int64_t x151 = -8476282072LL;
	volatile uint16_t x152 = 100U;
	int64_t t37 = -80535LL;

	t37 = ((x149^(x150|x151))%x152);

	if (t37 != -81LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = 134;
	uint32_t x154 = UINT32_MAX;
	uint64_t x155 = UINT64_MAX;
	int16_t x156 = INT16_MIN;
	uint64_t t38 = 23649227517LLU;

	t38 = ((x153^(x154|x155))%x156);

	if (t38 != 32633LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x159 = 188U;
	int64_t t39 = -227760222402458457LL;

	t39 = ((x157^(x158|x159))%x160);

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	uint64_t x162 = 329938096LLU;
	static int64_t x163 = INT64_MIN;
	int16_t x164 = -1;
	static uint64_t t40 = 215LLU;

	t40 = ((x161^(x162|x163))%x164);

	if (t40 != 9223372035037230256LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = -1;
	static volatile uint16_t x166 = 91U;
	static volatile int16_t x167 = INT16_MIN;
	int16_t x168 = -42;
	int32_t t41 = -63;

	t41 = ((x165^(x166|x167))%x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	static int64_t x170 = -1LL;
	int8_t x171 = INT8_MIN;
	volatile uint32_t x172 = 64744340U;
	int64_t t42 = 49472600LL;

	t42 = ((x169^(x170|x171))%x172);

	if (t42 != 15513387LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = UINT64_MAX;
	static int8_t x174 = 0;
	uint64_t t43 = 160204321LLU;

	t43 = ((x173^(x174|x175))%x176);

	if (t43 != 6140345364781696LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = INT32_MAX;
	int32_t x179 = -1;
	int32_t x180 = INT32_MIN;
	int32_t t44 = 0;

	t44 = ((x177^(x178|x179))%x180);

	if (t44 != -256) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x184 = INT16_MAX;
	volatile uint32_t t45 = 26950112U;

	t45 = ((x181^(x182|x183))%x184);

	if (t45 != 32756U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	static int64_t x187 = 404923978659LL;
	int32_t x188 = INT32_MAX;
	volatile int64_t t46 = -15675020464538LL;

	t46 = ((x185^(x186|x187))%x188);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x189 = 18827U;
	int64_t x190 = -1LL;
	static int8_t x192 = INT8_MIN;
	int64_t t47 = 12150323LL;

	t47 = ((x189^(x190|x191))%x192);

	if (t47 != -12LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -1;
	int16_t x194 = INT16_MAX;
	volatile uint32_t x195 = 909U;
	volatile int64_t t48 = 876621104049LL;

	t48 = ((x193^(x194|x195))%x196);

	if (t48 != 272822LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = UINT8_MAX;
	static volatile int64_t x198 = INT64_MIN;
	static uint64_t x200 = 34004462LLU;
	volatile uint64_t t49 = 529565910175560040LLU;

	t49 = ((x197^(x198|x199))%x200);

	if (t49 != 23200575LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = -1;
	uint32_t x202 = 4146870U;
	int32_t x203 = -1;
	uint64_t x204 = UINT64_MAX;

	t50 = ((x201^(x202|x203))%x204);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x205 = UINT64_MAX;
	int8_t x206 = INT8_MIN;
	static uint32_t x207 = UINT32_MAX;
	int16_t x208 = INT16_MIN;

	t51 = ((x205^(x206|x207))%x208);

	if (t51 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = INT8_MIN;
	uint32_t x210 = 185500U;
	static volatile int64_t x211 = -1LL;
	uint64_t x212 = 182433LLU;
	volatile uint64_t t52 = 292556791657367670LLU;

	t52 = ((x209^(x210|x211))%x212);

	if (t52 != 127LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = 3;
	int8_t x214 = -1;
	int64_t x215 = INT64_MIN;
	int64_t t53 = -4395836386807LL;

	t53 = ((x213^(x214|x215))%x216);

	if (t53 != -4LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = 49;
	int64_t x219 = 6672327403LL;
	static int8_t x220 = -1;
	static volatile int64_t t54 = 18417440070LL;

	t54 = ((x217^(x218|x219))%x220);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = INT32_MAX;
	volatile int16_t x223 = INT16_MAX;
	int32_t x224 = -4;

	t55 = ((x221^(x222|x223))%x224);

	if (t55 != -3LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 306795781U;
	int16_t x226 = 400;
	int64_t x227 = 16LL;
	volatile uint64_t x228 = UINT64_MAX;
	volatile uint64_t t56 = 24572127412695905LLU;

	t56 = ((x225^(x226|x227))%x228);

	if (t56 != 306795669LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x229 = 2655527U;
	uint16_t x230 = 62U;
	static volatile int32_t x231 = -1;
	int16_t x232 = INT16_MIN;

	t57 = ((x229^(x230|x231))%x232);

	if (t57 != 4292311768U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	static int32_t x234 = INT32_MIN;
	int16_t x235 = -1;
	volatile int32_t t58 = 38248;

	t58 = ((x233^(x234|x235))%x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = 0;
	int64_t x238 = -1LL;
	int32_t x239 = INT32_MIN;
	static int32_t x240 = 67050319;
	volatile int64_t t59 = 20957LL;

	t59 = ((x237^(x238|x239))%x240);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	volatile uint8_t x242 = UINT8_MAX;
	uint32_t x243 = 5986U;
	int16_t x244 = INT16_MIN;

	t60 = ((x241^(x242|x243))%x244);

	if (t60 != -26625LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x245 = 1164890755995420LLU;
	uint16_t x246 = 135U;
	volatile int8_t x247 = INT8_MIN;
	uint64_t t61 = 27610LLU;

	t61 = ((x245^(x246|x247))%x248);

	if (t61 != 9222207146098780316LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	int16_t x250 = -7716;
	static volatile int32_t x251 = INT32_MIN;
	uint16_t x252 = 3U;
	int32_t t62 = 69;

	t62 = ((x249^(x250|x251))%x252);

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -20;
	volatile int32_t x254 = INT32_MIN;
	int16_t x255 = -1;
	volatile int8_t x256 = -9;

	t63 = ((x253^(x254|x255))%x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = INT16_MAX;
	int8_t x258 = 0;
	int16_t x259 = 5;
	int32_t t64 = 8085486;

	t64 = ((x257^(x258|x259))%x260);

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = 0;
	uint32_t x262 = 2046111U;
	uint32_t x263 = UINT32_MAX;
	uint32_t x264 = 1894344589U;
	volatile uint32_t t65 = 1U;

	t65 = ((x261^(x262|x263))%x264);

	if (t65 != 506278117U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = INT32_MAX;
	int8_t x266 = -51;
	static uint8_t x267 = UINT8_MAX;
	uint8_t x268 = UINT8_MAX;
	int32_t t66 = -1;

	t66 = ((x265^(x266|x267))%x268);

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	static int64_t x272 = INT64_MIN;
	uint64_t t67 = 23LLU;

	t67 = ((x269^(x270|x271))%x272);

	if (t67 != 2084199436939381185LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x274 = 547761833U;
	uint8_t x275 = UINT8_MAX;
	int16_t x276 = 15;
	uint32_t t68 = 1779U;

	t68 = ((x273^(x274|x275))%x276);

	if (t68 != 6U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	int32_t x278 = -35470;
	int32_t x279 = -15;
	static int8_t x280 = -3;
	int32_t t69 = -1011;

	t69 = ((x277^(x278|x279))%x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x282 = 1U;
	int8_t x283 = INT8_MIN;
	int16_t x284 = INT16_MAX;

	t70 = ((x281^(x282|x283))%x284);

	if (t70 != 32642) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = INT8_MIN;
	int8_t x286 = INT8_MIN;
	static int32_t x287 = -1;
	int32_t x288 = INT32_MAX;
	static volatile int32_t t71 = 15495;

	t71 = ((x285^(x286|x287))%x288);

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = UINT16_MAX;
	uint64_t x291 = UINT64_MAX;
	int32_t x292 = -1;
	static volatile uint64_t t72 = 93580544958794LLU;

	t72 = ((x289^(x290|x291))%x292);

	if (t72 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 3996871521813220274LLU;
	volatile int32_t x295 = -1;
	int32_t x296 = -1;

	t73 = ((x293^(x294|x295))%x296);

	if (t73 != 14449872551896331341LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x297 = INT8_MIN;
	static uint32_t x298 = 1516882U;
	int8_t x299 = -1;
	uint8_t x300 = 9U;
	uint32_t t74 = 1U;

	t74 = ((x297^(x298|x299))%x300);

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x301 = INT32_MIN;
	uint16_t x302 = UINT16_MAX;
	uint8_t x303 = 2U;
	uint16_t x304 = UINT16_MAX;
	static volatile int32_t t75 = 4608906;

	t75 = ((x301^(x302|x303))%x304);

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x305 = UINT64_MAX;
	uint32_t x306 = 2U;
	int16_t x307 = INT16_MAX;
	int64_t x308 = INT64_MAX;
	volatile uint64_t t76 = 891588LLU;

	t76 = ((x305^(x306|x307))%x308);

	if (t76 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = INT16_MIN;
	int8_t x310 = INT8_MIN;
	int32_t x312 = -1033082;
	volatile int32_t t77 = 1845;

	t77 = ((x309^(x310|x311))%x312);

	if (t77 != 32671) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = INT32_MIN;
	uint64_t x314 = 63271LLU;
	int64_t x315 = INT64_MAX;
	int32_t x316 = 62085;
	static uint64_t t78 = 60210LLU;

	t78 = ((x313^(x314|x315))%x316);

	if (t78 != 5220LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = 5;
	uint8_t x318 = 6U;
	static uint16_t x319 = 1020U;
	int8_t x320 = INT8_MIN;
	volatile int32_t t79 = 53;

	t79 = ((x317^(x318|x319))%x320);

	if (t79 != 123) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x321 = 1833143732845827658LL;
	int16_t x324 = -659;
	volatile int64_t t80 = 7447484614LL;

	t80 = ((x321^(x322|x323))%x324);

	if (t80 != 157LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x327 = 3U;
	static volatile int64_t x328 = INT64_MAX;
	volatile uint64_t t81 = 46588LLU;

	t81 = ((x325^(x326|x327))%x328);

	if (t81 != 37535751904696770LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x331 = 6;
	int32_t x332 = INT32_MAX;
	static uint32_t t82 = 0U;

	t82 = ((x329^(x330|x331))%x332);

	if (t82 != 2525U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	static uint64_t x334 = 2397910907582963252LLU;
	static int16_t x336 = INT16_MIN;

	t83 = ((x333^(x334|x335))%x336);

	if (t83 != 6825461129271812532LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x341 = -114988071809937819LL;

	t84 = ((x341^(x342|x343))%x344);

	if (t84 != -9108383965044837990LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x346 = -18;
	static int16_t x347 = INT16_MIN;
	uint8_t x348 = 3U;

	t85 = ((x345^(x346|x347))%x348);

	if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x353 = 6670449294LL;
	int32_t x354 = -101;
	uint64_t x355 = 94557846638166342LLU;
	int64_t x356 = INT64_MIN;
	uint64_t t86 = 1303225058LLU;

	t86 = ((x353^(x354|x355))%x356);

	if (t86 != 9223372030184326481LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x358 = 23609198LLU;
	uint64_t x359 = UINT64_MAX;
	int16_t x360 = INT16_MIN;
	volatile uint64_t t87 = 3806LLU;

	t87 = ((x357^(x358|x359))%x360);

	if (t87 != 28549LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x362 = 54590LLU;
	uint64_t x363 = UINT64_MAX;
	uint32_t x364 = 468162U;
	volatile uint64_t t88 = 334011548633503LLU;

	t88 = ((x361^(x362|x363))%x364);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x365 = -1;
	static int64_t x368 = -63LL;

	t89 = ((x365^(x366|x367))%x368);

	if (t89 != 34LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x369 = UINT64_MAX;
	uint64_t x370 = UINT64_MAX;
	int64_t x371 = -1LL;
	uint64_t t90 = 915010226700LLU;

	t90 = ((x369^(x370|x371))%x372);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x373 = -1LL;
	volatile int64_t x374 = -1LL;
	int32_t x375 = -1;
	int64_t x376 = -24114863LL;
	int64_t t91 = -12851649198763565LL;

	t91 = ((x373^(x374|x375))%x376);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x377 = -1;
	static uint32_t x378 = 56U;
	int64_t x379 = -124614LL;
	static int64_t x380 = -1LL;
	int64_t t92 = -7913756692565496LL;

	t92 = ((x377^(x378|x379))%x380);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x381 = INT16_MAX;
	int32_t x382 = -1;
	volatile int64_t x383 = -1LL;
	uint64_t t93 = 210446LLU;

	t93 = ((x381^(x382|x383))%x384);

	if (t93 != 2848LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x385 = INT64_MAX;
	volatile int32_t x386 = 58185;
	uint8_t x387 = 53U;
	uint8_t x388 = 2U;
	int64_t t94 = 9407LL;

	t94 = ((x385^(x386|x387))%x388);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x389 = INT64_MAX;
	static int8_t x390 = INT8_MIN;
	int32_t x391 = -1;
	int64_t t95 = 247061521147594732LL;

	t95 = ((x389^(x390|x391))%x392);

	if (t95 != -44346968LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x395 = 127U;
	volatile int64_t x396 = -1LL;
	static volatile int64_t t96 = 1677962275017605LL;

	t96 = ((x393^(x394|x395))%x396);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x397 = INT64_MIN;
	int64_t x398 = INT64_MIN;
	static uint64_t x399 = 3637679LLU;
	volatile uint8_t x400 = 2U;
	uint64_t t97 = 14356645327697LLU;

	t97 = ((x397^(x398|x399))%x400);

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x401 = 66282343;
	uint32_t x403 = UINT32_MAX;
	volatile int16_t x404 = INT16_MAX;
	static volatile uint32_t t98 = 112389U;

	t98 = ((x401^(x402|x403))%x404);

	if (t98 != 5301U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x405 = 3317646LLU;
	static volatile int64_t x407 = INT64_MAX;
	static int16_t x408 = -1;
	volatile uint64_t t99 = 294728071292LLU;

	t99 = ((x405^(x406|x407))%x408);

	if (t99 != 18446744073706233969LLU) { NG(); } else { ; }
	
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

